; Beancount indentation queries
; Compatible with nvim-treesitter (Neovim) and Zed.
;
; After the header line of a transaction or directive, pressing Enter
; auto-indents the next line for postings and key-value metadata.

(transaction) @indent.begin

[
  (balance)
  (close)
  (commodity)
  (custom)
  (document)
  (event)
  (note)
  (open)
  (pad)
  (price)
  (query)
] @indent.begin
