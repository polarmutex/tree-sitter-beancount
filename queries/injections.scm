; Inject SQL into the BQL string of query directives.
; The offset strips the surrounding double quotes from the string token.
(query
  query: (string) @injection.content
  (#offset! @injection.content 0 1 0 -1)
  (#set! injection.language "sql"))
