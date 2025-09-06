; Folding queries for Beancount
; Defines regions that can be collapsed/expanded for better code organization

;; =============================================================================
;; TRANSACTION FOLDING
;; =============================================================================

; Fold multi-line transactions (with postings and/or metadata)
(transaction
  (date)
  (txn)
  .
  (_)+) @fold
(#set! "fold.type" "transaction")

;; =============================================================================
;; ACCOUNT OPERATIONS FOLDING
;; =============================================================================

; Fold open directives with metadata
(open
  (date)
  "open"
  (account)
  .
  (key_value)+) @fold
(#set! "fold.type" "open_metadata")

; Fold close directives with metadata
(close
  (date)
  "close"
  (account)
  .
  (key_value)+) @fold
(#set! "fold.type" "close_metadata")

; Fold balance directives with metadata
(balance
  (date)
  "balance"
  (account)
  (amount_tolerance)
  .
  (key_value)+) @fold
(#set! "fold.type" "balance_metadata")

; Fold pad directives with metadata
(pad
  (date)
  "pad"
  (account)
  (account)
  .
  (key_value)+) @fold
(#set! "fold.type" "pad_metadata")

; Fold note directives with metadata
(note
  (date)
  "note"
  (account)
  (string)
  .
  (key_value)+) @fold
(#set! "fold.type" "note_metadata")

; Fold event directives with metadata
(event
  (date)
  "event"
  (string)
  (string)
  .
  (key_value)+) @fold
(#set! "fold.type" "event_metadata")

; Fold price directives with metadata
(price
  (date)
  "price"
  (currency)
  (amount)
  .
  (key_value)+) @fold
(#set! "fold.type" "price_metadata")

; Fold query directives with metadata
(query
  (date)
  "query"
  (string)
  (string)
  .
  (key_value)+) @fold
(#set! "fold.type" "query_metadata")

; Fold document directives with metadata
(document
  (date)
  "document"
  (account)
  (filename)
  .
  (key_value)+) @fold
(#set! "fold.type" "document_metadata")

; Fold commodity directives with metadata
(commodity
  (date)
  "commodity"
  (currency)
  .
  (key_value)+) @fold
(#set! "fold.type" "commodity_metadata")

; Fold custom directives with metadata
(custom
  (date)
  "custom"
  (string)
  .
  (key_value)+) @fold
(#set! "fold.type" "custom_metadata")

;; =============================================================================
;; SECTION FOLDING (ORG-MODE/MARKDOWN)
;; =============================================================================

; Fold sections (org-mode/markdown style headers with content)
(section
  (headline)
  .
  (_)+) @fold
(#set! "fold.type" "section")

; Fold nested subsections
(section
  (headline)
  .
  (_)*
  (section)+ 
  (_)*) @fold
(#set! "fold.type" "section_with_subsections")

;; =============================================================================
;; COMMENT BLOCKS
;; =============================================================================

; Fold multiple consecutive comment lines
(comment) @fold
(#set! "fold.type" "comment")

;; =============================================================================
;; METADATA BLOCKS
;; =============================================================================

; Fold multiple consecutive key-value pairs
(key_value) @fold
(#set! "fold.type" "metadata_block")

;; =============================================================================
;; LARGE TRANSACTION GROUPS
;; =============================================================================

; Fold groups of transactions on the same date
; This is useful for days with many transactions
; Note: This requires multiple transactions with same date to be adjacent

; Alternative approach: Fold based on file structure patterns
; Fold everything between two dates (useful for monthly/yearly folding)

;; =============================================================================
;; SPECIALIZED FOLDING PATTERNS
;; =============================================================================

; Fold complex cost specifications
(cost_spec
  "{"
  (cost_comp)+
  "}") @fold
(#set! "fold.type" "cost_spec")

(cost_spec
  "{{"
  (cost_comp)+
  "}}") @fold
(#set! "fold.type" "cost_spec_total")

; Fold large custom directive value lists
(custom
  (date)
  "custom"
  (string)
  (custom_value)+) @fold
(#set! "fold.type" "custom_values")

;; =============================================================================
;; FINANCIAL YEAR/PERIOD FOLDING
;; =============================================================================

; These would be more complex and might require semantic understanding
; For now, sections can be used to manually mark year/month boundaries

;; Example usage patterns:
;; 
;; * 2022
;;   2022-01-01 open Assets:Checking
;;   2022-01-01 * "Transaction 1"
;;       Assets:Checking  100 USD
;;       Equity:Opening-Balances
;;   
;; * 2023  
;;   2023-01-01 * "New year transaction"
;;       Assets:Checking  200 USD
;;       Income:Salary

;; =============================================================================
;; PLUGIN/OPTION BLOCKS
;; =============================================================================

; Don't typically fold these as they're usually short, but include for completeness

; Fold multiple consecutive option directives
(option) @fold
(#set! "fold.type" "option")

; Fold multiple consecutive plugin directives  
(plugin) @fold
(#set! "fold.type" "plugin")

; Fold multiple consecutive include directives
(include) @fold
(#set! "fold.type" "include")