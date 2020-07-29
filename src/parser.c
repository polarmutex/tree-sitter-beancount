#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 304
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 23
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__indent = 1,
  sym__eol = 2,
  sym__pipe = 3,
  sym__atat = 4,
  sym__at = 5,
  sym__lcurllcurl = 6,
  sym__rcurlrcurl = 7,
  sym__lcurl = 8,
  sym__rcurl = 9,
  sym__equal = 10,
  sym__comma = 11,
  sym__tilde = 12,
  sym__hash = 13,
  sym__asterisk = 14,
  sym__slash = 15,
  sym__colon = 16,
  sym__plus = 17,
  sym__minus = 18,
  sym__lparen = 19,
  sym__rparen = 20,
  sym__none = 21,
  sym__comment = 22,
  aux_sym__skipped_lines_token1 = 23,
  sym_date = 24,
  sym_flag = 25,
  sym_bool = 26,
  sym_currency = 27,
  sym_tag = 28,
  sym_link = 29,
  sym_key = 30,
  sym_number = 31,
  sym_string = 32,
  sym_account = 33,
  anon_sym_balance = 34,
  anon_sym_close = 35,
  anon_sym_commodity = 36,
  anon_sym_custom = 37,
  anon_sym_document = 38,
  anon_sym_event = 39,
  anon_sym_note = 40,
  anon_sym_open = 41,
  anon_sym_pad = 42,
  anon_sym_price = 43,
  anon_sym_query = 44,
  anon_sym_pushtag = 45,
  anon_sym_poptag = 46,
  anon_sym_pushmeta = 47,
  anon_sym_popmeta = 48,
  anon_sym_option = 49,
  anon_sym_include = 50,
  anon_sym_plugin = 51,
  sym__UTF_8_1 = 52,
  aux_sym__UTF_8_2_token1 = 53,
  aux_sym__UTF_8_3_token1 = 54,
  aux_sym__UTF_8_3_token2 = 55,
  aux_sym__UTF_8_3_token3 = 56,
  aux_sym__UTF_8_3_token4 = 57,
  aux_sym__UTF_8_4_token1 = 58,
  aux_sym__UTF_8_4_token2 = 59,
  aux_sym__UTF_8_4_token3 = 60,
  sym_file = 61,
  sym__skipped_lines = 62,
  sym__number_expr = 63,
  sym__paren__number_expr = 64,
  sym_unary_number_expr = 65,
  sym_binary_number_expr = 66,
  sym_cost_spec = 67,
  sym_cost_comp_list = 68,
  sym_cost_comp = 69,
  sym_compound_amout = 70,
  sym_incomplete_amount = 71,
  sym_price_annotation = 72,
  sym_posting = 73,
  sym_postings = 74,
  sym__key_value_value = 75,
  sym_key_value = 76,
  sym_metadata = 77,
  sym_txn_strings = 78,
  sym_tags_and_links = 79,
  sym_transaction = 80,
  sym_balance = 81,
  sym_close = 82,
  sym_commodity = 83,
  sym_custom = 84,
  sym_document = 85,
  sym_event = 86,
  sym_note = 87,
  sym_open = 88,
  sym_pad = 89,
  sym_price = 90,
  sym_query = 91,
  sym_key_value_line = 92,
  sym_key_value_value = 93,
  sym_currency_list = 94,
  sym_pushtag = 95,
  sym_poptag = 96,
  sym_pushmeta = 97,
  sym_popmeta = 98,
  sym_opt_booking = 99,
  sym_amount = 100,
  sym_amount_with_tolerance = 101,
  sym_filename = 102,
  sym__entry = 103,
  sym_option = 104,
  sym_include = 105,
  sym_plugin = 106,
  sym__directive = 107,
  sym__declarations = 108,
  aux_sym_file_repeat1 = 109,
  aux_sym_cost_comp_list_repeat1 = 110,
  aux_sym_postings_repeat1 = 111,
  aux_sym_metadata_repeat1 = 112,
  aux_sym_tags_and_links_repeat1 = 113,
  aux_sym_custom_repeat1 = 114,
  aux_sym_open_repeat1 = 115,
  aux_sym_currency_list_repeat1 = 116,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__indent] = "_indent",
  [sym__eol] = "_eol",
  [sym__pipe] = "_pipe",
  [sym__atat] = "_atat",
  [sym__at] = "_at",
  [sym__lcurllcurl] = "_lcurllcurl",
  [sym__rcurlrcurl] = "_rcurlrcurl",
  [sym__lcurl] = "_lcurl",
  [sym__rcurl] = "_rcurl",
  [sym__equal] = "_equal",
  [sym__comma] = "_comma",
  [sym__tilde] = "_tilde",
  [sym__hash] = "_hash",
  [sym__asterisk] = "_asterisk",
  [sym__slash] = "_slash",
  [sym__colon] = "_colon",
  [sym__plus] = "_plus",
  [sym__minus] = "_minus",
  [sym__lparen] = "_lparen",
  [sym__rparen] = "_rparen",
  [sym__none] = "_none",
  [sym__comment] = "_comment",
  [aux_sym__skipped_lines_token1] = "_skipped_lines_token1",
  [sym_date] = "date",
  [sym_flag] = "flag",
  [sym_bool] = "bool",
  [sym_currency] = "currency",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [sym_key] = "key",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_account] = "account",
  [anon_sym_balance] = "balance",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_custom] = "custom",
  [anon_sym_document] = "document",
  [anon_sym_event] = "event",
  [anon_sym_note] = "note",
  [anon_sym_open] = "open",
  [anon_sym_pad] = "pad",
  [anon_sym_price] = "price",
  [anon_sym_query] = "query",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_pushmeta] = "pushmeta",
  [anon_sym_popmeta] = "popmeta",
  [anon_sym_option] = "option",
  [anon_sym_include] = "include",
  [anon_sym_plugin] = "plugin",
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
  [sym__skipped_lines] = "_skipped_lines",
  [sym__number_expr] = "_number_expr",
  [sym__paren__number_expr] = "_paren__number_expr",
  [sym_unary_number_expr] = "unary_number_expr",
  [sym_binary_number_expr] = "binary_number_expr",
  [sym_cost_spec] = "cost_spec",
  [sym_cost_comp_list] = "cost_comp_list",
  [sym_cost_comp] = "cost_comp",
  [sym_compound_amout] = "compound_amout",
  [sym_incomplete_amount] = "incomplete_amount",
  [sym_price_annotation] = "price_annotation",
  [sym_posting] = "posting",
  [sym_postings] = "postings",
  [sym__key_value_value] = "_key_value_value",
  [sym_key_value] = "key_value",
  [sym_metadata] = "metadata",
  [sym_txn_strings] = "txn_strings",
  [sym_tags_and_links] = "tags_and_links",
  [sym_transaction] = "transaction",
  [sym_balance] = "balance",
  [sym_close] = "close",
  [sym_commodity] = "commodity",
  [sym_custom] = "custom",
  [sym_document] = "document",
  [sym_event] = "event",
  [sym_note] = "note",
  [sym_open] = "open",
  [sym_pad] = "pad",
  [sym_price] = "price",
  [sym_query] = "query",
  [sym_key_value_line] = "key_value_line",
  [sym_key_value_value] = "key_value_value",
  [sym_currency_list] = "currency_list",
  [sym_pushtag] = "pushtag",
  [sym_poptag] = "poptag",
  [sym_pushmeta] = "pushmeta",
  [sym_popmeta] = "popmeta",
  [sym_opt_booking] = "opt_booking",
  [sym_amount] = "amount",
  [sym_amount_with_tolerance] = "amount_with_tolerance",
  [sym_filename] = "filename",
  [sym__entry] = "_entry",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym__directive] = "_directive",
  [sym__declarations] = "_declarations",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_cost_comp_list_repeat1] = "cost_comp_list_repeat1",
  [aux_sym_postings_repeat1] = "postings_repeat1",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_tags_and_links_repeat1] = "tags_and_links_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_currency_list_repeat1] = "currency_list_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__indent] = sym__indent,
  [sym__eol] = sym__eol,
  [sym__pipe] = sym__pipe,
  [sym__atat] = sym__atat,
  [sym__at] = sym__at,
  [sym__lcurllcurl] = sym__lcurllcurl,
  [sym__rcurlrcurl] = sym__rcurlrcurl,
  [sym__lcurl] = sym__lcurl,
  [sym__rcurl] = sym__rcurl,
  [sym__equal] = sym__equal,
  [sym__comma] = sym__comma,
  [sym__tilde] = sym__tilde,
  [sym__hash] = sym__hash,
  [sym__asterisk] = sym__asterisk,
  [sym__slash] = sym__slash,
  [sym__colon] = sym__colon,
  [sym__plus] = sym__plus,
  [sym__minus] = sym__minus,
  [sym__lparen] = sym__lparen,
  [sym__rparen] = sym__rparen,
  [sym__none] = sym__none,
  [sym__comment] = sym__comment,
  [aux_sym__skipped_lines_token1] = aux_sym__skipped_lines_token1,
  [sym_date] = sym_date,
  [sym_flag] = sym_flag,
  [sym_bool] = sym_bool,
  [sym_currency] = sym_currency,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [sym_key] = sym_key,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_account] = sym_account,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_plugin] = anon_sym_plugin,
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
  [sym__skipped_lines] = sym__skipped_lines,
  [sym__number_expr] = sym__number_expr,
  [sym__paren__number_expr] = sym__paren__number_expr,
  [sym_unary_number_expr] = sym_unary_number_expr,
  [sym_binary_number_expr] = sym_binary_number_expr,
  [sym_cost_spec] = sym_cost_spec,
  [sym_cost_comp_list] = sym_cost_comp_list,
  [sym_cost_comp] = sym_cost_comp,
  [sym_compound_amout] = sym_compound_amout,
  [sym_incomplete_amount] = sym_incomplete_amount,
  [sym_price_annotation] = sym_price_annotation,
  [sym_posting] = sym_posting,
  [sym_postings] = sym_postings,
  [sym__key_value_value] = sym__key_value_value,
  [sym_key_value] = sym_key_value,
  [sym_metadata] = sym_metadata,
  [sym_txn_strings] = sym_txn_strings,
  [sym_tags_and_links] = sym_tags_and_links,
  [sym_transaction] = sym_transaction,
  [sym_balance] = sym_balance,
  [sym_close] = sym_close,
  [sym_commodity] = sym_commodity,
  [sym_custom] = sym_custom,
  [sym_document] = sym_document,
  [sym_event] = sym_event,
  [sym_note] = sym_note,
  [sym_open] = sym_open,
  [sym_pad] = sym_pad,
  [sym_price] = sym_price,
  [sym_query] = sym_query,
  [sym_key_value_line] = sym_key_value_line,
  [sym_key_value_value] = sym_key_value_value,
  [sym_currency_list] = sym_currency_list,
  [sym_pushtag] = sym_pushtag,
  [sym_poptag] = sym_poptag,
  [sym_pushmeta] = sym_pushmeta,
  [sym_popmeta] = sym_popmeta,
  [sym_opt_booking] = sym_opt_booking,
  [sym_amount] = sym_amount,
  [sym_amount_with_tolerance] = sym_amount_with_tolerance,
  [sym_filename] = sym_filename,
  [sym__entry] = sym__entry,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym__directive] = sym__directive,
  [sym__declarations] = sym__declarations,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_cost_comp_list_repeat1] = aux_sym_cost_comp_list_repeat1,
  [aux_sym_postings_repeat1] = aux_sym_postings_repeat1,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_tags_and_links_repeat1] = aux_sym_tags_and_links_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_currency_list_repeat1] = aux_sym_currency_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym__atat] = {
    .visible = false,
    .named = true,
  },
  [sym__at] = {
    .visible = false,
    .named = true,
  },
  [sym__lcurllcurl] = {
    .visible = false,
    .named = true,
  },
  [sym__rcurlrcurl] = {
    .visible = false,
    .named = true,
  },
  [sym__lcurl] = {
    .visible = false,
    .named = true,
  },
  [sym__rcurl] = {
    .visible = false,
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
  [sym__asterisk] = {
    .visible = false,
    .named = true,
  },
  [sym__slash] = {
    .visible = false,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__plus] = {
    .visible = false,
    .named = true,
  },
  [sym__minus] = {
    .visible = false,
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
  [sym__none] = {
    .visible = false,
    .named = true,
  },
  [sym__comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__skipped_lines_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_currency] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pushmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_popmeta] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_plugin] = {
    .visible = true,
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
  [sym__skipped_lines] = {
    .visible = false,
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
  [sym_compound_amout] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_amount] = {
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
  [sym_postings] = {
    .visible = true,
    .named = true,
  },
  [sym__key_value_value] = {
    .visible = false,
    .named = true,
  },
  [sym_key_value] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_txn_strings] = {
    .visible = true,
    .named = true,
  },
  [sym_tags_and_links] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_balance] = {
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
  [sym_custom] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_event] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_open] = {
    .visible = true,
    .named = true,
  },
  [sym_pad] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_query] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_line] = {
    .visible = true,
    .named = true,
  },
  [sym_key_value_value] = {
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
  [sym_opt_booking] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount_with_tolerance] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
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
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_postings_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_and_links_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_currency_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_account = 1,
  field_amount = 2,
  field_booking = 3,
  field_cost_comp_list = 4,
  field_cost_spec = 5,
  field_currencies = 6,
  field_currency = 7,
  field_date = 8,
  field_desc = 9,
  field_filename = 10,
  field_flag = 11,
  field_from_account = 12,
  field_metadata = 13,
  field_name = 14,
  field_note = 15,
  field_per = 16,
  field_postings = 17,
  field_price_annotation = 18,
  field_query = 19,
  field_tags_and_links = 20,
  field_total = 21,
  field_txn_strings = 22,
  field_type = 23,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_account] = "account",
  [field_amount] = "amount",
  [field_booking] = "booking",
  [field_cost_comp_list] = "cost_comp_list",
  [field_cost_spec] = "cost_spec",
  [field_currencies] = "currencies",
  [field_currency] = "currency",
  [field_date] = "date",
  [field_desc] = "desc",
  [field_filename] = "filename",
  [field_flag] = "flag",
  [field_from_account] = "from_account",
  [field_metadata] = "metadata",
  [field_name] = "name",
  [field_note] = "note",
  [field_per] = "per",
  [field_postings] = "postings",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_tags_and_links] = "tags_and_links",
  [field_total] = "total",
  [field_txn_strings] = "txn_strings",
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[94] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 2},
  [8] = {.index = 14, .length = 2},
  [9] = {.index = 16, .length = 2},
  [10] = {.index = 18, .length = 2},
  [11] = {.index = 20, .length = 4},
  [12] = {.index = 24, .length = 4},
  [13] = {.index = 28, .length = 4},
  [14] = {.index = 32, .length = 3},
  [15] = {.index = 35, .length = 3},
  [16] = {.index = 38, .length = 3},
  [17] = {.index = 41, .length = 3},
  [18] = {.index = 44, .length = 3},
  [19] = {.index = 47, .length = 3},
  [20] = {.index = 50, .length = 3},
  [21] = {.index = 53, .length = 3},
  [22] = {.index = 56, .length = 3},
  [23] = {.index = 59, .length = 3},
  [24] = {.index = 62, .length = 3},
  [25] = {.index = 65, .length = 3},
  [26] = {.index = 68, .length = 3},
  [27] = {.index = 71, .length = 3},
  [28] = {.index = 74, .length = 3},
  [29] = {.index = 77, .length = 3},
  [30] = {.index = 80, .length = 1},
  [31] = {.index = 81, .length = 1},
  [32] = {.index = 82, .length = 2},
  [33] = {.index = 84, .length = 3},
  [34] = {.index = 87, .length = 3},
  [35] = {.index = 90, .length = 3},
  [36] = {.index = 93, .length = 3},
  [37] = {.index = 96, .length = 3},
  [38] = {.index = 99, .length = 3},
  [39] = {.index = 102, .length = 5},
  [40] = {.index = 107, .length = 5},
  [41] = {.index = 112, .length = 5},
  [42] = {.index = 117, .length = 4},
  [43] = {.index = 121, .length = 3},
  [44] = {.index = 124, .length = 4},
  [45] = {.index = 128, .length = 4},
  [46] = {.index = 132, .length = 4},
  [47] = {.index = 136, .length = 4},
  [48] = {.index = 140, .length = 4},
  [49] = {.index = 144, .length = 4},
  [50] = {.index = 148, .length = 4},
  [51] = {.index = 152, .length = 4},
  [52] = {.index = 156, .length = 4},
  [53] = {.index = 160, .length = 4},
  [54] = {.index = 164, .length = 3},
  [55] = {.index = 167, .length = 4},
  [56] = {.index = 171, .length = 4},
  [57] = {.index = 175, .length = 4},
  [58] = {.index = 179, .length = 4},
  [59] = {.index = 183, .length = 4},
  [60] = {.index = 187, .length = 4},
  [61] = {.index = 191, .length = 1},
  [62] = {.index = 192, .length = 2},
  [63] = {.index = 194, .length = 1},
  [64] = {.index = 195, .length = 3},
  [65] = {.index = 198, .length = 4},
  [66] = {.index = 202, .length = 3},
  [67] = {.index = 205, .length = 4},
  [68] = {.index = 209, .length = 4},
  [69] = {.index = 213, .length = 4},
  [70] = {.index = 217, .length = 3},
  [71] = {.index = 220, .length = 6},
  [72] = {.index = 226, .length = 5},
  [73] = {.index = 231, .length = 5},
  [74] = {.index = 236, .length = 4},
  [75] = {.index = 240, .length = 5},
  [76] = {.index = 245, .length = 4},
  [77] = {.index = 249, .length = 5},
  [78] = {.index = 254, .length = 5},
  [79] = {.index = 259, .length = 5},
  [80] = {.index = 264, .length = 4},
  [81] = {.index = 268, .length = 2},
  [82] = {.index = 270, .length = 2},
  [83] = {.index = 272, .length = 4},
  [84] = {.index = 276, .length = 4},
  [85] = {.index = 280, .length = 5},
  [86] = {.index = 285, .length = 4},
  [87] = {.index = 289, .length = 5},
  [88] = {.index = 294, .length = 5},
  [89] = {.index = 299, .length = 6},
  [90] = {.index = 305, .length = 5},
  [91] = {.index = 310, .length = 3},
  [92] = {.index = 313, .length = 5},
  [93] = {.index = 318, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_account, 1},
  [1] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 2},
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
    {field_account, 2},
    {field_flag, 1},
  [12] =
    {field_account, 1},
    {field_cost_spec, 2},
  [14] =
    {field_account, 1},
    {field_amount, 2},
  [16] =
    {field_account, 1},
    {field_price_annotation, 2},
  [18] =
    {field_account, 1},
    {field_metadata, 2},
  [20] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 2},
    {field_postings, 3},
  [24] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_txn_strings, 2},
  [28] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [32] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [35] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [38] =
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 3},
  [41] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [44] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [47] =
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [50] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [53] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [56] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [59] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [62] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [65] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [68] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
  [71] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
  [74] =
    {field_account, 2},
    {field_flag, 1},
    {field_price_annotation, 3},
  [77] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 3},
  [80] =
    {field_currency, 0},
  [81] =
    {field_per, 0},
  [82] =
    {field_account, 1},
    {field_metadata, 3},
  [84] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [87] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 3},
  [90] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [93] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [96] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 3},
  [99] =
    {field_account, 1},
    {field_metadata, 3},
    {field_price_annotation, 2},
  [102] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_txn_strings, 2},
  [107] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [112] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [117] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [121] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [124] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [128] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [132] =
    {field_date, 0},
    {field_desc, 3},
    {field_metadata, 4},
    {field_type, 2},
  [136] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [140] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [144] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [148] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [152] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [156] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [160] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [164] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
  [167] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [171] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [175] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
  [179] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [183] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [187] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [191] =
    {field_currency, 1},
  [192] =
    {field_currency, 1},
    {field_per, 0},
  [194] =
    {field_cost_comp_list, 1},
  [195] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
  [198] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [202] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
  [205] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [209] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 4},
  [213] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [217] =
    {field_account, 1},
    {field_metadata, 4},
    {field_price_annotation, 2},
  [220] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_postings, 5},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [226] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [231] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [236] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [240] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [245] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [249] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_price_annotation, 5},
  [254] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 5},
  [259] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [264] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [268] =
    {field_currency, 2},
    {field_total, 1},
  [270] =
    {field_currency, 2},
    {field_per, 0},
  [272] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [276] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
  [280] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [285] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [289] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [294] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
  [299] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 5},
  [305] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [310] =
    {field_currency, 3},
    {field_per, 0},
    {field_total, 2},
  [313] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [318] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 7},
    {field_price_annotation, 5},
};

static TSSymbol ts_alias_sequences[94][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == ')') ADVANCE(194);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '=') ADVANCE(184);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == 'N') ADVANCE(52);
      if (lookahead == '^') ADVANCE(168);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'q') ADVANCE(123);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '|') ADVANCE(176);
      if (lookahead == '}') ADVANCE(183);
      if (lookahead == '~') ADVANCE(186);
      if (lookahead == 224) ADVANCE(164);
      if (lookahead == 237) ADVANCE(163);
      if (lookahead == 240) ADVANCE(166);
      if (lookahead == 244) ADVANCE(162);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(264);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(292);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(200);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(290);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(288);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(287);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '@') ADVANCE(178);
      if (lookahead == '^') ADVANCE(168);
      if (lookahead == '{') ADVANCE(181);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '~') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(169);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == 'F') ADVANCE(33);
      if (lookahead == 'T') ADVANCE(34);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(35);
      if (lookahead != 0 &&
          (lookahead < 0 || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(175);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == ',') ADVANCE(185);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '}') ADVANCE(183);
      if (lookahead == '~') ADVANCE(186);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '#') ADVANCE(187);
      if (lookahead == '(') ADVANCE(193);
      if (lookahead == '*') ADVANCE(188);
      if (lookahead == '+') ADVANCE(191);
      if (lookahead == '-') ADVANCE(192);
      if (lookahead == '}') ADVANCE(131);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(267);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(203);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == '^') ADVANCE(168);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(200);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 9:
      if (lookahead == ',') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(36);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'A') ADVANCE(228);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(229);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(230);
      END_STATE();
    case 36:
      if (lookahead == '0') ADVANCE(156);
      if (lookahead == '1') ADVANCE(133);
      END_STATE();
    case 37:
      if (lookahead == '0') ADVANCE(157);
      if (lookahead == '3') ADVANCE(132);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(158);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'A') ADVANCE(42);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'E') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 43:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'R') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 45:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 46:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 47:
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 48:
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(48)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(200);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?') ADVANCE(200);
      if (lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < 0 || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(167);
      END_STATE();
    case 50:
      if (lookahead == 'L') ADVANCE(195);
      END_STATE();
    case 51:
      if (lookahead == 'L') ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(64);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(82);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(283);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(282);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(124);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 63:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(277);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(83);
      END_STATE();
    case 66:
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(111);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(275);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(269);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(96);
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 78:
      if (lookahead == 'g') ADVANCE(281);
      END_STATE();
    case 79:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 80:
      if (lookahead == 'g') ADVANCE(85);
      END_STATE();
    case 81:
      if (lookahead == 'h') ADVANCE(93);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'i') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(59);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == 'o') ADVANCE(90);
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 89:
      if (lookahead == 'm') ADVANCE(272);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(75);
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 95:
      if (lookahead == 'n') ADVANCE(200);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(286);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 103:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 104:
      if (lookahead == 'o') ADVANCE(118);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 109:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 110:
      if (lookahead == 'p') ADVANCE(92);
      END_STATE();
    case 111:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 112:
      if (lookahead == 's') ADVANCE(81);
      END_STATE();
    case 113:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 114:
      if (lookahead == 's') ADVANCE(69);
      END_STATE();
    case 115:
      if (lookahead == 't') ADVANCE(274);
      END_STATE();
    case 116:
      if (lookahead == 't') ADVANCE(273);
      END_STATE();
    case 117:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 118:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 121:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 122:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 123:
      if (lookahead == 'u') ADVANCE(67);
      END_STATE();
    case 124:
      if (lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 125:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 126:
      if (lookahead == 'v') ADVANCE(73);
      END_STATE();
    case 127:
      if (lookahead == 'x') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 128:
      if (lookahead == 'x') ADVANCE(95);
      END_STATE();
    case 129:
      if (lookahead == 'y') ADVANCE(279);
      END_STATE();
    case 130:
      if (lookahead == 'y') ADVANCE(271);
      END_STATE();
    case 131:
      if (lookahead == '}') ADVANCE(180);
      END_STATE();
    case 132:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(199);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(11);
      END_STATE();
    case 134:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 135:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 136:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 137:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 138:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 139:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 140:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 141:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 142:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 143:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 144:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 145:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 146:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 147:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 148:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 149:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 150:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 151:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 152:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 153:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 154:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(256);
      END_STATE();
    case 155:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 156:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 157:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 162:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(295);
      END_STATE();
    case 163:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(291);
      END_STATE();
    case 164:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(289);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 166:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(293);
      END_STATE();
    case 167:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 168:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 169:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 170:
      if (lookahead != 0 &&
          (lookahead < 0 || '/' < lookahead) &&
          (lookahead < ':' || '@' < lookahead) &&
          (lookahead < '[' || 127 < lookahead)) ADVANCE(268);
      END_STATE();
    case 171:
      if (eof) ADVANCE(172);
      if (lookahead == '\n') ADVANCE(174);
      if (lookahead == ':') ADVANCE(190);
      if (lookahead == ';') ADVANCE(196);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == 'n') ADVANCE(104);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == 'q') ADVANCE(123);
      if (lookahead == 't') ADVANCE(128);
      if (lookahead == '}') ADVANCE(182);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(161);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(171)
      if (lookahead == '!' ||
          lookahead == '#' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '*' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(200);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(173);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__pipe);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__atat);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__at);
      if (lookahead == '@') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__lcurllcurl);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__rcurlrcurl);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__lcurl);
      if (lookahead == '{') ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__rcurl);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__rcurl);
      if (lookahead == '}') ADVANCE(180);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__hash);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__slash);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__minus);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__lparen);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__rparen);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__none);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__skipped_lines_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == ':') ADVANCE(260);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_flag);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_flag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(235);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(208);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(212);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(209);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(214);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(211);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(213);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(19);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(215);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(217);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(222);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(219);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(224);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'E') ADVANCE(205);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(227);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(223);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'L') ADVANCE(232);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'U') ADVANCE(231);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(233);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'E') ADVANCE(204);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == 'S') ADVANCE(225);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead == '\'' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < 0 || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(226);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          (lookahead < '.' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(257);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(239);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(237);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(241);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(238);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(243);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(240);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(245);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(242);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(244);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(249);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(246);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(251);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(248);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(255);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(252);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(254);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(207);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(258);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(259);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(266);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < 0 || ',' < lookahead) &&
          lookahead != '.' &&
          lookahead != '/' &&
          (lookahead < ';' || '@' < lookahead) &&
          (lookahead < '[' || '`' < lookahead) &&
          (lookahead < '{' || 127 < lookahead)) ADVANCE(268);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__UTF_8_1);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym__UTF_8_2_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token1);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token2);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token3);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token4);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token1);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token2);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 171},
  [2] = {.lex_state = 171},
  [3] = {.lex_state = 171},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 171},
  [15] = {.lex_state = 171},
  [16] = {.lex_state = 171},
  [17] = {.lex_state = 171},
  [18] = {.lex_state = 171},
  [19] = {.lex_state = 171},
  [20] = {.lex_state = 171},
  [21] = {.lex_state = 171},
  [22] = {.lex_state = 171},
  [23] = {.lex_state = 171},
  [24] = {.lex_state = 171},
  [25] = {.lex_state = 171},
  [26] = {.lex_state = 171},
  [27] = {.lex_state = 171},
  [28] = {.lex_state = 171},
  [29] = {.lex_state = 171},
  [30] = {.lex_state = 171},
  [31] = {.lex_state = 171},
  [32] = {.lex_state = 171},
  [33] = {.lex_state = 171},
  [34] = {.lex_state = 171},
  [35] = {.lex_state = 171},
  [36] = {.lex_state = 171},
  [37] = {.lex_state = 171},
  [38] = {.lex_state = 171},
  [39] = {.lex_state = 171},
  [40] = {.lex_state = 171},
  [41] = {.lex_state = 171},
  [42] = {.lex_state = 171},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 171},
  [45] = {.lex_state = 171},
  [46] = {.lex_state = 171},
  [47] = {.lex_state = 171},
  [48] = {.lex_state = 171},
  [49] = {.lex_state = 171},
  [50] = {.lex_state = 171},
  [51] = {.lex_state = 171},
  [52] = {.lex_state = 171},
  [53] = {.lex_state = 171},
  [54] = {.lex_state = 171},
  [55] = {.lex_state = 171},
  [56] = {.lex_state = 171},
  [57] = {.lex_state = 171},
  [58] = {.lex_state = 171},
  [59] = {.lex_state = 171},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 171},
  [62] = {.lex_state = 171},
  [63] = {.lex_state = 171},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 171},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 49},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 1},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 1},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 1},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 1},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 48},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
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
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
  [202] = {.lex_state = 1},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 1},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 4},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 1},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 171},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 171},
  [224] = {.lex_state = 1},
  [225] = {.lex_state = 3},
  [226] = {.lex_state = 171},
  [227] = {.lex_state = 171},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 171},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 171},
  [233] = {.lex_state = 171},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 3},
  [239] = {.lex_state = 171},
  [240] = {.lex_state = 171},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 171},
  [243] = {.lex_state = 1},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 3},
  [246] = {.lex_state = 171},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 171},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 171},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 171},
  [257] = {.lex_state = 3},
  [258] = {.lex_state = 171},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 171},
  [261] = {.lex_state = 171},
  [262] = {.lex_state = 171},
  [263] = {.lex_state = 171},
  [264] = {.lex_state = 171},
  [265] = {.lex_state = 171},
  [266] = {.lex_state = 1},
  [267] = {.lex_state = 197},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 171},
  [270] = {.lex_state = 171},
  [271] = {.lex_state = 171},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 1},
  [274] = {.lex_state = 171},
  [275] = {.lex_state = 171},
  [276] = {.lex_state = 171},
  [277] = {.lex_state = 171},
  [278] = {.lex_state = 171},
  [279] = {.lex_state = 1},
  [280] = {.lex_state = 1},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 171},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 171},
  [285] = {.lex_state = 171},
  [286] = {.lex_state = 171},
  [287] = {.lex_state = 1},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 171},
  [290] = {.lex_state = 171},
  [291] = {.lex_state = 1},
  [292] = {.lex_state = 171},
  [293] = {.lex_state = 171},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 1},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__pipe] = ACTIONS(1),
    [sym__atat] = ACTIONS(1),
    [sym__at] = ACTIONS(1),
    [sym__lcurllcurl] = ACTIONS(1),
    [sym__rcurlrcurl] = ACTIONS(1),
    [sym__lcurl] = ACTIONS(1),
    [sym__rcurl] = ACTIONS(1),
    [sym__equal] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym__tilde] = ACTIONS(1),
    [sym__hash] = ACTIONS(1),
    [sym__asterisk] = ACTIONS(1),
    [sym__slash] = ACTIONS(1),
    [sym__colon] = ACTIONS(1),
    [sym__plus] = ACTIONS(1),
    [sym__minus] = ACTIONS(1),
    [sym__lparen] = ACTIONS(1),
    [sym__rparen] = ACTIONS(1),
    [sym__none] = ACTIONS(1),
    [sym__comment] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
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
    [sym_file] = STATE(252),
    [sym__skipped_lines] = STATE(3),
    [sym_transaction] = STATE(3),
    [sym_balance] = STATE(3),
    [sym_close] = STATE(3),
    [sym_commodity] = STATE(3),
    [sym_custom] = STATE(3),
    [sym_document] = STATE(3),
    [sym_event] = STATE(3),
    [sym_note] = STATE(3),
    [sym_open] = STATE(3),
    [sym_pad] = STATE(3),
    [sym_price] = STATE(3),
    [sym_query] = STATE(3),
    [sym_pushtag] = STATE(3),
    [sym_poptag] = STATE(3),
    [sym_pushmeta] = STATE(3),
    [sym_popmeta] = STATE(3),
    [sym__entry] = STATE(3),
    [sym_option] = STATE(3),
    [sym_include] = STATE(3),
    [sym_plugin] = STATE(3),
    [sym__directive] = STATE(3),
    [sym__declarations] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym__eol] = ACTIONS(5),
    [sym__colon] = ACTIONS(7),
    [sym__comment] = ACTIONS(9),
    [sym_date] = ACTIONS(11),
    [sym_flag] = ACTIONS(7),
    [anon_sym_pushtag] = ACTIONS(13),
    [anon_sym_poptag] = ACTIONS(15),
    [anon_sym_pushmeta] = ACTIONS(17),
    [anon_sym_popmeta] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_plugin] = ACTIONS(25),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__eol,
    ACTIONS(35), 1,
      sym__comment,
    ACTIONS(38), 1,
      sym_date,
    ACTIONS(41), 1,
      anon_sym_pushtag,
    ACTIONS(44), 1,
      anon_sym_poptag,
    ACTIONS(47), 1,
      anon_sym_pushmeta,
    ACTIONS(50), 1,
      anon_sym_popmeta,
    ACTIONS(53), 1,
      anon_sym_option,
    ACTIONS(56), 1,
      anon_sym_include,
    ACTIONS(59), 1,
      anon_sym_plugin,
    ACTIONS(32), 2,
      sym__colon,
      sym_flag,
    STATE(2), 24,
      sym__skipped_lines,
      sym_transaction,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_query,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__entry,
      sym_option,
      sym_include,
      sym_plugin,
      sym__directive,
      sym__declarations,
      aux_sym_file_repeat1,
  [64] = 13,
    ACTIONS(9), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(13), 1,
      anon_sym_pushtag,
    ACTIONS(15), 1,
      anon_sym_poptag,
    ACTIONS(17), 1,
      anon_sym_pushmeta,
    ACTIONS(19), 1,
      anon_sym_popmeta,
    ACTIONS(21), 1,
      anon_sym_option,
    ACTIONS(23), 1,
      anon_sym_include,
    ACTIONS(25), 1,
      anon_sym_plugin,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym__eol,
    ACTIONS(7), 2,
      sym__colon,
      sym_flag,
    STATE(2), 24,
      sym__skipped_lines,
      sym_transaction,
      sym_balance,
      sym_close,
      sym_commodity,
      sym_custom,
      sym_document,
      sym_event,
      sym_note,
      sym_open,
      sym_pad,
      sym_price,
      sym_query,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym__entry,
      sym_option,
      sym_include,
      sym_plugin,
      sym__directive,
      sym__declarations,
      aux_sym_file_repeat1,
  [128] = 16,
    ACTIONS(66), 1,
      sym__indent,
    ACTIONS(69), 1,
      sym__eol,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(75), 1,
      sym__lcurllcurl,
    ACTIONS(77), 1,
      sym__lcurl,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(83), 1,
      sym__comment,
    ACTIONS(85), 1,
      sym_number,
    STATE(68), 1,
      sym_incomplete_amount,
    STATE(86), 1,
      sym_cost_spec,
    STATE(115), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(182), 1,
      sym_metadata,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(291), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [181] = 16,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(75), 1,
      sym__lcurllcurl,
    ACTIONS(77), 1,
      sym__lcurl,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym__indent,
    ACTIONS(90), 1,
      sym__eol,
    ACTIONS(92), 1,
      sym__comment,
    STATE(66), 1,
      sym_incomplete_amount,
    STATE(88), 1,
      sym_cost_spec,
    STATE(111), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(204), 1,
      sym_metadata,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(291), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [234] = 11,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(96), 1,
      sym__eol,
    ACTIONS(100), 1,
      sym__lparen,
    ACTIONS(104), 1,
      sym_bool,
    ACTIONS(106), 1,
      sym_number,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(274), 1,
      sym_metadata,
    ACTIONS(98), 2,
      sym__plus,
      sym__minus,
    STATE(11), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(102), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(70), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [275] = 9,
    ACTIONS(108), 1,
      sym__indent,
    ACTIONS(110), 1,
      sym__eol,
    ACTIONS(114), 1,
      sym__lparen,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(112), 2,
      sym__plus,
      sym__minus,
    ACTIONS(118), 2,
      sym_bool,
      sym_currency,
    STATE(206), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(116), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(166), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [312] = 11,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(100), 1,
      sym__lparen,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(122), 1,
      sym__eol,
    ACTIONS(126), 1,
      sym_bool,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(277), 1,
      sym_metadata,
    ACTIONS(98), 2,
      sym__plus,
      sym__minus,
    STATE(6), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(124), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(70), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [353] = 11,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(128), 1,
      sym__rcurl,
    ACTIONS(130), 1,
      sym__hash,
    ACTIONS(134), 1,
      sym_currency,
    ACTIONS(136), 1,
      sym_number,
    STATE(140), 1,
      sym_cost_comp,
    STATE(173), 1,
      sym_compound_amout,
    STATE(254), 1,
      sym_cost_comp_list,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    ACTIONS(132), 3,
      sym__asterisk,
      sym_date,
      sym_string,
    STATE(114), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [393] = 11,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(128), 1,
      sym__rcurlrcurl,
    ACTIONS(130), 1,
      sym__hash,
    ACTIONS(134), 1,
      sym_currency,
    ACTIONS(136), 1,
      sym_number,
    STATE(140), 1,
      sym_cost_comp,
    STATE(173), 1,
      sym_compound_amout,
    STATE(255), 1,
      sym_cost_comp_list,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    ACTIONS(132), 3,
      sym__asterisk,
      sym_date,
      sym_string,
    STATE(114), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [433] = 9,
    ACTIONS(138), 1,
      sym__indent,
    ACTIONS(140), 1,
      sym__eol,
    ACTIONS(145), 1,
      sym__lparen,
    ACTIONS(151), 1,
      sym_bool,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(142), 2,
      sym__plus,
      sym__minus,
    STATE(11), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(148), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(70), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [468] = 8,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(136), 1,
      sym_number,
    STATE(292), 1,
      sym_key_value_value,
    STATE(293), 1,
      sym_amount,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    ACTIONS(159), 2,
      sym_bool,
      sym_currency,
    ACTIONS(157), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(212), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [501] = 9,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(130), 1,
      sym__hash,
    ACTIONS(134), 1,
      sym_currency,
    ACTIONS(136), 1,
      sym_number,
    STATE(159), 1,
      sym_cost_comp,
    STATE(173), 1,
      sym_compound_amout,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    ACTIONS(132), 3,
      sym__asterisk,
      sym_date,
      sym_string,
    STATE(114), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [535] = 1,
    ACTIONS(161), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [551] = 1,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [567] = 1,
    ACTIONS(165), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [583] = 1,
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [599] = 1,
    ACTIONS(169), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [615] = 1,
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [631] = 1,
    ACTIONS(173), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [647] = 1,
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [663] = 1,
    ACTIONS(177), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [679] = 1,
    ACTIONS(179), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [695] = 1,
    ACTIONS(181), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [711] = 1,
    ACTIONS(183), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [727] = 1,
    ACTIONS(185), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [743] = 1,
    ACTIONS(187), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [759] = 1,
    ACTIONS(189), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [775] = 1,
    ACTIONS(191), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [791] = 1,
    ACTIONS(193), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [807] = 1,
    ACTIONS(195), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [823] = 1,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [839] = 1,
    ACTIONS(199), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [855] = 1,
    ACTIONS(201), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [871] = 1,
    ACTIONS(203), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [887] = 1,
    ACTIONS(205), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [903] = 1,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [919] = 1,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [935] = 1,
    ACTIONS(211), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [951] = 1,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [967] = 1,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [983] = 1,
    ACTIONS(217), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [999] = 4,
    ACTIONS(223), 2,
      sym__asterisk,
      sym__slash,
    ACTIONS(225), 2,
      sym__plus,
      sym__minus,
    ACTIONS(221), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(219), 5,
      sym__indent,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1021] = 1,
    ACTIONS(227), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1037] = 1,
    ACTIONS(229), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1053] = 1,
    ACTIONS(231), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1069] = 1,
    ACTIONS(233), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1085] = 1,
    ACTIONS(235), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1101] = 1,
    ACTIONS(237), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1117] = 1,
    ACTIONS(239), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1133] = 1,
    ACTIONS(241), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1149] = 1,
    ACTIONS(243), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1165] = 1,
    ACTIONS(245), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1181] = 1,
    ACTIONS(247), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1197] = 1,
    ACTIONS(249), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1213] = 1,
    ACTIONS(251), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1229] = 1,
    ACTIONS(253), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1245] = 1,
    ACTIONS(255), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1261] = 1,
    ACTIONS(257), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1277] = 1,
    ACTIONS(259), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1293] = 1,
    ACTIONS(261), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1309] = 1,
    ACTIONS(263), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1325] = 1,
    ACTIONS(265), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym__comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1341] = 10,
    ACTIONS(267), 1,
      sym__indent,
    ACTIONS(271), 1,
      sym_string,
    STATE(76), 1,
      sym_txn_strings,
    STATE(98), 1,
      sym_tags_and_links,
    STATE(107), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(128), 1,
      sym_metadata,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(223), 1,
      sym_postings,
    ACTIONS(269), 2,
      sym_tag,
      sym_link,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1374] = 12,
    ACTIONS(273), 1,
      sym_flag,
    ACTIONS(275), 1,
      anon_sym_balance,
    ACTIONS(277), 1,
      anon_sym_close,
    ACTIONS(279), 1,
      anon_sym_commodity,
    ACTIONS(281), 1,
      anon_sym_custom,
    ACTIONS(283), 1,
      anon_sym_document,
    ACTIONS(285), 1,
      anon_sym_event,
    ACTIONS(287), 1,
      anon_sym_note,
    ACTIONS(289), 1,
      anon_sym_open,
    ACTIONS(291), 1,
      anon_sym_pad,
    ACTIONS(293), 1,
      anon_sym_price,
    ACTIONS(295), 1,
      anon_sym_query,
  [1411] = 11,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(75), 1,
      sym__lcurllcurl,
    ACTIONS(77), 1,
      sym__lcurl,
    ACTIONS(297), 1,
      sym__indent,
    ACTIONS(300), 1,
      sym__eol,
    ACTIONS(302), 1,
      sym__comment,
    STATE(83), 1,
      sym_cost_spec,
    STATE(102), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(196), 1,
      sym_metadata,
  [1445] = 2,
    ACTIONS(306), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(304), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1461] = 11,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(75), 1,
      sym__lcurllcurl,
    ACTIONS(77), 1,
      sym__lcurl,
    ACTIONS(308), 1,
      sym__indent,
    ACTIONS(311), 1,
      sym__eol,
    ACTIONS(313), 1,
      sym__comment,
    STATE(87), 1,
      sym_cost_spec,
    STATE(109), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(211), 1,
      sym_metadata,
  [1495] = 2,
    ACTIONS(317), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(315), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1511] = 3,
    ACTIONS(323), 1,
      sym_currency,
    ACTIONS(321), 3,
      sym__eol,
      sym_bool,
      sym_number,
    ACTIONS(319), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1529] = 2,
    ACTIONS(327), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(325), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1545] = 4,
    ACTIONS(221), 1,
      sym__rcurl,
    ACTIONS(329), 2,
      sym__asterisk,
      sym__slash,
    ACTIONS(331), 2,
      sym__plus,
      sym__minus,
    ACTIONS(219), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [1565] = 2,
    ACTIONS(306), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(304), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1581] = 2,
    ACTIONS(335), 3,
      sym__eol,
      sym_bool,
      sym_number,
    ACTIONS(333), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1596] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(148), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(208), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1617] = 8,
    ACTIONS(267), 1,
      sym__indent,
    STATE(99), 1,
      sym_tags_and_links,
    STATE(107), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(150), 1,
      sym_metadata,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(263), 1,
      sym_postings,
    ACTIONS(269), 2,
      sym_tag,
      sym_link,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1644] = 8,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(337), 1,
      sym__eol,
    ACTIONS(339), 1,
      sym_currency,
    ACTIONS(341), 1,
      sym_string,
    STATE(131), 1,
      sym_opt_booking,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(284), 1,
      sym_metadata,
    STATE(78), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [1670] = 8,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(339), 1,
      sym_currency,
    ACTIONS(341), 1,
      sym_string,
    ACTIONS(343), 1,
      sym__eol,
    STATE(151), 1,
      sym_opt_booking,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(264), 1,
      sym_metadata,
    STATE(97), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [1696] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(345), 1,
      sym_currency,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(266), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1716] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    STATE(174), 1,
      sym_incomplete_amount,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(291), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1736] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    STATE(120), 1,
      sym_amount,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(244), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1756] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(347), 1,
      sym_currency,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(234), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1776] = 8,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(349), 1,
      sym__indent,
    ACTIONS(352), 1,
      sym__eol,
    ACTIONS(354), 1,
      sym__comment,
    STATE(108), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(195), 1,
      sym_metadata,
  [1801] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(224), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1818] = 7,
    ACTIONS(356), 1,
      sym__indent,
    ACTIONS(358), 1,
      sym__eol,
    STATE(107), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(154), 1,
      sym_tags_and_links,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(271), 1,
      sym_metadata,
    ACTIONS(269), 2,
      sym_tag,
      sym_link,
  [1841] = 8,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(360), 1,
      sym__indent,
    ACTIONS(363), 1,
      sym__eol,
    ACTIONS(365), 1,
      sym__comment,
    STATE(112), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(209), 1,
      sym_metadata,
  [1866] = 8,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(367), 1,
      sym__indent,
    ACTIONS(370), 1,
      sym__eol,
    ACTIONS(372), 1,
      sym__comment,
    STATE(113), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(200), 1,
      sym_metadata,
  [1891] = 8,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(374), 1,
      sym__indent,
    ACTIONS(377), 1,
      sym__eol,
    ACTIONS(379), 1,
      sym__comment,
    STATE(110), 1,
      sym_price_annotation,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(192), 1,
      sym_metadata,
  [1916] = 2,
    ACTIONS(306), 1,
      sym__rcurl,
    ACTIONS(304), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [1928] = 2,
    ACTIONS(317), 1,
      sym__rcurl,
    ACTIONS(315), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [1940] = 2,
    ACTIONS(306), 1,
      sym__rcurl,
    ACTIONS(304), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [1952] = 6,
    ACTIONS(381), 1,
      sym__comment,
    ACTIONS(383), 1,
      sym_flag,
    ACTIONS(387), 1,
      sym_key,
    ACTIONS(389), 1,
      sym_account,
    STATE(180), 1,
      sym_key_value,
    ACTIONS(385), 2,
      sym_tag,
      sym_link,
  [1972] = 2,
    ACTIONS(393), 3,
      sym__eol,
      sym__at,
      sym__lcurl,
    ACTIONS(391), 4,
      sym__indent,
      sym__atat,
      sym__lcurllcurl,
      sym__comment,
  [1984] = 4,
    ACTIONS(221), 1,
      sym__eol,
    ACTIONS(219), 2,
      sym__indent,
      sym_currency,
    ACTIONS(395), 2,
      sym__asterisk,
      sym__slash,
    ACTIONS(397), 2,
      sym__plus,
      sym__minus,
  [2000] = 2,
    ACTIONS(327), 1,
      sym__rcurl,
    ACTIONS(325), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [2012] = 4,
    ACTIONS(401), 1,
      sym__eol,
    ACTIONS(403), 1,
      sym__comma,
    STATE(96), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(399), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2027] = 4,
    ACTIONS(408), 1,
      sym__eol,
    ACTIONS(410), 1,
      sym_currency,
    ACTIONS(406), 2,
      sym__indent,
      sym_string,
    STATE(97), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [2042] = 5,
    ACTIONS(413), 1,
      sym__indent,
    STATE(130), 1,
      sym_metadata,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(220), 1,
      sym_postings,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2059] = 5,
    ACTIONS(413), 1,
      sym__indent,
    STATE(134), 1,
      sym_metadata,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(286), 1,
      sym_postings,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2076] = 4,
    ACTIONS(417), 1,
      sym__eol,
    ACTIONS(419), 1,
      sym__comma,
    STATE(101), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(415), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2091] = 4,
    ACTIONS(419), 1,
      sym__comma,
    ACTIONS(423), 1,
      sym__eol,
    STATE(96), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(421), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2106] = 5,
    ACTIONS(425), 1,
      sym__indent,
    ACTIONS(428), 1,
      sym__eol,
    ACTIONS(430), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(191), 1,
      sym_metadata,
  [2122] = 2,
    ACTIONS(401), 1,
      sym__eol,
    ACTIONS(399), 4,
      sym__indent,
      sym__comma,
      sym_currency,
      sym_string,
  [2132] = 5,
    ACTIONS(381), 1,
      sym__comment,
    ACTIONS(383), 1,
      sym_flag,
    ACTIONS(387), 1,
      sym_key,
    ACTIONS(389), 1,
      sym_account,
    STATE(180), 1,
      sym_key_value,
  [2148] = 4,
    ACTIONS(432), 1,
      sym__indent,
    ACTIONS(435), 1,
      sym__eol,
    STATE(105), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(437), 2,
      sym_tag,
      sym_link,
  [2162] = 2,
    ACTIONS(442), 2,
      sym__eol,
      sym__at,
    ACTIONS(440), 3,
      sym__indent,
      sym__atat,
      sym__comment,
  [2172] = 4,
    ACTIONS(444), 1,
      sym__indent,
    ACTIONS(447), 1,
      sym__eol,
    STATE(105), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(449), 2,
      sym_tag,
      sym_link,
  [2186] = 5,
    ACTIONS(451), 1,
      sym__indent,
    ACTIONS(454), 1,
      sym__eol,
    ACTIONS(456), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(210), 1,
      sym_metadata,
  [2202] = 5,
    ACTIONS(458), 1,
      sym__indent,
    ACTIONS(461), 1,
      sym__eol,
    ACTIONS(463), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(205), 1,
      sym_metadata,
  [2218] = 5,
    ACTIONS(465), 1,
      sym__indent,
    ACTIONS(468), 1,
      sym__eol,
    ACTIONS(470), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(219), 1,
      sym_metadata,
  [2234] = 5,
    ACTIONS(472), 1,
      sym__indent,
    ACTIONS(475), 1,
      sym__eol,
    ACTIONS(477), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(198), 1,
      sym_metadata,
  [2250] = 5,
    ACTIONS(479), 1,
      sym__indent,
    ACTIONS(482), 1,
      sym__eol,
    ACTIONS(484), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(183), 1,
      sym_metadata,
  [2266] = 5,
    ACTIONS(486), 1,
      sym__indent,
    ACTIONS(489), 1,
      sym__eol,
    ACTIONS(491), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(185), 1,
      sym_metadata,
  [2282] = 4,
    ACTIONS(495), 1,
      sym__rcurl,
    ACTIONS(497), 1,
      sym__hash,
    ACTIONS(499), 1,
      sym_currency,
    ACTIONS(493), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2296] = 5,
    ACTIONS(501), 1,
      sym__indent,
    ACTIONS(504), 1,
      sym__eol,
    ACTIONS(506), 1,
      sym__comment,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(213), 1,
      sym_metadata,
  [2312] = 2,
    ACTIONS(510), 2,
      sym__eol,
      sym__at,
    ACTIONS(508), 3,
      sym__indent,
      sym__atat,
      sym__comment,
  [2322] = 3,
    ACTIONS(387), 1,
      sym_key,
    STATE(180), 1,
      sym_key_value,
    ACTIONS(385), 2,
      sym_tag,
      sym_link,
  [2333] = 4,
    ACTIONS(512), 1,
      sym__indent,
    ACTIONS(515), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(187), 1,
      sym_metadata,
  [2346] = 4,
    ACTIONS(517), 1,
      sym__indent,
    ACTIONS(520), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(190), 1,
      sym_metadata,
  [2359] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(522), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(260), 1,
      sym_metadata,
  [2372] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(524), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(258), 1,
      sym_metadata,
  [2385] = 4,
    ACTIONS(526), 1,
      sym__rcurlrcurl,
    ACTIONS(528), 1,
      sym__rcurl,
    ACTIONS(530), 1,
      sym__comma,
    STATE(156), 1,
      aux_sym_cost_comp_list_repeat1,
  [2398] = 4,
    ACTIONS(532), 1,
      sym__indent,
    ACTIONS(535), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(214), 1,
      sym_metadata,
  [2411] = 4,
    ACTIONS(537), 1,
      sym__indent,
    ACTIONS(540), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(178), 1,
      sym_metadata,
  [2424] = 4,
    ACTIONS(542), 1,
      sym__indent,
    ACTIONS(545), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(186), 1,
      sym_metadata,
  [2437] = 2,
    ACTIONS(549), 1,
      sym_string,
    ACTIONS(547), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2446] = 4,
    ACTIONS(551), 1,
      sym__indent,
    ACTIONS(554), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(188), 1,
      sym_metadata,
  [2459] = 3,
    ACTIONS(556), 1,
      sym__indent,
    STATE(261), 1,
      sym_postings,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2470] = 3,
    ACTIONS(556), 1,
      sym__indent,
    ACTIONS(558), 1,
      sym__eol,
    STATE(155), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2481] = 3,
    ACTIONS(556), 1,
      sym__indent,
    STATE(282), 1,
      sym_postings,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2492] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(560), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(265), 1,
      sym_metadata,
  [2505] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(562), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(275), 1,
      sym_metadata,
  [2518] = 4,
    ACTIONS(564), 1,
      sym__indent,
    ACTIONS(567), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(215), 1,
      sym_metadata,
  [2531] = 3,
    ACTIONS(556), 1,
      sym__indent,
    STATE(246), 1,
      sym_postings,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2542] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(569), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(276), 1,
      sym_metadata,
  [2555] = 4,
    ACTIONS(571), 1,
      sym__indent,
    ACTIONS(574), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(189), 1,
      sym_metadata,
  [2568] = 4,
    ACTIONS(576), 1,
      sym__indent,
    ACTIONS(579), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(197), 1,
      sym_metadata,
  [2581] = 4,
    ACTIONS(581), 1,
      sym__indent,
    ACTIONS(584), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(203), 1,
      sym_metadata,
  [2594] = 4,
    ACTIONS(586), 1,
      sym__indent,
    ACTIONS(589), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(217), 1,
      sym_metadata,
  [2607] = 4,
    ACTIONS(530), 1,
      sym__comma,
    ACTIONS(591), 1,
      sym__rcurlrcurl,
    ACTIONS(593), 1,
      sym__rcurl,
    STATE(122), 1,
      aux_sym_cost_comp_list_repeat1,
  [2620] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(595), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(269), 1,
      sym_metadata,
  [2633] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(597), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(270), 1,
      sym_metadata,
  [2646] = 2,
    ACTIONS(601), 1,
      sym__eol,
    ACTIONS(599), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2655] = 4,
    ACTIONS(603), 1,
      sym__indent,
    ACTIONS(606), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(179), 1,
      sym_metadata,
  [2668] = 4,
    ACTIONS(608), 1,
      sym__indent,
    ACTIONS(611), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(177), 1,
      sym_metadata,
  [2681] = 2,
    ACTIONS(435), 1,
      sym__eol,
    ACTIONS(613), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2690] = 4,
    ACTIONS(615), 1,
      sym__indent,
    ACTIONS(618), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(207), 1,
      sym_metadata,
  [2703] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(620), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(278), 1,
      sym_metadata,
  [2716] = 4,
    ACTIONS(622), 1,
      sym__indent,
    ACTIONS(625), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(181), 1,
      sym_metadata,
  [2729] = 3,
    ACTIONS(556), 1,
      sym__indent,
    STATE(290), 1,
      sym_postings,
    STATE(129), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2740] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(627), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(242), 1,
      sym_metadata,
  [2753] = 4,
    ACTIONS(629), 1,
      sym__indent,
    ACTIONS(632), 1,
      sym__eol,
    STATE(168), 1,
      aux_sym_metadata_repeat1,
    STATE(193), 1,
      sym_metadata,
  [2766] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(634), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(262), 1,
      sym_metadata,
  [2779] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(636), 1,
      sym__eol,
    STATE(169), 1,
      aux_sym_metadata_repeat1,
    STATE(230), 1,
      sym_metadata,
  [2792] = 3,
    ACTIONS(638), 1,
      sym__indent,
    ACTIONS(641), 1,
      sym__eol,
    STATE(155), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2803] = 4,
    ACTIONS(643), 1,
      sym__rcurlrcurl,
    ACTIONS(645), 1,
      sym__rcurl,
    ACTIONS(647), 1,
      sym__comma,
    STATE(156), 1,
      aux_sym_cost_comp_list_repeat1,
  [2816] = 2,
    ACTIONS(652), 1,
      sym__rcurl,
    ACTIONS(650), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2824] = 2,
    ACTIONS(306), 1,
      sym__eol,
    ACTIONS(304), 2,
      sym__indent,
      sym_currency,
  [2832] = 2,
    ACTIONS(645), 1,
      sym__rcurl,
    ACTIONS(643), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2840] = 2,
    ACTIONS(306), 1,
      sym__eol,
    ACTIONS(304), 2,
      sym__indent,
      sym_currency,
  [2848] = 2,
    ACTIONS(656), 1,
      sym__rcurl,
    ACTIONS(654), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2856] = 2,
    ACTIONS(660), 1,
      sym__rcurl,
    ACTIONS(658), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2864] = 2,
    ACTIONS(664), 1,
      sym__rcurl,
    ACTIONS(662), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2872] = 2,
    ACTIONS(668), 1,
      sym__rcurl,
    ACTIONS(666), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2880] = 2,
    ACTIONS(327), 1,
      sym__eol,
    ACTIONS(325), 2,
      sym__indent,
      sym_currency,
  [2888] = 3,
    ACTIONS(670), 1,
      sym__indent,
    ACTIONS(672), 1,
      sym__eol,
    ACTIONS(674), 1,
      sym_currency,
  [2898] = 2,
    ACTIONS(317), 1,
      sym__eol,
    ACTIONS(315), 2,
      sym__indent,
      sym_currency,
  [2906] = 3,
    ACTIONS(676), 1,
      sym__indent,
    ACTIONS(679), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
  [2916] = 3,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(679), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
  [2926] = 2,
    ACTIONS(683), 1,
      sym__rcurl,
    ACTIONS(681), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2934] = 3,
    ACTIONS(685), 1,
      sym__indent,
    ACTIONS(688), 1,
      sym__eol,
    STATE(171), 1,
      aux_sym_metadata_repeat1,
  [2944] = 3,
    ACTIONS(381), 1,
      sym__comment,
    ACTIONS(383), 1,
      sym_flag,
    ACTIONS(389), 1,
      sym_account,
  [2954] = 2,
    ACTIONS(692), 1,
      sym__rcurl,
    ACTIONS(690), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2962] = 2,
    ACTIONS(696), 1,
      sym__eol,
    ACTIONS(694), 2,
      sym__indent,
      sym__comment,
  [2970] = 1,
    ACTIONS(698), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2976] = 2,
    ACTIONS(700), 1,
      sym__indent,
    ACTIONS(702), 1,
      sym__eol,
  [2983] = 2,
    ACTIONS(704), 1,
      sym__indent,
    ACTIONS(706), 1,
      sym__eol,
  [2990] = 2,
    ACTIONS(708), 1,
      sym__indent,
    ACTIONS(710), 1,
      sym__eol,
  [2997] = 2,
    ACTIONS(712), 1,
      sym__indent,
    ACTIONS(714), 1,
      sym__eol,
  [3004] = 2,
    ACTIONS(688), 1,
      sym__eol,
    ACTIONS(716), 1,
      sym__indent,
  [3011] = 2,
    ACTIONS(718), 1,
      sym__indent,
    ACTIONS(720), 1,
      sym__eol,
  [3018] = 2,
    ACTIONS(722), 1,
      sym__indent,
    ACTIONS(724), 1,
      sym__eol,
  [3025] = 2,
    ACTIONS(726), 1,
      sym__indent,
    ACTIONS(728), 1,
      sym__eol,
  [3032] = 2,
    ACTIONS(641), 1,
      sym__eol,
    ACTIONS(730), 1,
      sym__indent,
  [3039] = 2,
    ACTIONS(732), 1,
      sym__indent,
    ACTIONS(734), 1,
      sym__eol,
  [3046] = 2,
    ACTIONS(736), 1,
      sym__indent,
    ACTIONS(738), 1,
      sym__eol,
  [3053] = 2,
    ACTIONS(740), 1,
      sym__indent,
    ACTIONS(742), 1,
      sym__eol,
  [3060] = 2,
    ACTIONS(744), 1,
      sym__indent,
    ACTIONS(746), 1,
      sym__eol,
  [3067] = 2,
    ACTIONS(748), 1,
      sym__indent,
    ACTIONS(750), 1,
      sym__eol,
  [3074] = 2,
    ACTIONS(752), 1,
      sym__indent,
    ACTIONS(754), 1,
      sym__eol,
  [3081] = 2,
    ACTIONS(756), 1,
      sym__indent,
    ACTIONS(758), 1,
      sym__eol,
  [3088] = 2,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(762), 1,
      sym__eol,
  [3095] = 2,
    ACTIONS(764), 1,
      sym__indent,
    ACTIONS(766), 1,
      sym__eol,
  [3102] = 2,
    ACTIONS(768), 1,
      sym__indent,
    ACTIONS(770), 1,
      sym__eol,
  [3109] = 2,
    ACTIONS(772), 1,
      sym__indent,
    ACTIONS(774), 1,
      sym__eol,
  [3116] = 2,
    ACTIONS(776), 1,
      sym__indent,
    ACTIONS(778), 1,
      sym__eol,
  [3123] = 2,
    ACTIONS(780), 1,
      sym__indent,
    ACTIONS(782), 1,
      sym__eol,
  [3130] = 2,
    ACTIONS(784), 1,
      sym__indent,
    ACTIONS(786), 1,
      sym__eol,
  [3137] = 2,
    ACTIONS(788), 1,
      sym_string,
    STATE(85), 1,
      sym_filename,
  [3144] = 2,
    ACTIONS(790), 1,
      sym__indent,
    ACTIONS(792), 1,
      sym__eol,
  [3151] = 2,
    ACTIONS(794), 1,
      sym_key,
    STATE(232), 1,
      sym_key_value_line,
  [3158] = 2,
    ACTIONS(794), 1,
      sym_key,
    STATE(233), 1,
      sym_key_value_line,
  [3165] = 2,
    ACTIONS(796), 1,
      sym__indent,
    ACTIONS(798), 1,
      sym__eol,
  [3172] = 2,
    ACTIONS(800), 1,
      sym__indent,
    ACTIONS(802), 1,
      sym__eol,
  [3179] = 2,
    ACTIONS(804), 1,
      sym__indent,
    ACTIONS(806), 1,
      sym__eol,
  [3186] = 2,
    ACTIONS(808), 1,
      sym__indent,
    ACTIONS(810), 1,
      sym__eol,
  [3193] = 2,
    ACTIONS(812), 1,
      sym__indent,
    ACTIONS(814), 1,
      sym__eol,
  [3200] = 2,
    ACTIONS(674), 1,
      sym_currency,
    ACTIONS(816), 1,
      sym__tilde,
  [3207] = 2,
    ACTIONS(818), 1,
      sym__indent,
    ACTIONS(820), 1,
      sym__eol,
  [3214] = 2,
    ACTIONS(822), 1,
      sym__indent,
    ACTIONS(824), 1,
      sym__eol,
  [3221] = 2,
    ACTIONS(826), 1,
      sym__indent,
    ACTIONS(828), 1,
      sym__eol,
  [3228] = 2,
    ACTIONS(830), 1,
      sym__eol,
    ACTIONS(832), 1,
      sym_currency,
  [3235] = 2,
    ACTIONS(834), 1,
      sym__indent,
    ACTIONS(836), 1,
      sym__eol,
  [3242] = 2,
    ACTIONS(838), 1,
      sym__indent,
    ACTIONS(840), 1,
      sym__eol,
  [3249] = 2,
    ACTIONS(842), 1,
      sym__indent,
    ACTIONS(844), 1,
      sym__eol,
  [3256] = 1,
    ACTIONS(385), 2,
      sym_tag,
      sym_link,
  [3261] = 2,
    ACTIONS(846), 1,
      sym__indent,
    ACTIONS(848), 1,
      sym__eol,
  [3268] = 2,
    ACTIONS(387), 1,
      sym_key,
    STATE(180), 1,
      sym_key_value,
  [3275] = 2,
    ACTIONS(850), 1,
      sym__indent,
    ACTIONS(852), 1,
      sym__eol,
  [3282] = 1,
    ACTIONS(854), 1,
      sym__eol,
  [3286] = 1,
    ACTIONS(856), 1,
      sym_account,
  [3290] = 1,
    ACTIONS(858), 1,
      sym_account,
  [3294] = 1,
    ACTIONS(860), 1,
      sym__eol,
  [3298] = 1,
    ACTIONS(862), 1,
      sym_currency,
  [3302] = 1,
    ACTIONS(864), 1,
      sym_account,
  [3306] = 1,
    ACTIONS(866), 1,
      sym__eol,
  [3310] = 1,
    ACTIONS(868), 1,
      sym__eol,
  [3314] = 1,
    ACTIONS(870), 1,
      sym_string,
  [3318] = 1,
    ACTIONS(872), 1,
      sym_account,
  [3322] = 1,
    ACTIONS(874), 1,
      sym__eol,
  [3326] = 1,
    ACTIONS(876), 1,
      sym_string,
  [3330] = 1,
    ACTIONS(878), 1,
      sym__eol,
  [3334] = 1,
    ACTIONS(880), 1,
      sym__eol,
  [3338] = 1,
    ACTIONS(882), 1,
      sym_currency,
  [3342] = 1,
    ACTIONS(884), 1,
      sym_string,
  [3346] = 1,
    ACTIONS(886), 1,
      sym__colon,
  [3350] = 1,
    ACTIONS(888), 1,
      sym_currency,
  [3354] = 1,
    ACTIONS(890), 1,
      sym_account,
  [3358] = 1,
    ACTIONS(892), 1,
      sym__eol,
  [3362] = 1,
    ACTIONS(894), 1,
      sym__eol,
  [3366] = 1,
    ACTIONS(896), 1,
      sym_string,
  [3370] = 1,
    ACTIONS(898), 1,
      sym__eol,
  [3374] = 1,
    ACTIONS(900), 1,
      sym_currency,
  [3378] = 1,
    ACTIONS(674), 1,
      sym_currency,
  [3382] = 1,
    ACTIONS(902), 1,
      sym_account,
  [3386] = 1,
    ACTIONS(904), 1,
      sym__eol,
  [3390] = 1,
    ACTIONS(906), 1,
      sym_string,
  [3394] = 1,
    ACTIONS(908), 1,
      sym_string,
  [3398] = 1,
    ACTIONS(910), 1,
      sym_account,
  [3402] = 1,
    ACTIONS(912), 1,
      sym__eol,
  [3406] = 1,
    ACTIONS(914), 1,
      sym_string,
  [3410] = 1,
    ACTIONS(916), 1,
      ts_builtin_sym_end,
  [3414] = 1,
    ACTIONS(918), 1,
      sym_string,
  [3418] = 1,
    ACTIONS(920), 1,
      sym__rcurl,
  [3422] = 1,
    ACTIONS(920), 1,
      sym__rcurlrcurl,
  [3426] = 1,
    ACTIONS(922), 1,
      sym__eol,
  [3430] = 1,
    ACTIONS(924), 1,
      sym_account,
  [3434] = 1,
    ACTIONS(926), 1,
      sym__eol,
  [3438] = 1,
    ACTIONS(928), 1,
      sym_string,
  [3442] = 1,
    ACTIONS(930), 1,
      sym__eol,
  [3446] = 1,
    ACTIONS(932), 1,
      sym__eol,
  [3450] = 1,
    ACTIONS(934), 1,
      sym__eol,
  [3454] = 1,
    ACTIONS(936), 1,
      sym__eol,
  [3458] = 1,
    ACTIONS(938), 1,
      sym__eol,
  [3462] = 1,
    ACTIONS(940), 1,
      sym__eol,
  [3466] = 1,
    ACTIONS(942), 1,
      sym_currency,
  [3470] = 1,
    ACTIONS(944), 1,
      aux_sym__skipped_lines_token1,
  [3474] = 1,
    ACTIONS(946), 1,
      sym_currency,
  [3478] = 1,
    ACTIONS(948), 1,
      sym__eol,
  [3482] = 1,
    ACTIONS(950), 1,
      sym__eol,
  [3486] = 1,
    ACTIONS(952), 1,
      sym__eol,
  [3490] = 1,
    ACTIONS(954), 1,
      sym_number,
  [3494] = 1,
    ACTIONS(956), 1,
      sym_number,
  [3498] = 1,
    ACTIONS(958), 1,
      sym__eol,
  [3502] = 1,
    ACTIONS(960), 1,
      sym__eol,
  [3506] = 1,
    ACTIONS(962), 1,
      sym__eol,
  [3510] = 1,
    ACTIONS(964), 1,
      sym__eol,
  [3514] = 1,
    ACTIONS(966), 1,
      sym__eol,
  [3518] = 1,
    ACTIONS(968), 1,
      sym_number,
  [3522] = 1,
    ACTIONS(970), 1,
      sym_number,
  [3526] = 1,
    ACTIONS(972), 1,
      sym__rparen,
  [3530] = 1,
    ACTIONS(974), 1,
      sym__eol,
  [3534] = 1,
    ACTIONS(976), 1,
      sym_string,
  [3538] = 1,
    ACTIONS(978), 1,
      sym__eol,
  [3542] = 1,
    ACTIONS(333), 1,
      sym__eol,
  [3546] = 1,
    ACTIONS(980), 1,
      sym__eol,
  [3550] = 1,
    ACTIONS(982), 1,
      sym_tag,
  [3554] = 1,
    ACTIONS(984), 1,
      sym_tag,
  [3558] = 1,
    ACTIONS(986), 1,
      sym__eol,
  [3562] = 1,
    ACTIONS(988), 1,
      sym__eol,
  [3566] = 1,
    ACTIONS(990), 1,
      sym_currency,
  [3570] = 1,
    ACTIONS(992), 1,
      sym__eol,
  [3574] = 1,
    ACTIONS(830), 1,
      sym__eol,
  [3578] = 1,
    ACTIONS(994), 1,
      sym_number,
  [3582] = 1,
    ACTIONS(996), 1,
      sym__rparen,
  [3586] = 1,
    ACTIONS(998), 1,
      sym_number,
  [3590] = 1,
    ACTIONS(1000), 1,
      sym_number,
  [3594] = 1,
    ACTIONS(1002), 1,
      sym_number,
  [3598] = 1,
    ACTIONS(1004), 1,
      sym__rparen,
  [3602] = 1,
    ACTIONS(1006), 1,
      sym_number,
  [3606] = 1,
    ACTIONS(1008), 1,
      sym_number,
  [3610] = 1,
    ACTIONS(1010), 1,
      sym_number,
  [3614] = 1,
    ACTIONS(1012), 1,
      sym_number,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 64,
  [SMALL_STATE(4)] = 128,
  [SMALL_STATE(5)] = 181,
  [SMALL_STATE(6)] = 234,
  [SMALL_STATE(7)] = 275,
  [SMALL_STATE(8)] = 312,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 393,
  [SMALL_STATE(11)] = 433,
  [SMALL_STATE(12)] = 468,
  [SMALL_STATE(13)] = 501,
  [SMALL_STATE(14)] = 535,
  [SMALL_STATE(15)] = 551,
  [SMALL_STATE(16)] = 567,
  [SMALL_STATE(17)] = 583,
  [SMALL_STATE(18)] = 599,
  [SMALL_STATE(19)] = 615,
  [SMALL_STATE(20)] = 631,
  [SMALL_STATE(21)] = 647,
  [SMALL_STATE(22)] = 663,
  [SMALL_STATE(23)] = 679,
  [SMALL_STATE(24)] = 695,
  [SMALL_STATE(25)] = 711,
  [SMALL_STATE(26)] = 727,
  [SMALL_STATE(27)] = 743,
  [SMALL_STATE(28)] = 759,
  [SMALL_STATE(29)] = 775,
  [SMALL_STATE(30)] = 791,
  [SMALL_STATE(31)] = 807,
  [SMALL_STATE(32)] = 823,
  [SMALL_STATE(33)] = 839,
  [SMALL_STATE(34)] = 855,
  [SMALL_STATE(35)] = 871,
  [SMALL_STATE(36)] = 887,
  [SMALL_STATE(37)] = 903,
  [SMALL_STATE(38)] = 919,
  [SMALL_STATE(39)] = 935,
  [SMALL_STATE(40)] = 951,
  [SMALL_STATE(41)] = 967,
  [SMALL_STATE(42)] = 983,
  [SMALL_STATE(43)] = 999,
  [SMALL_STATE(44)] = 1021,
  [SMALL_STATE(45)] = 1037,
  [SMALL_STATE(46)] = 1053,
  [SMALL_STATE(47)] = 1069,
  [SMALL_STATE(48)] = 1085,
  [SMALL_STATE(49)] = 1101,
  [SMALL_STATE(50)] = 1117,
  [SMALL_STATE(51)] = 1133,
  [SMALL_STATE(52)] = 1149,
  [SMALL_STATE(53)] = 1165,
  [SMALL_STATE(54)] = 1181,
  [SMALL_STATE(55)] = 1197,
  [SMALL_STATE(56)] = 1213,
  [SMALL_STATE(57)] = 1229,
  [SMALL_STATE(58)] = 1245,
  [SMALL_STATE(59)] = 1261,
  [SMALL_STATE(60)] = 1277,
  [SMALL_STATE(61)] = 1293,
  [SMALL_STATE(62)] = 1309,
  [SMALL_STATE(63)] = 1325,
  [SMALL_STATE(64)] = 1341,
  [SMALL_STATE(65)] = 1374,
  [SMALL_STATE(66)] = 1411,
  [SMALL_STATE(67)] = 1445,
  [SMALL_STATE(68)] = 1461,
  [SMALL_STATE(69)] = 1495,
  [SMALL_STATE(70)] = 1511,
  [SMALL_STATE(71)] = 1529,
  [SMALL_STATE(72)] = 1545,
  [SMALL_STATE(73)] = 1565,
  [SMALL_STATE(74)] = 1581,
  [SMALL_STATE(75)] = 1596,
  [SMALL_STATE(76)] = 1617,
  [SMALL_STATE(77)] = 1644,
  [SMALL_STATE(78)] = 1670,
  [SMALL_STATE(79)] = 1696,
  [SMALL_STATE(80)] = 1716,
  [SMALL_STATE(81)] = 1736,
  [SMALL_STATE(82)] = 1756,
  [SMALL_STATE(83)] = 1776,
  [SMALL_STATE(84)] = 1801,
  [SMALL_STATE(85)] = 1818,
  [SMALL_STATE(86)] = 1841,
  [SMALL_STATE(87)] = 1866,
  [SMALL_STATE(88)] = 1891,
  [SMALL_STATE(89)] = 1916,
  [SMALL_STATE(90)] = 1928,
  [SMALL_STATE(91)] = 1940,
  [SMALL_STATE(92)] = 1952,
  [SMALL_STATE(93)] = 1972,
  [SMALL_STATE(94)] = 1984,
  [SMALL_STATE(95)] = 2000,
  [SMALL_STATE(96)] = 2012,
  [SMALL_STATE(97)] = 2027,
  [SMALL_STATE(98)] = 2042,
  [SMALL_STATE(99)] = 2059,
  [SMALL_STATE(100)] = 2076,
  [SMALL_STATE(101)] = 2091,
  [SMALL_STATE(102)] = 2106,
  [SMALL_STATE(103)] = 2122,
  [SMALL_STATE(104)] = 2132,
  [SMALL_STATE(105)] = 2148,
  [SMALL_STATE(106)] = 2162,
  [SMALL_STATE(107)] = 2172,
  [SMALL_STATE(108)] = 2186,
  [SMALL_STATE(109)] = 2202,
  [SMALL_STATE(110)] = 2218,
  [SMALL_STATE(111)] = 2234,
  [SMALL_STATE(112)] = 2250,
  [SMALL_STATE(113)] = 2266,
  [SMALL_STATE(114)] = 2282,
  [SMALL_STATE(115)] = 2296,
  [SMALL_STATE(116)] = 2312,
  [SMALL_STATE(117)] = 2322,
  [SMALL_STATE(118)] = 2333,
  [SMALL_STATE(119)] = 2346,
  [SMALL_STATE(120)] = 2359,
  [SMALL_STATE(121)] = 2372,
  [SMALL_STATE(122)] = 2385,
  [SMALL_STATE(123)] = 2398,
  [SMALL_STATE(124)] = 2411,
  [SMALL_STATE(125)] = 2424,
  [SMALL_STATE(126)] = 2437,
  [SMALL_STATE(127)] = 2446,
  [SMALL_STATE(128)] = 2459,
  [SMALL_STATE(129)] = 2470,
  [SMALL_STATE(130)] = 2481,
  [SMALL_STATE(131)] = 2492,
  [SMALL_STATE(132)] = 2505,
  [SMALL_STATE(133)] = 2518,
  [SMALL_STATE(134)] = 2531,
  [SMALL_STATE(135)] = 2542,
  [SMALL_STATE(136)] = 2555,
  [SMALL_STATE(137)] = 2568,
  [SMALL_STATE(138)] = 2581,
  [SMALL_STATE(139)] = 2594,
  [SMALL_STATE(140)] = 2607,
  [SMALL_STATE(141)] = 2620,
  [SMALL_STATE(142)] = 2633,
  [SMALL_STATE(143)] = 2646,
  [SMALL_STATE(144)] = 2655,
  [SMALL_STATE(145)] = 2668,
  [SMALL_STATE(146)] = 2681,
  [SMALL_STATE(147)] = 2690,
  [SMALL_STATE(148)] = 2703,
  [SMALL_STATE(149)] = 2716,
  [SMALL_STATE(150)] = 2729,
  [SMALL_STATE(151)] = 2740,
  [SMALL_STATE(152)] = 2753,
  [SMALL_STATE(153)] = 2766,
  [SMALL_STATE(154)] = 2779,
  [SMALL_STATE(155)] = 2792,
  [SMALL_STATE(156)] = 2803,
  [SMALL_STATE(157)] = 2816,
  [SMALL_STATE(158)] = 2824,
  [SMALL_STATE(159)] = 2832,
  [SMALL_STATE(160)] = 2840,
  [SMALL_STATE(161)] = 2848,
  [SMALL_STATE(162)] = 2856,
  [SMALL_STATE(163)] = 2864,
  [SMALL_STATE(164)] = 2872,
  [SMALL_STATE(165)] = 2880,
  [SMALL_STATE(166)] = 2888,
  [SMALL_STATE(167)] = 2898,
  [SMALL_STATE(168)] = 2906,
  [SMALL_STATE(169)] = 2916,
  [SMALL_STATE(170)] = 2926,
  [SMALL_STATE(171)] = 2934,
  [SMALL_STATE(172)] = 2944,
  [SMALL_STATE(173)] = 2954,
  [SMALL_STATE(174)] = 2962,
  [SMALL_STATE(175)] = 2970,
  [SMALL_STATE(176)] = 2976,
  [SMALL_STATE(177)] = 2983,
  [SMALL_STATE(178)] = 2990,
  [SMALL_STATE(179)] = 2997,
  [SMALL_STATE(180)] = 3004,
  [SMALL_STATE(181)] = 3011,
  [SMALL_STATE(182)] = 3018,
  [SMALL_STATE(183)] = 3025,
  [SMALL_STATE(184)] = 3032,
  [SMALL_STATE(185)] = 3039,
  [SMALL_STATE(186)] = 3046,
  [SMALL_STATE(187)] = 3053,
  [SMALL_STATE(188)] = 3060,
  [SMALL_STATE(189)] = 3067,
  [SMALL_STATE(190)] = 3074,
  [SMALL_STATE(191)] = 3081,
  [SMALL_STATE(192)] = 3088,
  [SMALL_STATE(193)] = 3095,
  [SMALL_STATE(194)] = 3102,
  [SMALL_STATE(195)] = 3109,
  [SMALL_STATE(196)] = 3116,
  [SMALL_STATE(197)] = 3123,
  [SMALL_STATE(198)] = 3130,
  [SMALL_STATE(199)] = 3137,
  [SMALL_STATE(200)] = 3144,
  [SMALL_STATE(201)] = 3151,
  [SMALL_STATE(202)] = 3158,
  [SMALL_STATE(203)] = 3165,
  [SMALL_STATE(204)] = 3172,
  [SMALL_STATE(205)] = 3179,
  [SMALL_STATE(206)] = 3186,
  [SMALL_STATE(207)] = 3193,
  [SMALL_STATE(208)] = 3200,
  [SMALL_STATE(209)] = 3207,
  [SMALL_STATE(210)] = 3214,
  [SMALL_STATE(211)] = 3221,
  [SMALL_STATE(212)] = 3228,
  [SMALL_STATE(213)] = 3235,
  [SMALL_STATE(214)] = 3242,
  [SMALL_STATE(215)] = 3249,
  [SMALL_STATE(216)] = 3256,
  [SMALL_STATE(217)] = 3261,
  [SMALL_STATE(218)] = 3268,
  [SMALL_STATE(219)] = 3275,
  [SMALL_STATE(220)] = 3282,
  [SMALL_STATE(221)] = 3286,
  [SMALL_STATE(222)] = 3290,
  [SMALL_STATE(223)] = 3294,
  [SMALL_STATE(224)] = 3298,
  [SMALL_STATE(225)] = 3302,
  [SMALL_STATE(226)] = 3306,
  [SMALL_STATE(227)] = 3310,
  [SMALL_STATE(228)] = 3314,
  [SMALL_STATE(229)] = 3318,
  [SMALL_STATE(230)] = 3322,
  [SMALL_STATE(231)] = 3326,
  [SMALL_STATE(232)] = 3330,
  [SMALL_STATE(233)] = 3334,
  [SMALL_STATE(234)] = 3338,
  [SMALL_STATE(235)] = 3342,
  [SMALL_STATE(236)] = 3346,
  [SMALL_STATE(237)] = 3350,
  [SMALL_STATE(238)] = 3354,
  [SMALL_STATE(239)] = 3358,
  [SMALL_STATE(240)] = 3362,
  [SMALL_STATE(241)] = 3366,
  [SMALL_STATE(242)] = 3370,
  [SMALL_STATE(243)] = 3374,
  [SMALL_STATE(244)] = 3378,
  [SMALL_STATE(245)] = 3382,
  [SMALL_STATE(246)] = 3386,
  [SMALL_STATE(247)] = 3390,
  [SMALL_STATE(248)] = 3394,
  [SMALL_STATE(249)] = 3398,
  [SMALL_STATE(250)] = 3402,
  [SMALL_STATE(251)] = 3406,
  [SMALL_STATE(252)] = 3410,
  [SMALL_STATE(253)] = 3414,
  [SMALL_STATE(254)] = 3418,
  [SMALL_STATE(255)] = 3422,
  [SMALL_STATE(256)] = 3426,
  [SMALL_STATE(257)] = 3430,
  [SMALL_STATE(258)] = 3434,
  [SMALL_STATE(259)] = 3438,
  [SMALL_STATE(260)] = 3442,
  [SMALL_STATE(261)] = 3446,
  [SMALL_STATE(262)] = 3450,
  [SMALL_STATE(263)] = 3454,
  [SMALL_STATE(264)] = 3458,
  [SMALL_STATE(265)] = 3462,
  [SMALL_STATE(266)] = 3466,
  [SMALL_STATE(267)] = 3470,
  [SMALL_STATE(268)] = 3474,
  [SMALL_STATE(269)] = 3478,
  [SMALL_STATE(270)] = 3482,
  [SMALL_STATE(271)] = 3486,
  [SMALL_STATE(272)] = 3490,
  [SMALL_STATE(273)] = 3494,
  [SMALL_STATE(274)] = 3498,
  [SMALL_STATE(275)] = 3502,
  [SMALL_STATE(276)] = 3506,
  [SMALL_STATE(277)] = 3510,
  [SMALL_STATE(278)] = 3514,
  [SMALL_STATE(279)] = 3518,
  [SMALL_STATE(280)] = 3522,
  [SMALL_STATE(281)] = 3526,
  [SMALL_STATE(282)] = 3530,
  [SMALL_STATE(283)] = 3534,
  [SMALL_STATE(284)] = 3538,
  [SMALL_STATE(285)] = 3542,
  [SMALL_STATE(286)] = 3546,
  [SMALL_STATE(287)] = 3550,
  [SMALL_STATE(288)] = 3554,
  [SMALL_STATE(289)] = 3558,
  [SMALL_STATE(290)] = 3562,
  [SMALL_STATE(291)] = 3566,
  [SMALL_STATE(292)] = 3570,
  [SMALL_STATE(293)] = 3574,
  [SMALL_STATE(294)] = 3578,
  [SMALL_STATE(295)] = 3582,
  [SMALL_STATE(296)] = 3586,
  [SMALL_STATE(297)] = 3590,
  [SMALL_STATE(298)] = 3594,
  [SMALL_STATE(299)] = 3598,
  [SMALL_STATE(300)] = 3602,
  [SMALL_STATE(301)] = 3606,
  [SMALL_STATE(302)] = 3610,
  [SMALL_STATE(303)] = 3614,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(267),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(289),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(65),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(288),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(287),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(202),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(201),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(283),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(259),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(253),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 6), SHIFT(218),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 1), SHIFT(218),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(294),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(302),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(11),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(11),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(43),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 17),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 71),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 11),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 12),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 13),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 14),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 15),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 53),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 52),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 51),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 50),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 49),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 48),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 16),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 47),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 46),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 45),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 44),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 43),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 3),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 72),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 5),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_expr, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_expr, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 18),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 19),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 41),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 20),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 15),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 40),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 39),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 21),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 22),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 23),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 24),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 25),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 73),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [297] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 8), SHIFT(218),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 8),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [308] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 27), SHIFT(218),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 27),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 1),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [349] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 35), SHIFT(218),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 35),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 26), SHIFT(218),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 26),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 57), SHIFT(218),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 57),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 7), SHIFT(218),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(268),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_open_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(100),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 1),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 2),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 36), SHIFT(218),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 36),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(216),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(105),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 63),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 63),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_tags_and_links, 1), SHIFT(216),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_and_links, 1),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 67), SHIFT(218),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 67),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [458] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 58), SHIFT(218),
  [461] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 58),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [465] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 33), SHIFT(218),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 33),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 9), SHIFT(218),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 9),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55), SHIFT(218),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 77), SHIFT(218),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 77),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 1, .production_id = 31),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 1, .production_id = 31),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 28), SHIFT(218),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 28),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 58), SHIFT(218),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 58),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 33), SHIFT(218),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 33),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 2),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 2),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [532] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 28), SHIFT(218),
  [535] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 28),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 27), SHIFT(218),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 27),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 26), SHIFT(218),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 26),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 1), SHIFT(218),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postings, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [562] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [564] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 35), SHIFT(218),
  [567] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 35),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [571] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 9), SHIFT(218),
  [574] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 9),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 36), SHIFT(218),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 36),
  [581] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 8), SHIFT(218),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 8),
  [586] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 7), SHIFT(218),
  [589] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 7),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [595] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [597] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 55), SHIFT(218),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 55),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 77), SHIFT(218),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 77),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 6), SHIFT(218),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 6),
  [620] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 57), SHIFT(218),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 57),
  [627] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [629] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 67), SHIFT(218),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 67),
  [634] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [638] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(172),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [647] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(13),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 1, .production_id = 30),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 1, .production_id = 30),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 2, .production_id = 62),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 2, .production_id = 62),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 3, .production_id = 82),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 3, .production_id = 82),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 3, .production_id = 81),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 3, .production_id = 81),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 2, .production_id = 61),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 2, .production_id = 61),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_value, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_value, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [676] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_metadata, 1), SHIFT(218),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 1),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 4, .production_id = 91),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 4, .production_id = 91),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(218),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 2),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_with_tolerance, 4),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_with_tolerance, 4),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 93),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 93),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 76),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 76),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 87),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 87),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 88),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 88),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 29),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 29),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 75),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 75),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 89),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 89),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 74),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 74),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 90),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 90),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 32),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 32),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 70),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 70),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 83),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 83),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 69),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 69),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 34),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 34),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 92),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 92),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_booking, 1),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 68),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 68),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 37),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 37),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 86),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 86),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 38),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 38),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 78),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 78),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 66),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 66),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 10),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 10),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 79),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 79),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 54),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 54),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 56),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 56),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 85),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 85),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 59),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 59),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_value, 1),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 60),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 60),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 80),
  [840] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 80),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 84),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 84),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 64),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 64),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 65),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 65),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [916] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [992] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
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
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
