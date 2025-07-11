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

## Adding more queries

You can add additional query files for:
- `highlights.scm` - Syntax highlighting
- `injections.scm` - Language injections  
- `locals.scm` - Local variable definitions
- `tags.scm` - Semantic tags

See the [tree-sitter query documentation](https://tree-sitter.github.io/tree-sitter/syntax-highlighting#queries) for more information.