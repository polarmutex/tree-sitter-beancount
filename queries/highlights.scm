; Highlight queries for Beancount
; Maps Beancount syntax to traditional programming language highlight groups

;; Comments
(comment) @comment

;; Dates - treated as constants since they're immutable values
(date) @constant.builtin

;; Keywords - directive names
[
  "txn"
  "open"
  "close"
  "balance"
  "pad"
  "note"
  "event"
  "price"
  "commodity"
  "query"
  "document"
  "custom"
  "include"
  "plugin" 
  "option"
  "pushtag"
  "poptag"
  "pushmeta"
  "popmeta"
] @keyword

;; Transaction flags and symbols
(txn) @keyword
(flag) @operator
(asterisk) @operator
(plus) @operator
(minus) @operator
(slash) @operator

;; Accounts - treated as types since they define data structures
(account) @type

;; Currencies - treated as constants since they're fixed identifiers
(currency) @constant

;; Numbers and arithmetic
(number) @number
(unary_number_expr 
  [(plus) (minus)] @operator)
(binary_number_expr 
  [(plus) (minus) (asterisk) (slash)] @operator)

;; Strings - payee, narration, filenames, etc.
(string) @string
(payee) @string.special
(narration) @string
(filename) @string.special

;; Boolean values
(bool) @boolean

;; Special null value
"NULL" @constant.builtin

;; Tags and links - treated as labels since they mark/categorize entries
(tag) @label
(link) @label

;; Metadata keys - treated as fields/properties
(key) @property

;; Cost and price operators
(at) @operator
(atat) @operator

;; Brackets and braces for cost specifications
[
  "{"
  "}"
  "{{"
  "}}"
  "("
  ")"
] @punctuation.bracket

;; Punctuation
[
  ":"
  ","
  "~"
] @punctuation.delimiter

;; Section headers (org-mode/markdown style)
(headline) @title

;; Special highlighting for transaction structure
(transaction
  (date) @constant.builtin
  (txn) @keyword
  (payee)? @string.special
  (narration)? @string)

;; Posting structure
(posting
  (optflag)? @operator
  (account) @type
  (incomplete_amount)? @number)

;; Balance assertions  
(balance
  (date) @constant.builtin
  (account) @type
  (amount_tolerance) @number)

;; Account operations
(open
  (date) @constant.builtin
  (account) @type
  (currency)* @constant)

(close
  (date) @constant.builtin  
  (account) @type)

;; Price entries
(price
  (date) @constant.builtin
  (currency) @constant
  (amount) @number)

;; Events and notes
(event
  (date) @constant.builtin
  (string) @string.special ; event type
  (string) @string)        ; description

(note
  (date) @constant.builtin
  (account) @type
  (string) @string)

;; Documents
(document
  (date) @constant.builtin
  (account) @type
  (filename) @string.special)

;; Query entries
(query
  (date) @constant.builtin
  (string) @string.special ; query name
  (string) @string)        ; query string

;; Custom entries
(custom
  (date) @constant.builtin
  (string) @string.special) ; custom directive name

;; Commodity declarations
(commodity
  (date) @constant.builtin
  (currency) @constant)

;; Pad entries
(pad
  (date) @constant.builtin
  (account) @type
  (account) @type) ; from_account

;; Plugin and option directives
(plugin
  (string) @string.special) ; plugin name

(option
  (string) @string.special  ; option key
  (string) @string)         ; option value

;; Include statements
(include
  (string) @string.special) ; file path

;; Push/pop directives
(pushtag (tag) @label)
(poptag (tag) @label)
(pushmeta (key_value (key) @property))
(popmeta (key) @property)

;; Error highlighting for better debugging
(ERROR) @error