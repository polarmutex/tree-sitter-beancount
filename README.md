# tree-sitter-beancount

[![CI](https://github.com/polarmutex/tree-sitter-beancount/actions/workflows/ci.yml/badge.svg)](https://github.com/polarmutex/tree-sitter-beancount/actions/workflows/ci.yml)
[![npm](https://img.shields.io/npm/v/tree-sitter-beancount)](https://www.npmjs.com/package/tree-sitter-beancount)
[![crates.io](https://img.shields.io/crates/v/tree-sitter-beancount)](https://crates.io/crates/tree-sitter-beancount)
[![Discord](https://img.shields.io/discord/1063097320771698699?logo=discord)](https://discord.gg/w7nTvsVJhm)

A [Tree-sitter](https://github.com/tree-sitter/tree-sitter) parser for the [Beancount](https://github.com/beancount/beancount) double-entry accounting language.

## Table of Contents

- [Features](#features)
- [Installation](#installation)
  - [Node.js](#nodejs)
  - [Rust](#rust)
  - [Python](#python)
- [Usage](#usage)
  - [Node.js](#nodejs-usage)
  - [Rust](#rust-usage)
  - [Python](#python-usage)
- [Editor Integration](#editor-integration)
  - [Neovim](#neovim)
  - [Emacs](#emacs)
  - [VS Code](#vs-code)
- [Supported Syntax](#supported-syntax)
- [Examples](#examples)
- [Development](#development)
  - [Setup](#setup)
  - [Building](#building)
  - [Testing](#testing)
- [Performance](#performance)
- [Contributing](#contributing)
- [License](#license)
- [References](#references)

## Features

- ✅ **Complete Beancount syntax support** - Parse all Beancount directives and constructs
- ✅ **Unicode support** - Full support for international characters including Chinese characters in account names
- ✅ **Org-mode & Markdown integration** - Parse Beancount embedded in Org-mode and Markdown documents
- ✅ **Syntax highlighting** - Comprehensive highlighting queries for beautiful code presentation
- ✅ **Automatic indentation** - Smart indentation queries for editor integration
- ✅ **High performance** - Optimized grammar with excellent parse speeds (8000+ bytes/ms average)
- ✅ **Multiple language bindings** - Node.js, Rust, and Python support
- ✅ **Editor integration ready** - Works with Neovim, Emacs, VS Code, and other editors
- ✅ **Comprehensive testing** - 177+ test cases covering all syntax features

## Installation

### Node.js

```bash
npm install tree-sitter tree-sitter-beancount
```

### Rust

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter = "~0.24.7"
tree-sitter-beancount = "2.3.3"
```

### Python

```bash
pip install tree-sitter tree-sitter-beancount
```

## Usage

### Node.js Usage

```javascript
const Parser = require('tree-sitter');
const Beancount = require('tree-sitter-beancount');

const parser = new Parser();
parser.setLanguage(Beancount);

const sourceCode = `
2023-01-01 * "Opening Balance"
  Assets:Checking:Bank1    1000.00 USD
  Equity:Opening-Balances

2023-01-02 * "Coffee" #food
  Expenses:Food:Coffee       4.50 USD
  Assets:Checking:Bank1     -4.50 USD
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Rust Usage

```rust
use tree_sitter::{Parser, Language};

extern "C" { fn tree_sitter_beancount() -> Language; }

fn main() {
    let mut parser = Parser::new();
    let language = unsafe { tree_sitter_beancount() };
    parser.set_language(language).expect("Error loading Beancount grammar");
    
    let source_code = r#"
2023-01-01 open Assets:Checking:Bank1 USD
2023-01-01 * "Salary"
  Income:Salary             -5000.00 USD
  Assets:Checking:Bank1      5000.00 USD
"#;
    
    let tree = parser.parse(source_code, None).unwrap();
    println!("{}", tree.root_node().to_sexp());
}
```

### Python Usage

```python
import tree_sitter_beancount as tsbeancount
from tree_sitter import Language, Parser

BEANCOUNT_LANGUAGE = Language(tsbeancount.language(), "beancount")
parser = Parser()
parser.set_language(BEANCOUNT_LANGUAGE)

source_code = b'''
2023-01-01 open Assets:Checking:Bank1 USD
2023-01-01 balance Assets:Checking:Bank1  0.00 USD

2023-01-15 * "Paycheck"
  Income:Salary             -3000.00 USD
  Assets:Checking:Bank1      3000.00 USD
'''

tree = parser.parse(source_code)
print(tree.root_node.sexp())
```

## Editor Integration

This parser includes comprehensive syntax highlighting and indentation queries for an enhanced editing experience:

- **Syntax highlighting**: Dates, accounts, currencies, numbers, strings, tags, and comments are all highlighted with appropriate colors
- **Automatic indentation**: When you type a transaction header like `2022-02-01 * "Buy CSL"`, the next line will be automatically indented for posting entries

### Neovim

With [nvim-treesitter](https://github.com/nvim-treesitter/nvim-treesitter):

```lua
require'nvim-treesitter.configs'.setup {
  ensure_installed = { "beancount" },
  highlight = { enable = true },
  incremental_selection = { enable = true },
  indent = { enable = true },
}
```

### Emacs

With [tree-sitter-langs](https://github.com/emacs-tree-sitter/tree-sitter-langs):

```elisp
(use-package tree-sitter-langs
  :config
  (tree-sitter-require 'beancount))
```

### VS Code

Install the [Beancount extension](https://marketplace.visualstudio.com/items?itemName=Lencerf.beancount) which uses this parser for syntax highlighting.

## Supported Syntax

This parser supports the complete Beancount syntax including:

### Core Directives
- ✅ **Transactions** - `2023-01-01 * "Description"`
- ✅ **Account declarations** - `open`, `close`
- ✅ **Balance assertions** - `balance`
- ✅ **Price declarations** - `price`
- ✅ **Events** - `event`
- ✅ **Notes** - `note`
- ✅ **Documents** - `document`
- ✅ **Custom directives** - `custom`

### Advanced Features
- ✅ **Postings with costs** - `{100.00 USD}`, `{{100.00 USD}}`
- ✅ **Price annotations** - `@ 1.25 EUR`, `@@ 125.00 EUR`
- ✅ **Arithmetic expressions** - `100 + 50 * 2`
- ✅ **Tags and links** - `#tag`, `^link`
- ✅ **Metadata** - `key: value` pairs
- ✅ **Comments** - `;comment`
- ✅ **Options and plugins** - `option`, `plugin`
- ✅ **Include statements** - `include`

### International Support
- ✅ **Unicode account names** - `Assets:银行:储蓄账户`
- ✅ **International currencies** - Support for all currency codes
- ✅ **Unicode in strings and comments**

### Document Formats
- ✅ **Org-mode sections** - `* Heading`, `** Subheading`
- ✅ **Markdown headers** - `# Title`, `## Subtitle`
- ✅ **Mixed content** - Beancount within documentation

## Examples

### Basic Transaction
```beancount
2023-01-15 * "Coffee Shop" "Morning coffee"
  Expenses:Food:Coffee       4.50 USD
  Assets:Checking:Bank1     -4.50 USD
```

### International Example with Chinese Characters
```beancount
2023-01-01 open Assets:银行:工商银行 CNY

2023-01-15 * "工资" #salary
  Income:工资收入           -8000.00 CNY
  Assets:银行:工商银行        8000.00 CNY
```

### Complex Transaction with Costs and Prices
```beancount
2023-01-20 * "Stock Purchase"
  Assets:Investments:AAPL    10 AAPL {150.00 USD} @ 151.00 USD
  Assets:Checking:Bank1     -1510.00 USD
```

### Org-mode Integration
```org
* Personal Finance

** Income

2023-01-01 * "Salary"
  Income:Salary             -5000.00 USD
  Assets:Checking            5000.00 USD

** Expenses

2023-01-02 * "Groceries"
  Expenses:Food:Groceries      50.00 USD
  Assets:Checking             -50.00 USD
```

## Development

### Setup

1. Clone the repository:
```bash
git clone https://github.com/polarmutex/tree-sitter-beancount.git
cd tree-sitter-beancount
```

2. Install dependencies:
```bash
npm install
```

3. Install Tree-sitter CLI:
```bash
npm install -g tree-sitter-cli
```

### Building

Generate the parser:
```bash
tree-sitter generate
```

### Testing

Run the test suite:
```bash
tree-sitter test
```

Run specific tests:
```bash
tree-sitter test --file-name chinese_characters.txt
```

Debug parsing:
```bash
tree-sitter parse examples/sample.beancount
```

## Performance

This parser is optimized for high performance:

- **Average speed**: 8,755 bytes/ms
- **Test coverage**: 122 test cases, 100% pass rate
- **Parse tree efficiency**: Optimized grammar rules minimize backtracking
- **Memory usage**: Efficient for large files (1000+ transactions)

Performance has been significantly improved through:
- Removal of unnecessary UTF-8 encoding rules
- Optimized regex patterns
- Simplified posting rules
- Strategic tokenization

## Contributing

Contributions are welcome! Please:

1. Fork the repository
2. Create a feature branch: `git checkout -b feature-name`
3. Add tests for any new functionality
4. Ensure all tests pass: `tree-sitter test`
5. Submit a pull request

### Reporting Issues

Please report bugs and feature requests on [GitHub Issues](https://github.com/polarmutex/tree-sitter-beancount/issues).

### Development Guidelines

- Follow the existing code style
- Add test cases for new syntax support
- Update documentation for new features
- Ensure grammar changes don't break existing functionality

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## References

- [Beancount Documentation](https://beancount.github.io/docs/)
- [Beancount Language Syntax](https://beancount.github.io/docs/beancount_language_syntax.html)
- [Tree-sitter Documentation](https://tree-sitter.github.io/)
- [Tree-sitter Grammar Development](https://tree-sitter.github.io/tree-sitter/creating-parsers)