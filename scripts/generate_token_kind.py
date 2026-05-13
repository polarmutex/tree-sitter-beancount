#!/usr/bin/env python3
"""Generate Rust LeafNodeKind/NonTerminalNodeKind/NodeKind enums and typed node
wrappers from node-types.json.

Usage:
    python scripts/generate_token_kind.py

workaround of https://github.com/tree-sitter/tree-sitter/issues/3276
"""

import json
import re
from pathlib import Path
from typing import Any, Dict, List, Optional, Set

ROOT = Path(__file__, "../..").resolve()
NODE_TYPES_PATH = ROOT / "src" / "node-types.json"
OUT_PATH = ROOT / "bindings" / "rust" / "node_kind.rs"
NODE_TYPES_OUT_PATH = ROOT / "bindings" / "rust" / "node_types.rs"

RUST_KEYWORDS = {
    "as", "async", "await", "break", "const", "continue", "crate", "dyn",
    "else", "enum", "extern", "false", "fn", "for", "if", "impl", "in",
    "let", "loop", "match", "mod", "move", "mut", "pub", "ref", "return",
    "self", "Self", "static", "struct", "super", "trait", "true", "type",
    "union", "unsafe", "use", "where", "while",
}


def to_pascal(name: str) -> str:
    parts = [p for p in re.split(r"[^A-Za-z0-9]+", name) if p]
    if not parts:
        return "Unknown"
    ident = "".join(p[:1].upper() + p[1:] for p in parts)
    if ident[0].isdigit():
        ident = f"N{ident}"
    return ident


def is_terminal(node: Dict[str, Any]) -> bool:
    """Heuristically select terminal/named token kinds."""
    if not node.get("named", False):
        return False
    if node.get("subtypes"):
        return False
    if node.get("children"):
        return False
    fields = node.get("fields")
    if fields:
        # If there are any declared fields, treat it as non-terminal
        return False
    return True


def safe_ident(name: str) -> str:
    if name in RUST_KEYWORDS:
        return name + "_"
    return name


def node_struct_name(node_type: str) -> str:
    return to_pascal(node_type.lstrip("_")) + "Node"


def pluralize(snake: str) -> str:
    snake = snake.lstrip("_")
    if snake.endswith("y") and len(snake) > 1 and snake[-2] not in "aeiou_":
        return snake[:-1] + "ies"
    if snake.endswith("s"):
        return snake + "_list"
    return snake + "s"


impl = """
impl<'a> PartialEq<NodeKind> for &tree_sitter::Node<'a> {
    fn eq(&self, other: &NodeKind) -> bool {
        return &NodeKind::from(self.kind()) == other;
    }
}

impl<'a> PartialEq<LeafNodeKind> for &tree_sitter::Node<'a> {
    fn eq(&self, other: &LeafNodeKind) -> bool {
        return &LeafNodeKind::from(self.kind()) == other;
    }
}

impl<'a> PartialEq<NonTerminalNodeKind> for &tree_sitter::Node<'a> {
    fn eq(&self, other: &NonTerminalNodeKind) -> bool {
        return &NonTerminalNodeKind::from(self.kind()) == other;
    }
}

impl<'a> PartialEq<NodeKind> for tree_sitter::Node<'a> {
    fn eq(&self, other: &NodeKind) -> bool {
        return &NodeKind::from(self.kind()) == other;
    }
}
"""


def generate_enum(enum_name: str, names: list[str]) -> list[str]:
    variants = [to_pascal(name) for name in names]

    lines = [
        "#[derive(Debug, Clone, Copy, PartialEq, Eq, Hash)]",
        f"pub enum {enum_name} {{",
    ]
    lines += [f"    {v}," for v in variants]
    lines.append("    Unknown,")
    lines.append("}")
    lines.append("")
    lines.append(f"impl From<&str> for {enum_name} {{")
    lines.append("    fn from(name: &str) -> Self {")
    lines.append("        match name {")
    lines += [
        f'            "{name}" => {enum_name}::{variant},'
        for name, variant in zip(names, variants)
    ]
    lines.append(f"            _ => {enum_name}::Unknown,")
    lines.append("        }")
    lines.append("    }")
    lines.append("}")
    lines.append("")
    lines.append(f"impl {enum_name} {{")
    lines.append("    pub fn name(&self) -> &'static str {")
    lines.append("        match self {")
    lines += [
        f'            {enum_name}::{variant} => "{name}",'
        for name, variant in zip(names, variants)
    ]
    lines.append(f'            {enum_name}::Unknown => "<unknown>",')
    lines.append("        }")
    lines.append("    }")
    lines.append("}")
    lines.append("")

    return lines


# ── Typed node generators ─────────────────────────────────────────────────────

def gen_leaf(node_type: str) -> List[str]:
    sname = node_struct_name(node_type)
    return [
        "#[derive(Clone, Copy, Debug)]",
        f"pub struct {sname}<'tree>(tree_sitter::Node<'tree>);",
        "",
        f"impl<'tree> {sname}<'tree> {{",
        "    pub fn cast(node: tree_sitter::Node<'tree>) -> Option<Self> {",
        f'        if node.kind() == "{node_type}" {{ Some(Self(node)) }} else {{ None }}',
        "    }",
        "    pub fn node(&self) -> tree_sitter::Node<'tree> { self.0 }",
        "    pub fn text<'src>(&self, src: &'src [u8]) -> &'src str {",
        '        self.0.utf8_text(src).unwrap_or("")',
        "    }",
        "}",
        "",
    ]


def gen_supertype(node_type: str, subtypes: List[Dict[str, Any]]) -> List[str]:
    sname = node_struct_name(node_type)
    named = [s for s in subtypes if s.get("named", False)]

    lines: List[str] = [
        "#[derive(Clone, Copy, Debug)]",
        f"pub enum {sname}<'tree> {{",
    ]
    for sub in named:
        variant = to_pascal(sub["type"].lstrip("_"))
        sub_sname = node_struct_name(sub["type"])
        lines.append(f"    {variant}({sub_sname}<'tree>),")
    lines.append("}")
    lines.append("")
    lines += [
        f"impl<'tree> {sname}<'tree> {{",
        "    pub fn cast(node: tree_sitter::Node<'tree>) -> Option<Self> {",
        "        match node.kind() {",
    ]
    for sub in named:
        variant = to_pascal(sub["type"].lstrip("_"))
        sub_sname = node_struct_name(sub["type"])
        lines.append(
            f'            "{sub["type"]}" => Some({sname}::{variant}({sub_sname}(node))),'
        )
    lines += [
        "            _ => None,",
        "        }",
        "    }",
        "    pub fn node(&self) -> tree_sitter::Node<'tree> {",
        "        match self {",
    ]
    for sub in named:
        variant = to_pascal(sub["type"].lstrip("_"))
        lines.append(f"            {sname}::{variant}(n) => n.0,")
    lines += [
        "        }",
        "    }",
        "}",
        "",
    ]
    return lines


def gen_nonterminal(
    node_type: str,
    fields: Dict[str, Any],
    children: Optional[Dict[str, Any]],
) -> List[str]:
    sname = node_struct_name(node_type)

    lines: List[str] = [
        "#[derive(Clone, Copy, Debug)]",
        f"pub struct {sname}<'tree>(tree_sitter::Node<'tree>);",
        "",
        f"impl<'tree> {sname}<'tree> {{",
        "    pub fn cast(node: tree_sitter::Node<'tree>) -> Option<Self> {",
        f'        if node.kind() == "{node_type}" {{ Some(Self(node)) }} else {{ None }}',
        "    }",
        "    pub fn node(&self) -> tree_sitter::Node<'tree> { self.0 }",
    ]

    field_covered_types: Set[str] = set()

    for field_name in sorted(fields):
        info = fields[field_name]
        method = safe_ident(field_name)
        named_types = [t for t in info["types"] if t.get("named", False)]
        if not named_types:
            continue
        # Skip fields with more than one named type (ambiguous union — rare)
        if len(named_types) > 1:
            continue

        ct = named_types[0]["type"]
        field_covered_types.add(ct)
        csname = node_struct_name(ct)

        if info["multiple"]:
            lines += [
                f"    pub fn {method}(&self) -> Vec<{csname}<'tree>> {{",
                "        let mut cursor = self.0.walk();",
                f'        self.0.children_by_field_name("{field_name}", &mut cursor)',
                f"            .filter_map({csname}::cast)",
                "            .collect()",
                "    }",
            ]
        else:
            lines += [
                f"    pub fn {method}(&self) -> Option<{csname}<'tree>> {{",
                f'        self.0.child_by_field_name("{field_name}").and_then({csname}::cast)',
                "    }",
            ]

    # Unlabeled children: one accessor per distinct named type not already in fields
    if children:
        seen: Set[str] = set()
        for ct_info in children["types"]:
            ct = ct_info["type"]
            if not ct_info.get("named", False):
                continue
            if ct in field_covered_types or ct in seen:
                continue
            seen.add(ct)
            csname = node_struct_name(ct)
            method = pluralize(ct)
            lines += [
                f"    pub fn {method}(&self) -> Vec<{csname}<'tree>> {{",
                "        let mut cursor = self.0.walk();",
                "        self.0.named_children(&mut cursor)",
                f"            .filter_map({csname}::cast)",
                "            .collect()",
                "    }",
            ]

    lines += ["}", ""]
    return lines


def generate_node_types(data: List[Dict[str, Any]]) -> None:
    named_nodes = [n for n in data if n.get("named", False)]

    lines: List[str] = [
        "// @generated by scripts/generate_token_kind.py; do not edit.",
        "// To regenerate, run: python scripts/generate_token_kind.py",
        "",
        "#![allow(unused)]",
        "",
    ]

    for node in named_nodes:
        node_type = node["type"]
        if node.get("subtypes"):
            lines += gen_supertype(node_type, node["subtypes"])
        elif is_terminal(node):
            lines += gen_leaf(node_type)
        else:
            fields = node.get("fields", {})
            children = node.get("children")
            lines += gen_nonterminal(node_type, fields, children)

    NODE_TYPES_OUT_PATH.write_bytes(("\n".join(lines).strip() + "\n").encode())


def main() -> None:
    data = json.loads(NODE_TYPES_PATH.read_text(encoding="utf-8"))
    token_names = sorted({n["type"] for n in data if is_terminal(n)})
    non_terminal_names = sorted(
        {
            n["type"]
            for n in data
            if n.get("named", False) and n["type"] not in token_names
        }
    )
    all_names = sorted(set(token_names) | set(non_terminal_names))

    lines = [
        "// @generated by scripts/generate_token_kind.py; do not edit.",
        "// To regenerate, run: python scripts/generate_token_kind.py",
        impl,
    ]
    lines += generate_enum("LeafNodeKind", token_names)
    lines += generate_enum("NonTerminalNodeKind", non_terminal_names)
    lines += generate_enum("NodeKind", all_names)

    OUT_PATH.write_bytes(("\n".join(lines).strip() + "\n").encode())

    generate_node_types(data)


if __name__ == "__main__":
    main()
