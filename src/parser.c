#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 248
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
#define ALIAS_COUNT 0
#define TOKEN_COUNT 63
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 49

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
  sym_comment = 52,
  aux_sym__skipped_lines_token1 = 53,
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
  sym__skipped_lines = 113,
  aux_sym_file_repeat1 = 114,
  aux_sym_tags_links_repeat1 = 115,
  aux_sym_posting_or_kv_list_repeat1 = 116,
  aux_sym_key_value_list_repeat1 = 117,
  aux_sym_currency_list_repeat1 = 118,
  aux_sym_open_repeat1 = 119,
  aux_sym_cost_comp_list_repeat1 = 120,
  aux_sym_custom_value_list_repeat1 = 121,
};

static const char *ts_symbol_names[] = {
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
  [sym_BALANCE] = "BALANCE",
  [sym_OPEN] = "OPEN",
  [sym_CLOSE] = "CLOSE",
  [sym_COMMODITY] = "COMMODITY",
  [sym_PAD] = "PAD",
  [sym_EVENT] = "EVENT",
  [sym_PRICE] = "PRICE",
  [sym_NOTE] = "NOTE",
  [sym_DOCUMENT] = "DOCUMENT",
  [sym_QUERY] = "QUERY",
  [sym_CUSTOM] = "CUSTOM",
  [sym_PUSHTAG] = "PUSHTAG",
  [sym_POPTAG] = "POPTAG",
  [sym_PUSHMETA] = "PUSHMETA",
  [sym_POPMETA] = "POPMETA",
  [sym_OPTION] = "OPTION",
  [sym_INCLUDE] = "INCLUDE",
  [sym_PLUGIN] = "PLUGIN",
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
  [sym_comment] = "comment",
  [aux_sym__skipped_lines_token1] = "_skipped_lines_token1",
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
  [sym__skipped_lines] = "_skipped_lines",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_tags_links_repeat1] = "tags_links_repeat1",
  [aux_sym_posting_or_kv_list_repeat1] = "posting_or_kv_list_repeat1",
  [aux_sym_key_value_list_repeat1] = "key_value_list_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_cost_comp_list_repeat1] = "cost_comp_list_repeat1",
  [aux_sym_custom_value_list_repeat1] = "custom_value_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
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
  [sym_comment] = sym_comment,
  [aux_sym__skipped_lines_token1] = aux_sym__skipped_lines_token1,
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
  [sym__skipped_lines] = sym__skipped_lines,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_tags_links_repeat1] = aux_sym_tags_links_repeat1,
  [aux_sym_posting_or_kv_list_repeat1] = aux_sym_posting_or_kv_list_repeat1,
  [aux_sym_key_value_list_repeat1] = aux_sym_key_value_list_repeat1,
  [aux_sym_currency_list_repeat1] = aux_sym_currency_list_repeat1,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_cost_comp_list_repeat1] = aux_sym_cost_comp_list_repeat1,
  [aux_sym_custom_value_list_repeat1] = aux_sym_custom_value_list_repeat1,
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
    .named = true,
  },
  [sym_OPEN] = {
    .visible = true,
    .named = true,
  },
  [sym_CLOSE] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMODITY] = {
    .visible = true,
    .named = true,
  },
  [sym_PAD] = {
    .visible = true,
    .named = true,
  },
  [sym_EVENT] = {
    .visible = true,
    .named = true,
  },
  [sym_PRICE] = {
    .visible = true,
    .named = true,
  },
  [sym_NOTE] = {
    .visible = true,
    .named = true,
  },
  [sym_DOCUMENT] = {
    .visible = true,
    .named = true,
  },
  [sym_QUERY] = {
    .visible = true,
    .named = true,
  },
  [sym_CUSTOM] = {
    .visible = true,
    .named = true,
  },
  [sym_PUSHTAG] = {
    .visible = true,
    .named = true,
  },
  [sym_POPTAG] = {
    .visible = true,
    .named = true,
  },
  [sym_PUSHMETA] = {
    .visible = true,
    .named = true,
  },
  [sym_POPMETA] = {
    .visible = true,
    .named = true,
  },
  [sym_OPTION] = {
    .visible = true,
    .named = true,
  },
  [sym_INCLUDE] = {
    .visible = true,
    .named = true,
  },
  [sym_PLUGIN] = {
    .visible = true,
    .named = true,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__skipped_lines_token1] = {
    .visible = false,
    .named = false,
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
};

enum {
  field_account = 1,
  field_amount = 2,
  field_cost_comp_list = 3,
  field_cost_spec = 4,
  field_currencies = 5,
  field_currency = 6,
  field_custom_value_list = 7,
  field_date = 8,
  field_desc = 9,
  field_filename = 10,
  field_from_account = 11,
  field_key = 12,
  field_name = 13,
  field_note = 14,
  field_opt_booking = 15,
  field_optflag = 16,
  field_per = 17,
  field_posting_or_kv_list = 18,
  field_price_annotation = 19,
  field_query = 20,
  field_tags_links = 21,
  field_total = 22,
  field_txn = 23,
  field_txn_strings = 24,
  field_type = 25,
  field_value = 26,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
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
  [19] = {.index = 49, .length = 4},
  [20] = {.index = 53, .length = 4},
  [21] = {.index = 57, .length = 4},
  [22] = {.index = 61, .length = 4},
  [23] = {.index = 65, .length = 4},
  [24] = {.index = 69, .length = 1},
  [25] = {.index = 70, .length = 5},
  [26] = {.index = 75, .length = 1},
  [27] = {.index = 76, .length = 1},
  [28] = {.index = 77, .length = 2},
  [29] = {.index = 79, .length = 2},
  [30] = {.index = 81, .length = 2},
  [31] = {.index = 83, .length = 2},
  [32] = {.index = 85, .length = 1},
  [33] = {.index = 86, .length = 2},
  [34] = {.index = 88, .length = 1},
  [35] = {.index = 89, .length = 3},
  [36] = {.index = 92, .length = 3},
  [37] = {.index = 95, .length = 3},
  [38] = {.index = 98, .length = 2},
  [39] = {.index = 100, .length = 2},
  [40] = {.index = 102, .length = 3},
  [41] = {.index = 105, .length = 3},
  [42] = {.index = 108, .length = 3},
  [43] = {.index = 111, .length = 4},
  [44] = {.index = 115, .length = 3},
  [45] = {.index = 118, .length = 4},
  [46] = {.index = 122, .length = 4},
  [47] = {.index = 126, .length = 4},
  [48] = {.index = 130, .length = 5},
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
    {field_date, 0},
    {field_txn, 1},
    {field_txn_strings, 2},
  [16] =
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [19] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [22] =
    {field_account, 2},
    {field_date, 0},
    {field_opt_booking, 3},
  [25] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [28] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [31] =
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [34] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [37] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [40] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [43] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [46] =
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [49] =
    {field_date, 0},
    {field_posting_or_kv_list, 4},
    {field_txn, 1},
    {field_txn_strings, 2},
  [53] =
    {field_date, 0},
    {field_tags_links, 3},
    {field_txn, 1},
    {field_txn_strings, 2},
  [57] =
    {field_date, 0},
    {field_posting_or_kv_list, 4},
    {field_tags_links, 2},
    {field_txn, 1},
  [61] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [65] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [69] =
    {field_account, 1},
  [70] =
    {field_date, 0},
    {field_posting_or_kv_list, 5},
    {field_tags_links, 3},
    {field_txn, 1},
    {field_txn_strings, 2},
  [75] =
    {field_currency, 0},
  [76] =
    {field_per, 0},
  [77] =
    {field_account, 1},
    {field_amount, 2},
  [79] =
    {field_account, 1},
    {field_cost_spec, 2},
  [81] =
    {field_account, 2},
    {field_optflag, 1},
  [83] =
    {field_account, 1},
    {field_price_annotation, 3},
  [85] =
    {field_currency, 1},
  [86] =
    {field_currency, 1},
    {field_per, 0},
  [88] =
    {field_cost_comp_list, 1},
  [89] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [92] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
  [95] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [98] =
    {field_currency, 2},
    {field_total, 1},
  [100] =
    {field_currency, 2},
    {field_per, 0},
  [102] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 4},
  [105] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [108] =
    {field_account, 2},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [111] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [115] =
    {field_currency, 3},
    {field_per, 0},
    {field_total, 2},
  [118] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [122] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [126] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [130] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_flag_character_set_1(int32_t c) {
  return (c < '?'
    ? (c < '%'
      ? (c < '#'
        ? c == '!'
        : c <= '#')
      : (c <= '&' || c == '*'))
    : (c <= '?' || (c < 'P'
      ? (c < 'M'
        ? c == 'C'
        : c <= 'M')
      : (c <= 'P' || (c >= 'R' && c <= 'U')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '=') ADVANCE(104);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(96);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == 224) ADVANCE(84);
      if (lookahead == 237) ADVANCE(83);
      if (lookahead == 240) ADVANCE(86);
      if (lookahead == 244) ADVANCE(82);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(182);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(197);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(116);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(193);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(192);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(88);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      if (lookahead != 0 &&
          lookahead > 127) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(36);
      if (lookahead != 0 &&
          lookahead > 127) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(108);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '^') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?') ADVANCE(116);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead > '@' &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == ')') ADVANCE(115);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '/') ADVANCE(110);
      if (lookahead == '}') ADVANCE(103);
      if (lookahead == '~') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '#') ADVANCE(107);
      if (lookahead == '(') ADVANCE(114);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '+') ADVANCE(112);
      if (lookahead == '-') ADVANCE(113);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(182);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(54);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == ',') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(130);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(138);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(152);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(151);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 38:
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '1') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(78);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(118);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == '}') ADVANCE(100);
      END_STATE();
    case 52:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(123);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(12);
      END_STATE();
    case 54:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(176);
      END_STATE();
    case 55:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 56:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 57:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 58:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 59:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      END_STATE();
    case 60:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 61:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      END_STATE();
    case 62:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 63:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 64:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      END_STATE();
    case 65:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      END_STATE();
    case 66:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      END_STATE();
    case 67:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 68:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 69:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      END_STATE();
    case 70:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      END_STATE();
    case 71:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 72:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 73:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 74:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 75:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 76:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 77:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 82:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(200);
      END_STATE();
    case 83:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(196);
      END_STATE();
    case 84:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(194);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 86:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(198);
      END_STATE();
    case 87:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 88:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 89:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead > '/' &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(124);
      END_STATE();
    case 91:
      if (eof) ADVANCE(93);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '}') ADVANCE(51);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (sym_flag_character_set_1(lookahead)) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      if (lookahead == '\n') ADVANCE(95);
      if (lookahead == ':') ADVANCE(111);
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      if (sym_flag_character_set_1(lookahead)) ADVANCE(116);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__pipe);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_atat);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_at);
      if (lookahead == '@') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_lcurllcurl);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_rcurlrcurl);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_lcurl);
      if (lookahead == '{') ADVANCE(99);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_rcurl);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_rcurl);
      if (lookahead == '}') ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__hash);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__hash);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_slash);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__lparen);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__rparen);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__none);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__none);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(127);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(128);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(130);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(132);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(138);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(121);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(119);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(148);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(146);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'L') ADVANCE(145);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'U') ADVANCE(144);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead > '`' &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead > ',' &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead > ',' &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(47);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(177);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(162);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(167);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(166);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(168);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(170);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(172);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(174);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '.') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(185);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(186);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(188);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(189);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__UTF_8_1);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__UTF_8_2_token1);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token1);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token2);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token3);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token4);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token2);
      END_STATE();
    case 200:
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
      if (lookahead == 'g') ADVANCE(58);
      if (lookahead == 'h') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_TXN);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_NOTE);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_OPEN);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_CLOSE);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_EVENT);
      END_STATE();
    case 67:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 71:
      if (lookahead == 'g') ADVANCE(84);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_PRICE);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_QUERY);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_CUSTOM);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_OPTION);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_PLUGIN);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_POPTAG);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_BALANCE);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(95);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_INCLUDE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_POPMETA);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_PUSHTAG);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 94:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_DOCUMENT);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_PUSHMETA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_COMMODITY);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 91},
  [3] = {.lex_state = 91},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 92},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 92},
  [16] = {.lex_state = 92},
  [17] = {.lex_state = 92},
  [18] = {.lex_state = 92},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 92},
  [21] = {.lex_state = 92},
  [22] = {.lex_state = 92},
  [23] = {.lex_state = 92},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 92},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 92},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 92},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 92},
  [51] = {.lex_state = 92},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 92},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 92},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 92},
  [62] = {.lex_state = 92},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 92},
  [65] = {.lex_state = 92},
  [66] = {.lex_state = 91},
  [67] = {.lex_state = 91},
  [68] = {.lex_state = 91},
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
  [84] = {.lex_state = 91},
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
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 3},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 7},
  [109] = {.lex_state = 7},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 7},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 7},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 7},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 1},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 1},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 1},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 1},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 91},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 2},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 2},
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
  [220] = {.lex_state = 190},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 2},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
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
    [sym_file] = STATE(233),
    [sym_transaction] = STATE(2),
    [sym_pushtag] = STATE(2),
    [sym_poptag] = STATE(2),
    [sym_pushmeta] = STATE(2),
    [sym_popmeta] = STATE(2),
    [sym_open] = STATE(2),
    [sym_close] = STATE(2),
    [sym_commodity] = STATE(2),
    [sym_pad] = STATE(2),
    [sym_balance] = STATE(2),
    [sym_price] = STATE(2),
    [sym_event] = STATE(2),
    [sym_query] = STATE(2),
    [sym_note] = STATE(2),
    [sym_document] = STATE(2),
    [sym_custom] = STATE(2),
    [sym__entry] = STATE(2),
    [sym_option] = STATE(2),
    [sym_include] = STATE(2),
    [sym_plugin] = STATE(2),
    [sym__directive] = STATE(2),
    [sym__declarations] = STATE(2),
    [sym__skipped_lines] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__eol] = ACTIONS(5),
    [sym__colon] = ACTIONS(7),
    [sym_flag] = ACTIONS(7),
    [sym_PUSHTAG] = ACTIONS(9),
    [sym_POPTAG] = ACTIONS(11),
    [sym_PUSHMETA] = ACTIONS(13),
    [sym_POPMETA] = ACTIONS(15),
    [sym_OPTION] = ACTIONS(17),
    [sym_INCLUDE] = ACTIONS(19),
    [sym_PLUGIN] = ACTIONS(21),
    [sym_date] = ACTIONS(23),
    [sym_comment] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      sym_PUSHTAG,
    ACTIONS(11), 1,
      sym_POPTAG,
    ACTIONS(13), 1,
      sym_PUSHMETA,
    ACTIONS(15), 1,
      sym_POPMETA,
    ACTIONS(17), 1,
      sym_OPTION,
    ACTIONS(19), 1,
      sym_INCLUDE,
    ACTIONS(21), 1,
      sym_PLUGIN,
    ACTIONS(23), 1,
      sym_date,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__eol,
    ACTIONS(7), 2,
      sym__colon,
      sym_flag,
    STATE(3), 24,
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
      sym__skipped_lines,
      aux_sym_file_repeat1,
  [64] = 13,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__eol,
    ACTIONS(39), 1,
      sym_PUSHTAG,
    ACTIONS(42), 1,
      sym_POPTAG,
    ACTIONS(45), 1,
      sym_PUSHMETA,
    ACTIONS(48), 1,
      sym_POPMETA,
    ACTIONS(51), 1,
      sym_OPTION,
    ACTIONS(54), 1,
      sym_INCLUDE,
    ACTIONS(57), 1,
      sym_PLUGIN,
    ACTIONS(60), 1,
      sym_date,
    ACTIONS(63), 1,
      sym_comment,
    ACTIONS(36), 2,
      sym__colon,
      sym_flag,
    STATE(3), 24,
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
      sym__skipped_lines,
      aux_sym_file_repeat1,
  [128] = 8,
    ACTIONS(66), 1,
      sym__eol,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(76), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(204), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(72), 3,
      sym__none,
      sym_bool,
      sym_currency,
    ACTIONS(74), 4,
      sym_date,
      sym_account,
      sym_string,
      sym_tag,
    STATE(131), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [163] = 5,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      sym__indent,
    STATE(94), 1,
      sym_posting_or_kv_list,
    STATE(28), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(82), 12,
      sym__eol,
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
  [192] = 5,
    ACTIONS(80), 1,
      sym__indent,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_posting_or_kv_list,
    STATE(28), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(86), 12,
      sym__eol,
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
  [221] = 5,
    ACTIONS(80), 1,
      sym__indent,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_posting_or_kv_list,
    STATE(28), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(90), 12,
      sym__eol,
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
  [250] = 5,
    ACTIONS(80), 1,
      sym__indent,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_posting_or_kv_list,
    STATE(28), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(94), 12,
      sym__eol,
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
  [279] = 5,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
    ACTIONS(98), 1,
      sym__indent,
    STATE(85), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(100), 12,
      sym__eol,
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
  [307] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    STATE(78), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(104), 12,
      sym__eol,
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
  [335] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(108), 12,
      sym__eol,
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
  [363] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(112), 12,
      sym__eol,
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
  [391] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(116), 12,
      sym__eol,
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
  [419] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(84), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(120), 12,
      sym__eol,
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
  [447] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(124), 12,
      sym__eol,
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
  [475] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(67), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(128), 12,
      sym__eol,
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
  [503] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(86), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(132), 12,
      sym__eol,
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
  [531] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(87), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(136), 12,
      sym__eol,
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
  [559] = 11,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(138), 1,
      sym_rcurlrcurl,
    ACTIONS(140), 1,
      sym__hash,
    ACTIONS(144), 1,
      sym_currency,
    ACTIONS(146), 1,
      sym_number,
    STATE(151), 1,
      sym_cost_comp,
    STATE(160), 1,
      sym_compound_amount,
    STATE(187), 1,
      sym_cost_comp_list,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    ACTIONS(142), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(119), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [599] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(79), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(150), 12,
      sym__eol,
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
  [627] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(71), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(154), 12,
      sym__eol,
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
  [655] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(156), 1,
      ts_builtin_sym_end,
    STATE(93), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(158), 12,
      sym__eol,
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
  [683] = 4,
    ACTIONS(160), 1,
      ts_builtin_sym_end,
    ACTIONS(162), 1,
      sym__indent,
    STATE(23), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(165), 12,
      sym__eol,
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
  [709] = 11,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(138), 1,
      sym_rcurl,
    ACTIONS(140), 1,
      sym__hash,
    ACTIONS(144), 1,
      sym_currency,
    ACTIONS(146), 1,
      sym_number,
    STATE(151), 1,
      sym_cost_comp,
    STATE(160), 1,
      sym_compound_amount,
    STATE(189), 1,
      sym_cost_comp_list,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    ACTIONS(142), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(119), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [749] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    STATE(81), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(169), 12,
      sym__eol,
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
  [777] = 10,
    ACTIONS(171), 1,
      sym__eol,
    ACTIONS(175), 1,
      sym__lparen,
    ACTIONS(177), 1,
      sym_bool,
    ACTIONS(181), 1,
      sym_number,
    STATE(115), 1,
      sym_amount,
    STATE(185), 1,
      sym_custom_value_list,
    ACTIONS(173), 2,
      sym_plus,
      sym_minus,
    STATE(32), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(179), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(97), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [815] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(185), 12,
      sym__eol,
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
  [843] = 4,
    ACTIONS(80), 1,
      sym__indent,
    ACTIONS(187), 1,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(189), 12,
      sym__eol,
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
  [869] = 5,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      sym_key_value_list,
    STATE(31), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(193), 12,
      sym__eol,
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
  [897] = 4,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      sym__indent,
    STATE(30), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(200), 12,
      sym__eol,
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
  [922] = 4,
    ACTIONS(98), 1,
      sym__indent,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    STATE(30), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(204), 12,
      sym__eol,
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
  [947] = 9,
    ACTIONS(175), 1,
      sym__lparen,
    ACTIONS(177), 1,
      sym_bool,
    ACTIONS(181), 1,
      sym_number,
    ACTIONS(206), 1,
      sym__eol,
    STATE(115), 1,
      sym_amount,
    ACTIONS(173), 2,
      sym_plus,
      sym_minus,
    STATE(33), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(179), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(97), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [982] = 9,
    ACTIONS(208), 1,
      sym__eol,
    ACTIONS(213), 1,
      sym__lparen,
    ACTIONS(216), 1,
      sym_bool,
    ACTIONS(222), 1,
      sym_number,
    STATE(115), 1,
      sym_amount,
    ACTIONS(210), 2,
      sym_plus,
      sym_minus,
    STATE(33), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(219), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(97), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1017] = 14,
    ACTIONS(227), 1,
      sym_flag,
    ACTIONS(229), 1,
      sym_BALANCE,
    ACTIONS(231), 1,
      sym_OPEN,
    ACTIONS(233), 1,
      sym_CLOSE,
    ACTIONS(235), 1,
      sym_COMMODITY,
    ACTIONS(237), 1,
      sym_PAD,
    ACTIONS(239), 1,
      sym_EVENT,
    ACTIONS(241), 1,
      sym_PRICE,
    ACTIONS(243), 1,
      sym_NOTE,
    ACTIONS(245), 1,
      sym_DOCUMENT,
    ACTIONS(247), 1,
      sym_QUERY,
    ACTIONS(249), 1,
      sym_CUSTOM,
    STATE(130), 1,
      sym_txn,
    ACTIONS(225), 3,
      sym__hash,
      sym_asterisk,
      sym_TXN,
  [1062] = 9,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(140), 1,
      sym__hash,
    ACTIONS(144), 1,
      sym_currency,
    ACTIONS(146), 1,
      sym_number,
    STATE(160), 1,
      sym_compound_amount,
    STATE(164), 1,
      sym_cost_comp,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    ACTIONS(142), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(119), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1096] = 11,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(251), 1,
      sym__eol,
    ACTIONS(253), 1,
      sym_atat,
    ACTIONS(255), 1,
      sym_at,
    ACTIONS(257), 1,
      sym_lcurllcurl,
    ACTIONS(259), 1,
      sym_lcurl,
    ACTIONS(261), 1,
      sym_number,
    STATE(132), 1,
      sym_incomplete_amount,
    STATE(175), 1,
      sym_cost_spec,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1134] = 11,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(257), 1,
      sym_lcurllcurl,
    ACTIONS(259), 1,
      sym_lcurl,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(263), 1,
      sym__eol,
    ACTIONS(265), 1,
      sym_atat,
    ACTIONS(267), 1,
      sym_at,
    STATE(134), 1,
      sym_incomplete_amount,
    STATE(167), 1,
      sym_cost_spec,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1172] = 2,
    ACTIONS(269), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(271), 12,
      sym__eol,
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
  [1191] = 2,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(275), 12,
      sym__eol,
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
  [1210] = 2,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(279), 12,
      sym__eol,
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
  [1229] = 2,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(283), 12,
      sym__eol,
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
  [1248] = 2,
    ACTIONS(285), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(287), 12,
      sym__eol,
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
  [1267] = 2,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(291), 12,
      sym__eol,
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
  [1286] = 2,
    ACTIONS(293), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(295), 12,
      sym__eol,
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
  [1305] = 2,
    ACTIONS(297), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(299), 12,
      sym__eol,
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
  [1324] = 2,
    ACTIONS(301), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(303), 12,
      sym__eol,
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
  [1343] = 2,
    ACTIONS(305), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(307), 12,
      sym__eol,
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
  [1362] = 2,
    ACTIONS(309), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(311), 12,
      sym__eol,
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
  [1381] = 2,
    ACTIONS(313), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(315), 12,
      sym__eol,
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
  [1400] = 2,
    ACTIONS(317), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(319), 12,
      sym__eol,
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
  [1419] = 2,
    ACTIONS(321), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(323), 12,
      sym__eol,
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
  [1438] = 2,
    ACTIONS(325), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(327), 12,
      sym__eol,
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
  [1457] = 2,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(331), 12,
      sym__eol,
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
  [1476] = 2,
    ACTIONS(333), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(335), 12,
      sym__eol,
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
  [1495] = 2,
    ACTIONS(337), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(339), 12,
      sym__eol,
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
  [1514] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(165), 12,
      sym__eol,
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
  [1533] = 2,
    ACTIONS(341), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(343), 12,
      sym__eol,
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
  [1552] = 2,
    ACTIONS(345), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(347), 12,
      sym__eol,
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
  [1571] = 2,
    ACTIONS(349), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(351), 12,
      sym__eol,
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
  [1590] = 2,
    ACTIONS(353), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(355), 12,
      sym__eol,
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
  [1609] = 2,
    ACTIONS(357), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(359), 12,
      sym__eol,
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
  [1628] = 2,
    ACTIONS(361), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(363), 12,
      sym__eol,
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
  [1647] = 2,
    ACTIONS(365), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(367), 12,
      sym__eol,
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
  [1666] = 2,
    ACTIONS(369), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(371), 12,
      sym__eol,
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
  [1685] = 2,
    ACTIONS(195), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(200), 12,
      sym__eol,
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
  [1704] = 1,
    ACTIONS(373), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1720] = 1,
    ACTIONS(375), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1736] = 1,
    ACTIONS(377), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1752] = 1,
    ACTIONS(379), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1768] = 1,
    ACTIONS(381), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1784] = 1,
    ACTIONS(383), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1800] = 1,
    ACTIONS(385), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1816] = 1,
    ACTIONS(387), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1832] = 1,
    ACTIONS(389), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1848] = 1,
    ACTIONS(391), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1864] = 1,
    ACTIONS(393), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1880] = 1,
    ACTIONS(395), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1896] = 1,
    ACTIONS(397), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1912] = 1,
    ACTIONS(399), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1928] = 1,
    ACTIONS(401), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1944] = 1,
    ACTIONS(403), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1960] = 1,
    ACTIONS(405), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1976] = 1,
    ACTIONS(407), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [1992] = 1,
    ACTIONS(409), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2008] = 1,
    ACTIONS(411), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2024] = 1,
    ACTIONS(413), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2040] = 1,
    ACTIONS(415), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2056] = 1,
    ACTIONS(417), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2072] = 1,
    ACTIONS(419), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2088] = 1,
    ACTIONS(421), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2104] = 1,
    ACTIONS(423), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2120] = 1,
    ACTIONS(425), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2136] = 1,
    ACTIONS(427), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2152] = 1,
    ACTIONS(429), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2168] = 1,
    ACTIONS(431), 13,
      ts_builtin_sym_end,
      sym__eol,
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
  [2184] = 10,
    ACTIONS(433), 1,
      sym__eol,
    ACTIONS(437), 1,
      sym_asterisk,
    ACTIONS(439), 1,
      sym_account,
    ACTIONS(443), 1,
      sym_key,
    STATE(152), 1,
      aux_sym_tags_links_repeat1,
    STATE(196), 1,
      sym_key_value,
    STATE(197), 1,
      sym_optflag,
    STATE(199), 1,
      sym_tags_links,
    ACTIONS(435), 2,
      sym__hash,
      sym_flag,
    ACTIONS(441), 2,
      sym_tag,
      sym_link,
  [2217] = 5,
    ACTIONS(453), 1,
      sym_currency,
    ACTIONS(447), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(449), 2,
      sym_plus,
      sym_minus,
    ACTIONS(451), 2,
      sym_bool,
      sym_number,
    ACTIONS(445), 5,
      sym__eol,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [2240] = 3,
    ACTIONS(457), 1,
      sym_rcurl,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(455), 9,
      sym__eol,
      sym_rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_plus,
      sym_minus,
      sym__rparen,
      sym_currency,
  [2259] = 3,
    ACTIONS(447), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(457), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(455), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [2278] = 2,
    ACTIONS(463), 1,
      sym_rcurl,
    ACTIONS(461), 11,
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
  [2295] = 2,
    ACTIONS(467), 1,
      sym_rcurl,
    ACTIONS(465), 11,
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
  [2312] = 2,
    ACTIONS(457), 1,
      sym_rcurl,
    ACTIONS(455), 11,
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
  [2329] = 2,
    ACTIONS(467), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(465), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [2346] = 2,
    ACTIONS(463), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(461), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [2363] = 2,
    ACTIONS(457), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(455), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [2380] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(469), 1,
      sym__eol,
    STATE(179), 1,
      sym_price_annotation,
    STATE(184), 1,
      sym_incomplete_amount,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2406] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(471), 1,
      sym__eol,
    STATE(184), 1,
      sym_incomplete_amount,
    STATE(227), 1,
      sym_price_annotation,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2432] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(473), 1,
      sym__eol,
    STATE(184), 1,
      sym_incomplete_amount,
    STATE(210), 1,
      sym_price_annotation,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2458] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(475), 1,
      sym__eol,
    STATE(184), 1,
      sym_incomplete_amount,
    STATE(208), 1,
      sym_price_annotation,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2484] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(477), 1,
      sym__eol,
    STATE(184), 1,
      sym_incomplete_amount,
    STATE(223), 1,
      sym_price_annotation,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2510] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(479), 1,
      sym__eol,
    STATE(184), 1,
      sym_incomplete_amount,
    STATE(231), 1,
      sym_price_annotation,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2536] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(481), 1,
      sym__eol,
    STATE(183), 1,
      sym_price_annotation,
    STATE(184), 1,
      sym_incomplete_amount,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2562] = 7,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(261), 1,
      sym_number,
    ACTIONS(483), 1,
      sym__eol,
    STATE(184), 1,
      sym_incomplete_amount,
    STATE(236), 1,
      sym_price_annotation,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(143), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2588] = 2,
    ACTIONS(487), 2,
      sym_bool,
      sym_number,
    ACTIONS(485), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [2602] = 2,
    ACTIONS(451), 2,
      sym_bool,
      sym_number,
    ACTIONS(445), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [2616] = 5,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(489), 1,
      sym_number,
    STATE(186), 1,
      sym_amount_tolerance,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(135), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2636] = 5,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(491), 1,
      sym_currency,
    ACTIONS(493), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(146), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2656] = 5,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(495), 1,
      sym_currency,
    ACTIONS(497), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(141), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2676] = 6,
    ACTIONS(501), 1,
      sym_rcurl,
    ACTIONS(503), 1,
      sym__hash,
    ACTIONS(507), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(499), 2,
      sym_rcurlrcurl,
      sym__comma,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [2698] = 5,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(509), 1,
      sym_number,
    STATE(206), 1,
      sym_amount,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(139), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2718] = 4,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(511), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(98), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2735] = 4,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(513), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(144), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2752] = 4,
    ACTIONS(175), 1,
      sym__lparen,
    ACTIONS(515), 1,
      sym_number,
    ACTIONS(173), 2,
      sym_plus,
      sym_minus,
    STATE(99), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2769] = 4,
    ACTIONS(175), 1,
      sym__lparen,
    ACTIONS(517), 1,
      sym_number,
    ACTIONS(173), 2,
      sym_plus,
      sym_minus,
    STATE(105), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2786] = 4,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(519), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(102), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2803] = 4,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(521), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(101), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2820] = 4,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(523), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(137), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2837] = 4,
    ACTIONS(175), 1,
      sym__lparen,
    ACTIONS(525), 1,
      sym_number,
    ACTIONS(173), 2,
      sym_plus,
      sym_minus,
    STATE(103), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2854] = 4,
    ACTIONS(70), 1,
      sym__lparen,
    ACTIONS(527), 1,
      sym_number,
    ACTIONS(68), 2,
      sym_plus,
      sym_minus,
    STATE(138), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2871] = 6,
    ACTIONS(529), 1,
      sym__eol,
    ACTIONS(531), 1,
      sym_string,
    STATE(150), 1,
      sym_txn_strings,
    STATE(152), 1,
      aux_sym_tags_links_repeat1,
    STATE(211), 1,
      sym_tags_links,
    ACTIONS(441), 2,
      sym_tag,
      sym_link,
  [2891] = 4,
    ACTIONS(533), 1,
      sym__eol,
    ACTIONS(535), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [2906] = 6,
    ACTIONS(257), 1,
      sym_lcurllcurl,
    ACTIONS(259), 1,
      sym_lcurl,
    ACTIONS(537), 1,
      sym__eol,
    ACTIONS(539), 1,
      sym_atat,
    ACTIONS(541), 1,
      sym_at,
    STATE(168), 1,
      sym_cost_spec,
  [2925] = 5,
    ACTIONS(543), 1,
      sym__eol,
    ACTIONS(545), 1,
      sym_currency,
    ACTIONS(547), 1,
      sym_string,
    STATE(229), 1,
      sym_opt_booking,
    STATE(147), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [2942] = 6,
    ACTIONS(257), 1,
      sym_lcurllcurl,
    ACTIONS(259), 1,
      sym_lcurl,
    ACTIONS(549), 1,
      sym__eol,
    ACTIONS(551), 1,
      sym_atat,
    ACTIONS(553), 1,
      sym_at,
    STATE(173), 1,
      sym_cost_spec,
  [2961] = 4,
    ACTIONS(555), 1,
      sym__tilde,
    ACTIONS(557), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [2976] = 5,
    ACTIONS(545), 1,
      sym_currency,
    ACTIONS(547), 1,
      sym_string,
    ACTIONS(559), 1,
      sym__eol,
    STATE(190), 1,
      sym_opt_booking,
    STATE(133), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [2993] = 3,
    ACTIONS(561), 1,
      sym__rparen,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [3005] = 3,
    ACTIONS(563), 1,
      sym__rparen,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [3017] = 3,
    ACTIONS(535), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [3029] = 2,
    ACTIONS(567), 2,
      sym_at,
      sym_lcurl,
    ACTIONS(565), 3,
      sym__eol,
      sym_atat,
      sym_lcurllcurl,
  [3039] = 3,
    ACTIONS(569), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [3051] = 3,
    ACTIONS(573), 1,
      sym__comma,
    STATE(149), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(571), 3,
      sym__eol,
      sym_currency,
      sym_string,
  [3063] = 3,
    ACTIONS(575), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [3075] = 3,
    ACTIONS(577), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [3087] = 4,
    ACTIONS(579), 1,
      sym__eol,
    STATE(152), 1,
      aux_sym_tags_links_repeat1,
    STATE(215), 1,
      sym_tags_links,
    ACTIONS(441), 2,
      sym_tag,
      sym_link,
  [3101] = 3,
    ACTIONS(581), 1,
      sym_currency,
    ACTIONS(459), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(505), 2,
      sym_plus,
      sym_minus,
  [3113] = 3,
    ACTIONS(585), 1,
      sym_currency,
    ACTIONS(583), 2,
      sym__eol,
      sym_string,
    STATE(147), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [3125] = 3,
    ACTIONS(590), 1,
      sym__comma,
    STATE(148), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(588), 3,
      sym__eol,
      sym_currency,
      sym_string,
  [3137] = 3,
    ACTIONS(573), 1,
      sym__comma,
    STATE(148), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(593), 3,
      sym__eol,
      sym_currency,
      sym_string,
  [3149] = 4,
    ACTIONS(595), 1,
      sym__eol,
    STATE(152), 1,
      aux_sym_tags_links_repeat1,
    STATE(246), 1,
      sym_tags_links,
    ACTIONS(441), 2,
      sym_tag,
      sym_link,
  [3163] = 4,
    ACTIONS(597), 1,
      sym_rcurlrcurl,
    ACTIONS(599), 1,
      sym_rcurl,
    ACTIONS(601), 1,
      sym__comma,
    STATE(155), 1,
      aux_sym_cost_comp_list_repeat1,
  [3176] = 3,
    ACTIONS(603), 1,
      sym__eol,
    STATE(157), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(605), 2,
      sym_tag,
      sym_link,
  [3187] = 2,
    ACTIONS(609), 1,
      sym_string,
    ACTIONS(607), 3,
      sym__eol,
      sym_tag,
      sym_link,
  [3196] = 4,
    ACTIONS(611), 1,
      sym_rcurlrcurl,
    ACTIONS(613), 1,
      sym_rcurl,
    ACTIONS(615), 1,
      sym__comma,
    STATE(154), 1,
      aux_sym_cost_comp_list_repeat1,
  [3209] = 4,
    ACTIONS(601), 1,
      sym__comma,
    ACTIONS(618), 1,
      sym_rcurlrcurl,
    ACTIONS(620), 1,
      sym_rcurl,
    STATE(154), 1,
      aux_sym_cost_comp_list_repeat1,
  [3222] = 1,
    ACTIONS(588), 4,
      sym__eol,
      sym__comma,
      sym_currency,
      sym_string,
  [3229] = 3,
    ACTIONS(622), 1,
      sym__eol,
    STATE(157), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(624), 2,
      sym_tag,
      sym_link,
  [3240] = 1,
    ACTIONS(627), 4,
      sym__eol,
      sym_string,
      sym_tag,
      sym_link,
  [3247] = 2,
    ACTIONS(631), 1,
      sym_at,
    ACTIONS(629), 2,
      sym__eol,
      sym_atat,
  [3255] = 2,
    ACTIONS(635), 1,
      sym_rcurl,
    ACTIONS(633), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3263] = 1,
    ACTIONS(637), 3,
      sym__eol,
      sym_tag,
      sym_link,
  [3269] = 3,
    ACTIONS(443), 1,
      sym_key,
    ACTIONS(639), 1,
      sym__eol,
    STATE(196), 1,
      sym_key_value,
  [3279] = 2,
    ACTIONS(643), 1,
      sym_rcurl,
    ACTIONS(641), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3287] = 2,
    ACTIONS(613), 1,
      sym_rcurl,
    ACTIONS(611), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3295] = 2,
    ACTIONS(647), 1,
      sym_rcurl,
    ACTIONS(645), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3303] = 2,
    ACTIONS(651), 1,
      sym_rcurl,
    ACTIONS(649), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3311] = 3,
    ACTIONS(653), 1,
      sym__eol,
    ACTIONS(655), 1,
      sym_atat,
    ACTIONS(657), 1,
      sym_at,
  [3321] = 3,
    ACTIONS(659), 1,
      sym__eol,
    ACTIONS(661), 1,
      sym_atat,
    ACTIONS(663), 1,
      sym_at,
  [3331] = 1,
    ACTIONS(665), 3,
      sym__eol,
      sym_tag,
      sym_link,
  [3337] = 2,
    ACTIONS(669), 1,
      sym_rcurl,
    ACTIONS(667), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3345] = 2,
    ACTIONS(673), 1,
      sym_at,
    ACTIONS(671), 2,
      sym__eol,
      sym_atat,
  [3353] = 2,
    ACTIONS(677), 1,
      sym_rcurl,
    ACTIONS(675), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3361] = 3,
    ACTIONS(679), 1,
      sym__eol,
    ACTIONS(681), 1,
      sym_atat,
    ACTIONS(683), 1,
      sym_at,
  [3371] = 2,
    ACTIONS(687), 1,
      sym_rcurl,
    ACTIONS(685), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3379] = 3,
    ACTIONS(689), 1,
      sym__eol,
    ACTIONS(691), 1,
      sym_atat,
    ACTIONS(693), 1,
      sym_at,
  [3389] = 2,
    ACTIONS(443), 1,
      sym_key,
    STATE(224), 1,
      sym_key_value,
  [3396] = 2,
    ACTIONS(695), 1,
      sym_string,
    STATE(145), 1,
      sym_filename,
  [3403] = 2,
    ACTIONS(697), 1,
      sym__eol,
    ACTIONS(699), 1,
      sym_string,
  [3410] = 1,
    ACTIONS(701), 1,
      sym__eol,
  [3414] = 1,
    ACTIONS(703), 1,
      sym__eol,
  [3418] = 1,
    ACTIONS(705), 1,
      sym_string,
  [3422] = 1,
    ACTIONS(707), 1,
      sym_string,
  [3426] = 1,
    ACTIONS(709), 1,
      sym__eol,
  [3430] = 1,
    ACTIONS(711), 1,
      sym__eol,
  [3434] = 1,
    ACTIONS(713), 1,
      sym__eol,
  [3438] = 1,
    ACTIONS(715), 1,
      sym__eol,
  [3442] = 1,
    ACTIONS(717), 1,
      sym_rcurlrcurl,
  [3446] = 1,
    ACTIONS(719), 1,
      sym__eol,
  [3450] = 1,
    ACTIONS(717), 1,
      sym_rcurl,
  [3454] = 1,
    ACTIONS(721), 1,
      sym__eol,
  [3458] = 1,
    ACTIONS(723), 1,
      sym_account,
  [3462] = 1,
    ACTIONS(725), 1,
      sym_account,
  [3466] = 1,
    ACTIONS(727), 1,
      sym_currency,
  [3470] = 1,
    ACTIONS(729), 1,
      sym__eol,
  [3474] = 1,
    ACTIONS(731), 1,
      sym_string,
  [3478] = 1,
    ACTIONS(733), 1,
      sym__eol,
  [3482] = 1,
    ACTIONS(735), 1,
      sym_account,
  [3486] = 1,
    ACTIONS(737), 1,
      sym_account,
  [3490] = 1,
    ACTIONS(739), 1,
      sym__eol,
  [3494] = 1,
    ACTIONS(741), 1,
      sym__eol,
  [3498] = 1,
    ACTIONS(743), 1,
      sym_currency,
  [3502] = 1,
    ACTIONS(745), 1,
      sym_account,
  [3506] = 1,
    ACTIONS(747), 1,
      sym_account,
  [3510] = 1,
    ACTIONS(749), 1,
      sym__eol,
  [3514] = 1,
    ACTIONS(751), 1,
      sym_account,
  [3518] = 1,
    ACTIONS(753), 1,
      sym__eol,
  [3522] = 1,
    ACTIONS(755), 1,
      sym_account,
  [3526] = 1,
    ACTIONS(757), 1,
      sym__eol,
  [3530] = 1,
    ACTIONS(759), 1,
      sym__eol,
  [3534] = 1,
    ACTIONS(761), 1,
      sym__eol,
  [3538] = 1,
    ACTIONS(763), 1,
      sym__eol,
  [3542] = 1,
    ACTIONS(765), 1,
      sym__eol,
  [3546] = 1,
    ACTIONS(767), 1,
      sym__eol,
  [3550] = 1,
    ACTIONS(769), 1,
      sym__eol,
  [3554] = 1,
    ACTIONS(771), 1,
      sym__eol,
  [3558] = 1,
    ACTIONS(773), 1,
      sym__eol,
  [3562] = 1,
    ACTIONS(775), 1,
      sym__eol,
  [3566] = 1,
    ACTIONS(777), 1,
      sym__eol,
  [3570] = 1,
    ACTIONS(779), 1,
      sym__eol,
  [3574] = 1,
    ACTIONS(781), 1,
      aux_sym__skipped_lines_token1,
  [3578] = 1,
    ACTIONS(783), 1,
      sym_string,
  [3582] = 1,
    ACTIONS(785), 1,
      sym__colon,
  [3586] = 1,
    ACTIONS(787), 1,
      sym__eol,
  [3590] = 1,
    ACTIONS(789), 1,
      sym__eol,
  [3594] = 1,
    ACTIONS(791), 1,
      sym__colon,
  [3598] = 1,
    ACTIONS(793), 1,
      sym__eol,
  [3602] = 1,
    ACTIONS(795), 1,
      sym__eol,
  [3606] = 1,
    ACTIONS(797), 1,
      sym__eol,
  [3610] = 1,
    ACTIONS(799), 1,
      sym__eol,
  [3614] = 1,
    ACTIONS(801), 1,
      sym__eol,
  [3618] = 1,
    ACTIONS(803), 1,
      sym__eol,
  [3622] = 1,
    ACTIONS(805), 1,
      sym_account,
  [3626] = 1,
    ACTIONS(807), 1,
      ts_builtin_sym_end,
  [3630] = 1,
    ACTIONS(809), 1,
      sym__eol,
  [3634] = 1,
    ACTIONS(811), 1,
      sym_string,
  [3638] = 1,
    ACTIONS(813), 1,
      sym__eol,
  [3642] = 1,
    ACTIONS(815), 1,
      sym_string,
  [3646] = 1,
    ACTIONS(817), 1,
      sym_string,
  [3650] = 1,
    ACTIONS(819), 1,
      sym_key,
  [3654] = 1,
    ACTIONS(821), 1,
      sym_currency,
  [3658] = 1,
    ACTIONS(823), 1,
      sym_string,
  [3662] = 1,
    ACTIONS(825), 1,
      sym_string,
  [3666] = 1,
    ACTIONS(827), 1,
      sym_tag,
  [3670] = 1,
    ACTIONS(829), 1,
      sym_tag,
  [3674] = 1,
    ACTIONS(831), 1,
      sym__eol,
  [3678] = 1,
    ACTIONS(833), 1,
      sym__eol,
  [3682] = 1,
    ACTIONS(835), 1,
      sym_string,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 163,
  [SMALL_STATE(6)] = 192,
  [SMALL_STATE(7)] = 221,
  [SMALL_STATE(8)] = 250,
  [SMALL_STATE(9)] = 279,
  [SMALL_STATE(10)] = 307,
  [SMALL_STATE(11)] = 335,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 391,
  [SMALL_STATE(14)] = 419,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 475,
  [SMALL_STATE(17)] = 503,
  [SMALL_STATE(18)] = 531,
  [SMALL_STATE(19)] = 559,
  [SMALL_STATE(20)] = 599,
  [SMALL_STATE(21)] = 627,
  [SMALL_STATE(22)] = 655,
  [SMALL_STATE(23)] = 683,
  [SMALL_STATE(24)] = 709,
  [SMALL_STATE(25)] = 749,
  [SMALL_STATE(26)] = 777,
  [SMALL_STATE(27)] = 815,
  [SMALL_STATE(28)] = 843,
  [SMALL_STATE(29)] = 869,
  [SMALL_STATE(30)] = 897,
  [SMALL_STATE(31)] = 922,
  [SMALL_STATE(32)] = 947,
  [SMALL_STATE(33)] = 982,
  [SMALL_STATE(34)] = 1017,
  [SMALL_STATE(35)] = 1062,
  [SMALL_STATE(36)] = 1096,
  [SMALL_STATE(37)] = 1134,
  [SMALL_STATE(38)] = 1172,
  [SMALL_STATE(39)] = 1191,
  [SMALL_STATE(40)] = 1210,
  [SMALL_STATE(41)] = 1229,
  [SMALL_STATE(42)] = 1248,
  [SMALL_STATE(43)] = 1267,
  [SMALL_STATE(44)] = 1286,
  [SMALL_STATE(45)] = 1305,
  [SMALL_STATE(46)] = 1324,
  [SMALL_STATE(47)] = 1343,
  [SMALL_STATE(48)] = 1362,
  [SMALL_STATE(49)] = 1381,
  [SMALL_STATE(50)] = 1400,
  [SMALL_STATE(51)] = 1419,
  [SMALL_STATE(52)] = 1438,
  [SMALL_STATE(53)] = 1457,
  [SMALL_STATE(54)] = 1476,
  [SMALL_STATE(55)] = 1495,
  [SMALL_STATE(56)] = 1514,
  [SMALL_STATE(57)] = 1533,
  [SMALL_STATE(58)] = 1552,
  [SMALL_STATE(59)] = 1571,
  [SMALL_STATE(60)] = 1590,
  [SMALL_STATE(61)] = 1609,
  [SMALL_STATE(62)] = 1628,
  [SMALL_STATE(63)] = 1647,
  [SMALL_STATE(64)] = 1666,
  [SMALL_STATE(65)] = 1685,
  [SMALL_STATE(66)] = 1704,
  [SMALL_STATE(67)] = 1720,
  [SMALL_STATE(68)] = 1736,
  [SMALL_STATE(69)] = 1752,
  [SMALL_STATE(70)] = 1768,
  [SMALL_STATE(71)] = 1784,
  [SMALL_STATE(72)] = 1800,
  [SMALL_STATE(73)] = 1816,
  [SMALL_STATE(74)] = 1832,
  [SMALL_STATE(75)] = 1848,
  [SMALL_STATE(76)] = 1864,
  [SMALL_STATE(77)] = 1880,
  [SMALL_STATE(78)] = 1896,
  [SMALL_STATE(79)] = 1912,
  [SMALL_STATE(80)] = 1928,
  [SMALL_STATE(81)] = 1944,
  [SMALL_STATE(82)] = 1960,
  [SMALL_STATE(83)] = 1976,
  [SMALL_STATE(84)] = 1992,
  [SMALL_STATE(85)] = 2008,
  [SMALL_STATE(86)] = 2024,
  [SMALL_STATE(87)] = 2040,
  [SMALL_STATE(88)] = 2056,
  [SMALL_STATE(89)] = 2072,
  [SMALL_STATE(90)] = 2088,
  [SMALL_STATE(91)] = 2104,
  [SMALL_STATE(92)] = 2120,
  [SMALL_STATE(93)] = 2136,
  [SMALL_STATE(94)] = 2152,
  [SMALL_STATE(95)] = 2168,
  [SMALL_STATE(96)] = 2184,
  [SMALL_STATE(97)] = 2217,
  [SMALL_STATE(98)] = 2240,
  [SMALL_STATE(99)] = 2259,
  [SMALL_STATE(100)] = 2278,
  [SMALL_STATE(101)] = 2295,
  [SMALL_STATE(102)] = 2312,
  [SMALL_STATE(103)] = 2329,
  [SMALL_STATE(104)] = 2346,
  [SMALL_STATE(105)] = 2363,
  [SMALL_STATE(106)] = 2380,
  [SMALL_STATE(107)] = 2406,
  [SMALL_STATE(108)] = 2432,
  [SMALL_STATE(109)] = 2458,
  [SMALL_STATE(110)] = 2484,
  [SMALL_STATE(111)] = 2510,
  [SMALL_STATE(112)] = 2536,
  [SMALL_STATE(113)] = 2562,
  [SMALL_STATE(114)] = 2588,
  [SMALL_STATE(115)] = 2602,
  [SMALL_STATE(116)] = 2616,
  [SMALL_STATE(117)] = 2636,
  [SMALL_STATE(118)] = 2656,
  [SMALL_STATE(119)] = 2676,
  [SMALL_STATE(120)] = 2698,
  [SMALL_STATE(121)] = 2718,
  [SMALL_STATE(122)] = 2735,
  [SMALL_STATE(123)] = 2752,
  [SMALL_STATE(124)] = 2769,
  [SMALL_STATE(125)] = 2786,
  [SMALL_STATE(126)] = 2803,
  [SMALL_STATE(127)] = 2820,
  [SMALL_STATE(128)] = 2837,
  [SMALL_STATE(129)] = 2854,
  [SMALL_STATE(130)] = 2871,
  [SMALL_STATE(131)] = 2891,
  [SMALL_STATE(132)] = 2906,
  [SMALL_STATE(133)] = 2925,
  [SMALL_STATE(134)] = 2942,
  [SMALL_STATE(135)] = 2961,
  [SMALL_STATE(136)] = 2976,
  [SMALL_STATE(137)] = 2993,
  [SMALL_STATE(138)] = 3005,
  [SMALL_STATE(139)] = 3017,
  [SMALL_STATE(140)] = 3029,
  [SMALL_STATE(141)] = 3039,
  [SMALL_STATE(142)] = 3051,
  [SMALL_STATE(143)] = 3063,
  [SMALL_STATE(144)] = 3075,
  [SMALL_STATE(145)] = 3087,
  [SMALL_STATE(146)] = 3101,
  [SMALL_STATE(147)] = 3113,
  [SMALL_STATE(148)] = 3125,
  [SMALL_STATE(149)] = 3137,
  [SMALL_STATE(150)] = 3149,
  [SMALL_STATE(151)] = 3163,
  [SMALL_STATE(152)] = 3176,
  [SMALL_STATE(153)] = 3187,
  [SMALL_STATE(154)] = 3196,
  [SMALL_STATE(155)] = 3209,
  [SMALL_STATE(156)] = 3222,
  [SMALL_STATE(157)] = 3229,
  [SMALL_STATE(158)] = 3240,
  [SMALL_STATE(159)] = 3247,
  [SMALL_STATE(160)] = 3255,
  [SMALL_STATE(161)] = 3263,
  [SMALL_STATE(162)] = 3269,
  [SMALL_STATE(163)] = 3279,
  [SMALL_STATE(164)] = 3287,
  [SMALL_STATE(165)] = 3295,
  [SMALL_STATE(166)] = 3303,
  [SMALL_STATE(167)] = 3311,
  [SMALL_STATE(168)] = 3321,
  [SMALL_STATE(169)] = 3331,
  [SMALL_STATE(170)] = 3337,
  [SMALL_STATE(171)] = 3345,
  [SMALL_STATE(172)] = 3353,
  [SMALL_STATE(173)] = 3361,
  [SMALL_STATE(174)] = 3371,
  [SMALL_STATE(175)] = 3379,
  [SMALL_STATE(176)] = 3389,
  [SMALL_STATE(177)] = 3396,
  [SMALL_STATE(178)] = 3403,
  [SMALL_STATE(179)] = 3410,
  [SMALL_STATE(180)] = 3414,
  [SMALL_STATE(181)] = 3418,
  [SMALL_STATE(182)] = 3422,
  [SMALL_STATE(183)] = 3426,
  [SMALL_STATE(184)] = 3430,
  [SMALL_STATE(185)] = 3434,
  [SMALL_STATE(186)] = 3438,
  [SMALL_STATE(187)] = 3442,
  [SMALL_STATE(188)] = 3446,
  [SMALL_STATE(189)] = 3450,
  [SMALL_STATE(190)] = 3454,
  [SMALL_STATE(191)] = 3458,
  [SMALL_STATE(192)] = 3462,
  [SMALL_STATE(193)] = 3466,
  [SMALL_STATE(194)] = 3470,
  [SMALL_STATE(195)] = 3474,
  [SMALL_STATE(196)] = 3478,
  [SMALL_STATE(197)] = 3482,
  [SMALL_STATE(198)] = 3486,
  [SMALL_STATE(199)] = 3490,
  [SMALL_STATE(200)] = 3494,
  [SMALL_STATE(201)] = 3498,
  [SMALL_STATE(202)] = 3502,
  [SMALL_STATE(203)] = 3506,
  [SMALL_STATE(204)] = 3510,
  [SMALL_STATE(205)] = 3514,
  [SMALL_STATE(206)] = 3518,
  [SMALL_STATE(207)] = 3522,
  [SMALL_STATE(208)] = 3526,
  [SMALL_STATE(209)] = 3530,
  [SMALL_STATE(210)] = 3534,
  [SMALL_STATE(211)] = 3538,
  [SMALL_STATE(212)] = 3542,
  [SMALL_STATE(213)] = 3546,
  [SMALL_STATE(214)] = 3550,
  [SMALL_STATE(215)] = 3554,
  [SMALL_STATE(216)] = 3558,
  [SMALL_STATE(217)] = 3562,
  [SMALL_STATE(218)] = 3566,
  [SMALL_STATE(219)] = 3570,
  [SMALL_STATE(220)] = 3574,
  [SMALL_STATE(221)] = 3578,
  [SMALL_STATE(222)] = 3582,
  [SMALL_STATE(223)] = 3586,
  [SMALL_STATE(224)] = 3590,
  [SMALL_STATE(225)] = 3594,
  [SMALL_STATE(226)] = 3598,
  [SMALL_STATE(227)] = 3602,
  [SMALL_STATE(228)] = 3606,
  [SMALL_STATE(229)] = 3610,
  [SMALL_STATE(230)] = 3614,
  [SMALL_STATE(231)] = 3618,
  [SMALL_STATE(232)] = 3622,
  [SMALL_STATE(233)] = 3626,
  [SMALL_STATE(234)] = 3630,
  [SMALL_STATE(235)] = 3634,
  [SMALL_STATE(236)] = 3638,
  [SMALL_STATE(237)] = 3642,
  [SMALL_STATE(238)] = 3646,
  [SMALL_STATE(239)] = 3650,
  [SMALL_STATE(240)] = 3654,
  [SMALL_STATE(241)] = 3658,
  [SMALL_STATE(242)] = 3662,
  [SMALL_STATE(243)] = 3666,
  [SMALL_STATE(244)] = 3670,
  [SMALL_STATE(245)] = 3674,
  [SMALL_STATE(246)] = 3678,
  [SMALL_STATE(247)] = 3682,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(220),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(244),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(243),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(176),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(239),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(238),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(237),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(235),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(34),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(234),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 8),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 8),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 7),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 7),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 20),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 20),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 11),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 11),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 10),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 10),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 9),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5, .production_id = 9),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 14),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5, .production_id = 14),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 5),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4, .production_id = 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 15),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 15),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 16),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5, .production_id = 16),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 17),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, .production_id = 17),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 18),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 18),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 12),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5, .production_id = 12),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4, .production_id = 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2), SHIFT_REPEAT(96),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 13),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5, .production_id = 13),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 23),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 23),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting_or_kv_list, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting_or_kv_list, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 22),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 22),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(162),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value_list, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(128),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(129),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(115),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(115),
  [222] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(97),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 28),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 28),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 30),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 30),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 48),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 48),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 47),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 47),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 43),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 43),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 46),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 46),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 45),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 45),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 37),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 37),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 43),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 43),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_line, 3),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 36),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 36),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 42),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 42),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 3),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 24),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 24),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 41),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 41),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 35),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 35),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 40),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 40),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 37),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 37),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 36),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 36),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 30),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 30),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 24),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 24),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 29),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 29),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 28),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 28),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 35),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 35),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 31),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 31),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 29),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 29),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 15),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 16),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 2),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 4),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 25),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 22),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 21),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 9),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 19),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 10),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 11),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 12),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 13),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 14),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 23),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 5),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 3),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 17),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 18),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 3),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 6),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 27),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 27),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_value, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [553] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(142),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [590] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(240),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(35),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 2),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2),
  [624] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2), SHIFT_REPEAT(157),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 44),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 44),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 39),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 39),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 38),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 38),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 26),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 26),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 34),
  [673] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 34),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 32),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 32),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [683] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 33),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 33),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [693] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [807] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
  static TSLanguage language = {
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
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
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
