; Text objects for Beancount
; Enables vim-style text object selections (inner/around)

;; =============================================================================
;; TRANSACTION TEXT OBJECTS
;; =============================================================================

; Inner transaction - just the transaction content (postings + metadata)
(transaction
  (date)
  (txn)
  (payee)?
  (narration)?
  (tags_links)?
  (comment)?
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "transaction")

; Around transaction - entire transaction including header
(transaction) @textobject.around
(#set! "textobject.type" "transaction")

;; =============================================================================
;; POSTING TEXT OBJECTS  
;; =============================================================================

; Inner posting - just the posting line content
(posting
  (optflag)?
  (account)
  (incomplete_amount)?
  (cost_spec)?
  .
  (_)* @textobject.inner)
(#set! "textobject.type" "posting")

; Around posting - entire posting including indentation
(posting) @textobject.around
(#set! "textobject.type" "posting")

;; =============================================================================
;; ACCOUNT TEXT OBJECTS
;; =============================================================================

; Inner account - just the account name
(account) @textobject.inner
(#set! "textobject.type" "account")

; Around account - account with surrounding context (useful in postings)
(posting
  (account) @textobject.around)
(#set! "textobject.type" "account")

;; =============================================================================
;; AMOUNT TEXT OBJECTS
;; =============================================================================

; Inner amount - just the number and currency
(amount
  (number)
  (currency)) @textobject.inner
(#set! "textobject.type" "amount")

(incomplete_amount
  (number)
  (currency)) @textobject.inner
(#set! "textobject.type" "amount")

(amount_tolerance
  (number)
  (currency)) @textobject.inner
(#set! "textobject.type" "amount")

; Around amount - amount with surrounding whitespace/context
(posting
  (incomplete_amount) @textobject.around)
(#set! "textobject.type" "amount")

(balance
  (amount_tolerance) @textobject.around)
(#set! "textobject.type" "amount")

;; =============================================================================
;; METADATA TEXT OBJECTS
;; =============================================================================

; Inner metadata - just the key-value content
(key_value
  (key)
  ":"
  (value)) @textobject.inner
(#set! "textobject.type" "metadata")

; Around metadata - entire metadata line including indentation
(key_value) @textobject.around
(#set! "textobject.type" "metadata")

; Inner metadata block - multiple consecutive metadata entries
(transaction
  .
  (_)*
  (key_value)+ @textobject.inner)
(#set! "textobject.type" "metadata_block")

(open
  .
  (_)*
  (key_value)+ @textobject.inner)
(#set! "textobject.type" "metadata_block")

(close
  .
  (_)*
  (key_value)+ @textobject.inner)
(#set! "textobject.type" "metadata_block")

(balance
  .
  (_)*
  (key_value)+ @textobject.inner)
(#set! "textobject.type" "metadata_block")

;; =============================================================================
;; ENTRY TEXT OBJECTS (for all directive types)
;; =============================================================================

; Inner entry - content without the directive header
(open
  (date)
  "open"
  (account)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(close
  (date)
  "close"
  (account)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(balance
  (date)
  "balance"
  (account)
  (amount_tolerance)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(pad
  (date)
  "pad"
  (account)
  (account)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(note
  (date)
  "note"
  (account)
  (string)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(event
  (date)
  "event"
  (string)
  (string)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(price
  (date)
  "price"
  (currency)
  (amount)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(query
  (date)
  "query"
  (string)
  (string)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(document
  (date)
  "document"
  (account)
  (filename)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(commodity
  (date)
  "commodity"
  (currency)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

(custom
  (date)
  "custom"
  (string)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "entry")

; Around entry - entire entry including header
(open) @textobject.around
(#set! "textobject.type" "entry")

(close) @textobject.around
(#set! "textobject.type" "entry")

(balance) @textobject.around
(#set! "textobject.type" "entry")

(pad) @textobject.around
(#set! "textobject.type" "entry")

(note) @textobject.around
(#set! "textobject.type" "entry")

(event) @textobject.around
(#set! "textobject.type" "entry")

(price) @textobject.around
(#set! "textobject.type" "entry")

(query) @textobject.around
(#set! "textobject.type" "entry")

(document) @textobject.around
(#set! "textobject.type" "entry")

(commodity) @textobject.around
(#set! "textobject.type" "entry")

(custom) @textobject.around
(#set! "textobject.type" "entry")

;; =============================================================================
;; SECTION TEXT OBJECTS
;; =============================================================================

; Inner section - section content without the headline
(section
  (headline)
  .
  (_)+ @textobject.inner)
(#set! "textobject.type" "section")

; Around section - entire section including headline
(section) @textobject.around
(#set! "textobject.type" "section")

;; =============================================================================
;; STRING TEXT OBJECTS
;; =============================================================================

; Inner string - content without quotes
(string) @textobject.inner
(#set! "textobject.type" "string")

; Around string - string with quotes
(string) @textobject.around
(#set! "textobject.type" "string")

; Payee and narration as separate string objects
(payee) @textobject.inner
(#set! "textobject.type" "payee")

(narration) @textobject.inner
(#set! "textobject.type" "narration")

;; =============================================================================
;; COST SPECIFICATION TEXT OBJECTS
;; =============================================================================

; Inner cost spec - content without braces
(cost_spec
  "{"
  (cost_comp)+ @textobject.inner
  "}")
(#set! "textobject.type" "cost_spec")

(cost_spec
  "{{"
  (cost_comp)+ @textobject.inner
  "}}")
(#set! "textobject.type" "cost_spec")

; Around cost spec - entire cost specification with braces
(cost_spec) @textobject.around
(#set! "textobject.type" "cost_spec")

;; =============================================================================
;; DATE TEXT OBJECTS
;; =============================================================================

; Date as text object (useful for date-based operations)
(date) @textobject.inner
(#set! "textobject.type" "date")

(date) @textobject.around
(#set! "textobject.type" "date")

;; =============================================================================
;; TAG AND LINK TEXT OBJECTS
;; =============================================================================

; Tags and links as individual text objects
(tag) @textobject.inner
(#set! "textobject.type" "tag")

(tag) @textobject.around
(#set! "textobject.type" "tag")

(link) @textobject.inner
(#set! "textobject.type" "link")

(link) @textobject.around
(#set! "textobject.type" "link")

; Tag/link groups as text objects
(tags_links) @textobject.inner
(#set! "textobject.type" "tags_links")

(tags_links) @textobject.around
(#set! "textobject.type" "tags_links")

;; =============================================================================
;; COMMENT TEXT OBJECTS
;; =============================================================================

; Inner comment - comment content without semicolon
(comment) @textobject.inner
(#set! "textobject.type" "comment")

; Around comment - entire comment including semicolon
(comment) @textobject.around
(#set! "textobject.type" "comment")

;; =============================================================================
;; FINANCIAL-SPECIFIC TEXT OBJECTS
;; =============================================================================

; Currency as text object
(currency) @textobject.inner
(#set! "textobject.type" "currency")

(currency) @textobject.around
(#set! "textobject.type" "currency")

; Number as text object (for editing amounts)
(number) @textobject.inner
(#set! "textobject.type" "number")

(number) @textobject.around
(#set! "textobject.type" "number")

; Arithmetic expressions as text objects
(unary_number_expr) @textobject.inner
(#set! "textobject.type" "expression")

(binary_number_expr) @textobject.inner
(#set! "textobject.type" "expression")

(unary_number_expr) @textobject.around
(#set! "textobject.type" "expression")

(binary_number_expr) @textobject.around
(#set! "textobject.type" "expression")

;; =============================================================================
;; COMPOUND TEXT OBJECTS (for complex selections)
;; =============================================================================

; All postings in a transaction
(transaction
  .
  (_)*
  (posting)+ @textobject.inner)
(#set! "textobject.type" "postings")

; Transaction header (date + txn + description)
(transaction
  (date)
  (txn)
  (payee)?
  (narration)?) @textobject.inner
(#set! "textobject.type" "transaction_header")

; Entry header (date + directive + main args)
(open
  (date)
  "open"
  (account)) @textobject.inner
(#set! "textobject.type" "entry_header")

(balance
  (date)
  "balance"
  (account)
  (amount_tolerance)) @textobject.inner
(#set! "textobject.type" "entry_header")

(price
  (date)
  "price"
  (currency)
  (amount)) @textobject.inner
(#set! "textobject.type" "entry_header")