; Locals queries for Beancount
; Defines scopes, definitions, and references for LSP features like "go to definition"

;; =============================================================================
;; SCOPES - Define different levels of scope in Beancount files
;; =============================================================================

; File scope - global scope for the entire file
(file) @local.scope

; Transaction scope - contains postings and metadata
(transaction) @local.scope

; Section scope - org-mode/markdown headers create nested scopes
(section) @local.scope

; Entry scopes - other entries that can contain metadata
(open) @local.scope
(close) @local.scope
(balance) @local.scope
(pad) @local.scope
(note) @local.scope
(event) @local.scope
(price) @local.scope
(query) @local.scope
(document) @local.scope
(commodity) @local.scope
(custom) @local.scope

;; =============================================================================
;; DEFINITIONS - Where entities are first declared/defined
;; =============================================================================

; Account definitions - accounts are "defined" when opened
(open
  (account) @local.definition.var
  (#set! "kind" "account"))

; Currency definitions - currencies are "defined" in commodity directives
(commodity
  (currency) @local.definition.var
  (#set! "kind" "currency"))

; Tag definitions - tags are "defined" when pushed onto the stack
(pushtag
  (tag) @local.definition.var
  (#set! "kind" "tag"))

; Metadata key definitions - keys are "defined" when pushed onto the stack
(pushmeta
  (key_value
    (key) @local.definition.var)
  (#set! "kind" "metadata_key"))

; Query name definitions - named queries for reuse
(query
  (string) @local.definition.var
  (#set! "kind" "query_name"))

; Custom directive type definitions
(custom
  (string) @local.definition.type
  (#set! "kind" "custom_directive"))

; Document path definitions - track document relationships
(document
  (filename) @local.definition.var
  (#set! "kind" "document_path"))

; Event type definitions - track event types for consistency
(event
  (string) @local.definition.type
  (#set! "kind" "event_type"))

;; =============================================================================
;; REFERENCES - Where defined entities are used/referenced
;; =============================================================================

; Account references in various contexts
(posting
  (account) @local.reference
  (#set! "kind" "account"))

(close
  (account) @local.reference
  (#set! "kind" "account"))

(balance
  (account) @local.reference
  (#set! "kind" "account"))

(pad
  (account) @local.reference
  (#set! "kind" "account"))

(pad
  (account) @local.reference
  (#set! "kind" "account")) ; from_account

(note
  (account) @local.reference
  (#set! "kind" "account"))

(document
  (account) @local.reference
  (#set! "kind" "account"))

; Currency references in amounts and prices
(amount
  (currency) @local.reference
  (#set! "kind" "currency"))

(incomplete_amount
  (currency) @local.reference
  (#set! "kind" "currency"))

(amount_tolerance
  (currency) @local.reference
  (#set! "kind" "currency"))

(compound_amount
  (currency) @local.reference
  (#set! "kind" "currency"))

(price
  (currency) @local.reference
  (#set! "kind" "currency"))

; Tag references in transactions and other contexts
(tag) @local.reference
(#set! "kind" "tag")

; Metadata key references in key-value pairs
(key_value
  (key) @local.reference
  (#set! "kind" "metadata_key"))

; Pop directives reference the keys/tags being popped
(poptag
  (tag) @local.reference
  (#set! "kind" "tag"))

(popmeta
  (key) @local.reference
  (#set! "kind" "metadata_key"))

;; =============================================================================
;; FINANCIAL-SPECIFIC PATTERNS
;; =============================================================================

; Account hierarchy relationships - track parent-child account relationships
; This helps with account tree navigation and validation
(account) @local.definition.namespace
(#set! "kind" "account_namespace")

; Price relationships - track which currencies have price data
(price
  (currency) @local.definition.var
  (#set! "kind" "priced_currency"))

; Balance assertion tracking - accounts that have balance checks
(balance
  (account) @local.definition.var
  (#set! "kind" "balanced_account"))

; Transaction payee tracking - track payees for autocomplete/analysis
(transaction
  (payee) @local.definition.var
  (#set! "kind" "payee"))

; Cost specification tracking - currencies used in cost specs
(cost_comp
  (compound_amount
    (currency) @local.reference)
  (#set! "kind" "cost_currency"))

; Link references - track document/transaction relationships
(link) @local.reference
(#set! "kind" "link")

;; =============================================================================
;; TEMPORAL RELATIONSHIPS
;; =============================================================================

; Date-based relationships for financial analysis
; Track accounts by their lifecycle (open -> transactions -> close)
(open
  (date) @local.definition.var
  (account) @local.reference
  (#set! "kind" "account_opened"))

(close
  (date) @local.definition.var
  (account) @local.reference
  (#set! "kind" "account_closed"))

; Track transaction dates for temporal analysis
(transaction
  (date) @local.definition.var
  (#set! "kind" "transaction_date"))

(balance
  (date) @local.definition.var
  (#set! "kind" "balance_date"))

(price
  (date) @local.definition.var
  (#set! "kind" "price_date"))

;; =============================================================================
;; VALIDATION SUPPORT
;; =============================================================================

; Support for validation rules - track entities that need validation
; Accounts referenced before being opened
(posting
  (account) @local.reference.undefined
  (#set! "kind" "unvalidated_account"))

; Currencies used without commodity declarations
(amount
  (currency) @local.reference.undefined
  (#set! "kind" "unvalidated_currency"))

; Tags used without being pushed
(tag) @local.reference.undefined
(#set! "kind" "unvalidated_tag")