# tree-sitter-beancount

A [Tree-sitter](https://tree-sitter.github.io/) parser for the [Beancount](https://beancount.github.io/) accounting language syntax.

## Project Overview

This repository contains a Tree-sitter grammar implementation for parsing Beancount files. Beancount is a double-entry bookkeeping system that uses a text-based format for accounting data. This parser enables syntax highlighting, code navigation, and other language features in editors that support Tree-sitter.

## Repository Structure

```
├── grammar.js              # Tree-sitter grammar definition
├── src/                   # Generated parser source code
│   ├── parser.c          # Main parser implementation
│   ├── scanner.c         # External scanner for complex tokens
│   └── tree_sitter/      # Tree-sitter headers
├── bindings/             # Language bindings
│   ├── c/               # C bindings
│   ├── go/              # Go bindings  
│   ├── node/            # Node.js bindings
│   ├── python/          # Python bindings
│   ├── rust/            # Rust bindings
│   └── swift/           # Swift bindings
├── test/corpus/         # Test cases for the parser
└── queries/             # Tree-sitter queries (if present)
```

## Development Commands

### Building the Parser
```bash
npm run build          # Generate parser from grammar.js
```

### Testing
```bash
npm run test           # Run Tree-sitter test suite
```

### Installation (Node.js)
```bash
npm install            # Install dependencies and build native bindings
```

## Beancount Language Features Supported

The parser supports the core Beancount syntax including:

- **Transactions**: Multi-line double-entry transactions with postings
- **Directives**: open, close, balance, pad, note, document, etc.
- **Entries**: All Beancount entry types with proper date parsing
- **Accounts**: Hierarchical account names with validation
- **Amounts**: Numbers with currency codes and lot specifications
- **Metadata**: Key-value metadata attachments
- **Comments**: Single-line and inline comments
- **Arithmetic**: Mathematical expressions in postings
- **Org-mode sections**: Support for organizing entries in sections
- **Plugins**: Plugin directive parsing
- **Options**: Parser option directives
- **Include**: File inclusion directives

## Test Coverage

The parser includes comprehensive test cases in `test/corpus/`:

- `transaction.txt` - Transaction parsing with various formats
- `entry_types.txt` - All Beancount directive types
- `currencies.txt` - Currency and amount parsing
- `metadata.txt` - Metadata attachment parsing
- `arithmetic.txt` - Mathematical expression parsing
- `comment.txt` - Comment handling
- `multi_line.txt` - Multi-line entry parsing
- `orgmode_sections.txt` - Org-mode style section headers
- And more specialized test cases

## Language Bindings

This parser provides bindings for multiple programming languages:

- **Rust**: Available as a crate on crates.io
- **Node.js**: Available as an npm package
- **Python**: Python package with tree-sitter integration
- **Go**: Go module for integration
- **C**: Direct C API access
- **Swift**: Swift package for iOS/macOS integration

## Configuration

The parser is configured via:

- `package.json` - Node.js package configuration and Tree-sitter scope
- `Cargo.toml` - Rust crate configuration  
- `grammar.js` - Core grammar rules and external scanner definition

## External Scanner

The parser uses an external scanner (`src/scanner.c`) to handle complex tokenization for:
- Org-mode section markers (`$._stars`)
- Section end detection (`$._sectionend`)  
- End-of-file handling (`$._eof`)

## Version Information

- Current version: 2.3.3
- Compatible with Tree-sitter 0.21.0+
- Supports Beancount language specification

## Related Resources

- [Beancount Language Syntax Documentation](https://beancount.github.io/docs/beancount_language_syntax.html)
- [Tree-sitter Documentation](https://tree-sitter.github.io/)
- [Grammar Source Code](grammar.js)