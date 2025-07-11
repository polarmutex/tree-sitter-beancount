; Indentation queries for Beancount
; These patterns help editors understand when to indent or dedent

; Indent after transaction headers
(transaction
  (date)
  (txn)
  .
  (_)) @indent

; Indent after open statements with metadata
(open
  (date)
  "open"
  (account)
  .
  (_)) @indent

; Indent after close statements with metadata  
(close
  (date)
  "close"
  (account)
  .
  (_)) @indent

; Indent after balance statements with metadata
(balance
  (date)
  "balance"
  (account)
  (amount_tolerance)
  .
  (_)) @indent

; Indent after other entries with metadata
(commodity
  (date)
  "commodity"
  (currency)
  .
  (_)) @indent

(pad
  (date)
  "pad"
  (account)
  (account)
  .
  (_)) @indent

(note
  (date)
  "note"
  (account)
  (string)
  .
  (_)) @indent

(event
  (date)
  "event"
  (string)
  (string)
  .
  (_)) @indent

(price
  (date)
  "price"
  (currency)
  (amount)
  .
  (_)) @indent

(query
  (date)
  "query"
  (string)
  (string)
  .
  (_)) @indent

(document
  (date)
  "document"
  (account)
  (filename)
  .
  (_)) @indent

(custom
  (date)
  "custom"
  (string)
  .
  (_)) @indent

; Sections (org-mode/markdown headers) indent their content
(section
  (headline)
  .
  (_)) @indent

; Always dedent at the start of new top-level entries
(transaction
  (date)) @dedent

(open
  (date)) @dedent

(close
  (date)) @dedent

(balance
  (date)) @dedent

(commodity
  (date)) @dedent

(pad
  (date)) @dedent

(note
  (date)) @dedent

(event
  (date)) @dedent

(price
  (date)) @dedent

(query
  (date)) @dedent

(document
  (date)) @dedent

(custom
  (date)) @dedent

; Section headers also dedent
(headline) @dedent