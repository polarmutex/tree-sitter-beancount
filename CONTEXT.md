# Beancount Grammar — Domain Context

## Key Concepts

**account** — A colon-separated name like `Assets:Checking:Bank`. Accounts are the primary financial entities in Beancount. In highlight queries, `account` nodes map to `@variable` (not `@type` or `@namespace`) because accounts hold values and change over time, consistent with nvim-treesitter community conventions.

**currency** — An uppercase identifier like `USD`, `BTC`, `VTSAX`. Acts as a type annotation on an amount. In highlight queries, `currency` nodes map to `@type` because they annotate the unit of a value, similar to how types annotate values in programming languages.

**entry** — A dated directive that records a financial fact: `transaction`, `balance`, `open`, `close`, `pad`, `note`, `document`, `price`, `event`, `query`, `custom`. Entries are the core of a beancount file.

**directive** — A non-dated control statement: `pushtag`, `poptag`, `pushmeta`, `popmeta`, `option`, `include`, `plugin`. Directives configure parser/processing behaviour rather than recording financial facts.

**posting** — A single account line within a transaction, with optional amount, cost spec, and price annotation.

**txn** — The transaction flag on the header line. Can be `*` (cleared), `!` (pending), `txn`, `#`, or any single-character flag. Rendered as `@keyword`.

**tag** / **link** — Metadata attached to transactions or documents. Tags start with `#`, links with `^`. Both map to `@label` in highlights.

**section** — An org-mode or markdown-style heading (`* Title` or `** Title`) that groups entries. The external scanner handles section nesting via `$._stars` and `$._sectionend`.

## Non-Obvious Grammar Decisions

### `_eol` double-definition (do not "fix")

`grammar.js` defines `_eol` twice:
- Line ~43: `choice('\n', '\r', $._eof)` — dead code, shadowed by the second definition
- Line ~73: `token(/\n/)` — the effective definition, just a newline

This looks like a bug but **must not be changed**. The `$._eof` token is produced by the external scanner with an `eof_returned` guard. Restoring it into `_eol` makes every `_eol` site a potential external scanner call site, which has historically introduced LR conflicts. Files without trailing newlines parse correctly via tree-sitter's error recovery. All 192 corpus tests pass as-is.

### External scanner tokens

The scanner (`src/scanner.c`) produces three tokens:
- `$._stars` — matches the leading `*` characters of an org-mode headline
- `$._sectionend` — emitted when a section ends (detected by star count decreasing)
- `$._eof` — emitted once at end of file; the `eof_returned` flag prevents it firing more than once

### `cost_spec` braces

Single braces `{}` mean per-unit cost; double braces `{{}}` mean total cost. Both are represented by the same `cost_spec` node — the brace variant is anonymous in the CST.

## Query Files

| File | Purpose |
|------|---------|
| `highlights.scm` | Syntax highlighting for all editors |
| `folds.scm` | Fold entries and org-mode sections |
| `indents.scm` | Auto-indent after entry headers (Neovim, Zed) |
| `locals.scm` | Scope definitions — intentionally empty (no lexical scoping in Beancount) |
| `tags.scm` | Symbol definitions: `open` → account definition, `commodity` → currency definition |
| `textobjects.scm` | Text objects: transactions as `@function.outer`, postings as `@statement.outer` |

## Deferred Work

- **Issue #151**: `injections.scm` for BQL query string highlighting as SQL. Deferred because BQL is not standard SQL and requires users to have `tree-sitter-sql` installed.
