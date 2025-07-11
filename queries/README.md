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

## Future Query Opportunities

Based on other mature tree-sitter parsers, here are additional query files that could enhance the Beancount editing experience:

### Standard Query Files

**`textobjects.scm`** - Text objects for vim-style editing
- Define "inner transaction" and "around transaction" 
- "inner posting" and "around posting"
- "inner metadata block"
- Very popular for vim/neovim users

**`folds.scm`** - Code folding patterns
- Fold transaction blocks
- Fold metadata sections  
- Fold org-mode/markdown sections
- Fold large multi-posting transactions

**`injections.scm`** - Language injections for embedding other languages
- Could inject SQL in query directives
- Could inject shell commands in custom directives
- Could inject regex patterns in plugin configurations

**`locals.scm`** - Local scope definitions and references
- Define account name scopes
- Track variable references in arithmetic expressions
- Useful for LSP features like "go to definition"

**`tags.scm`** - Semantic tagging for code analysis
- Mark different types of directives for analysis
- Identify financial concepts (assets, liabilities, income, expenses)
- Tag temporal relationships (date dependencies)

**`matchup.scm`** - Bracket/delimiter matching
- Match opening/closing braces in cost specs `{}` and `{{}}`
- Match begin/end of transaction blocks
- Match open/close account directives

### Advanced/Specialized Queries

**`context.scm`** - Context-aware selections (newer feature)
- Smart selection of related postings
- Context-aware account completions

**`rainbow.scm`** - Rainbow parentheses/delimiters
- Colorize nested cost specifications
- Different colors for different nesting levels

**`outline.scm`** - Document outline/structure
- Extract transaction summaries for outline view
- Show account hierarchy
- Display date-based organization

**`symbols.scm`** - Symbol extraction for navigation
- Extract all account names as symbols
- Extract all transaction descriptions
- Extract all tags and links

**`lints.scm`** - Static analysis patterns
- Detect unbalanced transactions
- Find missing required metadata
- Identify suspicious patterns

### Implementation Priority

The most commonly implemented across tree-sitter parsers and likely to provide immediate user value:

1. **`textobjects.scm`** - Very popular for vim users, enables intuitive text manipulation
2. **`folds.scm`** - Improves code organization and readability
3. **`injections.scm`** - Enables multi-language support
4. **`locals.scm`** - Enables advanced LSP features

### Contributing

If you're interested in implementing any of these queries, contributions are welcome! See the [tree-sitter query documentation](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#queries) for more information on query syntax and patterns.