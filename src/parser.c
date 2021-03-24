#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 332
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 122
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

static const char *ts_field_names[] = {
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
      if (lookahead == ';') ADVANCE(189);
      if (lookahead == '}') ADVANCE(102);
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
      if (lookahead == '}') ADVANCE(51);
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
      if (lookahead == ';') ADVANCE(189);
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
      if (lookahead == ';') ADVANCE(189);
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
      if (lookahead == '}') ADVANCE(51);
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
      if (lookahead == '}') ADVANCE(102);
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

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 91},
  [3] = {.lex_state = 91},
  [4] = {.lex_state = 92},
  [5] = {.lex_state = 92},
  [6] = {.lex_state = 92},
  [7] = {.lex_state = 92},
  [8] = {.lex_state = 92},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 92},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 92},
  [13] = {.lex_state = 92},
  [14] = {.lex_state = 92},
  [15] = {.lex_state = 92},
  [16] = {.lex_state = 92},
  [17] = {.lex_state = 92},
  [18] = {.lex_state = 92},
  [19] = {.lex_state = 92},
  [20] = {.lex_state = 92},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 92},
  [23] = {.lex_state = 92},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 92},
  [26] = {.lex_state = 92},
  [27] = {.lex_state = 92},
  [28] = {.lex_state = 92},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 92},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 92},
  [33] = {.lex_state = 92},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 92},
  [36] = {.lex_state = 92},
  [37] = {.lex_state = 92},
  [38] = {.lex_state = 92},
  [39] = {.lex_state = 92},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 92},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 1},
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
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 92},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 92},
  [70] = {.lex_state = 92},
  [71] = {.lex_state = 92},
  [72] = {.lex_state = 92},
  [73] = {.lex_state = 92},
  [74] = {.lex_state = 92},
  [75] = {.lex_state = 92},
  [76] = {.lex_state = 92},
  [77] = {.lex_state = 92},
  [78] = {.lex_state = 92},
  [79] = {.lex_state = 92},
  [80] = {.lex_state = 92},
  [81] = {.lex_state = 92},
  [82] = {.lex_state = 92},
  [83] = {.lex_state = 92},
  [84] = {.lex_state = 92},
  [85] = {.lex_state = 92},
  [86] = {.lex_state = 92},
  [87] = {.lex_state = 92},
  [88] = {.lex_state = 92},
  [89] = {.lex_state = 92},
  [90] = {.lex_state = 92},
  [91] = {.lex_state = 92},
  [92] = {.lex_state = 92},
  [93] = {.lex_state = 92},
  [94] = {.lex_state = 92},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 92},
  [98] = {.lex_state = 92},
  [99] = {.lex_state = 92},
  [100] = {.lex_state = 92},
  [101] = {.lex_state = 92},
  [102] = {.lex_state = 91},
  [103] = {.lex_state = 91},
  [104] = {.lex_state = 91},
  [105] = {.lex_state = 91},
  [106] = {.lex_state = 91},
  [107] = {.lex_state = 91},
  [108] = {.lex_state = 91},
  [109] = {.lex_state = 91},
  [110] = {.lex_state = 91},
  [111] = {.lex_state = 91},
  [112] = {.lex_state = 91},
  [113] = {.lex_state = 91},
  [114] = {.lex_state = 91},
  [115] = {.lex_state = 91},
  [116] = {.lex_state = 91},
  [117] = {.lex_state = 91},
  [118] = {.lex_state = 91},
  [119] = {.lex_state = 91},
  [120] = {.lex_state = 91},
  [121] = {.lex_state = 91},
  [122] = {.lex_state = 91},
  [123] = {.lex_state = 91},
  [124] = {.lex_state = 91},
  [125] = {.lex_state = 91},
  [126] = {.lex_state = 91},
  [127] = {.lex_state = 91},
  [128] = {.lex_state = 91},
  [129] = {.lex_state = 91},
  [130] = {.lex_state = 91},
  [131] = {.lex_state = 91},
  [132] = {.lex_state = 91},
  [133] = {.lex_state = 91},
  [134] = {.lex_state = 91},
  [135] = {.lex_state = 91},
  [136] = {.lex_state = 91},
  [137] = {.lex_state = 91},
  [138] = {.lex_state = 91},
  [139] = {.lex_state = 91},
  [140] = {.lex_state = 91},
  [141] = {.lex_state = 91},
  [142] = {.lex_state = 91},
  [143] = {.lex_state = 91},
  [144] = {.lex_state = 5},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 3},
  [152] = {.lex_state = 3},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 7},
  [157] = {.lex_state = 7},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 6},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 6},
  [163] = {.lex_state = 4},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 7},
  [167] = {.lex_state = 4},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 7},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 7},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 7},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 1},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 1},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 1},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 1},
  [190] = {.lex_state = 1},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 1},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
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
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 2},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
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
  [250] = {.lex_state = 2},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 2},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 190},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 0},
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
  [280] = {.lex_state = 91},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 2},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 2},
  [300] = {.lex_state = 2},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 2},
  [305] = {.lex_state = 1},
  [306] = {.lex_state = 2},
  [307] = {.lex_state = 2},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 2},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 2},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 2},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
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
    [sym_file] = STATE(323),
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
  [128] = 5,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym__indent,
    STATE(137), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(70), 12,
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
  [157] = 5,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    STATE(132), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(74), 12,
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
  [186] = 5,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    STATE(123), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(78), 12,
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
  [215] = 5,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(80), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
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
  [244] = 5,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(136), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
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
  [273] = 8,
    ACTIONS(88), 1,
      sym__eol,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(98), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(275), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(94), 3,
      sym__none,
      sym_bool,
      sym_currency,
    ACTIONS(96), 4,
      sym_date,
      sym_account,
      sym_string,
      sym_tag,
    STATE(186), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [308] = 5,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    STATE(122), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(102), 12,
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
  [337] = 5,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    STATE(135), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(106), 12,
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
  [366] = 5,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(134), 1,
      sym_posting_or_kv_list,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(110), 12,
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
  [395] = 5,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      sym__indent,
    STATE(143), 1,
      sym_key_value_list,
    STATE(47), 2,
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
  [423] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
    STATE(108), 1,
      sym_key_value_list,
    STATE(47), 2,
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
  [451] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_key_value_list,
    STATE(47), 2,
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
  [479] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_key_value_list,
    STATE(47), 2,
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
  [507] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    STATE(102), 1,
      sym_key_value_list,
    STATE(47), 2,
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
  [535] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    STATE(131), 1,
      sym_key_value_list,
    STATE(47), 2,
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
  [563] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    STATE(126), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(140), 12,
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
  [591] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    STATE(129), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(144), 12,
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
  [619] = 10,
    ACTIONS(146), 1,
      sym__eol,
    ACTIONS(150), 1,
      sym__lparen,
    ACTIONS(152), 1,
      sym_bool,
    ACTIONS(156), 1,
      sym_number,
    STATE(163), 1,
      sym_amount,
    STATE(265), 1,
      sym_custom_value_list,
    ACTIONS(148), 2,
      sym_plus,
      sym_minus,
    STATE(48), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(154), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(160), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [657] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
    STATE(121), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(160), 12,
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
  [685] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
    STATE(120), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(164), 12,
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
  [713] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(166), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(168), 12,
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
  [741] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(172), 12,
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
  [769] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(176), 12,
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
  [797] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    STATE(114), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(180), 12,
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
  [825] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(113), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(184), 12,
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
  [853] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
    STATE(112), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(188), 12,
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
  [881] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    STATE(110), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(192), 12,
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
  [909] = 11,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(194), 1,
      sym_rcurl,
    ACTIONS(196), 1,
      sym__hash,
    ACTIONS(200), 1,
      sym_currency,
    ACTIONS(202), 1,
      sym_number,
    STATE(209), 1,
      sym_cost_comp,
    STATE(217), 1,
      sym_compound_amount,
    STATE(280), 1,
      sym_cost_comp_list,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    ACTIONS(198), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(162), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [949] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
    STATE(130), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(206), 12,
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
  [977] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    STATE(133), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(210), 12,
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
  [1005] = 11,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(194), 1,
      sym_rcurlrcurl,
    ACTIONS(196), 1,
      sym__hash,
    ACTIONS(200), 1,
      sym_currency,
    ACTIONS(202), 1,
      sym_number,
    STATE(209), 1,
      sym_cost_comp,
    STATE(217), 1,
      sym_compound_amount,
    STATE(311), 1,
      sym_cost_comp_list,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    ACTIONS(198), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(162), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1045] = 4,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      sym__indent,
    STATE(35), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(217), 12,
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
  [1071] = 4,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    STATE(35), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_posting_or_kv_list_repeat1,
    ACTIONS(221), 12,
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
  [1097] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(109), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(225), 12,
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
  [1125] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    STATE(139), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(229), 12,
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
  [1153] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    STATE(105), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(233), 12,
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
  [1181] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    STATE(107), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(237), 12,
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
  [1209] = 5,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    STATE(141), 1,
      sym_key_value_list,
    STATE(47), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(241), 12,
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
  [1237] = 14,
    ACTIONS(245), 1,
      sym_flag,
    ACTIONS(247), 1,
      sym_BALANCE,
    ACTIONS(249), 1,
      sym_OPEN,
    ACTIONS(251), 1,
      sym_CLOSE,
    ACTIONS(253), 1,
      sym_COMMODITY,
    ACTIONS(255), 1,
      sym_PAD,
    ACTIONS(257), 1,
      sym_EVENT,
    ACTIONS(259), 1,
      sym_PRICE,
    ACTIONS(261), 1,
      sym_NOTE,
    ACTIONS(263), 1,
      sym_DOCUMENT,
    ACTIONS(265), 1,
      sym_QUERY,
    ACTIONS(267), 1,
      sym_CUSTOM,
    STATE(177), 1,
      sym_txn,
    ACTIONS(243), 3,
      sym__hash,
      sym_asterisk,
      sym_TXN,
  [1282] = 12,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(269), 1,
      sym__eol,
    ACTIONS(271), 1,
      sym_atat,
    ACTIONS(273), 1,
      sym_at,
    ACTIONS(275), 1,
      sym_lcurllcurl,
    ACTIONS(277), 1,
      sym_lcurl,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(281), 1,
      sym_comment,
    STATE(180), 1,
      sym_incomplete_amount,
    STATE(204), 1,
      sym_cost_spec,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1323] = 9,
    ACTIONS(283), 1,
      sym__eol,
    ACTIONS(288), 1,
      sym__lparen,
    ACTIONS(291), 1,
      sym_bool,
    ACTIONS(297), 1,
      sym_number,
    STATE(163), 1,
      sym_amount,
    ACTIONS(285), 2,
      sym_plus,
      sym_minus,
    STATE(44), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(294), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(160), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1358] = 4,
    ACTIONS(300), 1,
      ts_builtin_sym_end,
    ACTIONS(302), 1,
      sym__indent,
    STATE(45), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(305), 12,
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
  [1383] = 12,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(275), 1,
      sym_lcurllcurl,
    ACTIONS(277), 1,
      sym_lcurl,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(307), 1,
      sym__eol,
    ACTIONS(309), 1,
      sym_atat,
    ACTIONS(311), 1,
      sym_at,
    ACTIONS(313), 1,
      sym_comment,
    STATE(179), 1,
      sym_incomplete_amount,
    STATE(205), 1,
      sym_cost_spec,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1424] = 4,
    ACTIONS(114), 1,
      sym__indent,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    STATE(45), 2,
      sym_key_value_line,
      aux_sym_key_value_list_repeat1,
    ACTIONS(317), 12,
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
  [1449] = 9,
    ACTIONS(150), 1,
      sym__lparen,
    ACTIONS(152), 1,
      sym_bool,
    ACTIONS(156), 1,
      sym_number,
    ACTIONS(319), 1,
      sym__eol,
    STATE(163), 1,
      sym_amount,
    ACTIONS(148), 2,
      sym_plus,
      sym_minus,
    STATE(44), 2,
      sym_custom_value,
      aux_sym_custom_value_list_repeat1,
    ACTIONS(154), 3,
      sym_date,
      sym_account,
      sym_string,
    STATE(160), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1484] = 9,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(196), 1,
      sym__hash,
    ACTIONS(200), 1,
      sym_currency,
    ACTIONS(202), 1,
      sym_number,
    STATE(216), 1,
      sym_cost_comp,
    STATE(217), 1,
      sym_compound_amount,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    ACTIONS(198), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(162), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1518] = 2,
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
  [1537] = 2,
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
  [1556] = 2,
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
  [1575] = 2,
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
  [1594] = 2,
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
  [1613] = 2,
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
  [1632] = 2,
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
  [1651] = 2,
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
  [1670] = 2,
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
  [1689] = 2,
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
  [1708] = 2,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(305), 12,
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
  [1727] = 2,
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
  [1746] = 2,
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
  [1765] = 2,
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
  [1784] = 2,
    ACTIONS(373), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(375), 12,
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
  [1803] = 2,
    ACTIONS(377), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(379), 12,
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
  [1822] = 2,
    ACTIONS(212), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(217), 12,
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
  [1841] = 2,
    ACTIONS(381), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(383), 12,
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
  [1860] = 2,
    ACTIONS(385), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(387), 12,
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
  [1879] = 2,
    ACTIONS(389), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(391), 12,
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
  [1898] = 2,
    ACTIONS(393), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(395), 12,
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
  [1917] = 2,
    ACTIONS(397), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(399), 12,
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
  [1936] = 2,
    ACTIONS(401), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(403), 12,
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
  [1955] = 2,
    ACTIONS(405), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(407), 12,
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
  [1974] = 2,
    ACTIONS(409), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(411), 12,
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
  [1993] = 2,
    ACTIONS(413), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(415), 12,
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
  [2012] = 2,
    ACTIONS(417), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(419), 12,
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
  [2031] = 2,
    ACTIONS(421), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(423), 12,
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
  [2050] = 2,
    ACTIONS(425), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(427), 12,
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
  [2069] = 2,
    ACTIONS(429), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(431), 12,
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
  [2088] = 2,
    ACTIONS(433), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(435), 12,
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
  [2107] = 2,
    ACTIONS(437), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(439), 12,
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
  [2126] = 2,
    ACTIONS(441), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(443), 12,
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
  [2145] = 2,
    ACTIONS(445), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(447), 12,
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
  [2164] = 2,
    ACTIONS(449), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(451), 12,
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
  [2183] = 2,
    ACTIONS(453), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(455), 12,
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
  [2202] = 2,
    ACTIONS(457), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(459), 12,
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
  [2221] = 2,
    ACTIONS(461), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(463), 12,
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
  [2240] = 2,
    ACTIONS(465), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(467), 12,
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
  [2259] = 2,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(471), 12,
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
  [2278] = 2,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(475), 12,
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
  [2297] = 2,
    ACTIONS(477), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(479), 12,
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
  [2316] = 2,
    ACTIONS(481), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(483), 12,
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
  [2335] = 2,
    ACTIONS(485), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(487), 12,
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
  [2354] = 2,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(491), 12,
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
  [2373] = 2,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(495), 12,
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
  [2392] = 2,
    ACTIONS(497), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(499), 12,
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
  [2411] = 2,
    ACTIONS(501), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(503), 12,
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
  [2430] = 2,
    ACTIONS(505), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(507), 12,
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
  [2449] = 2,
    ACTIONS(509), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(511), 12,
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
  [2468] = 2,
    ACTIONS(513), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(515), 12,
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
  [2487] = 2,
    ACTIONS(517), 2,
      ts_builtin_sym_end,
      sym__indent,
    ACTIONS(519), 12,
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
  [2506] = 1,
    ACTIONS(521), 13,
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
  [2522] = 1,
    ACTIONS(523), 13,
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
  [2538] = 1,
    ACTIONS(525), 13,
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
  [2554] = 1,
    ACTIONS(527), 13,
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
  [2570] = 1,
    ACTIONS(529), 13,
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
  [2586] = 1,
    ACTIONS(531), 13,
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
  [2602] = 1,
    ACTIONS(533), 13,
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
  [2618] = 1,
    ACTIONS(535), 13,
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
  [2634] = 1,
    ACTIONS(537), 13,
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
  [2650] = 1,
    ACTIONS(539), 13,
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
  [2666] = 1,
    ACTIONS(541), 13,
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
  [2682] = 1,
    ACTIONS(543), 13,
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
  [2698] = 1,
    ACTIONS(545), 13,
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
  [2714] = 1,
    ACTIONS(547), 13,
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
  [2730] = 1,
    ACTIONS(549), 13,
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
  [2746] = 1,
    ACTIONS(551), 13,
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
  [2762] = 1,
    ACTIONS(553), 13,
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
  [2778] = 1,
    ACTIONS(555), 13,
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
  [2794] = 1,
    ACTIONS(557), 13,
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
  [2810] = 1,
    ACTIONS(559), 13,
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
  [2826] = 1,
    ACTIONS(561), 13,
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
  [2842] = 1,
    ACTIONS(563), 13,
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
  [2858] = 1,
    ACTIONS(565), 13,
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
  [2874] = 1,
    ACTIONS(567), 13,
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
  [2890] = 1,
    ACTIONS(569), 13,
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
  [2906] = 1,
    ACTIONS(571), 13,
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
  [2922] = 1,
    ACTIONS(573), 13,
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
  [2938] = 1,
    ACTIONS(575), 13,
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
  [2954] = 1,
    ACTIONS(577), 13,
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
  [2970] = 1,
    ACTIONS(579), 13,
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
  [2986] = 1,
    ACTIONS(581), 13,
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
  [3002] = 1,
    ACTIONS(583), 13,
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
  [3018] = 1,
    ACTIONS(585), 13,
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
  [3034] = 1,
    ACTIONS(587), 13,
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
  [3050] = 1,
    ACTIONS(589), 13,
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
  [3066] = 1,
    ACTIONS(591), 13,
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
  [3082] = 1,
    ACTIONS(593), 13,
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
  [3098] = 1,
    ACTIONS(595), 13,
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
  [3114] = 1,
    ACTIONS(597), 13,
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
  [3130] = 1,
    ACTIONS(599), 13,
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
  [3146] = 1,
    ACTIONS(601), 13,
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
  [3162] = 1,
    ACTIONS(603), 13,
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
  [3178] = 11,
    ACTIONS(605), 1,
      sym__eol,
    ACTIONS(609), 1,
      sym_asterisk,
    ACTIONS(611), 1,
      sym_account,
    ACTIONS(615), 1,
      sym_key,
    ACTIONS(617), 1,
      sym_comment,
    STATE(196), 1,
      aux_sym_tags_links_repeat1,
    STATE(250), 1,
      sym_optflag,
    STATE(251), 1,
      sym_tags_links,
    STATE(290), 1,
      sym_key_value,
    ACTIONS(607), 2,
      sym__hash,
      sym_flag,
    ACTIONS(613), 2,
      sym_tag,
      sym_link,
  [3214] = 2,
    ACTIONS(621), 1,
      sym_rcurl,
    ACTIONS(619), 11,
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
  [3231] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(623), 1,
      sym__eol,
    ACTIONS(625), 1,
      sym_comment,
    STATE(225), 1,
      sym_price_annotation,
    STATE(231), 1,
      sym_incomplete_amount,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3260] = 2,
    ACTIONS(621), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(619), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3277] = 2,
    ACTIONS(629), 1,
      sym_rcurl,
    ACTIONS(627), 11,
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
  [3294] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(631), 1,
      sym__eol,
    ACTIONS(633), 1,
      sym_comment,
    STATE(229), 1,
      sym_price_annotation,
    STATE(231), 1,
      sym_incomplete_amount,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3323] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(635), 1,
      sym__eol,
    ACTIONS(637), 1,
      sym_comment,
    STATE(231), 1,
      sym_incomplete_amount,
    STATE(239), 1,
      sym_price_annotation,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3352] = 2,
    ACTIONS(629), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(627), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3369] = 3,
    ACTIONS(641), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(643), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(639), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3388] = 2,
    ACTIONS(643), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(639), 9,
      sym__eol,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3405] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(645), 1,
      sym__eol,
    ACTIONS(647), 1,
      sym_comment,
    STATE(231), 1,
      sym_incomplete_amount,
    STATE(243), 1,
      sym_price_annotation,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3434] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(649), 1,
      sym__eol,
    ACTIONS(651), 1,
      sym_comment,
    STATE(230), 1,
      sym_price_annotation,
    STATE(231), 1,
      sym_incomplete_amount,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3463] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(653), 1,
      sym__eol,
    ACTIONS(655), 1,
      sym_comment,
    STATE(231), 1,
      sym_incomplete_amount,
    STATE(237), 1,
      sym_price_annotation,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3492] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(657), 1,
      sym__eol,
    ACTIONS(659), 1,
      sym_comment,
    STATE(228), 1,
      sym_price_annotation,
    STATE(231), 1,
      sym_incomplete_amount,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3521] = 2,
    ACTIONS(643), 1,
      sym_rcurl,
    ACTIONS(639), 11,
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
  [3538] = 3,
    ACTIONS(643), 1,
      sym_rcurl,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(639), 9,
      sym__eol,
      sym_rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_plus,
      sym_minus,
      sym__rparen,
      sym_currency,
  [3557] = 5,
    ACTIONS(669), 1,
      sym_currency,
    ACTIONS(641), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(665), 2,
      sym_plus,
      sym_minus,
    ACTIONS(667), 2,
      sym_bool,
      sym_number,
    ACTIONS(663), 5,
      sym__eol,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3580] = 8,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(279), 1,
      sym_number,
    ACTIONS(671), 1,
      sym__eol,
    ACTIONS(673), 1,
      sym_comment,
    STATE(231), 1,
      sym_incomplete_amount,
    STATE(232), 1,
      sym_price_annotation,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(195), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3609] = 6,
    ACTIONS(677), 1,
      sym_rcurl,
    ACTIONS(679), 1,
      sym__hash,
    ACTIONS(683), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(675), 2,
      sym_rcurlrcurl,
      sym__comma,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [3631] = 2,
    ACTIONS(667), 2,
      sym_bool,
      sym_number,
    ACTIONS(663), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3645] = 5,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(685), 1,
      sym_currency,
    ACTIONS(687), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(199), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3665] = 5,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(689), 1,
      sym_number,
    STATE(244), 1,
      sym_amount_tolerance,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(187), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3685] = 5,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(691), 1,
      sym_number,
    STATE(269), 1,
      sym_amount,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(200), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3705] = 2,
    ACTIONS(695), 2,
      sym_bool,
      sym_number,
    ACTIONS(693), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_account,
      sym_string,
  [3719] = 5,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(697), 1,
      sym_currency,
    ACTIONS(699), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(197), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3739] = 4,
    ACTIONS(150), 1,
      sym__lparen,
    ACTIONS(701), 1,
      sym_number,
    ACTIONS(148), 2,
      sym_plus,
      sym_minus,
    STATE(153), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3756] = 4,
    ACTIONS(150), 1,
      sym__lparen,
    ACTIONS(703), 1,
      sym_number,
    ACTIONS(148), 2,
      sym_plus,
      sym_minus,
    STATE(152), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3773] = 4,
    ACTIONS(150), 1,
      sym__lparen,
    ACTIONS(705), 1,
      sym_number,
    ACTIONS(148), 2,
      sym_plus,
      sym_minus,
    STATE(151), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3790] = 4,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(707), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(202), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3807] = 4,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(709), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(194), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3824] = 4,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(711), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(192), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3841] = 4,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(713), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(159), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3858] = 4,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(715), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(158), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3875] = 7,
    ACTIONS(717), 1,
      sym__eol,
    ACTIONS(719), 1,
      sym_string,
    ACTIONS(721), 1,
      sym_comment,
    STATE(185), 1,
      sym_txn_strings,
    STATE(196), 1,
      aux_sym_tags_links_repeat1,
    STATE(240), 1,
      sym_tags_links,
    ACTIONS(613), 2,
      sym_tag,
      sym_link,
  [3898] = 4,
    ACTIONS(92), 1,
      sym__lparen,
    ACTIONS(723), 1,
      sym_number,
    ACTIONS(90), 2,
      sym_plus,
      sym_minus,
    STATE(148), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [3915] = 7,
    ACTIONS(275), 1,
      sym_lcurllcurl,
    ACTIONS(277), 1,
      sym_lcurl,
    ACTIONS(725), 1,
      sym__eol,
    ACTIONS(727), 1,
      sym_atat,
    ACTIONS(729), 1,
      sym_at,
    ACTIONS(731), 1,
      sym_comment,
    STATE(211), 1,
      sym_cost_spec,
  [3937] = 7,
    ACTIONS(275), 1,
      sym_lcurllcurl,
    ACTIONS(277), 1,
      sym_lcurl,
    ACTIONS(733), 1,
      sym__eol,
    ACTIONS(735), 1,
      sym_atat,
    ACTIONS(737), 1,
      sym_at,
    ACTIONS(739), 1,
      sym_comment,
    STATE(212), 1,
      sym_cost_spec,
  [3959] = 6,
    ACTIONS(741), 1,
      sym__eol,
    ACTIONS(743), 1,
      sym_currency,
    ACTIONS(745), 1,
      sym_string,
    ACTIONS(747), 1,
      sym_comment,
    STATE(246), 1,
      sym_opt_booking,
    STATE(182), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [3979] = 6,
    ACTIONS(743), 1,
      sym_currency,
    ACTIONS(745), 1,
      sym_string,
    ACTIONS(749), 1,
      sym__eol,
    ACTIONS(751), 1,
      sym_comment,
    STATE(245), 1,
      sym_opt_booking,
    STATE(189), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [3999] = 2,
    ACTIONS(755), 2,
      sym_at,
      sym_lcurl,
    ACTIONS(753), 4,
      sym__eol,
      sym_atat,
      sym_lcurllcurl,
      sym_comment,
  [4010] = 3,
    ACTIONS(759), 1,
      sym__comma,
    STATE(184), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(757), 4,
      sym__eol,
      sym_currency,
      sym_string,
      sym_comment,
  [4023] = 5,
    ACTIONS(762), 1,
      sym__eol,
    ACTIONS(764), 1,
      sym_comment,
    STATE(196), 1,
      aux_sym_tags_links_repeat1,
    STATE(238), 1,
      sym_tags_links,
    ACTIONS(613), 2,
      sym_tag,
      sym_link,
  [4040] = 4,
    ACTIONS(766), 1,
      sym__eol,
    ACTIONS(768), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4055] = 4,
    ACTIONS(770), 1,
      sym__tilde,
    ACTIONS(772), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4070] = 3,
    ACTIONS(776), 1,
      sym__comma,
    STATE(190), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(774), 4,
      sym__eol,
      sym_currency,
      sym_string,
      sym_comment,
  [4083] = 3,
    ACTIONS(780), 1,
      sym_currency,
    STATE(189), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
    ACTIONS(778), 3,
      sym__eol,
      sym_string,
      sym_comment,
  [4096] = 3,
    ACTIONS(776), 1,
      sym__comma,
    STATE(184), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(783), 4,
      sym__eol,
      sym_currency,
      sym_string,
      sym_comment,
  [4109] = 2,
    ACTIONS(787), 1,
      sym_string,
    ACTIONS(785), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [4119] = 3,
    ACTIONS(789), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4131] = 1,
    ACTIONS(757), 5,
      sym__eol,
      sym__comma,
      sym_currency,
      sym_string,
      sym_comment,
  [4139] = 3,
    ACTIONS(791), 1,
      sym__rparen,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4151] = 3,
    ACTIONS(793), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4163] = 3,
    STATE(203), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(795), 2,
      sym__eol,
      sym_comment,
    ACTIONS(797), 2,
      sym_tag,
      sym_link,
  [4175] = 3,
    ACTIONS(799), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4187] = 1,
    ACTIONS(801), 5,
      sym__eol,
      sym_string,
      sym_tag,
      sym_link,
      sym_comment,
  [4195] = 3,
    ACTIONS(803), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4207] = 3,
    ACTIONS(768), 1,
      sym_currency,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4219] = 4,
    ACTIONS(805), 1,
      sym__eol,
    STATE(196), 1,
      aux_sym_tags_links_repeat1,
    STATE(253), 1,
      sym_tags_links,
    ACTIONS(613), 2,
      sym_tag,
      sym_link,
  [4233] = 3,
    ACTIONS(807), 1,
      sym__rparen,
    ACTIONS(661), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(681), 2,
      sym_plus,
      sym_minus,
  [4245] = 3,
    STATE(203), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(809), 2,
      sym__eol,
      sym_comment,
    ACTIONS(811), 2,
      sym_tag,
      sym_link,
  [4257] = 4,
    ACTIONS(814), 1,
      sym__eol,
    ACTIONS(816), 1,
      sym_atat,
    ACTIONS(818), 1,
      sym_at,
    ACTIONS(820), 1,
      sym_comment,
  [4270] = 4,
    ACTIONS(822), 1,
      sym__eol,
    ACTIONS(824), 1,
      sym_atat,
    ACTIONS(826), 1,
      sym_at,
    ACTIONS(828), 1,
      sym_comment,
  [4283] = 1,
    ACTIONS(830), 4,
      sym__eol,
      sym_tag,
      sym_link,
      sym_comment,
  [4290] = 4,
    ACTIONS(832), 1,
      sym_rcurlrcurl,
    ACTIONS(834), 1,
      sym_rcurl,
    ACTIONS(836), 1,
      sym__comma,
    STATE(207), 1,
      aux_sym_cost_comp_list_repeat1,
  [4303] = 2,
    ACTIONS(841), 1,
      sym_at,
    ACTIONS(839), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [4312] = 4,
    ACTIONS(843), 1,
      sym_rcurlrcurl,
    ACTIONS(845), 1,
      sym_rcurl,
    ACTIONS(847), 1,
      sym__comma,
    STATE(213), 1,
      aux_sym_cost_comp_list_repeat1,
  [4325] = 2,
    ACTIONS(851), 1,
      sym_at,
    ACTIONS(849), 3,
      sym__eol,
      sym_atat,
      sym_comment,
  [4334] = 4,
    ACTIONS(853), 1,
      sym__eol,
    ACTIONS(855), 1,
      sym_atat,
    ACTIONS(857), 1,
      sym_at,
    ACTIONS(859), 1,
      sym_comment,
  [4347] = 4,
    ACTIONS(861), 1,
      sym__eol,
    ACTIONS(863), 1,
      sym_atat,
    ACTIONS(865), 1,
      sym_at,
    ACTIONS(867), 1,
      sym_comment,
  [4360] = 4,
    ACTIONS(847), 1,
      sym__comma,
    ACTIONS(869), 1,
      sym_rcurlrcurl,
    ACTIONS(871), 1,
      sym_rcurl,
    STATE(207), 1,
      aux_sym_cost_comp_list_repeat1,
  [4373] = 2,
    ACTIONS(875), 1,
      sym_rcurl,
    ACTIONS(873), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4381] = 2,
    ACTIONS(879), 1,
      sym_rcurl,
    ACTIONS(877), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4389] = 2,
    ACTIONS(834), 1,
      sym_rcurl,
    ACTIONS(832), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4397] = 2,
    ACTIONS(883), 1,
      sym_rcurl,
    ACTIONS(881), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4405] = 2,
    ACTIONS(887), 1,
      sym_rcurl,
    ACTIONS(885), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4413] = 2,
    ACTIONS(891), 1,
      sym_rcurl,
    ACTIONS(889), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4421] = 2,
    ACTIONS(895), 1,
      sym_rcurl,
    ACTIONS(893), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4429] = 2,
    ACTIONS(899), 1,
      sym_rcurl,
    ACTIONS(897), 2,
      sym_rcurlrcurl,
      sym__comma,
  [4437] = 1,
    ACTIONS(901), 3,
      sym__eol,
      sym_tag,
      sym_link,
  [4443] = 3,
    ACTIONS(615), 1,
      sym_key,
    ACTIONS(903), 1,
      sym__eol,
    STATE(290), 1,
      sym_key_value,
  [4453] = 2,
    ACTIONS(905), 1,
      sym__eol,
    ACTIONS(907), 1,
      sym_comment,
  [4460] = 2,
    ACTIONS(909), 1,
      sym__eol,
    ACTIONS(911), 1,
      sym_comment,
  [4467] = 2,
    ACTIONS(615), 1,
      sym_key,
    STATE(317), 1,
      sym_key_value,
  [4474] = 2,
    ACTIONS(913), 1,
      sym__eol,
    ACTIONS(915), 1,
      sym_string,
  [4481] = 2,
    ACTIONS(917), 1,
      sym__eol,
    ACTIONS(919), 1,
      sym_comment,
  [4488] = 2,
    ACTIONS(921), 1,
      sym__eol,
    ACTIONS(923), 1,
      sym_comment,
  [4495] = 2,
    ACTIONS(925), 1,
      sym__eol,
    ACTIONS(927), 1,
      sym_comment,
  [4502] = 1,
    ACTIONS(929), 2,
      sym__eol,
      sym_comment,
  [4507] = 2,
    ACTIONS(931), 1,
      sym__eol,
    ACTIONS(933), 1,
      sym_comment,
  [4514] = 2,
    ACTIONS(935), 1,
      sym__eol,
    ACTIONS(937), 1,
      sym_comment,
  [4521] = 1,
    ACTIONS(939), 2,
      sym__eol,
      sym_comment,
  [4526] = 2,
    ACTIONS(941), 1,
      sym__eol,
    ACTIONS(943), 1,
      sym_comment,
  [4533] = 2,
    ACTIONS(945), 1,
      sym_string,
    STATE(201), 1,
      sym_filename,
  [4540] = 2,
    ACTIONS(947), 1,
      sym__eol,
    ACTIONS(949), 1,
      sym_comment,
  [4547] = 2,
    ACTIONS(951), 1,
      sym__eol,
    ACTIONS(953), 1,
      sym_comment,
  [4554] = 2,
    ACTIONS(955), 1,
      sym__eol,
    ACTIONS(957), 1,
      sym_comment,
  [4561] = 2,
    ACTIONS(959), 1,
      sym__eol,
    ACTIONS(961), 1,
      sym_comment,
  [4568] = 1,
    ACTIONS(963), 2,
      sym__eol,
      sym_comment,
  [4573] = 1,
    ACTIONS(965), 2,
      sym__eol,
      sym_comment,
  [4578] = 2,
    ACTIONS(967), 1,
      sym__eol,
    ACTIONS(969), 1,
      sym_comment,
  [4585] = 2,
    ACTIONS(971), 1,
      sym__eol,
    ACTIONS(973), 1,
      sym_comment,
  [4592] = 2,
    ACTIONS(975), 1,
      sym__eol,
    ACTIONS(977), 1,
      sym_comment,
  [4599] = 2,
    ACTIONS(979), 1,
      sym__eol,
    ACTIONS(981), 1,
      sym_comment,
  [4606] = 1,
    ACTIONS(983), 1,
      sym__eol,
  [4610] = 1,
    ACTIONS(985), 1,
      sym__eol,
  [4614] = 1,
    ACTIONS(987), 1,
      sym__eol,
  [4618] = 1,
    ACTIONS(989), 1,
      sym_account,
  [4622] = 1,
    ACTIONS(991), 1,
      sym__eol,
  [4626] = 1,
    ACTIONS(993), 1,
      sym_account,
  [4630] = 1,
    ACTIONS(995), 1,
      sym__eol,
  [4634] = 1,
    ACTIONS(997), 1,
      aux_sym__skipped_lines_token1,
  [4638] = 1,
    ACTIONS(999), 1,
      sym__eol,
  [4642] = 1,
    ACTIONS(1001), 1,
      sym__eol,
  [4646] = 1,
    ACTIONS(1003), 1,
      sym__eol,
  [4650] = 1,
    ACTIONS(1005), 1,
      sym_currency,
  [4654] = 1,
    ACTIONS(1007), 1,
      sym__eol,
  [4658] = 1,
    ACTIONS(1009), 1,
      sym__eol,
  [4662] = 1,
    ACTIONS(1011), 1,
      sym__eol,
  [4666] = 1,
    ACTIONS(1013), 1,
      sym__eol,
  [4670] = 1,
    ACTIONS(1015), 1,
      sym__eol,
  [4674] = 1,
    ACTIONS(1017), 1,
      sym__eol,
  [4678] = 1,
    ACTIONS(1019), 1,
      sym__eol,
  [4682] = 1,
    ACTIONS(1021), 1,
      sym__eol,
  [4686] = 1,
    ACTIONS(1023), 1,
      sym__eol,
  [4690] = 1,
    ACTIONS(1025), 1,
      sym__eol,
  [4694] = 1,
    ACTIONS(1027), 1,
      sym__eol,
  [4698] = 1,
    ACTIONS(1029), 1,
      sym__eol,
  [4702] = 1,
    ACTIONS(1031), 1,
      sym__eol,
  [4706] = 1,
    ACTIONS(1033), 1,
      sym__eol,
  [4710] = 1,
    ACTIONS(1035), 1,
      sym__eol,
  [4714] = 1,
    ACTIONS(1037), 1,
      sym__eol,
  [4718] = 1,
    ACTIONS(1039), 1,
      sym__eol,
  [4722] = 1,
    ACTIONS(1041), 1,
      sym__eol,
  [4726] = 1,
    ACTIONS(1043), 1,
      sym__eol,
  [4730] = 1,
    ACTIONS(1045), 1,
      sym_string,
  [4734] = 1,
    ACTIONS(1047), 1,
      sym__eol,
  [4738] = 1,
    ACTIONS(1049), 1,
      sym_rcurl,
  [4742] = 1,
    ACTIONS(1051), 1,
      sym__eol,
  [4746] = 1,
    ACTIONS(1053), 1,
      sym_string,
  [4750] = 1,
    ACTIONS(1055), 1,
      sym_string,
  [4754] = 1,
    ACTIONS(1057), 1,
      sym__eol,
  [4758] = 1,
    ACTIONS(1059), 1,
      sym_account,
  [4762] = 1,
    ACTIONS(1061), 1,
      sym__eol,
  [4766] = 1,
    ACTIONS(1063), 1,
      sym__eol,
  [4770] = 1,
    ACTIONS(1065), 1,
      sym__eol,
  [4774] = 1,
    ACTIONS(1067), 1,
      sym__eol,
  [4778] = 1,
    ACTIONS(1069), 1,
      sym__eol,
  [4782] = 1,
    ACTIONS(1071), 1,
      sym__eol,
  [4786] = 1,
    ACTIONS(1073), 1,
      sym__eol,
  [4790] = 1,
    ACTIONS(1075), 1,
      sym__eol,
  [4794] = 1,
    ACTIONS(1077), 1,
      sym__eol,
  [4798] = 1,
    ACTIONS(1079), 1,
      sym_string,
  [4802] = 1,
    ACTIONS(1081), 1,
      sym__eol,
  [4806] = 1,
    ACTIONS(1083), 1,
      sym__eol,
  [4810] = 1,
    ACTIONS(1085), 1,
      sym_string,
  [4814] = 1,
    ACTIONS(1087), 1,
      sym_account,
  [4818] = 1,
    ACTIONS(1089), 1,
      sym_account,
  [4822] = 1,
    ACTIONS(1091), 1,
      sym_currency,
  [4826] = 1,
    ACTIONS(1093), 1,
      sym_string,
  [4830] = 1,
    ACTIONS(1095), 1,
      sym__eol,
  [4834] = 1,
    ACTIONS(1097), 1,
      sym_account,
  [4838] = 1,
    ACTIONS(1099), 1,
      sym_currency,
  [4842] = 1,
    ACTIONS(1101), 1,
      sym_account,
  [4846] = 1,
    ACTIONS(1103), 1,
      sym_account,
  [4850] = 1,
    ACTIONS(1105), 1,
      sym__eol,
  [4854] = 1,
    ACTIONS(1107), 1,
      sym_account,
  [4858] = 1,
    ACTIONS(1109), 1,
      sym__eol,
  [4862] = 1,
    ACTIONS(1049), 1,
      sym_rcurlrcurl,
  [4866] = 1,
    ACTIONS(1111), 1,
      sym__eol,
  [4870] = 1,
    ACTIONS(1113), 1,
      sym__eol,
  [4874] = 1,
    ACTIONS(1115), 1,
      sym_string,
  [4878] = 1,
    ACTIONS(1117), 1,
      sym__eol,
  [4882] = 1,
    ACTIONS(1119), 1,
      sym__colon,
  [4886] = 1,
    ACTIONS(1121), 1,
      sym__eol,
  [4890] = 1,
    ACTIONS(1123), 1,
      sym__colon,
  [4894] = 1,
    ACTIONS(1125), 1,
      sym__eol,
  [4898] = 1,
    ACTIONS(1127), 1,
      sym__eol,
  [4902] = 1,
    ACTIONS(1129), 1,
      sym__eol,
  [4906] = 1,
    ACTIONS(1131), 1,
      sym__eol,
  [4910] = 1,
    ACTIONS(1133), 1,
      ts_builtin_sym_end,
  [4914] = 1,
    ACTIONS(1135), 1,
      sym__eol,
  [4918] = 1,
    ACTIONS(1137), 1,
      sym_string,
  [4922] = 1,
    ACTIONS(1139), 1,
      sym_string,
  [4926] = 1,
    ACTIONS(1141), 1,
      sym_string,
  [4930] = 1,
    ACTIONS(1143), 1,
      sym_key,
  [4934] = 1,
    ACTIONS(1145), 1,
      sym__eol,
  [4938] = 1,
    ACTIONS(1147), 1,
      sym_tag,
  [4942] = 1,
    ACTIONS(1149), 1,
      sym_tag,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 157,
  [SMALL_STATE(6)] = 186,
  [SMALL_STATE(7)] = 215,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 273,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 337,
  [SMALL_STATE(12)] = 366,
  [SMALL_STATE(13)] = 395,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 451,
  [SMALL_STATE(16)] = 479,
  [SMALL_STATE(17)] = 507,
  [SMALL_STATE(18)] = 535,
  [SMALL_STATE(19)] = 563,
  [SMALL_STATE(20)] = 591,
  [SMALL_STATE(21)] = 619,
  [SMALL_STATE(22)] = 657,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 713,
  [SMALL_STATE(25)] = 741,
  [SMALL_STATE(26)] = 769,
  [SMALL_STATE(27)] = 797,
  [SMALL_STATE(28)] = 825,
  [SMALL_STATE(29)] = 853,
  [SMALL_STATE(30)] = 881,
  [SMALL_STATE(31)] = 909,
  [SMALL_STATE(32)] = 949,
  [SMALL_STATE(33)] = 977,
  [SMALL_STATE(34)] = 1005,
  [SMALL_STATE(35)] = 1045,
  [SMALL_STATE(36)] = 1071,
  [SMALL_STATE(37)] = 1097,
  [SMALL_STATE(38)] = 1125,
  [SMALL_STATE(39)] = 1153,
  [SMALL_STATE(40)] = 1181,
  [SMALL_STATE(41)] = 1209,
  [SMALL_STATE(42)] = 1237,
  [SMALL_STATE(43)] = 1282,
  [SMALL_STATE(44)] = 1323,
  [SMALL_STATE(45)] = 1358,
  [SMALL_STATE(46)] = 1383,
  [SMALL_STATE(47)] = 1424,
  [SMALL_STATE(48)] = 1449,
  [SMALL_STATE(49)] = 1484,
  [SMALL_STATE(50)] = 1518,
  [SMALL_STATE(51)] = 1537,
  [SMALL_STATE(52)] = 1556,
  [SMALL_STATE(53)] = 1575,
  [SMALL_STATE(54)] = 1594,
  [SMALL_STATE(55)] = 1613,
  [SMALL_STATE(56)] = 1632,
  [SMALL_STATE(57)] = 1651,
  [SMALL_STATE(58)] = 1670,
  [SMALL_STATE(59)] = 1689,
  [SMALL_STATE(60)] = 1708,
  [SMALL_STATE(61)] = 1727,
  [SMALL_STATE(62)] = 1746,
  [SMALL_STATE(63)] = 1765,
  [SMALL_STATE(64)] = 1784,
  [SMALL_STATE(65)] = 1803,
  [SMALL_STATE(66)] = 1822,
  [SMALL_STATE(67)] = 1841,
  [SMALL_STATE(68)] = 1860,
  [SMALL_STATE(69)] = 1879,
  [SMALL_STATE(70)] = 1898,
  [SMALL_STATE(71)] = 1917,
  [SMALL_STATE(72)] = 1936,
  [SMALL_STATE(73)] = 1955,
  [SMALL_STATE(74)] = 1974,
  [SMALL_STATE(75)] = 1993,
  [SMALL_STATE(76)] = 2012,
  [SMALL_STATE(77)] = 2031,
  [SMALL_STATE(78)] = 2050,
  [SMALL_STATE(79)] = 2069,
  [SMALL_STATE(80)] = 2088,
  [SMALL_STATE(81)] = 2107,
  [SMALL_STATE(82)] = 2126,
  [SMALL_STATE(83)] = 2145,
  [SMALL_STATE(84)] = 2164,
  [SMALL_STATE(85)] = 2183,
  [SMALL_STATE(86)] = 2202,
  [SMALL_STATE(87)] = 2221,
  [SMALL_STATE(88)] = 2240,
  [SMALL_STATE(89)] = 2259,
  [SMALL_STATE(90)] = 2278,
  [SMALL_STATE(91)] = 2297,
  [SMALL_STATE(92)] = 2316,
  [SMALL_STATE(93)] = 2335,
  [SMALL_STATE(94)] = 2354,
  [SMALL_STATE(95)] = 2373,
  [SMALL_STATE(96)] = 2392,
  [SMALL_STATE(97)] = 2411,
  [SMALL_STATE(98)] = 2430,
  [SMALL_STATE(99)] = 2449,
  [SMALL_STATE(100)] = 2468,
  [SMALL_STATE(101)] = 2487,
  [SMALL_STATE(102)] = 2506,
  [SMALL_STATE(103)] = 2522,
  [SMALL_STATE(104)] = 2538,
  [SMALL_STATE(105)] = 2554,
  [SMALL_STATE(106)] = 2570,
  [SMALL_STATE(107)] = 2586,
  [SMALL_STATE(108)] = 2602,
  [SMALL_STATE(109)] = 2618,
  [SMALL_STATE(110)] = 2634,
  [SMALL_STATE(111)] = 2650,
  [SMALL_STATE(112)] = 2666,
  [SMALL_STATE(113)] = 2682,
  [SMALL_STATE(114)] = 2698,
  [SMALL_STATE(115)] = 2714,
  [SMALL_STATE(116)] = 2730,
  [SMALL_STATE(117)] = 2746,
  [SMALL_STATE(118)] = 2762,
  [SMALL_STATE(119)] = 2778,
  [SMALL_STATE(120)] = 2794,
  [SMALL_STATE(121)] = 2810,
  [SMALL_STATE(122)] = 2826,
  [SMALL_STATE(123)] = 2842,
  [SMALL_STATE(124)] = 2858,
  [SMALL_STATE(125)] = 2874,
  [SMALL_STATE(126)] = 2890,
  [SMALL_STATE(127)] = 2906,
  [SMALL_STATE(128)] = 2922,
  [SMALL_STATE(129)] = 2938,
  [SMALL_STATE(130)] = 2954,
  [SMALL_STATE(131)] = 2970,
  [SMALL_STATE(132)] = 2986,
  [SMALL_STATE(133)] = 3002,
  [SMALL_STATE(134)] = 3018,
  [SMALL_STATE(135)] = 3034,
  [SMALL_STATE(136)] = 3050,
  [SMALL_STATE(137)] = 3066,
  [SMALL_STATE(138)] = 3082,
  [SMALL_STATE(139)] = 3098,
  [SMALL_STATE(140)] = 3114,
  [SMALL_STATE(141)] = 3130,
  [SMALL_STATE(142)] = 3146,
  [SMALL_STATE(143)] = 3162,
  [SMALL_STATE(144)] = 3178,
  [SMALL_STATE(145)] = 3214,
  [SMALL_STATE(146)] = 3231,
  [SMALL_STATE(147)] = 3260,
  [SMALL_STATE(148)] = 3277,
  [SMALL_STATE(149)] = 3294,
  [SMALL_STATE(150)] = 3323,
  [SMALL_STATE(151)] = 3352,
  [SMALL_STATE(152)] = 3369,
  [SMALL_STATE(153)] = 3388,
  [SMALL_STATE(154)] = 3405,
  [SMALL_STATE(155)] = 3434,
  [SMALL_STATE(156)] = 3463,
  [SMALL_STATE(157)] = 3492,
  [SMALL_STATE(158)] = 3521,
  [SMALL_STATE(159)] = 3538,
  [SMALL_STATE(160)] = 3557,
  [SMALL_STATE(161)] = 3580,
  [SMALL_STATE(162)] = 3609,
  [SMALL_STATE(163)] = 3631,
  [SMALL_STATE(164)] = 3645,
  [SMALL_STATE(165)] = 3665,
  [SMALL_STATE(166)] = 3685,
  [SMALL_STATE(167)] = 3705,
  [SMALL_STATE(168)] = 3719,
  [SMALL_STATE(169)] = 3739,
  [SMALL_STATE(170)] = 3756,
  [SMALL_STATE(171)] = 3773,
  [SMALL_STATE(172)] = 3790,
  [SMALL_STATE(173)] = 3807,
  [SMALL_STATE(174)] = 3824,
  [SMALL_STATE(175)] = 3841,
  [SMALL_STATE(176)] = 3858,
  [SMALL_STATE(177)] = 3875,
  [SMALL_STATE(178)] = 3898,
  [SMALL_STATE(179)] = 3915,
  [SMALL_STATE(180)] = 3937,
  [SMALL_STATE(181)] = 3959,
  [SMALL_STATE(182)] = 3979,
  [SMALL_STATE(183)] = 3999,
  [SMALL_STATE(184)] = 4010,
  [SMALL_STATE(185)] = 4023,
  [SMALL_STATE(186)] = 4040,
  [SMALL_STATE(187)] = 4055,
  [SMALL_STATE(188)] = 4070,
  [SMALL_STATE(189)] = 4083,
  [SMALL_STATE(190)] = 4096,
  [SMALL_STATE(191)] = 4109,
  [SMALL_STATE(192)] = 4119,
  [SMALL_STATE(193)] = 4131,
  [SMALL_STATE(194)] = 4139,
  [SMALL_STATE(195)] = 4151,
  [SMALL_STATE(196)] = 4163,
  [SMALL_STATE(197)] = 4175,
  [SMALL_STATE(198)] = 4187,
  [SMALL_STATE(199)] = 4195,
  [SMALL_STATE(200)] = 4207,
  [SMALL_STATE(201)] = 4219,
  [SMALL_STATE(202)] = 4233,
  [SMALL_STATE(203)] = 4245,
  [SMALL_STATE(204)] = 4257,
  [SMALL_STATE(205)] = 4270,
  [SMALL_STATE(206)] = 4283,
  [SMALL_STATE(207)] = 4290,
  [SMALL_STATE(208)] = 4303,
  [SMALL_STATE(209)] = 4312,
  [SMALL_STATE(210)] = 4325,
  [SMALL_STATE(211)] = 4334,
  [SMALL_STATE(212)] = 4347,
  [SMALL_STATE(213)] = 4360,
  [SMALL_STATE(214)] = 4373,
  [SMALL_STATE(215)] = 4381,
  [SMALL_STATE(216)] = 4389,
  [SMALL_STATE(217)] = 4397,
  [SMALL_STATE(218)] = 4405,
  [SMALL_STATE(219)] = 4413,
  [SMALL_STATE(220)] = 4421,
  [SMALL_STATE(221)] = 4429,
  [SMALL_STATE(222)] = 4437,
  [SMALL_STATE(223)] = 4443,
  [SMALL_STATE(224)] = 4453,
  [SMALL_STATE(225)] = 4460,
  [SMALL_STATE(226)] = 4467,
  [SMALL_STATE(227)] = 4474,
  [SMALL_STATE(228)] = 4481,
  [SMALL_STATE(229)] = 4488,
  [SMALL_STATE(230)] = 4495,
  [SMALL_STATE(231)] = 4502,
  [SMALL_STATE(232)] = 4507,
  [SMALL_STATE(233)] = 4514,
  [SMALL_STATE(234)] = 4521,
  [SMALL_STATE(235)] = 4526,
  [SMALL_STATE(236)] = 4533,
  [SMALL_STATE(237)] = 4540,
  [SMALL_STATE(238)] = 4547,
  [SMALL_STATE(239)] = 4554,
  [SMALL_STATE(240)] = 4561,
  [SMALL_STATE(241)] = 4568,
  [SMALL_STATE(242)] = 4573,
  [SMALL_STATE(243)] = 4578,
  [SMALL_STATE(244)] = 4585,
  [SMALL_STATE(245)] = 4592,
  [SMALL_STATE(246)] = 4599,
  [SMALL_STATE(247)] = 4606,
  [SMALL_STATE(248)] = 4610,
  [SMALL_STATE(249)] = 4614,
  [SMALL_STATE(250)] = 4618,
  [SMALL_STATE(251)] = 4622,
  [SMALL_STATE(252)] = 4626,
  [SMALL_STATE(253)] = 4630,
  [SMALL_STATE(254)] = 4634,
  [SMALL_STATE(255)] = 4638,
  [SMALL_STATE(256)] = 4642,
  [SMALL_STATE(257)] = 4646,
  [SMALL_STATE(258)] = 4650,
  [SMALL_STATE(259)] = 4654,
  [SMALL_STATE(260)] = 4658,
  [SMALL_STATE(261)] = 4662,
  [SMALL_STATE(262)] = 4666,
  [SMALL_STATE(263)] = 4670,
  [SMALL_STATE(264)] = 4674,
  [SMALL_STATE(265)] = 4678,
  [SMALL_STATE(266)] = 4682,
  [SMALL_STATE(267)] = 4686,
  [SMALL_STATE(268)] = 4690,
  [SMALL_STATE(269)] = 4694,
  [SMALL_STATE(270)] = 4698,
  [SMALL_STATE(271)] = 4702,
  [SMALL_STATE(272)] = 4706,
  [SMALL_STATE(273)] = 4710,
  [SMALL_STATE(274)] = 4714,
  [SMALL_STATE(275)] = 4718,
  [SMALL_STATE(276)] = 4722,
  [SMALL_STATE(277)] = 4726,
  [SMALL_STATE(278)] = 4730,
  [SMALL_STATE(279)] = 4734,
  [SMALL_STATE(280)] = 4738,
  [SMALL_STATE(281)] = 4742,
  [SMALL_STATE(282)] = 4746,
  [SMALL_STATE(283)] = 4750,
  [SMALL_STATE(284)] = 4754,
  [SMALL_STATE(285)] = 4758,
  [SMALL_STATE(286)] = 4762,
  [SMALL_STATE(287)] = 4766,
  [SMALL_STATE(288)] = 4770,
  [SMALL_STATE(289)] = 4774,
  [SMALL_STATE(290)] = 4778,
  [SMALL_STATE(291)] = 4782,
  [SMALL_STATE(292)] = 4786,
  [SMALL_STATE(293)] = 4790,
  [SMALL_STATE(294)] = 4794,
  [SMALL_STATE(295)] = 4798,
  [SMALL_STATE(296)] = 4802,
  [SMALL_STATE(297)] = 4806,
  [SMALL_STATE(298)] = 4810,
  [SMALL_STATE(299)] = 4814,
  [SMALL_STATE(300)] = 4818,
  [SMALL_STATE(301)] = 4822,
  [SMALL_STATE(302)] = 4826,
  [SMALL_STATE(303)] = 4830,
  [SMALL_STATE(304)] = 4834,
  [SMALL_STATE(305)] = 4838,
  [SMALL_STATE(306)] = 4842,
  [SMALL_STATE(307)] = 4846,
  [SMALL_STATE(308)] = 4850,
  [SMALL_STATE(309)] = 4854,
  [SMALL_STATE(310)] = 4858,
  [SMALL_STATE(311)] = 4862,
  [SMALL_STATE(312)] = 4866,
  [SMALL_STATE(313)] = 4870,
  [SMALL_STATE(314)] = 4874,
  [SMALL_STATE(315)] = 4878,
  [SMALL_STATE(316)] = 4882,
  [SMALL_STATE(317)] = 4886,
  [SMALL_STATE(318)] = 4890,
  [SMALL_STATE(319)] = 4894,
  [SMALL_STATE(320)] = 4898,
  [SMALL_STATE(321)] = 4902,
  [SMALL_STATE(322)] = 4906,
  [SMALL_STATE(323)] = 4910,
  [SMALL_STATE(324)] = 4914,
  [SMALL_STATE(325)] = 4918,
  [SMALL_STATE(326)] = 4922,
  [SMALL_STATE(327)] = 4926,
  [SMALL_STATE(328)] = 4930,
  [SMALL_STATE(329)] = 4934,
  [SMALL_STATE(330)] = 4938,
  [SMALL_STATE(331)] = 4942,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(254),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(331),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(330),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(226),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(328),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(327),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(326),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(325),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(42),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(324),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 7),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 7),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 9),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 27),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 27),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3, .production_id = 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 24),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 24),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 37),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 37),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 25),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 25),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 8),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 8),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 33),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 33),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 21),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 21),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 28),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 28),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 11),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 11),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 12),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 12),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 13),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 13),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4, .production_id = 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 11),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 11),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 14),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 14),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 15),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5, .production_id = 15),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4, .production_id = 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 16),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5, .production_id = 16),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 17),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5, .production_id = 17),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 18),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 18),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 19),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5, .production_id = 19),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 20),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, .production_id = 20),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 10),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5, .production_id = 10),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 39),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 39),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2), SHIFT_REPEAT(144),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting_or_kv_list, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting_or_kv_list, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 29),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 29),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 32),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 32),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 31),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 31),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 30),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 30),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 5),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4, .production_id = 5),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(171),
  [288] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(173),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(163),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(163),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_value_list_repeat1, 2), SHIFT_REPEAT(160),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [302] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_value_list_repeat1, 2), SHIFT_REPEAT(223),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_key_value_list_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_list, 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_list, 1),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value_list, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 77),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 77),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 78),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 78),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 65),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 65),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 64),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 64),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 45),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 45),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 63),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 63),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 53),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 53),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 62),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 62),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 67),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 67),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 56),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 56),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 61),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 61),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 68),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 68),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 47),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 47),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 48),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 48),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 69),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 69),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 34),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 34),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 57),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 57),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 70),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 70),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 72),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 72),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 73),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 73),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 74),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 74),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 75),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 75),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 76),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 76),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 66),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 66),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 3),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_posting_or_kv_list_repeat1, 3),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 69),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 69),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 58),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 58),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 79),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 79),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 80),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 80),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 81),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 81),
  [441] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 82),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 82),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 57),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 57),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 83),
  [451] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 83),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 84),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 84),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 85),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 85),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 43),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 43),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 56),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 56),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 86),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 86),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 52),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 52),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, .production_id = 87),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, .production_id = 87),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_line, 3),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 53),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 53),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 45),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 45),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 34),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 34),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 54),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 54),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 44),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 44),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 42),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 42),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 43),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 43),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 44),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 44),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 12),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 11),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 6),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 31),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 30),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 21),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 29),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 20),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 19),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 18),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 17),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 16),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 15),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 7, .production_id = 28),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 6, .production_id = 14),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 6, .production_id = 11),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 46),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 38),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 13),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 10),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 4),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 26),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8, .production_id = 39),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 23),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 36),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 35),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 22),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 7, .production_id = 32),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 5),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 33),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [693] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [695] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [729] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [737] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [755] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(258),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_value, 1),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [780] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(188),
  [783] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2), SHIFT_REPEAT(203),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [818] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [836] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(49),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [845] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 51),
  [851] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 51),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [857] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [869] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 2),
  [871] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 2),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 71),
  [875] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 71),
  [877] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [883] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [885] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 40),
  [887] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 40),
  [889] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 50),
  [891] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 50),
  [893] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 60),
  [895] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 60),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [899] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [929] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1039] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1057] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [1085] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
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
