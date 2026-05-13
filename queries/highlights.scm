; Entry type keywords
[
  "open"
  "close"
  "balance"
  "pad"
  "note"
  "document"
  "price"
  "event"
  "query"
  "custom"
  "commodity"
  "txn"
] @keyword

; Directive keywords
[
  "pushtag"
  "poptag"
  "pushmeta"
  "popmeta"
  "option"
  "include"
  "plugin"
] @keyword.import

; Transaction and posting flags
(txn) @keyword
(flag) @keyword

; Dates
(date) @string.special

; Accounts
(account) @variable

; Currencies
(currency) @type

; Strings
(string) @string
(unquoted_string) @string
(narration) @string
(payee) @string.special

; Numbers
(number) @number

; Booleans and null
(bool) @boolean
"NULL" @constant.builtin

; Tags and links
(tag) @label
(link) @label

; Metadata keys
(key_value (key) @property)

; Arithmetic operators
[
  (plus)
  (minus)
  (asterisk)
  (slash)
] @operator

; Price annotation operators
[
  (at)
  (atat)
] @operator

; Punctuation
["(" ")"] @punctuation.bracket
["{" "}" "{{" "}}"] @punctuation.bracket
["," "~" ":"] @punctuation.delimiter

; Comments
(comment) @comment

; Org-mode / markdown section headlines
(headline (item) @markup.heading)
