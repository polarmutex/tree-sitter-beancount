#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 341
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 127
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 27
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 88

enum {
  sym_identifier = 1,
  sym__indent = 2,
  sym__eol = 3,
  sym__pipe = 4,
  sym_atat = 5,
  sym_at = 6,
  sym_lcurllcurl = 7,
  sym_rcurlrcurl = 8,
  sym_lcurl = 9,
  sym_rcurl = 10,
  sym__equal = 11,
  sym__comma = 12,
  sym__tilde = 13,
  sym__hash = 14,
  sym_asterisk = 15,
  sym_slash = 16,
  sym__colon = 17,
  sym_plus = 18,
  sym_minus = 19,
  sym__lparen = 20,
  sym__rparen = 21,
  sym_flag = 22,
  sym_TXN = 23,
  sym_BALANCE = 24,
  sym_OPEN = 25,
  sym_CLOSE = 26,
  sym_COMMODITY = 27,
  sym_PAD = 28,
  sym_EVENT = 29,
  sym_PRICE = 30,
  sym_NOTE = 31,
  sym_DOCUMENT = 32,
  sym_QUERY = 33,
  sym_CUSTOM = 34,
  sym_PUSHTAG = 35,
  sym_POPTAG = 36,
  sym_PUSHMETA = 37,
  sym_POPMETA = 38,
  sym_OPTION = 39,
  sym_INCLUDE = 40,
  sym_PLUGIN = 41,
  sym__none = 42,
  sym_bool = 43,
  sym_date = 44,
  sym_account = 45,
  sym_currency = 46,
  sym_string = 47,
  sym_number = 48,
  sym_tag = 49,
  sym_link = 50,
  sym_key = 51,
  aux_sym__markdown_heading_token1 = 52,
  sym_comment = 53,
  sym__UTF_8_1 = 54,
  aux_sym__UTF_8_2_token1 = 55,
  aux_sym__UTF_8_3_token1 = 56,
  aux_sym__UTF_8_3_token2 = 57,
  aux_sym__UTF_8_3_token3 = 58,
  aux_sym__UTF_8_3_token4 = 59,
  aux_sym__UTF_8_4_token1 = 60,
  aux_sym__UTF_8_4_token2 = 61,
  aux_sym__UTF_8_4_token3 = 62,
  sym_file = 63,
  sym_txn = 64,
  sym__number_expr = 65,
  sym__paren__number_expr = 66,
  sym_unary_number_expr = 67,
  sym_binary_number_expr = 68,
  sym_txn_strings = 69,
  sym_tags_links = 70,
  sym_transaction = 71,
  sym_optflag = 72,
  sym_price_annotation = 73,
  sym_posting = 74,
  sym_key_value = 75,
  sym_key_value_line = 76,
  sym__key_value_value = 77,
  sym_posting_or_kv_list = 78,
  sym_key_value_list = 79,
  sym_currency_list = 80,
  sym_pushtag = 81,
  sym_poptag = 82,
  sym_pushmeta = 83,
  sym_popmeta = 84,
  sym_open = 85,
  sym_opt_booking = 86,
  sym_close = 87,
  sym_commodity = 88,
  sym_pad = 89,
  sym_balance = 90,
  sym_amount = 91,
  sym_amount_tolerance = 92,
  sym_compound_amount = 93,
  sym_incomplete_amount = 94,
  sym_cost_spec = 95,
  sym_cost_comp_list = 96,
  sym_cost_comp = 97,
  sym_price = 98,
  sym_event = 99,
  sym_query = 100,
  sym_note = 101,
  sym_filename = 102,
  sym_document = 103,
  sym_custom_value = 104,
  sym_custom_value_list = 105,
  sym_custom = 106,
  sym__entry = 107,
  sym_option = 108,
  sym_include = 109,
  sym_plugin = 110,
  sym__directive = 111,
  sym__declarations = 112,
  sym__markdown_heading = 113,
  sym__orgmode_heading = 114,
  sym_heading = 115,
  sym__skipped_lines = 116,
  aux_sym_file_repeat1 = 117,
  aux_sym_tags_links_repeat1 = 118,
  aux_sym_posting_or_kv_list_repeat1 = 119,
  aux_sym_key_value_list_repeat1 = 120,
  aux_sym_currency_list_repeat1 = 121,
  aux_sym_open_repeat1 = 122,
  aux_sym_cost_comp_list_repeat1 = 123,
  aux_sym_custom_value_list_repeat1 = 124,
  aux_sym__markdown_heading_repeat1 = 125,
  aux_sym__orgmode_heading_repeat1 = 126,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [sym__indent] = "_indent",
  [sym__eol] = "_eol",
  [sym__pipe] = "_pipe",
  [sym_atat] = "atat",
  [sym_at] = "at",
  [sym_lcurllcurl] = "lcurllcurl",
  [sym_rcurlrcurl] = "rcurlrcurl",
  [sym_lcurl] = "lcurl",
  [sym_rcurl] = "rcurl",
  [sym__equal] = "_equal",
  [sym__comma] = "_comma",
  [sym__tilde] = "_tilde",
  [sym__hash] = "_hash",
  [sym_asterisk] = "asterisk",
  [sym_slash] = "slash",
  [sym__colon] = "_colon",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym__lparen] = "_lparen",
  [sym__rparen] = "_rparen",
  [sym_flag] = "flag",
  [sym_TXN] = "TXN",
  [sym_BALANCE] = "balance",
  [sym_OPEN] = "open",
  [sym_CLOSE] = "close",
  [sym_COMMODITY] = "commodity",
  [sym_PAD] = "pad",
  [sym_EVENT] = "event",
  [sym_PRICE] = "price",
  [sym_NOTE] = "note",
  [sym_DOCUMENT] = "document",
  [sym_QUERY] = "query",
  [sym_CUSTOM] = "custom",
  [sym_PUSHTAG] = "pushtag",
  [sym_POPTAG] = "poptag",
  [sym_PUSHMETA] = "pushmeta",
  [sym_POPMETA] = "popmeta",
  [sym_OPTION] = "option",
  [sym_INCLUDE] = "include",
  [sym_PLUGIN] = "plugin",
  [sym__none] = "_none",
  [sym_bool] = "bool",
  [sym_date] = "date",
  [sym_account] = "account",
  [sym_currency] = "currency",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [sym_key] = "key",
  [aux_sym__markdown_heading_token1] = "_markdown_heading_token1",
  [sym_comment] = "comment",
  [sym__UTF_8_1] = "_UTF_8_1",
  [aux_sym__UTF_8_2_token1] = "_UTF_8_2_token1",
  [aux_sym__UTF_8_3_token1] = "_UTF_8_3_token1",
  [aux_sym__UTF_8_3_token2] = "_UTF_8_3_token2",
  [aux_sym__UTF_8_3_token3] = "_UTF_8_3_token3",
  [aux_sym__UTF_8_3_token4] = "_UTF_8_3_token4",
  [aux_sym__UTF_8_4_token1] = "_UTF_8_4_token1",
  [aux_sym__UTF_8_4_token2] = "_UTF_8_4_token2",
  [aux_sym__UTF_8_4_token3] = "_UTF_8_4_token3",
  [sym_file] = "file",
  [sym_txn] = "txn",
  [sym__number_expr] = "_number_expr",
  [sym__paren__number_expr] = "_paren__number_expr",
  [sym_unary_number_expr] = "unary_number_expr",
  [sym_binary_number_expr] = "binary_number_expr",
  [sym_txn_strings] = "txn_strings",
  [sym_tags_links] = "tags_links",
  [sym_transaction] = "transaction",
  [sym_optflag] = "optflag",
  [sym_price_annotation] = "price_annotation",
  [sym_posting] = "posting",
  [sym_key_value] = "key_value",
  [sym_key_value_line] = "key_value_line",
  [sym__key_value_value] = "_key_value_value",
  [sym_posting_or_kv_list] = "posting_or_kv_list",
  [sym_key_value_list] = "key_value_list",
  [sym_currency_list] = "currency_list",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym_open] = "open",
  [sym_opt_booking] = "opt_booking",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_pad] = "pad",
  [sym_balance] = "balance",
  [sym_amount] = "amount",
  [sym_amount_tolerance] = "amount_tolerance",
  [sym_compound_amount] = "compound_amount",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_cost_spec] = "cost_spec",
  [sym_cost_comp_list] = "cost_comp_list",
  [sym_cost_comp] = "cost_comp",
  [sym_price] = "price",
  [sym_event] = "event",
  [sym_query] = "query",
  [sym_note] = "note",
  [sym_filename] = "filename",
  [sym_document] = "document",
  [sym_custom_value] = "custom_value",
  [sym_custom_value_list] = "custom_value_list",
  [sym_custom] = "custom",
  [sym__entry] = "_entry",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym__directive] = "_directive",
  [sym__declarations] = "_declarations",
  [sym__markdown_heading] = "_markdown_heading",
  [sym__orgmode_heading] = "_orgmode_heading",
  [sym_heading] = "heading",
  [sym__skipped_lines] = "_skipped_lines",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_tags_links_repeat1] = "tags_links_repeat1",
  [aux_sym_posting_or_kv_list_repeat1] = "posting_or_kv_list_repeat1",
  [aux_sym_key_value_list_repeat1] = "key_value_list_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_cost_comp_list_repeat1] = "cost_comp_list_repeat1",
  [aux_sym_custom_value_list_repeat1] = "custom_value_list_repeat1",
  [aux_sym__markdown_heading_repeat1] = "_markdown_heading_repeat1",
  [aux_sym__orgmode_heading_repeat1] = "_orgmode_heading_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [sym__indent] = sym__indent,
  [sym__eol] = sym__eol,
  [sym__pipe] = sym__pipe,
  [sym_atat] = sym_atat,
  [sym_at] = sym_at,
  [sym_lcurllcurl] = sym_lcurllcurl,
  [sym_rcurlrcurl] = sym_rcurlrcurl,
  [sym_lcurl] = sym_lcurl,
  [sym_rcurl] = sym_rcurl,
  [sym__equal] = sym__equal,
  [sym__comma] = sym__comma,
  [sym__tilde] = sym__tilde,
  [sym__hash] = sym__hash,
  [sym_asterisk] = sym_asterisk,
  [sym_slash] = sym_slash,
  [sym__colon] = sym__colon,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym__lparen] = sym__lparen,
  [sym__rparen] = sym__rparen,
  [sym_flag] = sym_flag,
  [sym_TXN] = sym_TXN,
  [sym_BALANCE] = sym_BALANCE,
  [sym_OPEN] = sym_OPEN,
  [sym_CLOSE] = sym_CLOSE,
  [sym_COMMODITY] = sym_COMMODITY,
  [sym_PAD] = sym_PAD,
  [sym_EVENT] = sym_EVENT,
  [sym_PRICE] = sym_PRICE,
  [sym_NOTE] = sym_NOTE,
  [sym_DOCUMENT] = sym_DOCUMENT,
  [sym_QUERY] = sym_QUERY,
  [sym_CUSTOM] = sym_CUSTOM,
  [sym_PUSHTAG] = sym_PUSHTAG,
  [sym_POPTAG] = sym_POPTAG,
  [sym_PUSHMETA] = sym_PUSHMETA,
  [sym_POPMETA] = sym_POPMETA,
  [sym_OPTION] = sym_OPTION,
  [sym_INCLUDE] = sym_INCLUDE,
  [sym_PLUGIN] = sym_PLUGIN,
  [sym__none] = sym__none,
  [sym_bool] = sym_bool,
  [sym_date] = sym_date,
  [sym_account] = sym_account,
  [sym_currency] = sym_currency,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [sym_key] = sym_key,
  [aux_sym__markdown_heading_token1] = aux_sym__markdown_heading_token1,
  [sym_comment] = sym_comment,
  [sym__UTF_8_1] = sym__UTF_8_1,
  [aux_sym__UTF_8_2_token1] = aux_sym__UTF_8_2_token1,
  [aux_sym__UTF_8_3_token1] = aux_sym__UTF_8_3_token1,
  [aux_sym__UTF_8_3_token2] = aux_sym__UTF_8_3_token2,
  [aux_sym__UTF_8_3_token3] = aux_sym__UTF_8_3_token3,
  [aux_sym__UTF_8_3_token4] = aux_sym__UTF_8_3_token4,
  [aux_sym__UTF_8_4_token1] = aux_sym__UTF_8_4_token1,
  [aux_sym__UTF_8_4_token2] = aux_sym__UTF_8_4_token2,
  [aux_sym__UTF_8_4_token3] = aux_sym__UTF_8_4_token3,
  [sym_file] = sym_file,
  [sym_txn] = sym_txn,
  [sym__number_expr] = sym__number_expr,
  [sym__paren__number_expr] = sym__paren__number_expr,
  [sym_unary_number_expr] = sym_unary_number_expr,
  [sym_binary_number_expr] = sym_binary_number_expr,
  [sym_txn_strings] = sym_txn_strings,
  [sym_tags_links] = sym_tags_links,
  [sym_transaction] = sym_transaction,
  [sym_optflag] = sym_optflag,
  [sym_price_annotation] = sym_price_annotation,
  [sym_posting] = sym_posting,
  [sym_key_value] = sym_key_value,
  [sym_key_value_line] = sym_key_value_line,
  [sym__key_value_value] = sym__key_value_value,
  [sym_posting_or_kv_list] = sym_posting_or_kv_list,
  [sym_key_value_list] = sym_key_value_list,
  [sym_currency_list] = sym_currency_list,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym_open] = sym_open,
  [sym_opt_booking] = sym_opt_booking,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_pad] = sym_pad,
  [sym_balance] = sym_balance,
  [sym_amount] = sym_amount,
  [sym_amount_tolerance] = sym_amount_tolerance,
  [sym_compound_amount] = sym_compound_amount,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_cost_spec] = sym_cost_spec,
  [sym_cost_comp_list] = sym_cost_comp_list,
  [sym_cost_comp] = sym_cost_comp,
  [sym_price] = sym_price,
  [sym_event] = sym_event,
  [sym_query] = sym_query,
  [sym_note] = sym_note,
  [sym_filename] = sym_filename,
  [sym_document] = sym_document,
  [sym_custom_value] = sym_custom_value,
  [sym_custom_value_list] = sym_custom_value_list,
  [sym_custom] = sym_custom,
  [sym__entry] = sym__entry,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym__directive] = sym__directive,
  [sym__declarations] = sym__declarations,
  [sym__markdown_heading] = sym__markdown_heading,
  [sym__orgmode_heading] = sym__orgmode_heading,
  [sym_heading] = sym_heading,
  [sym__skipped_lines] = sym__skipped_lines,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_tags_links_repeat1] = aux_sym_tags_links_repeat1,
  [aux_sym_posting_or_kv_list_repeat1] = aux_sym_posting_or_kv_list_repeat1,
  [aux_sym_key_value_list_repeat1] = aux_sym_key_value_list_repeat1,
  [aux_sym_currency_list_repeat1] = aux_sym_currency_list_repeat1,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_cost_comp_list_repeat1] = aux_sym_cost_comp_list_repeat1,
  [aux_sym_custom_value_list_repeat1] = aux_sym_custom_value_list_repeat1,
  [aux_sym__markdown_heading_repeat1] = aux_sym__markdown_heading_repeat1,
  [aux_sym__orgmode_heading_repeat1] = aux_sym__orgmode_heading_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__pipe] = {
    .visible = false,
    .named = true,
  },
  [sym_atat] = {
    .visible = true,
    .named = true,
  },
  [sym_at] = {
    .visible = true,
    .named = true,
  },
  [sym_lcurllcurl] = {
    .visible = true,
    .named = true,
  },
  [sym_rcurlrcurl] = {
    .visible = true,
    .named = true,
  },
  [sym_lcurl] = {
    .visible = true,
    .named = true,
  },
  [sym_rcurl] = {
    .visible = true,
    .named = true,
  },
  [sym__equal] = {
    .visible = false,
    .named = true,
  },
  [sym__comma] = {
    .visible = false,
    .named = true,
  },
  [sym__tilde] = {
    .visible = false,
    .named = true,
  },
  [sym__hash] = {
    .visible = false,
    .named = true,
  },
  [sym_asterisk] = {
    .visible = true,
    .named = true,
  },
  [sym_slash] = {
    .visible = true,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym_plus] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [sym__lparen] = {
    .visible = false,
    .named = true,
  },
  [sym__rparen] = {
    .visible = false,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_TXN] = {
    .visible = true,
    .named = true,
  },
  [sym_BALANCE] = {
    .visible = true,
    .named = false,
  },
  [sym_OPEN] = {
    .visible = true,
    .named = false,
  },
  [sym_CLOSE] = {
    .visible = true,
    .named = false,
  },
  [sym_COMMODITY] = {
    .visible = true,
    .named = false,
  },
  [sym_PAD] = {
    .visible = true,
    .named = false,
  },
  [sym_EVENT] = {
    .visible = true,
    .named = false,
  },
  [sym_PRICE] = {
    .visible = true,
    .named = false,
  },
  [sym_NOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_DOCUMENT] = {
    .visible = true,
    .named = false,
  },
  [sym_QUERY] = {
    .visible = true,
    .named = false,
  },
  [sym_CUSTOM] = {
    .visible = true,
    .named = false,
  },
  [sym_PUSHTAG] = {
    .visible = true,
    .named = false,
  },
  [sym_POPTAG] = {
    .visible = true,
    .named = false,
  },
  [sym_PUSHMETA] = {
    .visible = true,
    .named = false,
  },
  [sym_POPMETA] = {
    .visible = true,
    .named = false,
  },
  [sym_OPTION] = {
    .visible = true,
    .named = false,
  },
  [sym_INCLUDE] = {
    .visible = true,
    .named = false,
  },
  [sym_PLUGIN] = {
    .visible = true,
    .named = false,
  },
  [sym__none] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__markdown_heading_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__UTF_8_1] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__UTF_8_2_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_3_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_4_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_4_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__UTF_8_4_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_txn] = {
    .visible = true,
    .named = true,
  },
  [sym__number_expr] = {
    .visible = false,
    .named = true,
  },
  [sym__paren__number_expr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_number_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_txn_strings] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_links] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_optflag] = {
    .visible = true,
    .named = true,
  },
  [sym_price_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_line] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_value] = {
    .visible = false,
    .named = true,
  },
  [sym_posting_or_kv_list] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_currency_list] = {
    .visible = true,
    .named = true,
  },
  [sym_pushtag] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag] = {
    .visible = true,
    .named = true,
  },
  [sym_pushmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_popmeta] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_opt_booking] = {
    .visible = true,
    .named = true,
  },
  [sym_close] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_balance] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_tolerance] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_cost_spec] = {
    .visible = true,
    .named = true,
  },
  [sym_cost_comp_list] = {
    .visible = true,
    .named = true,
  },
  [sym_cost_comp] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_value] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_value_list] = {
    .visible = true,
    .named = true,
  },
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym__entry] = {
    .visible = false,
    .named = true,
  },
  [sym_option] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [sym__directive] = {
    .visible = false,
    .named = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym__markdown_heading] = {
    .visible = false,
    .named = true,
  },
  [sym__orgmode_heading] = {
    .visible = false,
    .named = true,
  },
  [sym_heading] = {
    .visible = true,
    .named = true,
  },
  [sym__skipped_lines] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_links_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_posting_or_kv_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_currency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_value_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__markdown_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__orgmode_heading_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_account = 1,
  field_amount = 2,
  field_comment = 3,
  field_cost_comp_list = 4,
  field_cost_spec = 5,
  field_currencies = 6,
  field_currency = 7,
  field_custom_value_list = 8,
  field_date = 9,
  field_desc = 10,
  field_filename = 11,
  field_from_account = 12,
  field_key = 13,
  field_name = 14,
  field_note = 15,
  field_opt_booking = 16,
  field_optflag = 17,
  field_per = 18,
  field_posting_or_kv_list = 19,
  field_price_annotation = 20,
  field_query = 21,
  field_tags_links = 22,
  field_total = 23,
  field_txn = 24,
  field_txn_strings = 25,
  field_type = 26,
  field_value = 27,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_comment] = "comment",
  [field_cost_comp_list] = "cost_comp_list",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_custom_value_list] = "custom_value_list",
  [field_date] = "date",
  [field_desc] = "desc",
  [field_filename] = "filename",
  [field_from_account] = "from_account",
  [field_key] = "key",
  [field_name] = "name",
  [field_note] = "note",
  [field_opt_booking] = "opt_booking",
  [field_optflag] = "optflag",
  [field_per] = "per",
  [field_posting_or_kv_list] = "posting_or_kv_list",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_tags_links] = "tags_links",
  [field_total] = "total",
  [field_txn] = "txn",
  [field_txn_strings] = "txn_strings",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 3},
  [7] = {.index = 13, .length = 3},
  [8] = {.index = 16, .length = 3},
  [9] = {.index = 19, .length = 3},
  [10] = {.index = 22, .length = 3},
  [11] = {.index = 25, .length = 3},
  [12] = {.index = 28, .length = 3},
  [13] = {.index = 31, .length = 3},
  [14] = {.index = 34, .length = 3},
  [15] = {.index = 37, .length = 3},
  [16] = {.index = 40, .length = 3},
  [17] = {.index = 43, .length = 3},
  [18] = {.index = 46, .length = 3},
  [19] = {.index = 49, .length = 3},
  [20] = {.index = 52, .length = 3},
  [21] = {.index = 55, .length = 3},
  [22] = {.index = 58, .length = 4},
  [23] = {.index = 62, .length = 4},
  [24] = {.index = 66, .length = 4},
  [25] = {.index = 70, .length = 4},
  [26] = {.index = 74, .length = 4},
  [27] = {.index = 78, .length = 4},
  [28] = {.index = 82, .length = 4},
  [29] = {.index = 86, .length = 4},
  [30] = {.index = 90, .length = 4},
  [31] = {.index = 94, .length = 4},
  [32] = {.index = 98, .length = 4},
  [33] = {.index = 102, .length = 4},
  [34] = {.index = 106, .length = 1},
  [35] = {.index = 107, .length = 5},
  [36] = {.index = 112, .length = 5},
  [37] = {.index = 117, .length = 5},
  [38] = {.index = 122, .length = 5},
  [39] = {.index = 127, .length = 5},
  [40] = {.index = 132, .length = 1},
  [41] = {.index = 133, .length = 1},
  [42] = {.index = 134, .length = 2},
  [43] = {.index = 136, .length = 2},
  [44] = {.index = 138, .length = 2},
  [45] = {.index = 140, .length = 2},
  [46] = {.index = 142, .length = 6},
  [47] = {.index = 148, .length = 2},
  [48] = {.index = 150, .length = 2},
  [49] = {.index = 152, .length = 1},
  [50] = {.index = 153, .length = 2},
  [51] = {.index = 155, .length = 1},
  [52] = {.index = 156, .length = 3},
  [53] = {.index = 159, .length = 3},
  [54] = {.index = 162, .length = 3},
  [55] = {.index = 165, .length = 3},
  [56] = {.index = 168, .length = 3},
  [57] = {.index = 171, .length = 3},
  [58] = {.index = 174, .length = 3},
  [59] = {.index = 177, .length = 2},
  [60] = {.index = 179, .length = 2},
  [61] = {.index = 181, .length = 3},
  [62] = {.index = 184, .length = 3},
  [63] = {.index = 187, .length = 4},
  [64] = {.index = 191, .length = 3},
  [65] = {.index = 194, .length = 3},
  [66] = {.index = 197, .length = 3},
  [67] = {.index = 200, .length = 3},
  [68] = {.index = 203, .length = 4},
  [69] = {.index = 207, .length = 4},
  [70] = {.index = 211, .length = 4},
  [71] = {.index = 215, .length = 3},
  [72] = {.index = 218, .length = 4},
  [73] = {.index = 222, .length = 4},
  [74] = {.index = 226, .length = 4},
  [75] = {.index = 230, .length = 4},
  [76] = {.index = 234, .length = 4},
  [77] = {.index = 238, .length = 4},
  [78] = {.index = 242, .length = 4},
  [79] = {.index = 246, .length = 5},
  [80] = {.index = 251, .length = 4},
  [81] = {.index = 255, .length = 4},
  [82] = {.index = 259, .length = 5},
  [83] = {.index = 264, .length = 5},
  [84] = {.index = 269, .length = 5},
  [85] = {.index = 274, .length = 5},
  [86] = {.index = 279, .length = 5},
  [87] = {.index = 284, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_date, 0},
    {field_txn, 1},
  [2] =
    {field_key, 1},
    {field_value, 2},
  [4] =
    {field_account, 2},
    {field_date, 0},
  [6] =
    {field_currency, 2},
    {field_date, 0},
  [8] =
    {field_date, 0},
    {field_name, 2},
  [10] =
    {field_date, 0},
    {field_posting_or_kv_list, 3},
    {field_txn, 1},
  [13] =
    {field_comment, 2},
    {field_date, 0},
    {field_txn, 1},
  [16] =
    {field_date, 0},
    {field_txn, 1},
    {field_txn_strings, 2},
  [19] =
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [22] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [25] =
    {field_account, 2},
    {field_comment, 3},
    {field_date, 0},
  [28] =
    {field_account, 2},
    {field_date, 0},
    {field_opt_booking, 3},
  [31] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [34] =
    {field_comment, 3},
    {field_currency, 2},
    {field_date, 0},
  [37] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [40] =
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [43] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [46] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [49] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [52] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [55] =
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [58] =
    {field_comment, 2},
    {field_date, 0},
    {field_posting_or_kv_list, 4},
    {field_txn, 1},
  [62] =
    {field_date, 0},
    {field_posting_or_kv_list, 4},
    {field_txn, 1},
    {field_txn_strings, 2},
  [66] =
    {field_comment, 3},
    {field_date, 0},
    {field_txn, 1},
    {field_txn_strings, 2},
  [70] =
    {field_date, 0},
    {field_tags_links, 3},
    {field_txn, 1},
    {field_txn_strings, 2},
  [74] =
    {field_date, 0},
    {field_posting_or_kv_list, 4},
    {field_tags_links, 2},
    {field_txn, 1},
  [78] =
    {field_comment, 3},
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [82] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_date, 0},
  [86] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_opt_booking, 3},
  [90] =
    {field_account, 2},
    {field_comment, 4},
    {field_currencies, 3},
    {field_date, 0},
  [94] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [98] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_from_account, 3},
  [102] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [106] =
    {field_account, 1},
  [107] =
    {field_comment, 3},
    {field_date, 0},
    {field_posting_or_kv_list, 5},
    {field_txn, 1},
    {field_txn_strings, 2},
  [112] =
    {field_date, 0},
    {field_posting_or_kv_list, 5},
    {field_tags_links, 3},
    {field_txn, 1},
    {field_txn_strings, 2},
  [117] =
    {field_comment, 4},
    {field_date, 0},
    {field_tags_links, 3},
    {field_txn, 1},
    {field_txn_strings, 2},
  [122] =
    {field_comment, 3},
    {field_date, 0},
    {field_posting_or_kv_list, 5},
    {field_tags_links, 2},
    {field_txn, 1},
  [127] =
    {field_account, 2},
    {field_comment, 5},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [132] =
    {field_currency, 0},
  [133] =
    {field_per, 0},
  [134] =
    {field_account, 1},
    {field_comment, 2},
  [136] =
    {field_account, 1},
    {field_amount, 2},
  [138] =
    {field_account, 1},
    {field_cost_spec, 2},
  [140] =
    {field_account, 2},
    {field_optflag, 1},
  [142] =
    {field_comment, 4},
    {field_date, 0},
    {field_posting_or_kv_list, 6},
    {field_tags_links, 3},
    {field_txn, 1},
    {field_txn_strings, 2},
  [148] =
    {field_account, 1},
    {field_comment, 3},
  [150] =
    {field_account, 1},
    {field_price_annotation, 3},
  [152] =
    {field_currency, 1},
  [153] =
    {field_currency, 1},
    {field_per, 0},
  [155] =
    {field_cost_comp_list, 1},
  [156] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 3},
  [159] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [162] =
    {field_account, 1},
    {field_comment, 3},
    {field_cost_spec, 2},
  [165] =
    {field_account, 2},
    {field_comment, 3},
    {field_optflag, 1},
  [168] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
  [171] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [174] =
    {field_account, 1},
    {field_comment, 4},
    {field_price_annotation, 3},
  [177] =
    {field_currency, 2},
    {field_total, 1},
  [179] =
    {field_currency, 2},
    {field_per, 0},
  [181] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
  [184] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 4},
  [187] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
  [191] =
    {field_account, 1},
    {field_comment, 4},
    {field_cost_spec, 2},
  [194] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [197] =
    {field_account, 2},
    {field_comment, 4},
    {field_optflag, 1},
  [200] =
    {field_account, 2},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [203] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_optflag, 1},
  [207] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [211] =
    {field_account, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [215] =
    {field_currency, 3},
    {field_per, 0},
    {field_total, 2},
  [218] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_price_annotation, 4},
  [222] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
  [226] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [230] =
    {field_account, 1},
    {field_comment, 5},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [234] =
    {field_account, 2},
    {field_comment, 5},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [238] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_optflag, 1},
  [242] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [246] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [251] =
    {field_account, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [255] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [259] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [264] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [269] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [274] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
  [279] =
    {field_account, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [284] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 7},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '|') ADVANCE(95);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == 224) ADVANCE(83);
      if (lookahead == 237) ADVANCE(82);
      if (lookahead == 240) ADVANCE(85);
      if (lookahead == 244) ADVANCE(81);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(183);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(117);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(198);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(196);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(195);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(87);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      if (lookahead != 0 &&
          lookahead > 127) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == 'F') ADVANCE(32);
      if (lookahead == 'T') ADVANCE(33);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead > 127) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(42);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '@') ADVANCE(97);
      if (lookahead == '^') ADVANCE(88);
      if (lookahead == '{') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(117);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead > '>' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(86);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == ')') ADVANCE(116);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == ',') ADVANCE(104);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '~') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '(') ADVANCE(115);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(183);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(53);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(179);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(130);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(138);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'A') ADVANCE(151);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(153);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(152);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(75);
      if (lookahead == '1') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '3') ADVANCE(51);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(77);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'A') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'R') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(119);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '}') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(124);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 54:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      END_STATE();
    case 55:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 56:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 57:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 58:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      END_STATE();
    case 59:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 60:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      END_STATE();
    case 61:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      END_STATE();
    case 62:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 63:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      END_STATE();
    case 64:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      END_STATE();
    case 65:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 66:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 67:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      END_STATE();
    case 68:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 69:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 70:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 71:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      END_STATE();
    case 72:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 73:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 74:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 75:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 76:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 81:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(203);
      END_STATE();
    case 82:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(199);
      END_STATE();
    case 83:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(197);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 85:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(201);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 87:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 88:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 89:
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(125);
      END_STATE();
    case 90:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '}') ADVANCE(101);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(90)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      if (lookahead == '\n') ADVANCE(94);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == ':') ADVANCE(112);
      if (lookahead == ';') ADVANCE(194);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(117);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__pipe);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_atat);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_at);
      if (lookahead == '@') ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_lcurllcurl);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_rcurlrcurl);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_lcurl);
      if (lookahead == '{') ADVANCE(98);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_rcurl);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_rcurl);
      if (lookahead == '}') ADVANCE(99);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__hash);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__hash);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__hash);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_asterisk);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_slash);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__lparen);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__rparen);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__none);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__none);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(120);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(149);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(145);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(178);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__markdown_heading_token1);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__markdown_heading_token1);
      if (lookahead == '*') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__markdown_heading_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__markdown_heading_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__UTF_8_1);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__UTF_8_2_token1);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token1);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token2);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token3);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token4);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token1);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token2);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token3);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'd') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(6);
      if (lookahead == 'o') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(8);
      if (lookahead == 'q') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 4:
      if (lookahead == 'v') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'l') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(22);
      if (lookahead == 'r') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(37);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(38);
      END_STATE();
    case 22:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_PAD);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_TXN);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(64);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_NOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_OPEN);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_CLOSE);
      END_STATE();
    case 62:
      if (lookahead == 'd') ADVANCE(76);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_EVENT);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_PRICE);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_QUERY);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_CUSTOM);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_OPTION);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_PLUGIN);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_POPTAG);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_BALANCE);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_INCLUDE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_POPMETA);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_PUSHTAG);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_DOCUMENT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_PUSHMETA);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_COMMODITY);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 91},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 91},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 91},
  [19] = {.lex_state = 91},
  [20] = {.lex_state = 91},
  [21] = {.lex_state = 91},
  [22] = {.lex_state = 91},
  [23] = {.lex_state = 91},
  [24] = {.lex_state = 91},
  [25] = {.lex_state = 91},
  [26] = {.lex_state = 91},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 91},
  [29] = {.lex_state = 91},
  [30] = {.lex_state = 91},
  [31] = {.lex_state = 91},
  [32] = {.lex_state = 91},
  [33] = {.lex_state = 91},
  [34] = {.lex_state = 91},
  [35] = {.lex_state = 91},
  [36] = {.lex_state = 91},
  [37] = {.lex_state = 91},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 91},
  [40] = {.lex_state = 91},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 91},
  [45] = {.lex_state = 91},
  [46] = {.lex_state = 91},
  [47] = {.lex_state = 91},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 91},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 91},
  [53] = {.lex_state = 91},
  [54] = {.lex_state = 91},
  [55] = {.lex_state = 91},
  [56] = {.lex_state = 91},
  [57] = {.lex_state = 91},
  [58] = {.lex_state = 91},
  [59] = {.lex_state = 91},
  [60] = {.lex_state = 91},
  [61] = {.lex_state = 91},
  [62] = {.lex_state = 91},
  [63] = {.lex_state = 91},
  [64] = {.lex_state = 91},
  [65] = {.lex_state = 91},
  [66] = {.lex_state = 91},
  [67] = {.lex_state = 91},
  [68] = {.lex_state = 90},
  [69] = {.lex_state = 91},
  [70] = {.lex_state = 91},
  [71] = {.lex_state = 91},
  [72] = {.lex_state = 91},
  [73] = {.lex_state = 91},
  [74] = {.lex_state = 91},
  [75] = {.lex_state = 91},
  [76] = {.lex_state = 91},
  [77] = {.lex_state = 91},
  [78] = {.lex_state = 91},
  [79] = {.lex_state = 91},
  [80] = {.lex_state = 91},
  [81] = {.lex_state = 91},
  [82] = {.lex_state = 91},
  [83] = {.lex_state = 91},
  [84] = {.lex_state = 5},
  [85] = {.lex_state = 91},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 91},
  [88] = {.lex_state = 91},
  [89] = {.lex_state = 91},
  [90] = {.lex_state = 91},
  [91] = {.lex_state = 91},
  [92] = {.lex_state = 91},
  [93] = {.lex_state = 91},
  [94] = {.lex_state = 91},
  [95] = {.lex_state = 91},
  [96] = {.lex_state = 91},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 91},
  [99] = {.lex_state = 91},
  [100] = {.lex_state = 91},
  [101] = {.lex_state = 90},
  [102] = {.lex_state = 90},
  [103] = {.lex_state = 90},
  [104] = {.lex_state = 90},
  [105] = {.lex_state = 90},
  [106] = {.lex_state = 90},
  [107] = {.lex_state = 90},
  [108] = {.lex_state = 90},
  [109] = {.lex_state = 90},
  [110] = {.lex_state = 90},
  [111] = {.lex_state = 90},
  [112] = {.lex_state = 90},
  [113] = {.lex_state = 90},
  [114] = {.lex_state = 90},
  [115] = {.lex_state = 90},
  [116] = {.lex_state = 90},
  [117] = {.lex_state = 90},
  [118] = {.lex_state = 90},
  [119] = {.lex_state = 90},
  [120] = {.lex_state = 90},
  [121] = {.lex_state = 90},
  [122] = {.lex_state = 90},
  [123] = {.lex_state = 90},
  [124] = {.lex_state = 90},
  [125] = {.lex_state = 90},
  [126] = {.lex_state = 90},
  [127] = {.lex_state = 90},
  [128] = {.lex_state = 90},
  [129] = {.lex_state = 90},
  [130] = {.lex_state = 90},
  [131] = {.lex_state = 90},
  [132] = {.lex_state = 90},
  [133] = {.lex_state = 90},
  [134] = {.lex_state = 90},
  [135] = {.lex_state = 90},
  [136] = {.lex_state = 90},
  [137] = {.lex_state = 90},
  [138] = {.lex_state = 90},
  [139] = {.lex_state = 90},
  [140] = {.lex_state = 90},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 90},
  [143] = {.lex_state = 90},
  [144] = {.lex_state = 90},
  [145] = {.lex_state = 90},
  [146] = {.lex_state = 90},
  [147] = {.lex_state = 5},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 3},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 5},
  [153] = {.lex_state = 5},
  [154] = {.lex_state = 3},
  [155] = {.lex_state = 3},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 5},
  [163] = {.lex_state = 5},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 4},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 5},
  [169] = {.lex_state = 4},
  [170] = {.lex_state = 5},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 5},
  [173] = {.lex_state = 5},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 5},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 5},
  [178] = {.lex_state = 5},
  [179] = {.lex_state = 5},
  [180] = {.lex_state = 5},
  [181] = {.lex_state = 5},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 1},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 1},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 190},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 190},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 189},
  [230] = {.lex_state = 189},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 2},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 2},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 191},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 2},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 2},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 1},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 2},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 90},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 2},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 2},
  [338] = {.lex_state = 2},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__pipe] = ACTIONS(1),
    [sym_atat] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [sym_lcurllcurl] = ACTIONS(1),
    [sym_rcurlrcurl] = ACTIONS(1),
    [sym_lcurl] = ACTIONS(1),
    [sym_rcurl] = ACTIONS(1),
    [sym__equal] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym__tilde] = ACTIONS(1),
    [sym__hash] = ACTIONS(1),
    [sym_asterisk] = ACTIONS(1),
    [sym_slash] = ACTIONS(1),
    [sym__colon] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym__lparen] = ACTIONS(1),
    [sym__rparen] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym_TXN] = ACTIONS(1),
    [sym_BALANCE] = ACTIONS(1),
    [sym_OPEN] = ACTIONS(1),
    [sym_CLOSE] = ACTIONS(1),
    [sym_COMMODITY] = ACTIONS(1),
    [sym_PAD] = ACTIONS(1),
    [sym_EVENT] = ACTIONS(1),
    [sym_PRICE] = ACTIONS(1),
    [sym_NOTE] = ACTIONS(1),
    [sym_DOCUMENT] = ACTIONS(1),
    [sym_QUERY] = ACTIONS(1),
    [sym_CUSTOM] = ACTIONS(1),
    [sym_PUSHTAG] = ACTIONS(1),
    [sym_POPTAG] = ACTIONS(1),
    [sym_PUSHMETA] = ACTIONS(1),
    [sym_POPMETA] = ACTIONS(1),
    [sym_OPTION] = ACTIONS(1),
    [sym_INCLUDE] = ACTIONS(1),
    [sym_PLUGIN] = ACTIONS(1),
    [sym__none] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__UTF_8_1] = ACTIONS(1),
    [aux_sym__UTF_8_2_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token2] = ACTIONS(1),
    [aux_sym__UTF_8_3_token3] = ACTIONS(1),
    [aux_sym__UTF_8_3_token4] = ACTIONS(1),
    [aux_sym__UTF_8_4_token1] = ACTIONS(1),
    [aux_sym__UTF_8_4_token2] = ACTIONS(1),
    [aux_sym__UTF_8_4_token3] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(321),
    [sym_transaction] = STATE(3),
    [sym_pushtag] = STATE(3),
    [sym_poptag] = STATE(3),
    [sym_pushmeta] = STATE(3),
    [sym_popmeta] = STATE(3),
    [sym_open] = STATE(3),
    [sym_close] = STATE(3),
    [sym_commodity] = STATE(3),
    [sym_pad] = STATE(3),
    [sym_balance] = STATE(3),
    [sym_price] = STATE(3),
    [sym_event] = STATE(3),
    [sym_query] = STATE(3),
    [sym_note] = STATE(3),
    [sym_document] = STATE(3),
    [sym_custom] = STATE(3),
    [sym__entry] = STATE(3),
    [sym_option] = STATE(3),
    [sym_include] = STATE(3),
    [sym_plugin] = STATE(3),
    [sym__directive] = STATE(3),
    [sym__declarations] = STATE(3),
    [sym__markdown_heading] = STATE(131),
    [sym__orgmode_heading] = STATE(131),
    [sym_heading] = STATE(3),
    [sym__skipped_lines] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [aux_sym__markdown_heading_repeat1] = STATE(229),
    [aux_sym__orgmode_heading_repeat1] = STATE(227),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__eol] = ACTIONS(5),
    [sym__hash] = ACTIONS(7),
    [sym_asterisk] = ACTIONS(9),
    [sym__colon] = ACTIONS(11),
    [sym_flag] = ACTIONS(13),
    [sym_PUSHTAG] = ACTIONS(15),
    [sym_POPTAG] = ACTIONS(17),
    [sym_PUSHMETA] = ACTIONS(19),
    [sym_POPMETA] = ACTIONS(21),
    [sym_OPTION] = ACTIONS(23),
    [sym_INCLUDE] = ACTIONS(25),
    [sym_PLUGIN] = ACTIONS(27),
    [sym_date] = ACTIONS(29),
    [sym_comment] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym__eol,
    ACTIONS(38), 1,
      sym__hash,
    ACTIONS(41), 1,
      sym_asterisk,
    ACTIONS(44), 1,
      sym__colon,
    ACTIONS(47), 1,
      sym_flag,
    ACTIONS(50), 1,
      sym_PUSHTAG,
    ACTIONS(53), 1,
      sym_POPTAG,
    ACTIONS(56), 1,
      sym_PUSHMETA,
    ACTIONS(59), 1,
      sym_POPMETA,
    ACTIONS(62), 1,
      sym_OPTION,
    ACTIONS(65), 1,
      sym_INCLUDE,
    ACTIONS(68), 1,
      sym_PLUGIN,
    ACTIONS(71), 1,
      sym_date,
    ACTIONS(74), 1,
      sym_comment,
    STATE(227), 1,
      aux_sym__orgmode_heading_repeat1,
    STATE(229), 1,
      aux_sym__markdown_heading_repeat1,
    STATE(131), 2,
      sym__markdown_heading,
      sym__orgmode_heading,
    STATE(2), 25,
      sym_transaction,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
      sym__entry,
      sym_option,
      sym_include,
      sym_plugin,
      sym__directive,
      sym__declarations,
      sym_heading,
      sym__skipped_lines,
      aux_sym_file_repeat1,
  [83] = 19,
    ACTIONS(7), 1,
      sym__hash,
    ACTIONS(9), 1,
      sym_asterisk,
    ACTIONS(11), 1,
      sym__colon,
    ACTIONS(13), 1,
      sym_flag,
    ACTIONS(15), 1,
      sym_PUSHTAG,
    ACTIONS(17), 1,
      sym_POPTAG,
    ACTIONS(19), 1,
      sym_PUSHMETA,
    ACTIONS(21), 1,
      sym_POPMETA,
    ACTIONS(23), 1,
      sym_OPTION,
    ACTIONS(25), 1,
      sym_INCLUDE,
    ACTIONS(27), 1,
      sym_PLUGIN,
    ACTIONS(29), 1,
      sym_date,
    ACTIONS(31), 1,
      sym_comment,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      sym__eol,
    STATE(227), 1,
      aux_sym__orgmode_heading_repeat1,
    STATE(229), 1,
      aux_sym__markdown_heading_repeat1,
    STATE(131), 2,
      sym__markdown_heading,
      sym__orgmode_heading,
    STATE(2), 25,
      sym_transaction,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_open,
      sym_close,
      sym_commodity,
      sym_pad,
      sym_balance,
      sym_price,
      sym_event,
      sym_query,
      sym_note,
      sym_document,
      sym_custom,
      sym__entry,
      sym_option,
      sym_include,
      sym_plugin,
      sym__directive,
      sym__declarations,
      sym_heading,
      sym__skipped_lines,
      aux_sym_file_repeat1,
  [166] = 5,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym__indent,
    STATE(107), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(85), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [197] = 5,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(89), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [228] = 5,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(93), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [259] = 5,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(97), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [290] = 5,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(101), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [321] = 5,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(105), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [352] = 5,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    STATE(125), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(109), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [383] = 5,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_posting_or_kv_list,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(113), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [414] = 5,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      sym__indent,
    STATE(135), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(119), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [444] = 4,
    ACTIONS(83), 1,
      sym__indent,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    STATE(37), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(123), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [472] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(127), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [502] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(124), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(131), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [532] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(135), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [562] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(137), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(139), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [592] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(143), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [622] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(145), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(147), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [652] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(151), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [682] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(128), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(155), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [712] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(140), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(159), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [742] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
    STATE(116), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(163), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [772] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(167), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [802] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(169), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(171), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [832] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(175), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [862] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(179), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [892] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    STATE(101), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(183), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [922] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(187), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [952] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    STATE(143), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(191), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [982] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(137), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(195), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1012] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(138), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(199), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1042] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(203), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1072] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(207), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1102] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    STATE(111), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(211), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1132] = 5,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(127), 1,
      sym_key_value_list,
    STATE(40), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(215), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1162] = 4,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(219), 1,
      sym__indent,
    STATE(37), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(222), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1190] = 8,
    ACTIONS(224), 1,
      sym__eol,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(258), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(230), 3,
      sym__none,
      sym_bool,
      sym_currency,
    ACTIONS(232), 4,
      sym_date,
      sym_account,
      sym_string,
      sym_tag,
    STATE(190), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1225] = 4,
    ACTIONS(236), 1,
      ts_builtin_sym_end,
    ACTIONS(238), 1,
      sym__indent,
    STATE(39), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(241), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1252] = 4,
    ACTIONS(117), 1,
      sym__indent,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    STATE(39), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(245), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1279] = 11,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(247), 1,
      sym_rcurl,
    ACTIONS(249), 1,
      sym__hash,
    ACTIONS(253), 1,
      sym_currency,
    ACTIONS(255), 1,
      sym_number,
    STATE(211), 1,
      sym_cost_comp,
    STATE(224), 1,
      sym_compound_amount,
    STATE(332), 1,
      sym_cost_comp_list,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    ACTIONS(251), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(167), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1319] = 11,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(247), 1,
      sym_rcurlrcurl,
    ACTIONS(249), 1,
      sym__hash,
    ACTIONS(253), 1,
      sym_currency,
    ACTIONS(255), 1,
      sym_number,
    STATE(211), 1,
      sym_cost_comp,
    STATE(224), 1,
      sym_compound_amount,
    STATE(337), 1,
      sym_cost_comp_list,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    ACTIONS(251), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(167), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1359] = 10,
    ACTIONS(257), 1,
      sym__eol,
    ACTIONS(261), 1,
      sym__lparen,
    ACTIONS(263), 1,
      sym_bool,
    ACTIONS(267), 1,
      sym_number,
    STATE(166), 1,
      sym_amount,
    STATE(282), 1,
      sym_custom_value_list,
    ACTIONS(259), 2,
      sym_plus,
      sym_minus,
    STATE(97), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(265), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(157), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1397] = 2,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(271), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1418] = 2,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(275), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1439] = 2,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(279), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1460] = 2,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(283), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1481] = 2,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(287), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1502] = 12,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(289), 1,
      sym__eol,
    ACTIONS(291), 1,
      sym_atat,
    ACTIONS(293), 1,
      sym_at,
    ACTIONS(295), 1,
      sym_lcurllcurl,
    ACTIONS(297), 1,
      sym_lcurl,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(301), 1,
      sym_comment,
    STATE(184), 1,
      sym_incomplete_amount,
    STATE(215), 1,
      sym_cost_spec,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1543] = 2,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(222), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1564] = 9,
    ACTIONS(303), 1,
      sym__eol,
    ACTIONS(308), 1,
      sym__lparen,
    ACTIONS(311), 1,
      sym_bool,
    ACTIONS(317), 1,
      sym_number,
    STATE(166), 1,
      sym_amount,
    ACTIONS(305), 2,
      sym_plus,
      sym_minus,
    STATE(51), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(314), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(157), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1599] = 2,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(322), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1620] = 2,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(326), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1641] = 2,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(330), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1662] = 2,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(334), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1683] = 2,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(338), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1704] = 2,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(342), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1725] = 2,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(346), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1746] = 2,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(350), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1767] = 2,
    ACTIONS(352), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(354), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1788] = 2,
    ACTIONS(356), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(358), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1809] = 2,
    ACTIONS(360), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(362), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1830] = 2,
    ACTIONS(364), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(366), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1851] = 2,
    ACTIONS(368), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(370), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1872] = 2,
    ACTIONS(372), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(374), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1893] = 2,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(378), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1914] = 2,
    ACTIONS(380), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(382), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [1935] = 14,
    ACTIONS(386), 1,
      sym_flag,
    ACTIONS(388), 1,
      sym_BALANCE,
    ACTIONS(390), 1,
      sym_OPEN,
    ACTIONS(392), 1,
      sym_CLOSE,
    ACTIONS(394), 1,
      sym_COMMODITY,
    ACTIONS(396), 1,
      sym_PAD,
    ACTIONS(398), 1,
      sym_EVENT,
    ACTIONS(400), 1,
      sym_PRICE,
    ACTIONS(402), 1,
      sym_NOTE,
    ACTIONS(404), 1,
      sym_DOCUMENT,
    ACTIONS(406), 1,
      sym_QUERY,
    ACTIONS(408), 1,
      sym_CUSTOM,
    STATE(176), 1,
      sym_txn,
    ACTIONS(384), 3,
      sym__hash,
      sym_asterisk,
      sym_TXN,
  [1980] = 2,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(412), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2001] = 2,
    ACTIONS(414), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(416), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2022] = 2,
    ACTIONS(418), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(420), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2043] = 2,
    ACTIONS(422), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(424), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2064] = 2,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(428), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2085] = 2,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(432), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2106] = 2,
    ACTIONS(434), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(436), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2127] = 2,
    ACTIONS(438), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(440), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2148] = 2,
    ACTIONS(442), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(444), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2169] = 2,
    ACTIONS(446), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(448), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2190] = 2,
    ACTIONS(450), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(452), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2211] = 2,
    ACTIONS(454), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(456), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2232] = 2,
    ACTIONS(236), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(241), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2253] = 2,
    ACTIONS(458), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(460), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2274] = 2,
    ACTIONS(462), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(464), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2295] = 12,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(295), 1,
      sym_lcurllcurl,
    ACTIONS(297), 1,
      sym_lcurl,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(466), 1,
      sym__eol,
    ACTIONS(468), 1,
      sym_atat,
    ACTIONS(470), 1,
      sym_at,
    ACTIONS(472), 1,
      sym_comment,
    STATE(183), 1,
      sym_incomplete_amount,
    STATE(210), 1,
      sym_cost_spec,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2336] = 2,
    ACTIONS(474), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(476), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2357] = 2,
    ACTIONS(478), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(480), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2378] = 2,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(484), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2399] = 2,
    ACTIONS(486), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(488), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2420] = 2,
    ACTIONS(490), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(492), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2441] = 2,
    ACTIONS(494), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(496), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2462] = 2,
    ACTIONS(498), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(500), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2483] = 2,
    ACTIONS(502), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(504), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2504] = 2,
    ACTIONS(506), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(508), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2525] = 2,
    ACTIONS(510), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(512), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2546] = 2,
    ACTIONS(514), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(516), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2567] = 2,
    ACTIONS(518), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(520), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2588] = 9,
    ACTIONS(261), 1,
      sym__lparen,
    ACTIONS(263), 1,
      sym_bool,
    ACTIONS(267), 1,
      sym_number,
    ACTIONS(522), 1,
      sym__eol,
    STATE(166), 1,
      sym_amount,
    ACTIONS(259), 2,
      sym_plus,
      sym_minus,
    STATE(51), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(265), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(157), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2623] = 2,
    ACTIONS(524), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(526), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2644] = 2,
    ACTIONS(528), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(530), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2665] = 2,
    ACTIONS(532), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(534), 14,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_flag,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2686] = 2,
    ACTIONS(538), 1,
      sym_flag,
    ACTIONS(536), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2706] = 2,
    ACTIONS(542), 1,
      sym_flag,
    ACTIONS(540), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2726] = 2,
    ACTIONS(546), 1,
      sym_flag,
    ACTIONS(544), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2746] = 2,
    ACTIONS(550), 1,
      sym_flag,
    ACTIONS(548), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2766] = 2,
    ACTIONS(554), 1,
      sym_flag,
    ACTIONS(552), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2786] = 2,
    ACTIONS(558), 1,
      sym_flag,
    ACTIONS(556), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2806] = 2,
    ACTIONS(562), 1,
      sym_flag,
    ACTIONS(560), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2826] = 2,
    ACTIONS(566), 1,
      sym_flag,
    ACTIONS(564), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2846] = 2,
    ACTIONS(570), 1,
      sym_flag,
    ACTIONS(568), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2866] = 2,
    ACTIONS(574), 1,
      sym_flag,
    ACTIONS(572), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2886] = 2,
    ACTIONS(578), 1,
      sym_flag,
    ACTIONS(576), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2906] = 2,
    ACTIONS(582), 1,
      sym_flag,
    ACTIONS(580), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2926] = 2,
    ACTIONS(586), 1,
      sym_flag,
    ACTIONS(584), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2946] = 2,
    ACTIONS(590), 1,
      sym_flag,
    ACTIONS(588), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2966] = 2,
    ACTIONS(594), 1,
      sym_flag,
    ACTIONS(592), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [2986] = 2,
    ACTIONS(598), 1,
      sym_flag,
    ACTIONS(596), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3006] = 2,
    ACTIONS(602), 1,
      sym_flag,
    ACTIONS(600), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3026] = 2,
    ACTIONS(606), 1,
      sym_flag,
    ACTIONS(604), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3046] = 2,
    ACTIONS(610), 1,
      sym_flag,
    ACTIONS(608), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3066] = 2,
    ACTIONS(614), 1,
      sym_flag,
    ACTIONS(612), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3086] = 2,
    ACTIONS(618), 1,
      sym_flag,
    ACTIONS(616), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3106] = 2,
    ACTIONS(622), 1,
      sym_flag,
    ACTIONS(620), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3126] = 2,
    ACTIONS(626), 1,
      sym_flag,
    ACTIONS(624), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3146] = 2,
    ACTIONS(630), 1,
      sym_flag,
    ACTIONS(628), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3166] = 2,
    ACTIONS(634), 1,
      sym_flag,
    ACTIONS(632), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3186] = 2,
    ACTIONS(638), 1,
      sym_flag,
    ACTIONS(636), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3206] = 2,
    ACTIONS(642), 1,
      sym_flag,
    ACTIONS(640), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3226] = 2,
    ACTIONS(646), 1,
      sym_flag,
    ACTIONS(644), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3246] = 2,
    ACTIONS(650), 1,
      sym_flag,
    ACTIONS(648), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3266] = 2,
    ACTIONS(654), 1,
      sym_flag,
    ACTIONS(652), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3286] = 2,
    ACTIONS(658), 1,
      sym_flag,
    ACTIONS(656), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3306] = 2,
    ACTIONS(662), 1,
      sym_flag,
    ACTIONS(660), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3326] = 2,
    ACTIONS(666), 1,
      sym_flag,
    ACTIONS(664), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3346] = 2,
    ACTIONS(670), 1,
      sym_flag,
    ACTIONS(668), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3366] = 2,
    ACTIONS(674), 1,
      sym_flag,
    ACTIONS(672), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3386] = 2,
    ACTIONS(678), 1,
      sym_flag,
    ACTIONS(676), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3406] = 2,
    ACTIONS(682), 1,
      sym_flag,
    ACTIONS(680), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3426] = 2,
    ACTIONS(686), 1,
      sym_flag,
    ACTIONS(684), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3446] = 2,
    ACTIONS(690), 1,
      sym_flag,
    ACTIONS(688), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3466] = 2,
    ACTIONS(694), 1,
      sym_flag,
    ACTIONS(692), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3486] = 9,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(249), 1,
      sym__hash,
    ACTIONS(253), 1,
      sym_currency,
    ACTIONS(255), 1,
      sym_number,
    STATE(224), 1,
      sym_compound_amount,
    STATE(228), 1,
      sym_cost_comp,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    ACTIONS(251), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(167), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3520] = 2,
    ACTIONS(698), 1,
      sym_flag,
    ACTIONS(696), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3540] = 2,
    ACTIONS(702), 1,
      sym_flag,
    ACTIONS(700), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3560] = 2,
    ACTIONS(706), 1,
      sym_flag,
    ACTIONS(704), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3580] = 2,
    ACTIONS(710), 1,
      sym_flag,
    ACTIONS(708), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3600] = 2,
    ACTIONS(714), 1,
      sym_flag,
    ACTIONS(712), 14,
      ts_builtin_sym_end,
      sym__eol,
      sym__hash,
      sym_asterisk,
      sym__colon,
      sym_PUSHTAG,
      sym_POPTAG,
      sym_PUSHMETA,
      sym_POPMETA,
      sym_OPTION,
      sym_INCLUDE,
      sym_PLUGIN,
      sym_date,
      sym_comment,
  [3620] = 11,
    ACTIONS(716), 1,
      sym__eol,
    ACTIONS(720), 1,
      sym_asterisk,
    ACTIONS(722), 1,
      sym_account,
    ACTIONS(726), 1,
      sym_key,
    ACTIONS(728), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_tags_links_repeat1,
    STATE(334), 1,
      sym_key_value,
    STATE(335), 1,
      sym_optflag,
    STATE(336), 1,
      sym_tags_links,
    ACTIONS(718), 2,
      sym__hash,
      sym_flag,
    ACTIONS(724), 2,
      sym_tag,
      sym_link,
  [3656] = 3,
    ACTIONS(732), 1,
      sym_rcurl,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(730), 9,
      sym__eol,
      sym_rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_plus,
      sym_minus,
      sym__rparen,
      sym_currency,
  [3675] = 2,
    ACTIONS(738), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(736), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3692] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(740), 1,
      sym__eol,
    ACTIONS(742), 1,
      sym_comment,
    STATE(234), 1,
      sym_price_annotation,
    STATE(235), 1,
      sym_incomplete_amount,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3721] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(744), 1,
      sym__eol,
    ACTIONS(746), 1,
      sym_comment,
    STATE(232), 1,
      sym_price_annotation,
    STATE(235), 1,
      sym_incomplete_amount,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3750] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(748), 1,
      sym__eol,
    ACTIONS(750), 1,
      sym_comment,
    STATE(235), 1,
      sym_incomplete_amount,
    STATE(244), 1,
      sym_price_annotation,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3779] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(752), 1,
      sym__eol,
    ACTIONS(754), 1,
      sym_comment,
    STATE(235), 1,
      sym_incomplete_amount,
    STATE(243), 1,
      sym_price_annotation,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3808] = 3,
    ACTIONS(756), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(732), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(730), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3827] = 2,
    ACTIONS(732), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(730), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3844] = 2,
    ACTIONS(760), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(758), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3861] = 5,
    ACTIONS(768), 1,
      sym_currency,
    ACTIONS(756), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(764), 2,
      sym_plus,
      sym_minus,
    ACTIONS(766), 2,
      sym_bool,
      sym_number,
    ACTIONS(762), 5,
      sym__eol,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3884] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(770), 1,
      sym__eol,
    ACTIONS(772), 1,
      sym_comment,
    STATE(235), 1,
      sym_incomplete_amount,
    STATE(240), 1,
      sym_price_annotation,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3913] = 2,
    ACTIONS(738), 1,
      sym_rcurl,
    ACTIONS(736), 11,
      sym__eol,
      sym_rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__rparen,
      sym_currency,
  [3930] = 2,
    ACTIONS(732), 1,
      sym_rcurl,
    ACTIONS(730), 11,
      sym__eol,
      sym_rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__rparen,
      sym_currency,
  [3947] = 2,
    ACTIONS(760), 1,
      sym_rcurl,
    ACTIONS(758), 11,
      sym__eol,
      sym_rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__rparen,
      sym_currency,
  [3964] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(774), 1,
      sym__eol,
    ACTIONS(776), 1,
      sym_comment,
    STATE(235), 1,
      sym_incomplete_amount,
    STATE(251), 1,
      sym_price_annotation,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3993] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(778), 1,
      sym__eol,
    ACTIONS(780), 1,
      sym_comment,
    STATE(235), 1,
      sym_incomplete_amount,
    STATE(247), 1,
      sym_price_annotation,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4022] = 8,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(299), 1,
      sym_number,
    ACTIONS(782), 1,
      sym__eol,
    ACTIONS(784), 1,
      sym_comment,
    STATE(235), 1,
      sym_incomplete_amount,
    STATE(239), 1,
      sym_price_annotation,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4051] = 5,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(786), 1,
      sym_currency,
    ACTIONS(788), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(194), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4071] = 2,
    ACTIONS(766), 2,
      sym_bool,
      sym_number,
    ACTIONS(762), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [4085] = 6,
    ACTIONS(792), 1,
      sym_rcurl,
    ACTIONS(794), 1,
      sym__hash,
    ACTIONS(798), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(790), 2,
      sym_rcurlrcurl,
      sym__comma,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4107] = 5,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(800), 1,
      sym_number,
    STATE(275), 1,
      sym_amount,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(196), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4127] = 2,
    ACTIONS(804), 2,
      sym_bool,
      sym_number,
    ACTIONS(802), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [4141] = 5,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(806), 1,
      sym_number,
    STATE(252), 1,
      sym_amount_tolerance,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(186), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4161] = 5,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(808), 1,
      sym_currency,
    ACTIONS(810), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4181] = 4,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(812), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(148), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4198] = 4,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(814), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(199), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4215] = 4,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(816), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(160), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4232] = 4,
    ACTIONS(261), 1,
      sym__lparen,
    ACTIONS(818), 1,
      sym_number,
    ACTIONS(259), 2,
      sym_plus,
      sym_minus,
    STATE(149), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4249] = 7,
    ACTIONS(820), 1,
      sym__eol,
    ACTIONS(822), 1,
      sym_string,
    ACTIONS(824), 1,
      sym_comment,
    STATE(192), 1,
      sym_txn_strings,
    STATE(205), 1,
      aux_sym_tags_links_repeat1,
    STATE(249), 1,
      sym_tags_links,
    ACTIONS(724), 2,
      sym_tag,
      sym_link,
  [4272] = 4,
    ACTIONS(261), 1,
      sym__lparen,
    ACTIONS(826), 1,
      sym_number,
    ACTIONS(259), 2,
      sym_plus,
      sym_minus,
    STATE(154), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4289] = 4,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(828), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(159), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4306] = 4,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(830), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(201), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4323] = 4,
    ACTIONS(261), 1,
      sym__lparen,
    ACTIONS(832), 1,
      sym_number,
    ACTIONS(259), 2,
      sym_plus,
      sym_minus,
    STATE(155), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4340] = 4,
    ACTIONS(228), 1,
      sym__lparen,
    ACTIONS(834), 1,
      sym_number,
    ACTIONS(226), 2,
      sym_plus,
      sym_minus,
    STATE(198), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4357] = 6,
    ACTIONS(836), 1,
      sym__eol,
    ACTIONS(838), 1,
      sym_currency,
    ACTIONS(840), 1,
      sym_string,
    ACTIONS(842), 1,
      sym_comment,
    STATE(233), 1,
      sym_opt_booking,
    STATE(187), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [4377] = 7,
    ACTIONS(295), 1,
      sym_lcurllcurl,
    ACTIONS(297), 1,
      sym_lcurl,
    ACTIONS(844), 1,
      sym__eol,
    ACTIONS(846), 1,
      sym_atat,
    ACTIONS(848), 1,
      sym_at,
    ACTIONS(850), 1,
      sym_comment,
    STATE(216), 1,
      sym_cost_spec,
  [4399] = 7,
    ACTIONS(295), 1,
      sym_lcurllcurl,
    ACTIONS(297), 1,
      sym_lcurl,
    ACTIONS(852), 1,
      sym__eol,
    ACTIONS(854), 1,
      sym_atat,
    ACTIONS(856), 1,
      sym_at,
    ACTIONS(858), 1,
      sym_comment,
    STATE(212), 1,
      sym_cost_spec,
  [4421] = 6,
    ACTIONS(838), 1,
      sym_currency,
    ACTIONS(840), 1,
      sym_string,
    ACTIONS(860), 1,
      sym__eol,
    ACTIONS(862), 1,
      sym_comment,
    STATE(246), 1,
      sym_opt_booking,
    STATE(182), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [4441] = 4,
    ACTIONS(864), 1,
      sym__tilde,
    ACTIONS(866), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4456] = 3,
    ACTIONS(870), 1,
      sym_currency,
    STATE(187), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
    ACTIONS(868), 3,
      sym__eol,
      sym_string,
      sym_comment,
  [4469] = 2,
    ACTIONS(875), 2,
      sym_at,
      sym_lcurl,
    ACTIONS(873), 4,
      sym__eol,
      sym_atat,
      sym_lcurllcurl,
      sym_comment,
  [4480] = 3,
    ACTIONS(879), 1,
      sym__comma,
    STATE(193), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(877), 4,
      sym__eol,
      sym_currency,
      sym_string,
      sym_comment,
  [4493] = 4,
    ACTIONS(881), 1,
      sym__eol,
    ACTIONS(883), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4508] = 3,
    ACTIONS(887), 1,
      sym__comma,
    STATE(191), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(885), 4,
      sym__eol,
      sym_currency,
      sym_string,
      sym_comment,
  [4521] = 5,
    ACTIONS(890), 1,
      sym__eol,
    ACTIONS(892), 1,
      sym_comment,
    STATE(205), 1,
      aux_sym_tags_links_repeat1,
    STATE(248), 1,
      sym_tags_links,
    ACTIONS(724), 2,
      sym_tag,
      sym_link,
  [4538] = 3,
    ACTIONS(879), 1,
      sym__comma,
    STATE(191), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(894), 4,
      sym__eol,
      sym_currency,
      sym_string,
      sym_comment,
  [4551] = 3,
    ACTIONS(896), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4563] = 3,
    ACTIONS(898), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4575] = 3,
    ACTIONS(883), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4587] = 1,
    ACTIONS(900), 5,
      sym__eol,
      sym_string,
      sym_tag,
      sym_link,
      sym_comment,
  [4595] = 3,
    ACTIONS(902), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4607] = 3,
    ACTIONS(904), 1,
      sym__rparen,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4619] = 3,
    ACTIONS(906), 1,
      sym_currency,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4631] = 3,
    ACTIONS(908), 1,
      sym__rparen,
    ACTIONS(734), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(796), 2,
      sym_plus,
      sym_minus,
  [4643] = 2,
    ACTIONS(912), 1,
      sym_string,
    ACTIONS(910), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [4653] = 1,
    ACTIONS(885), 5,
      sym__eol,
      sym__comma,
      sym_currency,
      sym_string,
      sym_comment,
  [4661] = 3,
    STATE(204), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(914), 2,
      sym__eol,
      sym_comment,
    ACTIONS(916), 2,
      sym_tag,
      sym_link,
  [4673] = 3,
    STATE(204), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(919), 2,
      sym__eol,
      sym_comment,
    ACTIONS(921), 2,
      sym_tag,
      sym_link,
  [4685] = 4,
    ACTIONS(923), 1,
      sym__eol,
    STATE(205), 1,
      aux_sym_tags_links_repeat1,
    STATE(333), 1,
      sym_tags_links,
    ACTIONS(724), 2,
      sym_tag,
      sym_link,
  [4699] = 2,
    ACTIONS(927), 1,
      sym_at,
    ACTIONS(925), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [4708] = 2,
    ACTIONS(931), 1,
      sym_at,
    ACTIONS(929), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [4717] = 1,
    ACTIONS(933), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [4724] = 4,
    ACTIONS(935), 1,
      sym__eol,
    ACTIONS(937), 1,
      sym_atat,
    ACTIONS(939), 1,
      sym_at,
    ACTIONS(941), 1,
      sym_comment,
  [4737] = 4,
    ACTIONS(943), 1,
      sym_rcurlrcurl,
    ACTIONS(945), 1,
      sym_rcurl,
    ACTIONS(947), 1,
      sym__comma,
    STATE(213), 1,
      aux_sym_cost_comp_list_repeat1,
  [4750] = 4,
    ACTIONS(949), 1,
      sym__eol,
    ACTIONS(951), 1,
      sym_atat,
    ACTIONS(953), 1,
      sym_at,
    ACTIONS(955), 1,
      sym_comment,
  [4763] = 4,
    ACTIONS(947), 1,
      sym__comma,
    ACTIONS(957), 1,
      sym_rcurlrcurl,
    ACTIONS(959), 1,
      sym_rcurl,
    STATE(214), 1,
      aux_sym_cost_comp_list_repeat1,
  [4776] = 4,
    ACTIONS(961), 1,
      sym_rcurlrcurl,
    ACTIONS(963), 1,
      sym_rcurl,
    ACTIONS(965), 1,
      sym__comma,
    STATE(214), 1,
      aux_sym_cost_comp_list_repeat1,
  [4789] = 4,
    ACTIONS(968), 1,
      sym__eol,
    ACTIONS(970), 1,
      sym_atat,
    ACTIONS(972), 1,
      sym_at,
    ACTIONS(974), 1,
      sym_comment,
  [4802] = 4,
    ACTIONS(976), 1,
      sym__eol,
    ACTIONS(978), 1,
      sym_atat,
    ACTIONS(980), 1,
      sym_at,
    ACTIONS(982), 1,
      sym_comment,
  [4815] = 2,
    ACTIONS(986), 1,
      sym_rcurl,
    ACTIONS(984), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4823] = 1,
    ACTIONS(988), 3,
      sym__eol,
      sym_tag,
      sym_link,
  [4829] = 2,
    ACTIONS(992), 1,
      sym_rcurl,
    ACTIONS(990), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4837] = 2,
    ACTIONS(996), 1,
      sym_rcurl,
    ACTIONS(994), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4845] = 2,
    ACTIONS(1000), 1,
      sym_rcurl,
    ACTIONS(998), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4853] = 3,
    ACTIONS(1002), 1,
      sym_asterisk,
    ACTIONS(1005), 1,
      aux_sym__markdown_heading_token1,
    STATE(222), 1,
      aux_sym__orgmode_heading_repeat1,
  [4863] = 2,
    ACTIONS(1009), 1,
      sym_rcurl,
    ACTIONS(1007), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4871] = 2,
    ACTIONS(1013), 1,
      sym_rcurl,
    ACTIONS(1011), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4879] = 2,
    ACTIONS(1017), 1,
      sym_rcurl,
    ACTIONS(1015), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4887] = 3,
    ACTIONS(726), 1,
      sym_key,
    ACTIONS(1019), 1,
      sym__eol,
    STATE(334), 1,
      sym_key_value,
  [4897] = 3,
    ACTIONS(1021), 1,
      sym_asterisk,
    ACTIONS(1023), 1,
      aux_sym__markdown_heading_token1,
    STATE(222), 1,
      aux_sym__orgmode_heading_repeat1,
  [4907] = 2,
    ACTIONS(963), 1,
      sym_rcurl,
    ACTIONS(961), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4915] = 3,
    ACTIONS(1025), 1,
      sym__hash,
    ACTIONS(1027), 1,
      aux_sym__markdown_heading_token1,
    STATE(230), 1,
      aux_sym__markdown_heading_repeat1,
  [4925] = 3,
    ACTIONS(1029), 1,
      sym__hash,
    ACTIONS(1032), 1,
      aux_sym__markdown_heading_token1,
    STATE(230), 1,
      aux_sym__markdown_heading_repeat1,
  [4935] = 2,
    ACTIONS(1034), 1,
      sym__eol,
    ACTIONS(1036), 1,
      sym_comment,
  [4942] = 2,
    ACTIONS(1038), 1,
      sym__eol,
    ACTIONS(1040), 1,
      sym_comment,
  [4949] = 2,
    ACTIONS(1042), 1,
      sym__eol,
    ACTIONS(1044), 1,
      sym_comment,
  [4956] = 2,
    ACTIONS(1046), 1,
      sym__eol,
    ACTIONS(1048), 1,
      sym_comment,
  [4963] = 1,
    ACTIONS(1050), 2,
      sym__eol,
      sym_comment,
  [4968] = 1,
    ACTIONS(1052), 2,
      sym__eol,
      sym_comment,
  [4973] = 2,
    ACTIONS(726), 1,
      sym_key,
    STATE(310), 1,
      sym_key_value,
  [4980] = 2,
    ACTIONS(1054), 1,
      sym_string,
    STATE(206), 1,
      sym_filename,
  [4987] = 2,
    ACTIONS(1056), 1,
      sym__eol,
    ACTIONS(1058), 1,
      sym_comment,
  [4994] = 2,
    ACTIONS(1060), 1,
      sym__eol,
    ACTIONS(1062), 1,
      sym_comment,
  [5001] = 1,
    ACTIONS(1064), 2,
      sym__eol,
      sym_comment,
  [5006] = 2,
    ACTIONS(1066), 1,
      sym__eol,
    ACTIONS(1068), 1,
      sym_string,
  [5013] = 2,
    ACTIONS(1070), 1,
      sym__eol,
    ACTIONS(1072), 1,
      sym_comment,
  [5020] = 2,
    ACTIONS(1074), 1,
      sym__eol,
    ACTIONS(1076), 1,
      sym_comment,
  [5027] = 2,
    ACTIONS(1078), 1,
      sym__eol,
    ACTIONS(1080), 1,
      sym_comment,
  [5034] = 2,
    ACTIONS(1082), 1,
      sym__eol,
    ACTIONS(1084), 1,
      sym_comment,
  [5041] = 2,
    ACTIONS(1086), 1,
      sym__eol,
    ACTIONS(1088), 1,
      sym_comment,
  [5048] = 2,
    ACTIONS(1090), 1,
      sym__eol,
    ACTIONS(1092), 1,
      sym_comment,
  [5055] = 2,
    ACTIONS(1094), 1,
      sym__eol,
    ACTIONS(1096), 1,
      sym_comment,
  [5062] = 1,
    ACTIONS(1098), 2,
      sym__eol,
      sym_comment,
  [5067] = 2,
    ACTIONS(1100), 1,
      sym__eol,
    ACTIONS(1102), 1,
      sym_comment,
  [5074] = 2,
    ACTIONS(1104), 1,
      sym__eol,
    ACTIONS(1106), 1,
      sym_comment,
  [5081] = 2,
    ACTIONS(1108), 1,
      sym__eol,
    ACTIONS(1110), 1,
      sym_comment,
  [5088] = 1,
    ACTIONS(1112), 1,
      sym__eol,
  [5092] = 1,
    ACTIONS(1114), 1,
      sym_account,
  [5096] = 1,
    ACTIONS(1116), 1,
      sym__eol,
  [5100] = 1,
    ACTIONS(1118), 1,
      sym__eol,
  [5104] = 1,
    ACTIONS(1120), 1,
      sym__eol,
  [5108] = 1,
    ACTIONS(1122), 1,
      aux_sym__markdown_heading_token1,
  [5112] = 1,
    ACTIONS(1124), 1,
      sym__eol,
  [5116] = 1,
    ACTIONS(1126), 1,
      sym__eol,
  [5120] = 1,
    ACTIONS(1128), 1,
      sym__eol,
  [5124] = 1,
    ACTIONS(1130), 1,
      sym__eol,
  [5128] = 1,
    ACTIONS(1132), 1,
      sym__eol,
  [5132] = 1,
    ACTIONS(1134), 1,
      sym__eol,
  [5136] = 1,
    ACTIONS(1136), 1,
      sym__eol,
  [5140] = 1,
    ACTIONS(1138), 1,
      sym__eol,
  [5144] = 1,
    ACTIONS(1140), 1,
      sym__eol,
  [5148] = 1,
    ACTIONS(1142), 1,
      sym__eol,
  [5152] = 1,
    ACTIONS(1144), 1,
      sym__eol,
  [5156] = 1,
    ACTIONS(1146), 1,
      sym__eol,
  [5160] = 1,
    ACTIONS(1148), 1,
      sym__eol,
  [5164] = 1,
    ACTIONS(1150), 1,
      sym__eol,
  [5168] = 1,
    ACTIONS(1152), 1,
      sym__eol,
  [5172] = 1,
    ACTIONS(1154), 1,
      sym__eol,
  [5176] = 1,
    ACTIONS(1156), 1,
      sym_string,
  [5180] = 1,
    ACTIONS(1158), 1,
      sym__eol,
  [5184] = 1,
    ACTIONS(1160), 1,
      sym__eol,
  [5188] = 1,
    ACTIONS(1162), 1,
      sym_string,
  [5192] = 1,
    ACTIONS(1164), 1,
      sym__eol,
  [5196] = 1,
    ACTIONS(1166), 1,
      sym__eol,
  [5200] = 1,
    ACTIONS(1168), 1,
      sym__eol,
  [5204] = 1,
    ACTIONS(1170), 1,
      sym__eol,
  [5208] = 1,
    ACTIONS(1172), 1,
      sym_account,
  [5212] = 1,
    ACTIONS(1174), 1,
      sym_account,
  [5216] = 1,
    ACTIONS(1176), 1,
      sym_string,
  [5220] = 1,
    ACTIONS(1178), 1,
      sym_currency,
  [5224] = 1,
    ACTIONS(1180), 1,
      sym__eol,
  [5228] = 1,
    ACTIONS(1182), 1,
      sym__eol,
  [5232] = 1,
    ACTIONS(1184), 1,
      sym_string,
  [5236] = 1,
    ACTIONS(1186), 1,
      sym_account,
  [5240] = 1,
    ACTIONS(1188), 1,
      sym_currency,
  [5244] = 1,
    ACTIONS(1190), 1,
      sym__eol,
  [5248] = 1,
    ACTIONS(1192), 1,
      sym_account,
  [5252] = 1,
    ACTIONS(1194), 1,
      sym_account,
  [5256] = 1,
    ACTIONS(1196), 1,
      sym__eol,
  [5260] = 1,
    ACTIONS(1198), 1,
      sym__eol,
  [5264] = 1,
    ACTIONS(1200), 1,
      sym__eol,
  [5268] = 1,
    ACTIONS(1202), 1,
      sym_account,
  [5272] = 1,
    ACTIONS(1204), 1,
      sym__eol,
  [5276] = 1,
    ACTIONS(1206), 1,
      sym__eol,
  [5280] = 1,
    ACTIONS(1208), 1,
      sym_string,
  [5284] = 1,
    ACTIONS(1210), 1,
      sym__eol,
  [5288] = 1,
    ACTIONS(1212), 1,
      sym__eol,
  [5292] = 1,
    ACTIONS(1214), 1,
      sym__eol,
  [5296] = 1,
    ACTIONS(1216), 1,
      sym__eol,
  [5300] = 1,
    ACTIONS(1218), 1,
      sym_string,
  [5304] = 1,
    ACTIONS(1220), 1,
      sym__eol,
  [5308] = 1,
    ACTIONS(1222), 1,
      sym__colon,
  [5312] = 1,
    ACTIONS(1224), 1,
      sym__eol,
  [5316] = 1,
    ACTIONS(1226), 1,
      sym__colon,
  [5320] = 1,
    ACTIONS(1228), 1,
      sym__eol,
  [5324] = 1,
    ACTIONS(1230), 1,
      sym__eol,
  [5328] = 1,
    ACTIONS(1232), 1,
      sym__eol,
  [5332] = 1,
    ACTIONS(1234), 1,
      sym__eol,
  [5336] = 1,
    ACTIONS(1236), 1,
      sym__eol,
  [5340] = 1,
    ACTIONS(1238), 1,
      sym__eol,
  [5344] = 1,
    ACTIONS(1240), 1,
      sym_currency,
  [5348] = 1,
    ACTIONS(1242), 1,
      sym__eol,
  [5352] = 1,
    ACTIONS(1244), 1,
      sym__eol,
  [5356] = 1,
    ACTIONS(1246), 1,
      ts_builtin_sym_end,
  [5360] = 1,
    ACTIONS(1248), 1,
      sym__eol,
  [5364] = 1,
    ACTIONS(1250), 1,
      sym_string,
  [5368] = 1,
    ACTIONS(1252), 1,
      sym__eol,
  [5372] = 1,
    ACTIONS(1254), 1,
      sym_string,
  [5376] = 1,
    ACTIONS(1256), 1,
      sym_string,
  [5380] = 1,
    ACTIONS(1258), 1,
      sym_key,
  [5384] = 1,
    ACTIONS(1260), 1,
      sym_string,
  [5388] = 1,
    ACTIONS(1262), 1,
      sym__eol,
  [5392] = 1,
    ACTIONS(1264), 1,
      sym_tag,
  [5396] = 1,
    ACTIONS(1266), 1,
      sym_tag,
  [5400] = 1,
    ACTIONS(1268), 1,
      sym_rcurl,
  [5404] = 1,
    ACTIONS(1270), 1,
      sym__eol,
  [5408] = 1,
    ACTIONS(1272), 1,
      sym__eol,
  [5412] = 1,
    ACTIONS(1274), 1,
      sym_account,
  [5416] = 1,
    ACTIONS(1276), 1,
      sym__eol,
  [5420] = 1,
    ACTIONS(1268), 1,
      sym_rcurlrcurl,
  [5424] = 1,
    ACTIONS(1278), 1,
      sym_account,
  [5428] = 1,
    ACTIONS(1280), 1,
      sym__eol,
  [5432] = 1,
    ACTIONS(1282), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 166,
  [SMALL_STATE(5)] = 197,
  [SMALL_STATE(6)] = 228,
  [SMALL_STATE(7)] = 259,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 321,
  [SMALL_STATE(10)] = 352,
  [SMALL_STATE(11)] = 383,
  [SMALL_STATE(12)] = 414,
  [SMALL_STATE(13)] = 444,
  [SMALL_STATE(14)] = 472,
  [SMALL_STATE(15)] = 502,
  [SMALL_STATE(16)] = 532,
  [SMALL_STATE(17)] = 562,
  [SMALL_STATE(18)] = 592,
  [SMALL_STATE(19)] = 622,
  [SMALL_STATE(20)] = 652,
  [SMALL_STATE(21)] = 682,
  [SMALL_STATE(22)] = 712,
  [SMALL_STATE(23)] = 742,
  [SMALL_STATE(24)] = 772,
  [SMALL_STATE(25)] = 802,
  [SMALL_STATE(26)] = 832,
  [SMALL_STATE(27)] = 862,
  [SMALL_STATE(28)] = 892,
  [SMALL_STATE(29)] = 922,
  [SMALL_STATE(30)] = 952,
  [SMALL_STATE(31)] = 982,
  [SMALL_STATE(32)] = 1012,
  [SMALL_STATE(33)] = 1042,
  [SMALL_STATE(34)] = 1072,
  [SMALL_STATE(35)] = 1102,
  [SMALL_STATE(36)] = 1132,
  [SMALL_STATE(37)] = 1162,
  [SMALL_STATE(38)] = 1190,
  [SMALL_STATE(39)] = 1225,
  [SMALL_STATE(40)] = 1252,
  [SMALL_STATE(41)] = 1279,
  [SMALL_STATE(42)] = 1319,
  [SMALL_STATE(43)] = 1359,
  [SMALL_STATE(44)] = 1397,
  [SMALL_STATE(45)] = 1418,
  [SMALL_STATE(46)] = 1439,
  [SMALL_STATE(47)] = 1460,
  [SMALL_STATE(48)] = 1481,
  [SMALL_STATE(49)] = 1502,
  [SMALL_STATE(50)] = 1543,
  [SMALL_STATE(51)] = 1564,
  [SMALL_STATE(52)] = 1599,
  [SMALL_STATE(53)] = 1620,
  [SMALL_STATE(54)] = 1641,
  [SMALL_STATE(55)] = 1662,
  [SMALL_STATE(56)] = 1683,
  [SMALL_STATE(57)] = 1704,
  [SMALL_STATE(58)] = 1725,
  [SMALL_STATE(59)] = 1746,
  [SMALL_STATE(60)] = 1767,
  [SMALL_STATE(61)] = 1788,
  [SMALL_STATE(62)] = 1809,
  [SMALL_STATE(63)] = 1830,
  [SMALL_STATE(64)] = 1851,
  [SMALL_STATE(65)] = 1872,
  [SMALL_STATE(66)] = 1893,
  [SMALL_STATE(67)] = 1914,
  [SMALL_STATE(68)] = 1935,
  [SMALL_STATE(69)] = 1980,
  [SMALL_STATE(70)] = 2001,
  [SMALL_STATE(71)] = 2022,
  [SMALL_STATE(72)] = 2043,
  [SMALL_STATE(73)] = 2064,
  [SMALL_STATE(74)] = 2085,
  [SMALL_STATE(75)] = 2106,
  [SMALL_STATE(76)] = 2127,
  [SMALL_STATE(77)] = 2148,
  [SMALL_STATE(78)] = 2169,
  [SMALL_STATE(79)] = 2190,
  [SMALL_STATE(80)] = 2211,
  [SMALL_STATE(81)] = 2232,
  [SMALL_STATE(82)] = 2253,
  [SMALL_STATE(83)] = 2274,
  [SMALL_STATE(84)] = 2295,
  [SMALL_STATE(85)] = 2336,
  [SMALL_STATE(86)] = 2357,
  [SMALL_STATE(87)] = 2378,
  [SMALL_STATE(88)] = 2399,
  [SMALL_STATE(89)] = 2420,
  [SMALL_STATE(90)] = 2441,
  [SMALL_STATE(91)] = 2462,
  [SMALL_STATE(92)] = 2483,
  [SMALL_STATE(93)] = 2504,
  [SMALL_STATE(94)] = 2525,
  [SMALL_STATE(95)] = 2546,
  [SMALL_STATE(96)] = 2567,
  [SMALL_STATE(97)] = 2588,
  [SMALL_STATE(98)] = 2623,
  [SMALL_STATE(99)] = 2644,
  [SMALL_STATE(100)] = 2665,
  [SMALL_STATE(101)] = 2686,
  [SMALL_STATE(102)] = 2706,
  [SMALL_STATE(103)] = 2726,
  [SMALL_STATE(104)] = 2746,
  [SMALL_STATE(105)] = 2766,
  [SMALL_STATE(106)] = 2786,
  [SMALL_STATE(107)] = 2806,
  [SMALL_STATE(108)] = 2826,
  [SMALL_STATE(109)] = 2846,
  [SMALL_STATE(110)] = 2866,
  [SMALL_STATE(111)] = 2886,
  [SMALL_STATE(112)] = 2906,
  [SMALL_STATE(113)] = 2926,
  [SMALL_STATE(114)] = 2946,
  [SMALL_STATE(115)] = 2966,
  [SMALL_STATE(116)] = 2986,
  [SMALL_STATE(117)] = 3006,
  [SMALL_STATE(118)] = 3026,
  [SMALL_STATE(119)] = 3046,
  [SMALL_STATE(120)] = 3066,
  [SMALL_STATE(121)] = 3086,
  [SMALL_STATE(122)] = 3106,
  [SMALL_STATE(123)] = 3126,
  [SMALL_STATE(124)] = 3146,
  [SMALL_STATE(125)] = 3166,
  [SMALL_STATE(126)] = 3186,
  [SMALL_STATE(127)] = 3206,
  [SMALL_STATE(128)] = 3226,
  [SMALL_STATE(129)] = 3246,
  [SMALL_STATE(130)] = 3266,
  [SMALL_STATE(131)] = 3286,
  [SMALL_STATE(132)] = 3306,
  [SMALL_STATE(133)] = 3326,
  [SMALL_STATE(134)] = 3346,
  [SMALL_STATE(135)] = 3366,
  [SMALL_STATE(136)] = 3386,
  [SMALL_STATE(137)] = 3406,
  [SMALL_STATE(138)] = 3426,
  [SMALL_STATE(139)] = 3446,
  [SMALL_STATE(140)] = 3466,
  [SMALL_STATE(141)] = 3486,
  [SMALL_STATE(142)] = 3520,
  [SMALL_STATE(143)] = 3540,
  [SMALL_STATE(144)] = 3560,
  [SMALL_STATE(145)] = 3580,
  [SMALL_STATE(146)] = 3600,
  [SMALL_STATE(147)] = 3620,
  [SMALL_STATE(148)] = 3656,
  [SMALL_STATE(149)] = 3675,
  [SMALL_STATE(150)] = 3692,
  [SMALL_STATE(151)] = 3721,
  [SMALL_STATE(152)] = 3750,
  [SMALL_STATE(153)] = 3779,
  [SMALL_STATE(154)] = 3808,
  [SMALL_STATE(155)] = 3827,
  [SMALL_STATE(156)] = 3844,
  [SMALL_STATE(157)] = 3861,
  [SMALL_STATE(158)] = 3884,
  [SMALL_STATE(159)] = 3913,
  [SMALL_STATE(160)] = 3930,
  [SMALL_STATE(161)] = 3947,
  [SMALL_STATE(162)] = 3964,
  [SMALL_STATE(163)] = 3993,
  [SMALL_STATE(164)] = 4022,
  [SMALL_STATE(165)] = 4051,
  [SMALL_STATE(166)] = 4071,
  [SMALL_STATE(167)] = 4085,
  [SMALL_STATE(168)] = 4107,
  [SMALL_STATE(169)] = 4127,
  [SMALL_STATE(170)] = 4141,
  [SMALL_STATE(171)] = 4161,
  [SMALL_STATE(172)] = 4181,
  [SMALL_STATE(173)] = 4198,
  [SMALL_STATE(174)] = 4215,
  [SMALL_STATE(175)] = 4232,
  [SMALL_STATE(176)] = 4249,
  [SMALL_STATE(177)] = 4272,
  [SMALL_STATE(178)] = 4289,
  [SMALL_STATE(179)] = 4306,
  [SMALL_STATE(180)] = 4323,
  [SMALL_STATE(181)] = 4340,
  [SMALL_STATE(182)] = 4357,
  [SMALL_STATE(183)] = 4377,
  [SMALL_STATE(184)] = 4399,
  [SMALL_STATE(185)] = 4421,
  [SMALL_STATE(186)] = 4441,
  [SMALL_STATE(187)] = 4456,
  [SMALL_STATE(188)] = 4469,
  [SMALL_STATE(189)] = 4480,
  [SMALL_STATE(190)] = 4493,
  [SMALL_STATE(191)] = 4508,
  [SMALL_STATE(192)] = 4521,
  [SMALL_STATE(193)] = 4538,
  [SMALL_STATE(194)] = 4551,
  [SMALL_STATE(195)] = 4563,
  [SMALL_STATE(196)] = 4575,
  [SMALL_STATE(197)] = 4587,
  [SMALL_STATE(198)] = 4595,
  [SMALL_STATE(199)] = 4607,
  [SMALL_STATE(200)] = 4619,
  [SMALL_STATE(201)] = 4631,
  [SMALL_STATE(202)] = 4643,
  [SMALL_STATE(203)] = 4653,
  [SMALL_STATE(204)] = 4661,
  [SMALL_STATE(205)] = 4673,
  [SMALL_STATE(206)] = 4685,
  [SMALL_STATE(207)] = 4699,
  [SMALL_STATE(208)] = 4708,
  [SMALL_STATE(209)] = 4717,
  [SMALL_STATE(210)] = 4724,
  [SMALL_STATE(211)] = 4737,
  [SMALL_STATE(212)] = 4750,
  [SMALL_STATE(213)] = 4763,
  [SMALL_STATE(214)] = 4776,
  [SMALL_STATE(215)] = 4789,
  [SMALL_STATE(216)] = 4802,
  [SMALL_STATE(217)] = 4815,
  [SMALL_STATE(218)] = 4823,
  [SMALL_STATE(219)] = 4829,
  [SMALL_STATE(220)] = 4837,
  [SMALL_STATE(221)] = 4845,
  [SMALL_STATE(222)] = 4853,
  [SMALL_STATE(223)] = 4863,
  [SMALL_STATE(224)] = 4871,
  [SMALL_STATE(225)] = 4879,
  [SMALL_STATE(226)] = 4887,
  [SMALL_STATE(227)] = 4897,
  [SMALL_STATE(228)] = 4907,
  [SMALL_STATE(229)] = 4915,
  [SMALL_STATE(230)] = 4925,
  [SMALL_STATE(231)] = 4935,
  [SMALL_STATE(232)] = 4942,
  [SMALL_STATE(233)] = 4949,
  [SMALL_STATE(234)] = 4956,
  [SMALL_STATE(235)] = 4963,
  [SMALL_STATE(236)] = 4968,
  [SMALL_STATE(237)] = 4973,
  [SMALL_STATE(238)] = 4980,
  [SMALL_STATE(239)] = 4987,
  [SMALL_STATE(240)] = 4994,
  [SMALL_STATE(241)] = 5001,
  [SMALL_STATE(242)] = 5006,
  [SMALL_STATE(243)] = 5013,
  [SMALL_STATE(244)] = 5020,
  [SMALL_STATE(245)] = 5027,
  [SMALL_STATE(246)] = 5034,
  [SMALL_STATE(247)] = 5041,
  [SMALL_STATE(248)] = 5048,
  [SMALL_STATE(249)] = 5055,
  [SMALL_STATE(250)] = 5062,
  [SMALL_STATE(251)] = 5067,
  [SMALL_STATE(252)] = 5074,
  [SMALL_STATE(253)] = 5081,
  [SMALL_STATE(254)] = 5088,
  [SMALL_STATE(255)] = 5092,
  [SMALL_STATE(256)] = 5096,
  [SMALL_STATE(257)] = 5100,
  [SMALL_STATE(258)] = 5104,
  [SMALL_STATE(259)] = 5108,
  [SMALL_STATE(260)] = 5112,
  [SMALL_STATE(261)] = 5116,
  [SMALL_STATE(262)] = 5120,
  [SMALL_STATE(263)] = 5124,
  [SMALL_STATE(264)] = 5128,
  [SMALL_STATE(265)] = 5132,
  [SMALL_STATE(266)] = 5136,
  [SMALL_STATE(267)] = 5140,
  [SMALL_STATE(268)] = 5144,
  [SMALL_STATE(269)] = 5148,
  [SMALL_STATE(270)] = 5152,
  [SMALL_STATE(271)] = 5156,
  [SMALL_STATE(272)] = 5160,
  [SMALL_STATE(273)] = 5164,
  [SMALL_STATE(274)] = 5168,
  [SMALL_STATE(275)] = 5172,
  [SMALL_STATE(276)] = 5176,
  [SMALL_STATE(277)] = 5180,
  [SMALL_STATE(278)] = 5184,
  [SMALL_STATE(279)] = 5188,
  [SMALL_STATE(280)] = 5192,
  [SMALL_STATE(281)] = 5196,
  [SMALL_STATE(282)] = 5200,
  [SMALL_STATE(283)] = 5204,
  [SMALL_STATE(284)] = 5208,
  [SMALL_STATE(285)] = 5212,
  [SMALL_STATE(286)] = 5216,
  [SMALL_STATE(287)] = 5220,
  [SMALL_STATE(288)] = 5224,
  [SMALL_STATE(289)] = 5228,
  [SMALL_STATE(290)] = 5232,
  [SMALL_STATE(291)] = 5236,
  [SMALL_STATE(292)] = 5240,
  [SMALL_STATE(293)] = 5244,
  [SMALL_STATE(294)] = 5248,
  [SMALL_STATE(295)] = 5252,
  [SMALL_STATE(296)] = 5256,
  [SMALL_STATE(297)] = 5260,
  [SMALL_STATE(298)] = 5264,
  [SMALL_STATE(299)] = 5268,
  [SMALL_STATE(300)] = 5272,
  [SMALL_STATE(301)] = 5276,
  [SMALL_STATE(302)] = 5280,
  [SMALL_STATE(303)] = 5284,
  [SMALL_STATE(304)] = 5288,
  [SMALL_STATE(305)] = 5292,
  [SMALL_STATE(306)] = 5296,
  [SMALL_STATE(307)] = 5300,
  [SMALL_STATE(308)] = 5304,
  [SMALL_STATE(309)] = 5308,
  [SMALL_STATE(310)] = 5312,
  [SMALL_STATE(311)] = 5316,
  [SMALL_STATE(312)] = 5320,
  [SMALL_STATE(313)] = 5324,
  [SMALL_STATE(314)] = 5328,
  [SMALL_STATE(315)] = 5332,
  [SMALL_STATE(316)] = 5336,
  [SMALL_STATE(317)] = 5340,
  [SMALL_STATE(318)] = 5344,
  [SMALL_STATE(319)] = 5348,
  [SMALL_STATE(320)] = 5352,
  [SMALL_STATE(321)] = 5356,
  [SMALL_STATE(322)] = 5360,
  [SMALL_STATE(323)] = 5364,
  [SMALL_STATE(324)] = 5368,
  [SMALL_STATE(325)] = 5372,
  [SMALL_STATE(326)] = 5376,
  [SMALL_STATE(327)] = 5380,
  [SMALL_STATE(328)] = 5384,
  [SMALL_STATE(329)] = 5388,
  [SMALL_STATE(330)] = 5392,
  [SMALL_STATE(331)] = 5396,
  [SMALL_STATE(332)] = 5400,
  [SMALL_STATE(333)] = 5404,
  [SMALL_STATE(334)] = 5408,
  [SMALL_STATE(335)] = 5412,
  [SMALL_STATE(336)] = 5416,
  [SMALL_STATE(337)] = 5420,
  [SMALL_STATE(338)] = 5424,
  [SMALL_STATE(339)] = 5428,
  [SMALL_STATE(340)] = 5432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(229),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(227),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(259),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(259),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(331),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(330),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(237),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(327),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(326),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(325),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(323),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(322),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3, .production_id = 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 37),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 37),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 7),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 8),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 8),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 9),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 25),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 25),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 27),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 27),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 24),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 24),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting_or_kv_list, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting_or_kv_list, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 14),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 11),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 11),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 13),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 13),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 12),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 12),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 11),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 11),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 20),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, .production_id = 20),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 10),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5, .production_id = 10),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 28),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 28),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 39),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 39),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 21),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 21),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 29),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 29),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 16),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5, .production_id = 16),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 17),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5, .production_id = 17),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 15),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5, .production_id = 15),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 30),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 30),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 31),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 31),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 5),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4, .production_id = 5),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 32),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 32),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 33),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 33),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 19),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5, .production_id = 19),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4, .production_id = 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 18),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 18),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2), SHIFT_REPEAT(147),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [238] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(226),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 56),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 56),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 77),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 77),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 54),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 54),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 44),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 44),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 53),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 53),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(175),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(173),
  [311] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(166),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(166),
  [317] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(157),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 86),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 86),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 52),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 52),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 43),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 43),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 85),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 85),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 84),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 84),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 83),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 83),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 48),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 48),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 47),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 47),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 82),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 82),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 81),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 81),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 45),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 45),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 44),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 44),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 43),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 43),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 42),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 42),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 34),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 34),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 80),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 80),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 79),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 79),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 45),
  [416] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 45),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 69),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 69),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 78),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 78),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 65),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 65),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 76),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 76),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 75),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 75),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, .production_id = 87),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, .production_id = 87),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 74),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 74),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 73),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 73),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 72),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 72),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 70),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 70),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_line, 3),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 57),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 57),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 57),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 57),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 34),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 34),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 58),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 58),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 69),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 69),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 61),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 61),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 68),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 68),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 62),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 62),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 56),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 56),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 67),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 67),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 66),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 66),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value_list, 1),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 53),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 53),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 63),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 63),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 64),
  [534] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 64),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 30),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 30),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 36),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 36),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 6, .production_id = 14),
  [546] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 6, .production_id = 14),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 15),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 15),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 3),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushtag, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 6),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 6),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 16),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6, .production_id = 16),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 13),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 13),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 17),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 6, .production_id = 17),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 18),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6, .production_id = 18),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 19),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 19),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 12),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 12),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 20),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6, .production_id = 20),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 11),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 11),
  [596] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 21),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6, .production_id = 21),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 2),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 35),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 35),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 10),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 10),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 4),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 2),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4, .production_id = 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 26),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 26),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_popmeta, 4),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 6, .production_id = 11),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 6, .production_id = 11),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 38),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 38),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 23),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 23),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 3),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 3),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 7, .production_id = 28),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 7, .production_id = 28),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 22),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 22),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__orgmode_heading, 3),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__orgmode_heading, 3),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading, 1),
  [658] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_heading, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__markdown_heading, 3),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__markdown_heading, 3),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 3),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 29),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 29),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 4),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 4),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 31),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 31),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 7, .production_id = 32),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 7, .production_id = 32),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 33),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7, .production_id = 33),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 46),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7, .production_id = 46),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8, .production_id = 39),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 8, .production_id = 39),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 5),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 5),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushmeta, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poptag, 3),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [768] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [856] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [870] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(189),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_value, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [887] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(318),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [900] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2),
  [916] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2), SHIFT_REPEAT(204),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [925] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [927] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 51),
  [931] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 51),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [939] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [953] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [957] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 2),
  [959] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 2),
  [961] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [963] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [965] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(141),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [972] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [984] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [986] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [988] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 50),
  [992] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 50),
  [994] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [996] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 60),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 60),
  [1002] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__orgmode_heading_repeat1, 2), SHIFT_REPEAT(222),
  [1005] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__orgmode_heading_repeat1, 2),
  [1007] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 71),
  [1009] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 71),
  [1011] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [1013] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 40),
  [1017] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 40),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [1021] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [1023] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [1025] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [1027] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1029] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__markdown_heading_repeat1, 2), SHIFT_REPEAT(230),
  [1032] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__markdown_heading_repeat1, 2),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1050] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1098] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1246] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
