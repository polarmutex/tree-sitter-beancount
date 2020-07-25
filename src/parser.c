#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 306
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
  sym_entry = 103,
  sym_option = 104,
  sym_include = 105,
  sym_plugin = 106,
  sym_directive = 107,
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
  [sym_entry] = "entry",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym_directive] = "directive",
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
  [sym_entry] = sym_entry,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym_directive] = sym_directive,
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
  [sym_entry] = {
    .visible = true,
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
  [sym_directive] = {
    .visible = true,
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
  [43] = {.lex_state = 171},
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
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 171},
  [62] = {.lex_state = 171},
  [63] = {.lex_state = 171},
  [64] = {.lex_state = 171},
  [65] = {.lex_state = 171},
  [66] = {.lex_state = 171},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 5},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 49},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 1},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 1},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 1},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 48},
  [176] = {.lex_state = 1},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 4},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 1},
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
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 1},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 171},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 171},
  [226] = {.lex_state = 171},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 171},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 3},
  [232] = {.lex_state = 171},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 171},
  [235] = {.lex_state = 171},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 3},
  [241] = {.lex_state = 171},
  [242] = {.lex_state = 171},
  [243] = {.lex_state = 171},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 171},
  [246] = {.lex_state = 1},
  [247] = {.lex_state = 3},
  [248] = {.lex_state = 171},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 3},
  [252] = {.lex_state = 171},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 171},
  [257] = {.lex_state = 171},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 3},
  [260] = {.lex_state = 171},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 171},
  [263] = {.lex_state = 171},
  [264] = {.lex_state = 171},
  [265] = {.lex_state = 171},
  [266] = {.lex_state = 171},
  [267] = {.lex_state = 171},
  [268] = {.lex_state = 1},
  [269] = {.lex_state = 1},
  [270] = {.lex_state = 197},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 171},
  [273] = {.lex_state = 171},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 171},
  [276] = {.lex_state = 1},
  [277] = {.lex_state = 171},
  [278] = {.lex_state = 171},
  [279] = {.lex_state = 171},
  [280] = {.lex_state = 171},
  [281] = {.lex_state = 171},
  [282] = {.lex_state = 1},
  [283] = {.lex_state = 1},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 171},
  [287] = {.lex_state = 171},
  [288] = {.lex_state = 171},
  [289] = {.lex_state = 1},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 171},
  [292] = {.lex_state = 171},
  [293] = {.lex_state = 171},
  [294] = {.lex_state = 1},
  [295] = {.lex_state = 171},
  [296] = {.lex_state = 1},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 1},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 1},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 1},
  [305] = {.lex_state = 1},
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
    [sym_file] = STATE(254),
    [sym__skipped_lines] = STATE(2),
    [sym_transaction] = STATE(18),
    [sym_balance] = STATE(18),
    [sym_close] = STATE(18),
    [sym_commodity] = STATE(18),
    [sym_custom] = STATE(18),
    [sym_document] = STATE(18),
    [sym_event] = STATE(18),
    [sym_note] = STATE(18),
    [sym_open] = STATE(18),
    [sym_pad] = STATE(18),
    [sym_price] = STATE(18),
    [sym_query] = STATE(18),
    [sym_pushtag] = STATE(19),
    [sym_poptag] = STATE(19),
    [sym_pushmeta] = STATE(19),
    [sym_popmeta] = STATE(19),
    [sym_entry] = STATE(2),
    [sym_option] = STATE(19),
    [sym_include] = STATE(19),
    [sym_plugin] = STATE(19),
    [sym_directive] = STATE(2),
    [sym__declarations] = STATE(2),
    [aux_sym_file_repeat1] = STATE(2),
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
  [0] = 15,
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym__eol,
    ACTIONS(7), 2,
      sym__colon,
      sym_flag,
    STATE(3), 5,
      sym__skipped_lines,
      sym_entry,
      sym_directive,
      sym__declarations,
      aux_sym_file_repeat1,
    STATE(19), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(18), 12,
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
  [68] = 15,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      sym__eol,
    ACTIONS(39), 1,
      sym__comment,
    ACTIONS(42), 1,
      sym_date,
    ACTIONS(45), 1,
      anon_sym_pushtag,
    ACTIONS(48), 1,
      anon_sym_poptag,
    ACTIONS(51), 1,
      anon_sym_pushmeta,
    ACTIONS(54), 1,
      anon_sym_popmeta,
    ACTIONS(57), 1,
      anon_sym_option,
    ACTIONS(60), 1,
      anon_sym_include,
    ACTIONS(63), 1,
      anon_sym_plugin,
    ACTIONS(36), 2,
      sym__colon,
      sym_flag,
    STATE(3), 5,
      sym__skipped_lines,
      sym_entry,
      sym_directive,
      sym__declarations,
      aux_sym_file_repeat1,
    STATE(19), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(18), 12,
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
  [136] = 16,
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
    STATE(72), 1,
      sym_incomplete_amount,
    STATE(88), 1,
      sym_cost_spec,
    STATE(117), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(180), 1,
      sym_metadata,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(294), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [189] = 16,
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
    STATE(70), 1,
      sym_incomplete_amount,
    STATE(87), 1,
      sym_cost_spec,
    STATE(114), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(219), 1,
      sym_metadata,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(294), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [242] = 11,
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
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(277), 1,
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
    STATE(74), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [283] = 9,
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
    STATE(221), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(116), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(172), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [320] = 11,
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
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(280), 1,
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
    STATE(74), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [361] = 11,
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
    STATE(142), 1,
      sym_cost_comp,
    STATE(171), 1,
      sym_compound_amout,
    STATE(257), 1,
      sym_cost_comp_list,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    ACTIONS(132), 3,
      sym__asterisk,
      sym_date,
      sym_string,
    STATE(109), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [401] = 11,
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
    STATE(142), 1,
      sym_cost_comp,
    STATE(171), 1,
      sym_compound_amout,
    STATE(258), 1,
      sym_cost_comp_list,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    ACTIONS(132), 3,
      sym__asterisk,
      sym_date,
      sym_string,
    STATE(109), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [441] = 9,
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
    STATE(74), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [476] = 8,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(136), 1,
      sym_number,
    STATE(245), 1,
      sym_amount,
    STATE(295), 1,
      sym_key_value_value,
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
    STATE(184), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [509] = 9,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(130), 1,
      sym__hash,
    ACTIONS(134), 1,
      sym_currency,
    ACTIONS(136), 1,
      sym_number,
    STATE(164), 1,
      sym_cost_comp,
    STATE(171), 1,
      sym_compound_amout,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    ACTIONS(132), 3,
      sym__asterisk,
      sym_date,
      sym_string,
    STATE(109), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [543] = 1,
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
  [559] = 1,
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
  [575] = 1,
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
  [591] = 1,
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
  [607] = 1,
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
  [623] = 1,
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
  [639] = 1,
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
  [655] = 1,
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
  [671] = 1,
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
  [687] = 1,
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
  [703] = 1,
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
  [719] = 1,
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
  [735] = 1,
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
  [751] = 1,
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
  [767] = 1,
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
  [783] = 1,
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
  [799] = 1,
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
  [815] = 1,
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
  [831] = 1,
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
  [847] = 1,
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
  [863] = 1,
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
  [879] = 1,
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
  [895] = 1,
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
  [911] = 1,
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
  [927] = 1,
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
  [943] = 1,
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
  [959] = 1,
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
  [975] = 1,
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
  [991] = 1,
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
  [1007] = 1,
    ACTIONS(219), 13,
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
  [1023] = 1,
    ACTIONS(221), 13,
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
  [1039] = 1,
    ACTIONS(223), 13,
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
  [1055] = 1,
    ACTIONS(225), 13,
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
  [1071] = 1,
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
  [1087] = 1,
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
  [1103] = 1,
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
  [1119] = 1,
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
  [1135] = 1,
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
  [1151] = 1,
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
  [1167] = 1,
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
  [1183] = 1,
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
  [1199] = 1,
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
  [1215] = 1,
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
  [1231] = 1,
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
  [1247] = 1,
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
  [1263] = 4,
    ACTIONS(255), 2,
      sym__asterisk,
      sym__slash,
    ACTIONS(257), 2,
      sym__plus,
      sym__minus,
    ACTIONS(253), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(251), 5,
      sym__indent,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1285] = 1,
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
  [1301] = 1,
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
  [1317] = 1,
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
  [1333] = 1,
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
  [1349] = 1,
    ACTIONS(267), 13,
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
  [1365] = 1,
    ACTIONS(269), 13,
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
  [1381] = 12,
    ACTIONS(271), 1,
      sym_flag,
    ACTIONS(273), 1,
      anon_sym_balance,
    ACTIONS(275), 1,
      anon_sym_close,
    ACTIONS(277), 1,
      anon_sym_commodity,
    ACTIONS(279), 1,
      anon_sym_custom,
    ACTIONS(281), 1,
      anon_sym_document,
    ACTIONS(283), 1,
      anon_sym_event,
    ACTIONS(285), 1,
      anon_sym_note,
    ACTIONS(287), 1,
      anon_sym_open,
    ACTIONS(289), 1,
      anon_sym_pad,
    ACTIONS(291), 1,
      anon_sym_price,
    ACTIONS(293), 1,
      anon_sym_query,
  [1418] = 10,
    ACTIONS(295), 1,
      sym__indent,
    ACTIONS(299), 1,
      sym_string,
    STATE(77), 1,
      sym_txn_strings,
    STATE(102), 1,
      sym_tags_and_links,
    STATE(108), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(141), 1,
      sym_metadata,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(225), 1,
      sym_postings,
    ACTIONS(297), 2,
      sym_tag,
      sym_link,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1451] = 4,
    ACTIONS(253), 1,
      sym__rcurl,
    ACTIONS(301), 2,
      sym__asterisk,
      sym__slash,
    ACTIONS(303), 2,
      sym__plus,
      sym__minus,
    ACTIONS(251), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [1471] = 2,
    ACTIONS(307), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(305), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1487] = 11,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(75), 1,
      sym__lcurllcurl,
    ACTIONS(77), 1,
      sym__lcurl,
    ACTIONS(309), 1,
      sym__indent,
    ACTIONS(312), 1,
      sym__eol,
    ACTIONS(314), 1,
      sym__comment,
    STATE(89), 1,
      sym_cost_spec,
    STATE(107), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(198), 1,
      sym_metadata,
  [1521] = 2,
    ACTIONS(307), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(305), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1537] = 11,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(75), 1,
      sym__lcurllcurl,
    ACTIONS(77), 1,
      sym__lcurl,
    ACTIONS(316), 1,
      sym__indent,
    ACTIONS(319), 1,
      sym__eol,
    ACTIONS(321), 1,
      sym__comment,
    STATE(86), 1,
      sym_cost_spec,
    STATE(105), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(214), 1,
      sym_metadata,
  [1571] = 2,
    ACTIONS(325), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(323), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1587] = 3,
    ACTIONS(331), 1,
      sym_currency,
    ACTIONS(329), 3,
      sym__eol,
      sym_bool,
      sym_number,
    ACTIONS(327), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1605] = 2,
    ACTIONS(335), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(333), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1621] = 2,
    ACTIONS(339), 3,
      sym__eol,
      sym_bool,
      sym_number,
    ACTIONS(337), 7,
      sym__indent,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1636] = 8,
    ACTIONS(295), 1,
      sym__indent,
    STATE(98), 1,
      sym_tags_and_links,
    STATE(108), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(129), 1,
      sym_metadata,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(264), 1,
      sym_postings,
    ACTIONS(297), 2,
      sym_tag,
      sym_link,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1663] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(150), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(204), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1684] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(341), 1,
      sym_currency,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(236), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1704] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    STATE(177), 1,
      sym_incomplete_amount,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(294), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1724] = 8,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(343), 1,
      sym__eol,
    ACTIONS(345), 1,
      sym_currency,
    ACTIONS(347), 1,
      sym_string,
    STATE(131), 1,
      sym_opt_booking,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(267), 1,
      sym_metadata,
    STATE(100), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [1750] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    STATE(121), 1,
      sym_amount,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(269), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1770] = 8,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(345), 1,
      sym_currency,
    ACTIONS(347), 1,
      sym_string,
    ACTIONS(349), 1,
      sym__eol,
    STATE(133), 1,
      sym_opt_booking,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(288), 1,
      sym_metadata,
    STATE(81), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [1796] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(351), 1,
      sym_currency,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(268), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1816] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(79), 2,
      sym__plus,
      sym__minus,
    STATE(246), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1833] = 8,
    ACTIONS(71), 1,
      sym__atat,
    ACTIONS(73), 1,
      sym__at,
    ACTIONS(353), 1,
      sym__indent,
    ACTIONS(356), 1,
      sym__eol,
    ACTIONS(358), 1,
      sym__comment,
    STATE(116), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(182), 1,
      sym_metadata,
  [1858] = 8,
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
    STATE(113), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(194), 1,
      sym_metadata,
  [1883] = 8,
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
    STATE(104), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(213), 1,
      sym_metadata,
  [1908] = 8,
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
    STATE(112), 1,
      sym_price_annotation,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(201), 1,
      sym_metadata,
  [1933] = 7,
    ACTIONS(381), 1,
      sym__indent,
    ACTIONS(383), 1,
      sym__eol,
    STATE(108), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(156), 1,
      sym_tags_and_links,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(275), 1,
      sym_metadata,
    ACTIONS(297), 2,
      sym_tag,
      sym_link,
  [1956] = 2,
    ACTIONS(387), 3,
      sym__eol,
      sym__at,
      sym__lcurl,
    ACTIONS(385), 4,
      sym__indent,
      sym__atat,
      sym__lcurllcurl,
      sym__comment,
  [1968] = 2,
    ACTIONS(325), 1,
      sym__rcurl,
    ACTIONS(323), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [1980] = 2,
    ACTIONS(307), 1,
      sym__rcurl,
    ACTIONS(305), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [1992] = 2,
    ACTIONS(307), 1,
      sym__rcurl,
    ACTIONS(305), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [2004] = 6,
    ACTIONS(389), 1,
      sym__comment,
    ACTIONS(391), 1,
      sym_flag,
    ACTIONS(395), 1,
      sym_key,
    ACTIONS(397), 1,
      sym_account,
    STATE(179), 1,
      sym_key_value,
    ACTIONS(393), 2,
      sym_tag,
      sym_link,
  [2024] = 2,
    ACTIONS(335), 1,
      sym__rcurl,
    ACTIONS(333), 6,
      sym__eol,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [2036] = 4,
    ACTIONS(253), 1,
      sym__eol,
    ACTIONS(251), 2,
      sym__indent,
      sym_currency,
    ACTIONS(399), 2,
      sym__asterisk,
      sym__slash,
    ACTIONS(401), 2,
      sym__plus,
      sym__minus,
  [2052] = 5,
    ACTIONS(403), 1,
      sym__indent,
    STATE(136), 1,
      sym_metadata,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(292), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2069] = 4,
    ACTIONS(407), 1,
      sym__eol,
    ACTIONS(409), 1,
      sym__comma,
    STATE(99), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(405), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2084] = 4,
    ACTIONS(414), 1,
      sym__eol,
    ACTIONS(416), 1,
      sym_currency,
    ACTIONS(412), 2,
      sym__indent,
      sym_string,
    STATE(100), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [2099] = 4,
    ACTIONS(421), 1,
      sym__eol,
    ACTIONS(423), 1,
      sym__comma,
    STATE(103), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(419), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2114] = 5,
    ACTIONS(403), 1,
      sym__indent,
    STATE(134), 1,
      sym_metadata,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(266), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2131] = 4,
    ACTIONS(423), 1,
      sym__comma,
    ACTIONS(427), 1,
      sym__eol,
    STATE(99), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(425), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2146] = 5,
    ACTIONS(429), 1,
      sym__indent,
    ACTIONS(432), 1,
      sym__eol,
    ACTIONS(434), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(183), 1,
      sym_metadata,
  [2162] = 5,
    ACTIONS(436), 1,
      sym__indent,
    ACTIONS(439), 1,
      sym__eol,
    ACTIONS(441), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(185), 1,
      sym_metadata,
  [2178] = 5,
    ACTIONS(389), 1,
      sym__comment,
    ACTIONS(391), 1,
      sym_flag,
    ACTIONS(395), 1,
      sym_key,
    ACTIONS(397), 1,
      sym_account,
    STATE(179), 1,
      sym_key_value,
  [2194] = 5,
    ACTIONS(443), 1,
      sym__indent,
    ACTIONS(446), 1,
      sym__eol,
    ACTIONS(448), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(196), 1,
      sym_metadata,
  [2210] = 4,
    ACTIONS(450), 1,
      sym__indent,
    ACTIONS(453), 1,
      sym__eol,
    STATE(115), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(455), 2,
      sym_tag,
      sym_link,
  [2224] = 4,
    ACTIONS(459), 1,
      sym__rcurl,
    ACTIONS(461), 1,
      sym__hash,
    ACTIONS(463), 1,
      sym_currency,
    ACTIONS(457), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2238] = 2,
    ACTIONS(467), 2,
      sym__eol,
      sym__at,
    ACTIONS(465), 3,
      sym__indent,
      sym__atat,
      sym__comment,
  [2248] = 2,
    ACTIONS(407), 1,
      sym__eol,
    ACTIONS(405), 4,
      sym__indent,
      sym__comma,
      sym_currency,
      sym_string,
  [2258] = 5,
    ACTIONS(469), 1,
      sym__indent,
    ACTIONS(472), 1,
      sym__eol,
    ACTIONS(474), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(199), 1,
      sym_metadata,
  [2274] = 5,
    ACTIONS(476), 1,
      sym__indent,
    ACTIONS(479), 1,
      sym__eol,
    ACTIONS(481), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(187), 1,
      sym_metadata,
  [2290] = 5,
    ACTIONS(483), 1,
      sym__indent,
    ACTIONS(486), 1,
      sym__eol,
    ACTIONS(488), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(200), 1,
      sym_metadata,
  [2306] = 4,
    ACTIONS(490), 1,
      sym__indent,
    ACTIONS(493), 1,
      sym__eol,
    STATE(115), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(495), 2,
      sym_tag,
      sym_link,
  [2320] = 5,
    ACTIONS(498), 1,
      sym__indent,
    ACTIONS(501), 1,
      sym__eol,
    ACTIONS(503), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(207), 1,
      sym_metadata,
  [2336] = 5,
    ACTIONS(505), 1,
      sym__indent,
    ACTIONS(508), 1,
      sym__eol,
    ACTIONS(510), 1,
      sym__comment,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(216), 1,
      sym_metadata,
  [2352] = 2,
    ACTIONS(514), 2,
      sym__eol,
      sym__at,
    ACTIONS(512), 3,
      sym__indent,
      sym__atat,
      sym__comment,
  [2362] = 4,
    ACTIONS(516), 1,
      sym__indent,
    ACTIONS(519), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(181), 1,
      sym_metadata,
  [2375] = 4,
    ACTIONS(521), 1,
      sym__indent,
    ACTIONS(524), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(205), 1,
      sym_metadata,
  [2388] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(526), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(263), 1,
      sym_metadata,
  [2401] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(528), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(260), 1,
      sym_metadata,
  [2414] = 4,
    ACTIONS(530), 1,
      sym__indent,
    ACTIONS(533), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(211), 1,
      sym_metadata,
  [2427] = 4,
    ACTIONS(535), 1,
      sym__indent,
    ACTIONS(538), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(192), 1,
      sym_metadata,
  [2440] = 4,
    ACTIONS(540), 1,
      sym__indent,
    ACTIONS(543), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(206), 1,
      sym_metadata,
  [2453] = 4,
    ACTIONS(545), 1,
      sym__indent,
    ACTIONS(548), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(209), 1,
      sym_metadata,
  [2466] = 4,
    ACTIONS(550), 1,
      sym__rcurlrcurl,
    ACTIONS(552), 1,
      sym__rcurl,
    ACTIONS(554), 1,
      sym__comma,
    STATE(138), 1,
      aux_sym_cost_comp_list_repeat1,
  [2479] = 4,
    ACTIONS(556), 1,
      sym__indent,
    ACTIONS(559), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(190), 1,
      sym_metadata,
  [2492] = 3,
    ACTIONS(561), 1,
      sym__indent,
    STATE(293), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2503] = 3,
    ACTIONS(563), 1,
      sym__indent,
    ACTIONS(566), 1,
      sym__eol,
    STATE(130), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2514] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(568), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(243), 1,
      sym_metadata,
  [2527] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(570), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(265), 1,
      sym_metadata,
  [2540] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(572), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(222), 1,
      sym_metadata,
  [2553] = 3,
    ACTIONS(561), 1,
      sym__indent,
    STATE(286), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2564] = 2,
    ACTIONS(493), 1,
      sym__eol,
    ACTIONS(574), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2573] = 3,
    ACTIONS(561), 1,
      sym__indent,
    STATE(248), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2584] = 4,
    ACTIONS(576), 1,
      sym__indent,
    ACTIONS(579), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(178), 1,
      sym_metadata,
  [2597] = 4,
    ACTIONS(581), 1,
      sym__rcurlrcurl,
    ACTIONS(583), 1,
      sym__rcurl,
    ACTIONS(585), 1,
      sym__comma,
    STATE(138), 1,
      aux_sym_cost_comp_list_repeat1,
  [2610] = 4,
    ACTIONS(588), 1,
      sym__indent,
    ACTIONS(591), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(189), 1,
      sym_metadata,
  [2623] = 2,
    ACTIONS(595), 1,
      sym_string,
    ACTIONS(593), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2632] = 3,
    ACTIONS(561), 1,
      sym__indent,
    STATE(262), 1,
      sym_postings,
    STATE(146), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2643] = 4,
    ACTIONS(554), 1,
      sym__comma,
    ACTIONS(597), 1,
      sym__rcurlrcurl,
    ACTIONS(599), 1,
      sym__rcurl,
    STATE(127), 1,
      aux_sym_cost_comp_list_repeat1,
  [2656] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(601), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(272), 1,
      sym_metadata,
  [2669] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(603), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(273), 1,
      sym_metadata,
  [2682] = 2,
    ACTIONS(607), 1,
      sym__eol,
    ACTIONS(605), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2691] = 3,
    ACTIONS(561), 1,
      sym__indent,
    ACTIONS(609), 1,
      sym__eol,
    STATE(130), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2702] = 4,
    ACTIONS(611), 1,
      sym__indent,
    ACTIONS(614), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(220), 1,
      sym_metadata,
  [2715] = 4,
    ACTIONS(616), 1,
      sym__indent,
    ACTIONS(619), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(212), 1,
      sym_metadata,
  [2728] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(621), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(278), 1,
      sym_metadata,
  [2741] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(623), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(281), 1,
      sym_metadata,
  [2754] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(625), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(279), 1,
      sym_metadata,
  [2767] = 4,
    ACTIONS(627), 1,
      sym__indent,
    ACTIONS(630), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(197), 1,
      sym_metadata,
  [2780] = 3,
    ACTIONS(395), 1,
      sym_key,
    STATE(179), 1,
      sym_key_value,
    ACTIONS(393), 2,
      sym_tag,
      sym_link,
  [2791] = 4,
    ACTIONS(632), 1,
      sym__indent,
    ACTIONS(635), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(193), 1,
      sym_metadata,
  [2804] = 4,
    ACTIONS(637), 1,
      sym__indent,
    ACTIONS(640), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(203), 1,
      sym_metadata,
  [2817] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(642), 1,
      sym__eol,
    STATE(161), 1,
      aux_sym_metadata_repeat1,
    STATE(228), 1,
      sym_metadata,
  [2830] = 4,
    ACTIONS(644), 1,
      sym__indent,
    ACTIONS(647), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(210), 1,
      sym_metadata,
  [2843] = 4,
    ACTIONS(649), 1,
      sym__indent,
    ACTIONS(652), 1,
      sym__eol,
    STATE(159), 1,
      aux_sym_metadata_repeat1,
    STATE(208), 1,
      sym_metadata,
  [2856] = 3,
    ACTIONS(654), 1,
      sym__indent,
    ACTIONS(657), 1,
      sym__eol,
    STATE(162), 1,
      aux_sym_metadata_repeat1,
  [2866] = 2,
    ACTIONS(661), 1,
      sym__rcurl,
    ACTIONS(659), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2874] = 3,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(657), 1,
      sym__eol,
    STATE(162), 1,
      aux_sym_metadata_repeat1,
  [2884] = 3,
    ACTIONS(663), 1,
      sym__indent,
    ACTIONS(666), 1,
      sym__eol,
    STATE(162), 1,
      aux_sym_metadata_repeat1,
  [2894] = 2,
    ACTIONS(670), 1,
      sym__rcurl,
    ACTIONS(668), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2902] = 2,
    ACTIONS(583), 1,
      sym__rcurl,
    ACTIONS(581), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2910] = 2,
    ACTIONS(674), 1,
      sym__rcurl,
    ACTIONS(672), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2918] = 2,
    ACTIONS(335), 1,
      sym__eol,
    ACTIONS(333), 2,
      sym__indent,
      sym_currency,
  [2926] = 2,
    ACTIONS(678), 1,
      sym__rcurl,
    ACTIONS(676), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2934] = 2,
    ACTIONS(682), 1,
      sym__rcurl,
    ACTIONS(680), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2942] = 2,
    ACTIONS(686), 1,
      sym__rcurl,
    ACTIONS(684), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2950] = 2,
    ACTIONS(325), 1,
      sym__eol,
    ACTIONS(323), 2,
      sym__indent,
      sym_currency,
  [2958] = 2,
    ACTIONS(690), 1,
      sym__rcurl,
    ACTIONS(688), 2,
      sym__rcurlrcurl,
      sym__comma,
  [2966] = 3,
    ACTIONS(692), 1,
      sym__indent,
    ACTIONS(694), 1,
      sym__eol,
    ACTIONS(696), 1,
      sym_currency,
  [2976] = 2,
    ACTIONS(307), 1,
      sym__eol,
    ACTIONS(305), 2,
      sym__indent,
      sym_currency,
  [2984] = 2,
    ACTIONS(307), 1,
      sym__eol,
    ACTIONS(305), 2,
      sym__indent,
      sym_currency,
  [2992] = 3,
    ACTIONS(389), 1,
      sym__comment,
    ACTIONS(391), 1,
      sym_flag,
    ACTIONS(397), 1,
      sym_account,
  [3002] = 1,
    ACTIONS(698), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [3008] = 2,
    ACTIONS(702), 1,
      sym__eol,
    ACTIONS(700), 2,
      sym__indent,
      sym__comment,
  [3016] = 2,
    ACTIONS(704), 1,
      sym__indent,
    ACTIONS(706), 1,
      sym__eol,
  [3023] = 2,
    ACTIONS(666), 1,
      sym__eol,
    ACTIONS(708), 1,
      sym__indent,
  [3030] = 2,
    ACTIONS(710), 1,
      sym__indent,
    ACTIONS(712), 1,
      sym__eol,
  [3037] = 2,
    ACTIONS(714), 1,
      sym__indent,
    ACTIONS(716), 1,
      sym__eol,
  [3044] = 2,
    ACTIONS(718), 1,
      sym__indent,
    ACTIONS(720), 1,
      sym__eol,
  [3051] = 2,
    ACTIONS(722), 1,
      sym__indent,
    ACTIONS(724), 1,
      sym__eol,
  [3058] = 2,
    ACTIONS(726), 1,
      sym__eol,
    ACTIONS(728), 1,
      sym_currency,
  [3065] = 2,
    ACTIONS(730), 1,
      sym__indent,
    ACTIONS(732), 1,
      sym__eol,
  [3072] = 2,
    ACTIONS(566), 1,
      sym__eol,
    ACTIONS(734), 1,
      sym__indent,
  [3079] = 2,
    ACTIONS(736), 1,
      sym__indent,
    ACTIONS(738), 1,
      sym__eol,
  [3086] = 2,
    ACTIONS(395), 1,
      sym_key,
    STATE(179), 1,
      sym_key_value,
  [3093] = 2,
    ACTIONS(740), 1,
      sym__indent,
    ACTIONS(742), 1,
      sym__eol,
  [3100] = 2,
    ACTIONS(744), 1,
      sym__indent,
    ACTIONS(746), 1,
      sym__eol,
  [3107] = 2,
    ACTIONS(748), 1,
      sym__indent,
    ACTIONS(750), 1,
      sym__eol,
  [3114] = 2,
    ACTIONS(752), 1,
      sym__indent,
    ACTIONS(754), 1,
      sym__eol,
  [3121] = 2,
    ACTIONS(756), 1,
      sym__indent,
    ACTIONS(758), 1,
      sym__eol,
  [3128] = 2,
    ACTIONS(760), 1,
      sym__indent,
    ACTIONS(762), 1,
      sym__eol,
  [3135] = 1,
    ACTIONS(393), 2,
      sym_tag,
      sym_link,
  [3140] = 2,
    ACTIONS(764), 1,
      sym__indent,
    ACTIONS(766), 1,
      sym__eol,
  [3147] = 2,
    ACTIONS(768), 1,
      sym__indent,
    ACTIONS(770), 1,
      sym__eol,
  [3154] = 2,
    ACTIONS(772), 1,
      sym__indent,
    ACTIONS(774), 1,
      sym__eol,
  [3161] = 2,
    ACTIONS(776), 1,
      sym__indent,
    ACTIONS(778), 1,
      sym__eol,
  [3168] = 2,
    ACTIONS(780), 1,
      sym__indent,
    ACTIONS(782), 1,
      sym__eol,
  [3175] = 2,
    ACTIONS(784), 1,
      sym__indent,
    ACTIONS(786), 1,
      sym__eol,
  [3182] = 2,
    ACTIONS(788), 1,
      sym_string,
    STATE(90), 1,
      sym_filename,
  [3189] = 2,
    ACTIONS(790), 1,
      sym__indent,
    ACTIONS(792), 1,
      sym__eol,
  [3196] = 2,
    ACTIONS(696), 1,
      sym_currency,
    ACTIONS(794), 1,
      sym__tilde,
  [3203] = 2,
    ACTIONS(796), 1,
      sym__indent,
    ACTIONS(798), 1,
      sym__eol,
  [3210] = 2,
    ACTIONS(800), 1,
      sym__indent,
    ACTIONS(802), 1,
      sym__eol,
  [3217] = 2,
    ACTIONS(804), 1,
      sym__indent,
    ACTIONS(806), 1,
      sym__eol,
  [3224] = 2,
    ACTIONS(808), 1,
      sym__indent,
    ACTIONS(810), 1,
      sym__eol,
  [3231] = 2,
    ACTIONS(812), 1,
      sym__indent,
    ACTIONS(814), 1,
      sym__eol,
  [3238] = 2,
    ACTIONS(816), 1,
      sym__indent,
    ACTIONS(818), 1,
      sym__eol,
  [3245] = 2,
    ACTIONS(820), 1,
      sym__indent,
    ACTIONS(822), 1,
      sym__eol,
  [3252] = 2,
    ACTIONS(824), 1,
      sym__indent,
    ACTIONS(826), 1,
      sym__eol,
  [3259] = 2,
    ACTIONS(828), 1,
      sym__indent,
    ACTIONS(830), 1,
      sym__eol,
  [3266] = 2,
    ACTIONS(832), 1,
      sym__indent,
    ACTIONS(834), 1,
      sym__eol,
  [3273] = 2,
    ACTIONS(836), 1,
      sym__indent,
    ACTIONS(838), 1,
      sym__eol,
  [3280] = 2,
    ACTIONS(840), 1,
      sym__indent,
    ACTIONS(842), 1,
      sym__eol,
  [3287] = 2,
    ACTIONS(844), 1,
      sym_key,
    STATE(234), 1,
      sym_key_value_line,
  [3294] = 2,
    ACTIONS(844), 1,
      sym_key,
    STATE(235), 1,
      sym_key_value_line,
  [3301] = 2,
    ACTIONS(846), 1,
      sym__indent,
    ACTIONS(848), 1,
      sym__eol,
  [3308] = 2,
    ACTIONS(850), 1,
      sym__indent,
    ACTIONS(852), 1,
      sym__eol,
  [3315] = 2,
    ACTIONS(854), 1,
      sym__indent,
    ACTIONS(856), 1,
      sym__eol,
  [3322] = 1,
    ACTIONS(858), 1,
      sym__eol,
  [3326] = 1,
    ACTIONS(860), 1,
      sym_currency,
  [3330] = 1,
    ACTIONS(862), 1,
      sym_account,
  [3334] = 1,
    ACTIONS(864), 1,
      sym__eol,
  [3338] = 1,
    ACTIONS(866), 1,
      sym__eol,
  [3342] = 1,
    ACTIONS(868), 1,
      sym_account,
  [3346] = 1,
    ACTIONS(870), 1,
      sym__eol,
  [3350] = 1,
    ACTIONS(872), 1,
      sym_account,
  [3354] = 1,
    ACTIONS(874), 1,
      sym_string,
  [3358] = 1,
    ACTIONS(876), 1,
      sym_account,
  [3362] = 1,
    ACTIONS(878), 1,
      sym__eol,
  [3366] = 1,
    ACTIONS(880), 1,
      sym_string,
  [3370] = 1,
    ACTIONS(882), 1,
      sym__eol,
  [3374] = 1,
    ACTIONS(884), 1,
      sym__eol,
  [3378] = 1,
    ACTIONS(886), 1,
      sym_currency,
  [3382] = 1,
    ACTIONS(888), 1,
      sym_string,
  [3386] = 1,
    ACTIONS(890), 1,
      sym__colon,
  [3390] = 1,
    ACTIONS(892), 1,
      sym_currency,
  [3394] = 1,
    ACTIONS(894), 1,
      sym_account,
  [3398] = 1,
    ACTIONS(896), 1,
      sym__eol,
  [3402] = 1,
    ACTIONS(898), 1,
      sym__eol,
  [3406] = 1,
    ACTIONS(900), 1,
      sym__eol,
  [3410] = 1,
    ACTIONS(902), 1,
      sym_string,
  [3414] = 1,
    ACTIONS(726), 1,
      sym__eol,
  [3418] = 1,
    ACTIONS(904), 1,
      sym_currency,
  [3422] = 1,
    ACTIONS(906), 1,
      sym_account,
  [3426] = 1,
    ACTIONS(908), 1,
      sym__eol,
  [3430] = 1,
    ACTIONS(910), 1,
      sym_string,
  [3434] = 1,
    ACTIONS(912), 1,
      sym_string,
  [3438] = 1,
    ACTIONS(914), 1,
      sym_account,
  [3442] = 1,
    ACTIONS(916), 1,
      sym__eol,
  [3446] = 1,
    ACTIONS(918), 1,
      sym_string,
  [3450] = 1,
    ACTIONS(920), 1,
      ts_builtin_sym_end,
  [3454] = 1,
    ACTIONS(922), 1,
      sym_string,
  [3458] = 1,
    ACTIONS(924), 1,
      sym__eol,
  [3462] = 1,
    ACTIONS(926), 1,
      sym__rcurl,
  [3466] = 1,
    ACTIONS(926), 1,
      sym__rcurlrcurl,
  [3470] = 1,
    ACTIONS(928), 1,
      sym_account,
  [3474] = 1,
    ACTIONS(930), 1,
      sym__eol,
  [3478] = 1,
    ACTIONS(932), 1,
      sym_string,
  [3482] = 1,
    ACTIONS(934), 1,
      sym__eol,
  [3486] = 1,
    ACTIONS(936), 1,
      sym__eol,
  [3490] = 1,
    ACTIONS(938), 1,
      sym__eol,
  [3494] = 1,
    ACTIONS(940), 1,
      sym__eol,
  [3498] = 1,
    ACTIONS(942), 1,
      sym__eol,
  [3502] = 1,
    ACTIONS(944), 1,
      sym__eol,
  [3506] = 1,
    ACTIONS(946), 1,
      sym_currency,
  [3510] = 1,
    ACTIONS(696), 1,
      sym_currency,
  [3514] = 1,
    ACTIONS(948), 1,
      aux_sym__skipped_lines_token1,
  [3518] = 1,
    ACTIONS(950), 1,
      sym_currency,
  [3522] = 1,
    ACTIONS(952), 1,
      sym__eol,
  [3526] = 1,
    ACTIONS(954), 1,
      sym__eol,
  [3530] = 1,
    ACTIONS(956), 1,
      sym_number,
  [3534] = 1,
    ACTIONS(958), 1,
      sym__eol,
  [3538] = 1,
    ACTIONS(960), 1,
      sym_number,
  [3542] = 1,
    ACTIONS(962), 1,
      sym__eol,
  [3546] = 1,
    ACTIONS(964), 1,
      sym__eol,
  [3550] = 1,
    ACTIONS(966), 1,
      sym__eol,
  [3554] = 1,
    ACTIONS(968), 1,
      sym__eol,
  [3558] = 1,
    ACTIONS(970), 1,
      sym__eol,
  [3562] = 1,
    ACTIONS(972), 1,
      sym_number,
  [3566] = 1,
    ACTIONS(974), 1,
      sym_number,
  [3570] = 1,
    ACTIONS(976), 1,
      sym__rparen,
  [3574] = 1,
    ACTIONS(978), 1,
      sym_string,
  [3578] = 1,
    ACTIONS(980), 1,
      sym__eol,
  [3582] = 1,
    ACTIONS(337), 1,
      sym__eol,
  [3586] = 1,
    ACTIONS(982), 1,
      sym__eol,
  [3590] = 1,
    ACTIONS(984), 1,
      sym_tag,
  [3594] = 1,
    ACTIONS(986), 1,
      sym_tag,
  [3598] = 1,
    ACTIONS(988), 1,
      sym__eol,
  [3602] = 1,
    ACTIONS(990), 1,
      sym__eol,
  [3606] = 1,
    ACTIONS(992), 1,
      sym__eol,
  [3610] = 1,
    ACTIONS(994), 1,
      sym_currency,
  [3614] = 1,
    ACTIONS(996), 1,
      sym__eol,
  [3618] = 1,
    ACTIONS(998), 1,
      sym_number,
  [3622] = 1,
    ACTIONS(1000), 1,
      sym__rparen,
  [3626] = 1,
    ACTIONS(1002), 1,
      sym_number,
  [3630] = 1,
    ACTIONS(1004), 1,
      sym_number,
  [3634] = 1,
    ACTIONS(1006), 1,
      sym_number,
  [3638] = 1,
    ACTIONS(1008), 1,
      sym__rparen,
  [3642] = 1,
    ACTIONS(1010), 1,
      sym_number,
  [3646] = 1,
    ACTIONS(1012), 1,
      sym_number,
  [3650] = 1,
    ACTIONS(1014), 1,
      sym_number,
  [3654] = 1,
    ACTIONS(1016), 1,
      sym_number,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 68,
  [SMALL_STATE(4)] = 136,
  [SMALL_STATE(5)] = 189,
  [SMALL_STATE(6)] = 242,
  [SMALL_STATE(7)] = 283,
  [SMALL_STATE(8)] = 320,
  [SMALL_STATE(9)] = 361,
  [SMALL_STATE(10)] = 401,
  [SMALL_STATE(11)] = 441,
  [SMALL_STATE(12)] = 476,
  [SMALL_STATE(13)] = 509,
  [SMALL_STATE(14)] = 543,
  [SMALL_STATE(15)] = 559,
  [SMALL_STATE(16)] = 575,
  [SMALL_STATE(17)] = 591,
  [SMALL_STATE(18)] = 607,
  [SMALL_STATE(19)] = 623,
  [SMALL_STATE(20)] = 639,
  [SMALL_STATE(21)] = 655,
  [SMALL_STATE(22)] = 671,
  [SMALL_STATE(23)] = 687,
  [SMALL_STATE(24)] = 703,
  [SMALL_STATE(25)] = 719,
  [SMALL_STATE(26)] = 735,
  [SMALL_STATE(27)] = 751,
  [SMALL_STATE(28)] = 767,
  [SMALL_STATE(29)] = 783,
  [SMALL_STATE(30)] = 799,
  [SMALL_STATE(31)] = 815,
  [SMALL_STATE(32)] = 831,
  [SMALL_STATE(33)] = 847,
  [SMALL_STATE(34)] = 863,
  [SMALL_STATE(35)] = 879,
  [SMALL_STATE(36)] = 895,
  [SMALL_STATE(37)] = 911,
  [SMALL_STATE(38)] = 927,
  [SMALL_STATE(39)] = 943,
  [SMALL_STATE(40)] = 959,
  [SMALL_STATE(41)] = 975,
  [SMALL_STATE(42)] = 991,
  [SMALL_STATE(43)] = 1007,
  [SMALL_STATE(44)] = 1023,
  [SMALL_STATE(45)] = 1039,
  [SMALL_STATE(46)] = 1055,
  [SMALL_STATE(47)] = 1071,
  [SMALL_STATE(48)] = 1087,
  [SMALL_STATE(49)] = 1103,
  [SMALL_STATE(50)] = 1119,
  [SMALL_STATE(51)] = 1135,
  [SMALL_STATE(52)] = 1151,
  [SMALL_STATE(53)] = 1167,
  [SMALL_STATE(54)] = 1183,
  [SMALL_STATE(55)] = 1199,
  [SMALL_STATE(56)] = 1215,
  [SMALL_STATE(57)] = 1231,
  [SMALL_STATE(58)] = 1247,
  [SMALL_STATE(59)] = 1263,
  [SMALL_STATE(60)] = 1285,
  [SMALL_STATE(61)] = 1301,
  [SMALL_STATE(62)] = 1317,
  [SMALL_STATE(63)] = 1333,
  [SMALL_STATE(64)] = 1349,
  [SMALL_STATE(65)] = 1365,
  [SMALL_STATE(66)] = 1381,
  [SMALL_STATE(67)] = 1418,
  [SMALL_STATE(68)] = 1451,
  [SMALL_STATE(69)] = 1471,
  [SMALL_STATE(70)] = 1487,
  [SMALL_STATE(71)] = 1521,
  [SMALL_STATE(72)] = 1537,
  [SMALL_STATE(73)] = 1571,
  [SMALL_STATE(74)] = 1587,
  [SMALL_STATE(75)] = 1605,
  [SMALL_STATE(76)] = 1621,
  [SMALL_STATE(77)] = 1636,
  [SMALL_STATE(78)] = 1663,
  [SMALL_STATE(79)] = 1684,
  [SMALL_STATE(80)] = 1704,
  [SMALL_STATE(81)] = 1724,
  [SMALL_STATE(82)] = 1750,
  [SMALL_STATE(83)] = 1770,
  [SMALL_STATE(84)] = 1796,
  [SMALL_STATE(85)] = 1816,
  [SMALL_STATE(86)] = 1833,
  [SMALL_STATE(87)] = 1858,
  [SMALL_STATE(88)] = 1883,
  [SMALL_STATE(89)] = 1908,
  [SMALL_STATE(90)] = 1933,
  [SMALL_STATE(91)] = 1956,
  [SMALL_STATE(92)] = 1968,
  [SMALL_STATE(93)] = 1980,
  [SMALL_STATE(94)] = 1992,
  [SMALL_STATE(95)] = 2004,
  [SMALL_STATE(96)] = 2024,
  [SMALL_STATE(97)] = 2036,
  [SMALL_STATE(98)] = 2052,
  [SMALL_STATE(99)] = 2069,
  [SMALL_STATE(100)] = 2084,
  [SMALL_STATE(101)] = 2099,
  [SMALL_STATE(102)] = 2114,
  [SMALL_STATE(103)] = 2131,
  [SMALL_STATE(104)] = 2146,
  [SMALL_STATE(105)] = 2162,
  [SMALL_STATE(106)] = 2178,
  [SMALL_STATE(107)] = 2194,
  [SMALL_STATE(108)] = 2210,
  [SMALL_STATE(109)] = 2224,
  [SMALL_STATE(110)] = 2238,
  [SMALL_STATE(111)] = 2248,
  [SMALL_STATE(112)] = 2258,
  [SMALL_STATE(113)] = 2274,
  [SMALL_STATE(114)] = 2290,
  [SMALL_STATE(115)] = 2306,
  [SMALL_STATE(116)] = 2320,
  [SMALL_STATE(117)] = 2336,
  [SMALL_STATE(118)] = 2352,
  [SMALL_STATE(119)] = 2362,
  [SMALL_STATE(120)] = 2375,
  [SMALL_STATE(121)] = 2388,
  [SMALL_STATE(122)] = 2401,
  [SMALL_STATE(123)] = 2414,
  [SMALL_STATE(124)] = 2427,
  [SMALL_STATE(125)] = 2440,
  [SMALL_STATE(126)] = 2453,
  [SMALL_STATE(127)] = 2466,
  [SMALL_STATE(128)] = 2479,
  [SMALL_STATE(129)] = 2492,
  [SMALL_STATE(130)] = 2503,
  [SMALL_STATE(131)] = 2514,
  [SMALL_STATE(132)] = 2527,
  [SMALL_STATE(133)] = 2540,
  [SMALL_STATE(134)] = 2553,
  [SMALL_STATE(135)] = 2564,
  [SMALL_STATE(136)] = 2573,
  [SMALL_STATE(137)] = 2584,
  [SMALL_STATE(138)] = 2597,
  [SMALL_STATE(139)] = 2610,
  [SMALL_STATE(140)] = 2623,
  [SMALL_STATE(141)] = 2632,
  [SMALL_STATE(142)] = 2643,
  [SMALL_STATE(143)] = 2656,
  [SMALL_STATE(144)] = 2669,
  [SMALL_STATE(145)] = 2682,
  [SMALL_STATE(146)] = 2691,
  [SMALL_STATE(147)] = 2702,
  [SMALL_STATE(148)] = 2715,
  [SMALL_STATE(149)] = 2728,
  [SMALL_STATE(150)] = 2741,
  [SMALL_STATE(151)] = 2754,
  [SMALL_STATE(152)] = 2767,
  [SMALL_STATE(153)] = 2780,
  [SMALL_STATE(154)] = 2791,
  [SMALL_STATE(155)] = 2804,
  [SMALL_STATE(156)] = 2817,
  [SMALL_STATE(157)] = 2830,
  [SMALL_STATE(158)] = 2843,
  [SMALL_STATE(159)] = 2856,
  [SMALL_STATE(160)] = 2866,
  [SMALL_STATE(161)] = 2874,
  [SMALL_STATE(162)] = 2884,
  [SMALL_STATE(163)] = 2894,
  [SMALL_STATE(164)] = 2902,
  [SMALL_STATE(165)] = 2910,
  [SMALL_STATE(166)] = 2918,
  [SMALL_STATE(167)] = 2926,
  [SMALL_STATE(168)] = 2934,
  [SMALL_STATE(169)] = 2942,
  [SMALL_STATE(170)] = 2950,
  [SMALL_STATE(171)] = 2958,
  [SMALL_STATE(172)] = 2966,
  [SMALL_STATE(173)] = 2976,
  [SMALL_STATE(174)] = 2984,
  [SMALL_STATE(175)] = 2992,
  [SMALL_STATE(176)] = 3002,
  [SMALL_STATE(177)] = 3008,
  [SMALL_STATE(178)] = 3016,
  [SMALL_STATE(179)] = 3023,
  [SMALL_STATE(180)] = 3030,
  [SMALL_STATE(181)] = 3037,
  [SMALL_STATE(182)] = 3044,
  [SMALL_STATE(183)] = 3051,
  [SMALL_STATE(184)] = 3058,
  [SMALL_STATE(185)] = 3065,
  [SMALL_STATE(186)] = 3072,
  [SMALL_STATE(187)] = 3079,
  [SMALL_STATE(188)] = 3086,
  [SMALL_STATE(189)] = 3093,
  [SMALL_STATE(190)] = 3100,
  [SMALL_STATE(191)] = 3107,
  [SMALL_STATE(192)] = 3114,
  [SMALL_STATE(193)] = 3121,
  [SMALL_STATE(194)] = 3128,
  [SMALL_STATE(195)] = 3135,
  [SMALL_STATE(196)] = 3140,
  [SMALL_STATE(197)] = 3147,
  [SMALL_STATE(198)] = 3154,
  [SMALL_STATE(199)] = 3161,
  [SMALL_STATE(200)] = 3168,
  [SMALL_STATE(201)] = 3175,
  [SMALL_STATE(202)] = 3182,
  [SMALL_STATE(203)] = 3189,
  [SMALL_STATE(204)] = 3196,
  [SMALL_STATE(205)] = 3203,
  [SMALL_STATE(206)] = 3210,
  [SMALL_STATE(207)] = 3217,
  [SMALL_STATE(208)] = 3224,
  [SMALL_STATE(209)] = 3231,
  [SMALL_STATE(210)] = 3238,
  [SMALL_STATE(211)] = 3245,
  [SMALL_STATE(212)] = 3252,
  [SMALL_STATE(213)] = 3259,
  [SMALL_STATE(214)] = 3266,
  [SMALL_STATE(215)] = 3273,
  [SMALL_STATE(216)] = 3280,
  [SMALL_STATE(217)] = 3287,
  [SMALL_STATE(218)] = 3294,
  [SMALL_STATE(219)] = 3301,
  [SMALL_STATE(220)] = 3308,
  [SMALL_STATE(221)] = 3315,
  [SMALL_STATE(222)] = 3322,
  [SMALL_STATE(223)] = 3326,
  [SMALL_STATE(224)] = 3330,
  [SMALL_STATE(225)] = 3334,
  [SMALL_STATE(226)] = 3338,
  [SMALL_STATE(227)] = 3342,
  [SMALL_STATE(228)] = 3346,
  [SMALL_STATE(229)] = 3350,
  [SMALL_STATE(230)] = 3354,
  [SMALL_STATE(231)] = 3358,
  [SMALL_STATE(232)] = 3362,
  [SMALL_STATE(233)] = 3366,
  [SMALL_STATE(234)] = 3370,
  [SMALL_STATE(235)] = 3374,
  [SMALL_STATE(236)] = 3378,
  [SMALL_STATE(237)] = 3382,
  [SMALL_STATE(238)] = 3386,
  [SMALL_STATE(239)] = 3390,
  [SMALL_STATE(240)] = 3394,
  [SMALL_STATE(241)] = 3398,
  [SMALL_STATE(242)] = 3402,
  [SMALL_STATE(243)] = 3406,
  [SMALL_STATE(244)] = 3410,
  [SMALL_STATE(245)] = 3414,
  [SMALL_STATE(246)] = 3418,
  [SMALL_STATE(247)] = 3422,
  [SMALL_STATE(248)] = 3426,
  [SMALL_STATE(249)] = 3430,
  [SMALL_STATE(250)] = 3434,
  [SMALL_STATE(251)] = 3438,
  [SMALL_STATE(252)] = 3442,
  [SMALL_STATE(253)] = 3446,
  [SMALL_STATE(254)] = 3450,
  [SMALL_STATE(255)] = 3454,
  [SMALL_STATE(256)] = 3458,
  [SMALL_STATE(257)] = 3462,
  [SMALL_STATE(258)] = 3466,
  [SMALL_STATE(259)] = 3470,
  [SMALL_STATE(260)] = 3474,
  [SMALL_STATE(261)] = 3478,
  [SMALL_STATE(262)] = 3482,
  [SMALL_STATE(263)] = 3486,
  [SMALL_STATE(264)] = 3490,
  [SMALL_STATE(265)] = 3494,
  [SMALL_STATE(266)] = 3498,
  [SMALL_STATE(267)] = 3502,
  [SMALL_STATE(268)] = 3506,
  [SMALL_STATE(269)] = 3510,
  [SMALL_STATE(270)] = 3514,
  [SMALL_STATE(271)] = 3518,
  [SMALL_STATE(272)] = 3522,
  [SMALL_STATE(273)] = 3526,
  [SMALL_STATE(274)] = 3530,
  [SMALL_STATE(275)] = 3534,
  [SMALL_STATE(276)] = 3538,
  [SMALL_STATE(277)] = 3542,
  [SMALL_STATE(278)] = 3546,
  [SMALL_STATE(279)] = 3550,
  [SMALL_STATE(280)] = 3554,
  [SMALL_STATE(281)] = 3558,
  [SMALL_STATE(282)] = 3562,
  [SMALL_STATE(283)] = 3566,
  [SMALL_STATE(284)] = 3570,
  [SMALL_STATE(285)] = 3574,
  [SMALL_STATE(286)] = 3578,
  [SMALL_STATE(287)] = 3582,
  [SMALL_STATE(288)] = 3586,
  [SMALL_STATE(289)] = 3590,
  [SMALL_STATE(290)] = 3594,
  [SMALL_STATE(291)] = 3598,
  [SMALL_STATE(292)] = 3602,
  [SMALL_STATE(293)] = 3606,
  [SMALL_STATE(294)] = 3610,
  [SMALL_STATE(295)] = 3614,
  [SMALL_STATE(296)] = 3618,
  [SMALL_STATE(297)] = 3622,
  [SMALL_STATE(298)] = 3626,
  [SMALL_STATE(299)] = 3630,
  [SMALL_STATE(300)] = 3634,
  [SMALL_STATE(301)] = 3638,
  [SMALL_STATE(302)] = 3642,
  [SMALL_STATE(303)] = 3646,
  [SMALL_STATE(304)] = 3650,
  [SMALL_STATE(305)] = 3654,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(270),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(291),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(66),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(290),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(289),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(218),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(217),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(285),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(261),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(255),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 6), SHIFT(188),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 6),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 1), SHIFT(188),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(296),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(304),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(11),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(11),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(59),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 19),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 72),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 71),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 11),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 12),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 13),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 14),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 15),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 53),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 52),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 51),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 50),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 49),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 48),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 16),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 47),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 46),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 45),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 44),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 43),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 42),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 17),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 5),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 18),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 20),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 15),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 21),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 41),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 40),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 39),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 22),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 23),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 24),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 25),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__number_expr, 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__number_expr, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 73),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 8), SHIFT(188),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 8),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 27), SHIFT(188),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 27),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 1),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 1),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [353] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 57), SHIFT(188),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 57),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 7), SHIFT(188),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 26), SHIFT(188),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 26),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 35), SHIFT(188),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 35),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [383] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [409] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(271),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_open_repeat1, 2),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(101),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 2),
  [429] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55), SHIFT(188),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [436] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 58), SHIFT(188),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 58),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [443] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 36), SHIFT(188),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 36),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_tags_and_links, 1), SHIFT(195),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_and_links, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 1, .production_id = 31),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 1, .production_id = 31),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 63),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 63),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 67), SHIFT(188),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 67),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 33), SHIFT(188),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 33),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 9), SHIFT(188),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 9),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(195),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [495] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(115),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 77), SHIFT(188),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 77),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 28), SHIFT(188),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 28),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [516] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 27), SHIFT(188),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 27),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 55), SHIFT(188),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 55),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 6), SHIFT(188),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 6),
  [535] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 33), SHIFT(188),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 33),
  [540] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 57), SHIFT(188),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 57),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 58), SHIFT(188),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 58),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 2),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 2),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [556] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 1), SHIFT(188),
  [559] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 1),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(175),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2),
  [568] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [572] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [576] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 28), SHIFT(188),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 28),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(13),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 26), SHIFT(188),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 26),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [599] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postings, 1),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 7), SHIFT(188),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 7),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 77), SHIFT(188),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 77),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [623] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [627] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 35), SHIFT(188),
  [630] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 35),
  [632] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 9), SHIFT(188),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 9),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 36), SHIFT(188),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 36),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 67), SHIFT(188),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 67),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 8), SHIFT(188),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 8),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_metadata, 1), SHIFT(188),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 1),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 4, .production_id = 91),
  [661] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 4, .production_id = 91),
  [663] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(188),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 2, .production_id = 61),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 2, .production_id = 61),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 3, .production_id = 82),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 3, .production_id = 82),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 3, .production_id = 81),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 3, .production_id = 81),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 2, .production_id = 62),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 2, .production_id = 62),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 1, .production_id = 30),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 1, .production_id = 30),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_value, 1),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_value, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 2),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 2),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 80),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 80),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 29),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 29),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 76),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 76),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 78),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 78),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 75),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 75),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_value, 1),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 79),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 79),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 65),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 65),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 74),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 74),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 32),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 32),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_with_tolerance, 4),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_with_tolerance, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 83),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 83),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 70),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 70),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 34),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 34),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 69),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 69),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 84),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 84),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 37),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 37),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 85),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 85),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 38),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 38),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 68),
  [786] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 68),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 86),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 86),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 87),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 87),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 88),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 88),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 89),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 89),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 66),
  [810] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 66),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 90),
  [814] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 90),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 92),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 92),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 54),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 54),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 93),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 93),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 56),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 56),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 59),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 59),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_booking, 1),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 60),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 60),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [846] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 10),
  [848] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 10),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 64),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 64),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [856] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [920] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
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
