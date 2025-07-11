# Tree-sitter Queries for Beancount

This directory contains tree-sitter queries that help editors provide better editing support for Beancount files.

## Indentation (indents.scm)

The indentation query provides rules for automatic indentation in Beancount files. It defines:

- **Indent patterns**: Elements that should cause the following lines to be indented
- **Dedent patterns**: Elements that should cause the current line to be dedented to the base level

### How it works

When you type a transaction header like:
```beancount
2022-02-01 * "Buy CSL"
```

The indentation query tells your editor that the next line should be automatically indented for posting entries:
```beancount
2022-02-01 * "Buy CSL"
    Assets:Investments:CSL  10 CSL @@ 1000 USD  ; <- automatically indented
    Assets:Checking      -1000 USD             ; <- automatically indented
```

### Supported constructs

The indentation query supports automatic indentation for:

- **Transactions**: After transaction headers, indent posting lines
- **Open statements**: After open directives with metadata, indent metadata lines  
- **Close statements**: After close directives with metadata, indent metadata lines
- **Balance statements**: After balance directives with metadata, indent metadata lines
- **Other entries**: pad, note, event, price, query, document, custom, commodity entries
- **Sections**: Org-mode/Markdown style headers indent their content

### Editor integration

To use these queries in your editor:

#### Neovim with nvim-treesitter
The queries should be automatically picked up when using the tree-sitter-beancount parser with nvim-treesitter.

#### Other editors
Refer to your editor's tree-sitter documentation for how to use indentation queries.

## Syntax Highlighting (highlights.scm)

The highlighting query provides comprehensive syntax highlighting for Beancount files, mapping Beancount constructs to traditional programming language highlight groups:

### Highlight Groups

- **`@comment`** - Comments (`;` prefixed lines)
- **`@constant.builtin`** - Dates and special values (`2022-02-01`, `NULL`)
- **`@keyword`** - Directive keywords (`txn`, `open`, `close`, `balance`, etc.)
- **`@type`** - Account names (`Assets:Checking`, `Expenses:Food`)
- **`@constant`** - Currency codes (`USD`, `EUR`, `BTC`)
- **`@number`** - Numeric values (`100.50`, `1000`)
- **`@operator`** - Symbols and operators (`*`, `@@`, `+`, `-`)
- **`@string`** - General strings (narration)
- **`@string.special`** - Special strings (payee, filenames, plugin names)
- **`@boolean`** - Boolean values (`TRUE`, `FALSE`)
- **`@label`** - Tags and links (`#food`, `^receipt-123`)
- **`@property`** - Metadata keys (`document`, `description`)
- **`@punctuation.bracket`** - Brackets and braces (`{}`, `()`)
- **`@punctuation.delimiter`** - Delimiters (`:`, `,`, `~`)
- **`@title`** - Section headers (org-mode/markdown style)
- **`@error`** - Parse errors

### Color Scheme Compatibility

The highlight groups are chosen to work well with popular color schemes:

- **Dark themes** (like One Dark, Dracula, Nord): Dates and currencies will be blue/cyan, accounts will be yellow/orange, strings will be green
- **Light themes** (like One Light, GitHub): Similar semantic coloring with appropriate contrast
- **Minimal themes** (like gruvbox): Clean, readable highlighting that doesn't overwhelm

### Example

```beancount
2022-02-01 * "Buy CSL" "Investment"     ; date=blue, *=red, strings=green
    Assets:Investments:CSL  10 CSL      ; account=yellow, numbers=purple, currency=cyan
    Assets:Checking      -1000 USD      ; operator(-)=red

; This is a comment                     ; comment=gray/green
2022-02-02 #food ^receipt-123           ; tags/links=blue/cyan
```

## Adding more queries

You can add additional query files for:
- `injections.scm` - Language injections  
- `locals.scm` - Local variable definitions
- `tags.scm` - Semantic tags

See the [tree-sitter query documentation](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#queries) for more information.