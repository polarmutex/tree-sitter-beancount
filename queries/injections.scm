; BQL (Beancount Query Language) strings are injected as 'bql'.
; Editors can map 'bql' to tree-sitter-sql or a custom BQL parser.
(query
  query: (string) @injection.content
  (#set! injection.language "bql"))
