#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 301
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 117
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 25
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__indent = 1,
  sym__eol = 2,
  sym__pipe = 3,
  sym_atat = 4,
  sym_at = 5,
  sym_lcurllcurl = 6,
  sym_rcurlrcurl = 7,
  sym_lcurl = 8,
  sym_rcurl = 9,
  sym__equal = 10,
  sym__comma = 11,
  sym__tilde = 12,
  sym__hash = 13,
  sym_asterisk = 14,
  sym_slash = 15,
  sym__colon = 16,
  sym_plus = 17,
  sym_minus = 18,
  sym__lparen = 19,
  sym__rparen = 20,
  sym__none = 21,
  sym_comment = 22,
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
  sym_compound_amount = 70,
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
  [sym__none] = "_none",
  [sym_comment] = "comment",
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
  [sym_compound_amount] = "compound_amount",
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
  [sym__none] = sym__none,
  [sym_comment] = sym_comment,
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
  [sym_compound_amount] = sym_compound_amount,
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
  [sym__none] = {
    .visible = false,
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
  [sym_compound_amount] = {
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
  field_key = 13,
  field_metadata = 14,
  field_name = 15,
  field_note = 16,
  field_per = 17,
  field_postings = 18,
  field_price_annotation = 19,
  field_query = 20,
  field_tags_and_links = 21,
  field_total = 22,
  field_txn_strings = 23,
  field_type = 24,
  field_value = 25,
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
  [field_key] = "key",
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
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[95] = {
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
  [11] = {.index = 20, .length = 2},
  [12] = {.index = 22, .length = 4},
  [13] = {.index = 26, .length = 4},
  [14] = {.index = 30, .length = 4},
  [15] = {.index = 34, .length = 3},
  [16] = {.index = 37, .length = 3},
  [17] = {.index = 40, .length = 3},
  [18] = {.index = 43, .length = 3},
  [19] = {.index = 46, .length = 3},
  [20] = {.index = 49, .length = 3},
  [21] = {.index = 52, .length = 3},
  [22] = {.index = 55, .length = 3},
  [23] = {.index = 58, .length = 3},
  [24] = {.index = 61, .length = 3},
  [25] = {.index = 64, .length = 3},
  [26] = {.index = 67, .length = 3},
  [27] = {.index = 70, .length = 3},
  [28] = {.index = 73, .length = 3},
  [29] = {.index = 76, .length = 3},
  [30] = {.index = 79, .length = 3},
  [31] = {.index = 82, .length = 1},
  [32] = {.index = 83, .length = 1},
  [33] = {.index = 84, .length = 2},
  [34] = {.index = 86, .length = 3},
  [35] = {.index = 89, .length = 3},
  [36] = {.index = 92, .length = 3},
  [37] = {.index = 95, .length = 3},
  [38] = {.index = 98, .length = 3},
  [39] = {.index = 101, .length = 3},
  [40] = {.index = 104, .length = 5},
  [41] = {.index = 109, .length = 5},
  [42] = {.index = 114, .length = 5},
  [43] = {.index = 119, .length = 4},
  [44] = {.index = 123, .length = 3},
  [45] = {.index = 126, .length = 4},
  [46] = {.index = 130, .length = 4},
  [47] = {.index = 134, .length = 4},
  [48] = {.index = 138, .length = 4},
  [49] = {.index = 142, .length = 4},
  [50] = {.index = 146, .length = 4},
  [51] = {.index = 150, .length = 4},
  [52] = {.index = 154, .length = 4},
  [53] = {.index = 158, .length = 4},
  [54] = {.index = 162, .length = 4},
  [55] = {.index = 166, .length = 3},
  [56] = {.index = 169, .length = 4},
  [57] = {.index = 173, .length = 4},
  [58] = {.index = 177, .length = 4},
  [59] = {.index = 181, .length = 4},
  [60] = {.index = 185, .length = 4},
  [61] = {.index = 189, .length = 4},
  [62] = {.index = 193, .length = 1},
  [63] = {.index = 194, .length = 2},
  [64] = {.index = 196, .length = 1},
  [65] = {.index = 197, .length = 3},
  [66] = {.index = 200, .length = 4},
  [67] = {.index = 204, .length = 3},
  [68] = {.index = 207, .length = 4},
  [69] = {.index = 211, .length = 4},
  [70] = {.index = 215, .length = 4},
  [71] = {.index = 219, .length = 3},
  [72] = {.index = 222, .length = 6},
  [73] = {.index = 228, .length = 5},
  [74] = {.index = 233, .length = 5},
  [75] = {.index = 238, .length = 4},
  [76] = {.index = 242, .length = 5},
  [77] = {.index = 247, .length = 4},
  [78] = {.index = 251, .length = 5},
  [79] = {.index = 256, .length = 5},
  [80] = {.index = 261, .length = 5},
  [81] = {.index = 266, .length = 4},
  [82] = {.index = 270, .length = 2},
  [83] = {.index = 272, .length = 2},
  [84] = {.index = 274, .length = 4},
  [85] = {.index = 278, .length = 4},
  [86] = {.index = 282, .length = 5},
  [87] = {.index = 287, .length = 4},
  [88] = {.index = 291, .length = 5},
  [89] = {.index = 296, .length = 5},
  [90] = {.index = 301, .length = 6},
  [91] = {.index = 307, .length = 5},
  [92] = {.index = 312, .length = 3},
  [93] = {.index = 315, .length = 5},
  [94] = {.index = 320, .length = 6},
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
    {field_key, 1},
    {field_value, 2},
  [12] =
    {field_account, 2},
    {field_flag, 1},
  [14] =
    {field_account, 1},
    {field_cost_spec, 2},
  [16] =
    {field_account, 1},
    {field_amount, 2},
  [18] =
    {field_account, 1},
    {field_price_annotation, 2},
  [20] =
    {field_account, 1},
    {field_metadata, 2},
  [22] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 2},
    {field_postings, 3},
  [26] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_txn_strings, 2},
  [30] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 3},
    {field_tags_and_links, 2},
  [34] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [37] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 3},
  [40] =
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 3},
  [43] =
    {field_date, 0},
    {field_metadata, 3},
    {field_name, 2},
  [46] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [49] =
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [52] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [55] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
  [58] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
  [61] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
  [64] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [67] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [70] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
  [73] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
  [76] =
    {field_account, 2},
    {field_flag, 1},
    {field_price_annotation, 3},
  [79] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 3},
  [82] =
    {field_currency, 0},
  [83] =
    {field_per, 0},
  [84] =
    {field_account, 1},
    {field_metadata, 3},
  [86] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 3},
  [89] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 3},
  [92] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [95] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 3},
  [98] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 3},
  [101] =
    {field_account, 1},
    {field_metadata, 3},
    {field_price_annotation, 2},
  [104] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_txn_strings, 2},
  [109] =
    {field_date, 0},
    {field_flag, 1},
    {field_postings, 4},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [114] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 3},
    {field_postings, 4},
    {field_tags_and_links, 2},
  [119] =
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
    {field_metadata, 4},
  [123] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
  [126] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 4},
  [130] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_and_links, 4},
  [134] =
    {field_date, 0},
    {field_desc, 3},
    {field_metadata, 4},
    {field_type, 2},
  [138] =
    {field_account, 2},
    {field_date, 0},
    {field_metadata, 4},
    {field_note, 3},
  [142] =
    {field_account, 2},
    {field_booking, 3},
    {field_date, 0},
    {field_metadata, 4},
  [146] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 4},
  [150] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
  [154] =
    {field_account, 2},
    {field_date, 0},
    {field_from_account, 3},
    {field_metadata, 4},
  [158] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
    {field_metadata, 4},
  [162] =
    {field_date, 0},
    {field_metadata, 4},
    {field_name, 2},
    {field_query, 3},
  [166] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
  [169] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [173] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [177] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
  [181] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_price_annotation, 4},
  [185] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 4},
  [189] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [193] =
    {field_currency, 1},
  [194] =
    {field_currency, 1},
    {field_per, 0},
  [196] =
    {field_cost_comp_list, 1},
  [197] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
  [200] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [204] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
  [207] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 4},
  [211] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 4},
  [215] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 4},
    {field_price_annotation, 3},
  [219] =
    {field_account, 1},
    {field_metadata, 4},
    {field_price_annotation, 2},
  [222] =
    {field_date, 0},
    {field_flag, 1},
    {field_metadata, 4},
    {field_postings, 5},
    {field_tags_and_links, 3},
    {field_txn_strings, 2},
  [228] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_metadata, 5},
    {field_tags_and_links, 4},
  [233] =
    {field_account, 2},
    {field_booking, 4},
    {field_currencies, 3},
    {field_date, 0},
    {field_metadata, 5},
  [238] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [242] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [247] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
  [251] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_price_annotation, 5},
  [256] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 5},
  [261] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [266] =
    {field_account, 2},
    {field_flag, 1},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [270] =
    {field_currency, 2},
    {field_total, 1},
  [272] =
    {field_currency, 2},
    {field_per, 0},
  [274] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [278] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
  [282] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 5},
    {field_price_annotation, 4},
  [287] =
    {field_account, 1},
    {field_amount, 2},
    {field_metadata, 5},
    {field_price_annotation, 3},
  [291] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [296] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
  [301] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 5},
  [307] =
    {field_account, 2},
    {field_amount, 3},
    {field_flag, 1},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [312] =
    {field_currency, 3},
    {field_per, 0},
    {field_total, 2},
  [315] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_metadata, 6},
    {field_price_annotation, 4},
  [320] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_flag, 1},
    {field_metadata, 7},
    {field_price_annotation, 5},
};

static TSSymbol ts_alias_sequences[95][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == ')') ADVANCE(194);
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
      if (lookahead == '/') ADVANCE(189);
      if (lookahead == '}') ADVANCE(131);
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
      if (lookahead == ')') ADVANCE(194);
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
      if (lookahead == '}') ADVANCE(182);
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
      ACCEPT_TOKEN(sym_atat);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_at);
      if (lookahead == '@') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_lcurllcurl);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_rcurlrcurl);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_lcurl);
      if (lookahead == '{') ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_rcurl);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_rcurl);
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
      ACCEPT_TOKEN(sym_asterisk);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_slash);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__colon);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_minus);
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
      ACCEPT_TOKEN(sym_comment);
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
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 171},
  [27] = {.lex_state = 2},
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
  [59] = {.lex_state = 171},
  [60] = {.lex_state = 171},
  [61] = {.lex_state = 171},
  [62] = {.lex_state = 171},
  [63] = {.lex_state = 171},
  [64] = {.lex_state = 171},
  [65] = {.lex_state = 171},
  [66] = {.lex_state = 171},
  [67] = {.lex_state = 171},
  [68] = {.lex_state = 171},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 1},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 1},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 49},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 1},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 1},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 48},
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
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 1},
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
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
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
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 171},
  [238] = {.lex_state = 171},
  [239] = {.lex_state = 171},
  [240] = {.lex_state = 171},
  [241] = {.lex_state = 171},
  [242] = {.lex_state = 1},
  [243] = {.lex_state = 171},
  [244] = {.lex_state = 171},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 171},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 171},
  [249] = {.lex_state = 171},
  [250] = {.lex_state = 171},
  [251] = {.lex_state = 171},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 171},
  [254] = {.lex_state = 171},
  [255] = {.lex_state = 171},
  [256] = {.lex_state = 171},
  [257] = {.lex_state = 171},
  [258] = {.lex_state = 1},
  [259] = {.lex_state = 171},
  [260] = {.lex_state = 171},
  [261] = {.lex_state = 171},
  [262] = {.lex_state = 1},
  [263] = {.lex_state = 171},
  [264] = {.lex_state = 171},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 171},
  [267] = {.lex_state = 171},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 171},
  [270] = {.lex_state = 171},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 171},
  [276] = {.lex_state = 171},
  [277] = {.lex_state = 171},
  [278] = {.lex_state = 171},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 171},
  [281] = {.lex_state = 197},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 171},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 1},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 171},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 171},
  [296] = {.lex_state = 171},
  [297] = {.lex_state = 171},
  [298] = {.lex_state = 1},
  [299] = {.lex_state = 1},
  [300] = {.lex_state = 171},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
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
    [sym__none] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
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
    [sym_file] = STATE(292),
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
    [sym_comment] = ACTIONS(9),
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
      sym_comment,
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
      sym_comment,
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
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(75), 1,
      sym_lcurllcurl,
    ACTIONS(77), 1,
      sym_lcurl,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(83), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_number,
    STATE(75), 1,
      sym_incomplete_amount,
    STATE(98), 1,
      sym_cost_spec,
    STATE(127), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(233), 1,
      sym_metadata,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(124), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [181] = 16,
    ACTIONS(71), 1,
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(75), 1,
      sym_lcurllcurl,
    ACTIONS(77), 1,
      sym_lcurl,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    ACTIONS(87), 1,
      sym__indent,
    ACTIONS(90), 1,
      sym__eol,
    ACTIONS(92), 1,
      sym_comment,
    STATE(74), 1,
      sym_incomplete_amount,
    STATE(99), 1,
      sym_cost_spec,
    STATE(132), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(218), 1,
      sym_metadata,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(124), 4,
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
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(267), 1,
      sym_metadata,
    ACTIONS(98), 2,
      sym_plus,
      sym_minus,
    STATE(11), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(102), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(22), 4,
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
      sym_plus,
      sym_minus,
    ACTIONS(118), 2,
      sym_bool,
      sym_currency,
    STATE(228), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(116), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(110), 4,
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
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(278), 1,
      sym_metadata,
    ACTIONS(98), 2,
      sym_plus,
      sym_minus,
    STATE(6), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(124), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(22), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [353] = 11,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(128), 1,
      sym_rcurlrcurl,
    ACTIONS(130), 1,
      sym__hash,
    ACTIONS(134), 1,
      sym_currency,
    ACTIONS(136), 1,
      sym_number,
    STATE(176), 1,
      sym_cost_comp,
    STATE(190), 1,
      sym_compound_amount,
    STATE(262), 1,
      sym_cost_comp_list,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    ACTIONS(132), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(81), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [393] = 11,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(128), 1,
      sym_rcurl,
    ACTIONS(130), 1,
      sym__hash,
    ACTIONS(134), 1,
      sym_currency,
    ACTIONS(136), 1,
      sym_number,
    STATE(176), 1,
      sym_cost_comp,
    STATE(190), 1,
      sym_compound_amount,
    STATE(249), 1,
      sym_cost_comp_list,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    ACTIONS(132), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(81), 4,
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
      sym_plus,
      sym_minus,
    STATE(11), 2,
      sym_amount,
      aux_sym_custom_repeat1,
    ACTIONS(148), 3,
      sym_date,
      sym_string,
      sym_account,
    STATE(22), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [468] = 8,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(161), 1,
      sym_number,
    STATE(244), 1,
      sym_key_value_value,
    STATE(254), 1,
      sym_amount,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    ACTIONS(159), 2,
      sym_bool,
      sym_currency,
    ACTIONS(157), 4,
      sym_date,
      sym_tag,
      sym_string,
      sym_account,
    STATE(117), 4,
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
    STATE(185), 1,
      sym_cost_comp,
    STATE(190), 1,
      sym_compound_amount,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    ACTIONS(132), 3,
      sym_asterisk,
      sym_date,
      sym_string,
    STATE(81), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [535] = 1,
    ACTIONS(163), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
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
    ACTIONS(165), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
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
    ACTIONS(167), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
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
    ACTIONS(169), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
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
    ACTIONS(171), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
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
    ACTIONS(173), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
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
    ACTIONS(175), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
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
    ACTIONS(177), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [663] = 5,
    ACTIONS(187), 1,
      sym_currency,
    ACTIONS(183), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(185), 2,
      sym_plus,
      sym_minus,
    ACTIONS(181), 3,
      sym__eol,
      sym_bool,
      sym_number,
    ACTIONS(179), 5,
      sym__indent,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [687] = 3,
    ACTIONS(183), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(191), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(189), 7,
      sym__indent,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [707] = 2,
    ACTIONS(191), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(189), 9,
      sym__indent,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [725] = 2,
    ACTIONS(195), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(193), 9,
      sym__indent,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [743] = 1,
    ACTIONS(197), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [759] = 2,
    ACTIONS(201), 4,
      sym__eol,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(199), 9,
      sym__indent,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [777] = 1,
    ACTIONS(203), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [793] = 1,
    ACTIONS(205), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [809] = 1,
    ACTIONS(207), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [825] = 1,
    ACTIONS(209), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [841] = 1,
    ACTIONS(211), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [857] = 1,
    ACTIONS(213), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [873] = 1,
    ACTIONS(215), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [889] = 1,
    ACTIONS(217), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [905] = 1,
    ACTIONS(219), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [921] = 1,
    ACTIONS(221), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [937] = 1,
    ACTIONS(223), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [953] = 1,
    ACTIONS(225), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [969] = 1,
    ACTIONS(227), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [985] = 1,
    ACTIONS(229), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1001] = 1,
    ACTIONS(231), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1017] = 1,
    ACTIONS(233), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1033] = 1,
    ACTIONS(235), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1049] = 1,
    ACTIONS(237), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1065] = 1,
    ACTIONS(239), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1081] = 1,
    ACTIONS(241), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1097] = 1,
    ACTIONS(243), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1113] = 1,
    ACTIONS(245), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1129] = 1,
    ACTIONS(247), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1145] = 1,
    ACTIONS(249), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1161] = 1,
    ACTIONS(251), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1177] = 1,
    ACTIONS(253), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1193] = 1,
    ACTIONS(255), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1209] = 1,
    ACTIONS(257), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1225] = 1,
    ACTIONS(259), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1241] = 1,
    ACTIONS(261), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1257] = 1,
    ACTIONS(263), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1273] = 1,
    ACTIONS(265), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1289] = 1,
    ACTIONS(267), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1305] = 1,
    ACTIONS(269), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1321] = 1,
    ACTIONS(271), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1337] = 1,
    ACTIONS(273), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1353] = 1,
    ACTIONS(275), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1369] = 1,
    ACTIONS(277), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1385] = 1,
    ACTIONS(279), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1401] = 1,
    ACTIONS(281), 13,
      ts_builtin_sym_end,
      sym__eol,
      sym__colon,
      sym_comment,
      sym_date,
      sym_flag,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1417] = 12,
    ACTIONS(283), 1,
      sym_flag,
    ACTIONS(285), 1,
      anon_sym_balance,
    ACTIONS(287), 1,
      anon_sym_close,
    ACTIONS(289), 1,
      anon_sym_commodity,
    ACTIONS(291), 1,
      anon_sym_custom,
    ACTIONS(293), 1,
      anon_sym_document,
    ACTIONS(295), 1,
      anon_sym_event,
    ACTIONS(297), 1,
      anon_sym_note,
    ACTIONS(299), 1,
      anon_sym_open,
    ACTIONS(301), 1,
      anon_sym_pad,
    ACTIONS(303), 1,
      anon_sym_price,
    ACTIONS(305), 1,
      anon_sym_query,
  [1454] = 3,
    ACTIONS(191), 1,
      sym_rcurl,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(189), 9,
      sym__eol,
      sym_rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_plus,
      sym_minus,
      sym__rparen,
      sym_currency,
  [1473] = 2,
    ACTIONS(191), 1,
      sym_rcurl,
    ACTIONS(189), 11,
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
  [1490] = 2,
    ACTIONS(195), 1,
      sym_rcurl,
    ACTIONS(193), 11,
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
  [1507] = 2,
    ACTIONS(201), 1,
      sym_rcurl,
    ACTIONS(199), 11,
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
  [1524] = 10,
    ACTIONS(309), 1,
      sym__indent,
    ACTIONS(313), 1,
      sym_string,
    STATE(78), 1,
      sym_txn_strings,
    STATE(114), 1,
      sym_tags_and_links,
    STATE(125), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(162), 1,
      sym_metadata,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(259), 1,
      sym_postings,
    ACTIONS(311), 2,
      sym_tag,
      sym_link,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1557] = 11,
    ACTIONS(71), 1,
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(75), 1,
      sym_lcurllcurl,
    ACTIONS(77), 1,
      sym_lcurl,
    ACTIONS(315), 1,
      sym__indent,
    ACTIONS(318), 1,
      sym__eol,
    ACTIONS(320), 1,
      sym_comment,
    STATE(86), 1,
      sym_cost_spec,
    STATE(119), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(229), 1,
      sym_metadata,
  [1591] = 11,
    ACTIONS(71), 1,
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(75), 1,
      sym_lcurllcurl,
    ACTIONS(77), 1,
      sym_lcurl,
    ACTIONS(322), 1,
      sym__indent,
    ACTIONS(325), 1,
      sym__eol,
    ACTIONS(327), 1,
      sym_comment,
    STATE(95), 1,
      sym_cost_spec,
    STATE(134), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(202), 1,
      sym_metadata,
  [1625] = 2,
    ACTIONS(331), 3,
      sym__eol,
      sym_bool,
      sym_number,
    ACTIONS(329), 7,
      sym__indent,
      sym_plus,
      sym_minus,
      sym__lparen,
      sym_date,
      sym_string,
      sym_account,
  [1640] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(333), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(172), 2,
      sym_amount,
      sym_amount_with_tolerance,
    STATE(113), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1661] = 8,
    ACTIONS(309), 1,
      sym__indent,
    STATE(118), 1,
      sym_tags_and_links,
    STATE(125), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(179), 1,
      sym_metadata,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(295), 1,
      sym_postings,
    ACTIONS(311), 2,
      sym_tag,
      sym_link,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [1688] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(335), 1,
      sym_number,
    STATE(161), 1,
      sym_amount,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(131), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1708] = 8,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(337), 1,
      sym__eol,
    ACTIONS(339), 1,
      sym_currency,
    ACTIONS(341), 1,
      sym_string,
    STATE(166), 1,
      sym_opt_booking,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(261), 1,
      sym_metadata,
    STATE(83), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [1734] = 6,
    ACTIONS(345), 1,
      sym_rcurl,
    ACTIONS(347), 1,
      sym__hash,
    ACTIONS(351), 1,
      sym_currency,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(343), 2,
      sym_rcurlrcurl,
      sym__comma,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [1756] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(353), 1,
      sym_currency,
    ACTIONS(355), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(120), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1776] = 8,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(339), 1,
      sym_currency,
    ACTIONS(341), 1,
      sym_string,
    ACTIONS(357), 1,
      sym__eol,
    STATE(165), 1,
      sym_opt_booking,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(260), 1,
      sym_metadata,
    STATE(112), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [1802] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(359), 1,
      sym_currency,
    ACTIONS(361), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(121), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1822] = 5,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(85), 1,
      sym_number,
    STATE(187), 1,
      sym_incomplete_amount,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(124), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1842] = 8,
    ACTIONS(71), 1,
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(363), 1,
      sym__indent,
    ACTIONS(366), 1,
      sym__eol,
    ACTIONS(368), 1,
      sym_comment,
    STATE(130), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(224), 1,
      sym_metadata,
  [1867] = 4,
    ACTIONS(114), 1,
      sym__lparen,
    ACTIONS(370), 1,
      sym_number,
    ACTIONS(112), 2,
      sym_plus,
      sym_minus,
    STATE(106), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1884] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(372), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(133), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1901] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(374), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(137), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1918] = 4,
    ACTIONS(114), 1,
      sym__lparen,
    ACTIONS(376), 1,
      sym_number,
    ACTIONS(112), 2,
      sym_plus,
      sym_minus,
    STATE(104), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1935] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(378), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(69), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1952] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(380), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(70), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1969] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(382), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(136), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [1986] = 4,
    ACTIONS(100), 1,
      sym__lparen,
    ACTIONS(384), 1,
      sym_number,
    ACTIONS(98), 2,
      sym_plus,
      sym_minus,
    STATE(27), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2003] = 8,
    ACTIONS(71), 1,
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(386), 1,
      sym__indent,
    ACTIONS(389), 1,
      sym__eol,
    ACTIONS(391), 1,
      sym_comment,
    STATE(126), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(236), 1,
      sym_metadata,
  [2028] = 4,
    ACTIONS(114), 1,
      sym__lparen,
    ACTIONS(393), 1,
      sym_number,
    ACTIONS(112), 2,
      sym_plus,
      sym_minus,
    STATE(105), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2045] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(395), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(72), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2062] = 8,
    ACTIONS(71), 1,
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(397), 1,
      sym__indent,
    ACTIONS(400), 1,
      sym__eol,
    ACTIONS(402), 1,
      sym_comment,
    STATE(128), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(200), 1,
      sym_metadata,
  [2087] = 8,
    ACTIONS(71), 1,
      sym_atat,
    ACTIONS(73), 1,
      sym_at,
    ACTIONS(404), 1,
      sym__indent,
    ACTIONS(407), 1,
      sym__eol,
    ACTIONS(409), 1,
      sym_comment,
    STATE(140), 1,
      sym_price_annotation,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(225), 1,
      sym_metadata,
  [2112] = 7,
    ACTIONS(411), 1,
      sym__indent,
    ACTIONS(413), 1,
      sym__eol,
    STATE(125), 1,
      aux_sym_tags_and_links_repeat1,
    STATE(153), 1,
      sym_tags_and_links,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(257), 1,
      sym_metadata,
    ACTIONS(311), 2,
      sym_tag,
      sym_link,
  [2135] = 4,
    ACTIONS(100), 1,
      sym__lparen,
    ACTIONS(415), 1,
      sym_number,
    ACTIONS(98), 2,
      sym_plus,
      sym_minus,
    STATE(23), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2152] = 4,
    ACTIONS(81), 1,
      sym__lparen,
    ACTIONS(417), 1,
      sym_number,
    ACTIONS(79), 2,
      sym_plus,
      sym_minus,
    STATE(139), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2169] = 4,
    ACTIONS(100), 1,
      sym__lparen,
    ACTIONS(419), 1,
      sym_number,
    ACTIONS(98), 2,
      sym_plus,
      sym_minus,
    STATE(24), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [2186] = 2,
    ACTIONS(201), 1,
      sym__eol,
    ACTIONS(199), 6,
      sym__indent,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
  [2198] = 3,
    ACTIONS(191), 1,
      sym__eol,
    ACTIONS(421), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(189), 4,
      sym__indent,
      sym_plus,
      sym_minus,
      sym_currency,
  [2212] = 2,
    ACTIONS(191), 1,
      sym__eol,
    ACTIONS(189), 6,
      sym__indent,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
  [2224] = 6,
    ACTIONS(423), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_flag,
    ACTIONS(429), 1,
      sym_key,
    ACTIONS(431), 1,
      sym_account,
    STATE(208), 1,
      sym_key_value,
    ACTIONS(427), 2,
      sym_tag,
      sym_link,
  [2244] = 2,
    ACTIONS(195), 1,
      sym__eol,
    ACTIONS(193), 6,
      sym__indent,
      sym_asterisk,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
  [2256] = 2,
    ACTIONS(435), 3,
      sym__eol,
      sym_at,
      sym_lcurl,
    ACTIONS(433), 4,
      sym__indent,
      sym_atat,
      sym_lcurllcurl,
      sym_comment,
  [2268] = 5,
    ACTIONS(437), 1,
      sym__indent,
    ACTIONS(439), 1,
      sym__eol,
    ACTIONS(443), 1,
      sym_currency,
    ACTIONS(421), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(441), 2,
      sym_plus,
      sym_minus,
  [2286] = 4,
    ACTIONS(447), 1,
      sym__eol,
    ACTIONS(449), 1,
      sym__comma,
    STATE(111), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(445), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2301] = 4,
    ACTIONS(454), 1,
      sym__eol,
    ACTIONS(456), 1,
      sym_currency,
    ACTIONS(452), 2,
      sym__indent,
      sym_string,
    STATE(112), 2,
      sym_currency_list,
      aux_sym_open_repeat1,
  [2316] = 4,
    ACTIONS(443), 1,
      sym_currency,
    ACTIONS(459), 1,
      sym__tilde,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2331] = 5,
    ACTIONS(461), 1,
      sym__indent,
    STATE(177), 1,
      sym_metadata,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(297), 1,
      sym_postings,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2348] = 4,
    ACTIONS(465), 1,
      sym__eol,
    ACTIONS(467), 1,
      sym__comma,
    STATE(111), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(463), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2363] = 4,
    ACTIONS(467), 1,
      sym__comma,
    ACTIONS(471), 1,
      sym__eol,
    STATE(115), 1,
      aux_sym_currency_list_repeat1,
    ACTIONS(469), 3,
      sym__indent,
      sym_currency,
      sym_string,
  [2378] = 4,
    ACTIONS(473), 1,
      sym__eol,
    ACTIONS(475), 1,
      sym_currency,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2393] = 5,
    ACTIONS(461), 1,
      sym__indent,
    STATE(146), 1,
      sym_metadata,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(270), 1,
      sym_postings,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2410] = 5,
    ACTIONS(477), 1,
      sym__indent,
    ACTIONS(480), 1,
      sym__eol,
    ACTIONS(482), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(221), 1,
      sym_metadata,
  [2426] = 3,
    ACTIONS(484), 1,
      sym_currency,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2438] = 3,
    ACTIONS(486), 1,
      sym_currency,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2450] = 2,
    ACTIONS(447), 1,
      sym__eol,
    ACTIONS(445), 4,
      sym__indent,
      sym__comma,
      sym_currency,
      sym_string,
  [2460] = 4,
    ACTIONS(488), 1,
      sym__indent,
    ACTIONS(491), 1,
      sym__eol,
    STATE(123), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(493), 2,
      sym_tag,
      sym_link,
  [2474] = 3,
    ACTIONS(496), 1,
      sym_currency,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2486] = 4,
    ACTIONS(498), 1,
      sym__indent,
    ACTIONS(501), 1,
      sym__eol,
    STATE(123), 1,
      aux_sym_tags_and_links_repeat1,
    ACTIONS(503), 2,
      sym_tag,
      sym_link,
  [2500] = 5,
    ACTIONS(505), 1,
      sym__indent,
    ACTIONS(508), 1,
      sym__eol,
    ACTIONS(510), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(215), 1,
      sym_metadata,
  [2516] = 5,
    ACTIONS(512), 1,
      sym__indent,
    ACTIONS(515), 1,
      sym__eol,
    ACTIONS(517), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(203), 1,
      sym_metadata,
  [2532] = 5,
    ACTIONS(519), 1,
      sym__indent,
    ACTIONS(522), 1,
      sym__eol,
    ACTIONS(524), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(196), 1,
      sym_metadata,
  [2548] = 2,
    ACTIONS(528), 2,
      sym__eol,
      sym_at,
    ACTIONS(526), 3,
      sym__indent,
      sym_atat,
      sym_comment,
  [2558] = 5,
    ACTIONS(530), 1,
      sym__indent,
    ACTIONS(533), 1,
      sym__eol,
    ACTIONS(535), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(211), 1,
      sym_metadata,
  [2574] = 3,
    ACTIONS(443), 1,
      sym_currency,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2586] = 5,
    ACTIONS(537), 1,
      sym__indent,
    ACTIONS(540), 1,
      sym__eol,
    ACTIONS(542), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(231), 1,
      sym_metadata,
  [2602] = 3,
    ACTIONS(544), 1,
      sym__rparen,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2614] = 5,
    ACTIONS(546), 1,
      sym__indent,
    ACTIONS(549), 1,
      sym__eol,
    ACTIONS(551), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(205), 1,
      sym_metadata,
  [2630] = 2,
    ACTIONS(555), 2,
      sym__eol,
      sym_at,
    ACTIONS(553), 3,
      sym__indent,
      sym_atat,
      sym_comment,
  [2640] = 3,
    ACTIONS(557), 1,
      sym_currency,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2652] = 3,
    ACTIONS(559), 1,
      sym__rparen,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2664] = 5,
    ACTIONS(423), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_flag,
    ACTIONS(429), 1,
      sym_key,
    ACTIONS(431), 1,
      sym_account,
    STATE(208), 1,
      sym_key_value,
  [2680] = 3,
    ACTIONS(561), 1,
      sym__rparen,
    ACTIONS(307), 2,
      sym_asterisk,
      sym_slash,
    ACTIONS(349), 2,
      sym_plus,
      sym_minus,
  [2692] = 5,
    ACTIONS(563), 1,
      sym__indent,
    ACTIONS(566), 1,
      sym__eol,
    ACTIONS(568), 1,
      sym_comment,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(227), 1,
      sym_metadata,
  [2708] = 4,
    ACTIONS(570), 1,
      sym__indent,
    ACTIONS(573), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(226), 1,
      sym_metadata,
  [2721] = 4,
    ACTIONS(575), 1,
      sym__indent,
    ACTIONS(578), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(223), 1,
      sym_metadata,
  [2734] = 4,
    ACTIONS(580), 1,
      sym__indent,
    ACTIONS(583), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(206), 1,
      sym_metadata,
  [2747] = 4,
    ACTIONS(585), 1,
      sym__indent,
    ACTIONS(588), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(207), 1,
      sym_metadata,
  [2760] = 4,
    ACTIONS(590), 1,
      sym_rcurlrcurl,
    ACTIONS(592), 1,
      sym_rcurl,
    ACTIONS(594), 1,
      sym__comma,
    STATE(145), 1,
      aux_sym_cost_comp_list_repeat1,
  [2773] = 3,
    ACTIONS(597), 1,
      sym__indent,
    STATE(296), 1,
      sym_postings,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2784] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(599), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(246), 1,
      sym_metadata,
  [2797] = 4,
    ACTIONS(601), 1,
      sym__indent,
    ACTIONS(604), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(209), 1,
      sym_metadata,
  [2810] = 4,
    ACTIONS(606), 1,
      sym__indent,
    ACTIONS(609), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(212), 1,
      sym_metadata,
  [2823] = 3,
    ACTIONS(429), 1,
      sym_key,
    STATE(208), 1,
      sym_key_value,
    ACTIONS(427), 2,
      sym_tag,
      sym_link,
  [2834] = 4,
    ACTIONS(611), 1,
      sym__indent,
    ACTIONS(614), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(198), 1,
      sym_metadata,
  [2847] = 4,
    ACTIONS(616), 1,
      sym__indent,
    ACTIONS(619), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(213), 1,
      sym_metadata,
  [2860] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(621), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(277), 1,
      sym_metadata,
  [2873] = 4,
    ACTIONS(623), 1,
      sym__indent,
    ACTIONS(626), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(214), 1,
      sym_metadata,
  [2886] = 4,
    ACTIONS(628), 1,
      sym__indent,
    ACTIONS(631), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(195), 1,
      sym_metadata,
  [2899] = 4,
    ACTIONS(633), 1,
      sym__indent,
    ACTIONS(636), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(216), 1,
      sym_metadata,
  [2912] = 4,
    ACTIONS(638), 1,
      sym_rcurlrcurl,
    ACTIONS(640), 1,
      sym_rcurl,
    ACTIONS(642), 1,
      sym__comma,
    STATE(145), 1,
      aux_sym_cost_comp_list_repeat1,
  [2925] = 4,
    ACTIONS(644), 1,
      sym__indent,
    ACTIONS(647), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(219), 1,
      sym_metadata,
  [2938] = 2,
    ACTIONS(651), 1,
      sym_string,
    ACTIONS(649), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [2947] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(653), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(253), 1,
      sym_metadata,
  [2960] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(655), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(269), 1,
      sym_metadata,
  [2973] = 3,
    ACTIONS(597), 1,
      sym__indent,
    STATE(280), 1,
      sym_postings,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [2984] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(657), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(237), 1,
      sym_metadata,
  [2997] = 4,
    ACTIONS(659), 1,
      sym__indent,
    ACTIONS(662), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(230), 1,
      sym_metadata,
  [3010] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(664), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(266), 1,
      sym_metadata,
  [3023] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(666), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(256), 1,
      sym_metadata,
  [3036] = 3,
    ACTIONS(597), 1,
      sym__indent,
    ACTIONS(668), 1,
      sym__eol,
    STATE(178), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3047] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(670), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(263), 1,
      sym_metadata,
  [3060] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(672), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(264), 1,
      sym_metadata,
  [3073] = 2,
    ACTIONS(491), 1,
      sym__eol,
    ACTIONS(674), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [3082] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(676), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(243), 1,
      sym_metadata,
  [3095] = 4,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(678), 1,
      sym__eol,
    STATE(183), 1,
      aux_sym_metadata_repeat1,
    STATE(238), 1,
      sym_metadata,
  [3108] = 4,
    ACTIONS(680), 1,
      sym__indent,
    ACTIONS(683), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(222), 1,
      sym_metadata,
  [3121] = 4,
    ACTIONS(685), 1,
      sym__indent,
    ACTIONS(688), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(234), 1,
      sym_metadata,
  [3134] = 2,
    ACTIONS(692), 1,
      sym__eol,
    ACTIONS(690), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [3143] = 4,
    ACTIONS(642), 1,
      sym__comma,
    ACTIONS(694), 1,
      sym_rcurlrcurl,
    ACTIONS(696), 1,
      sym_rcurl,
    STATE(157), 1,
      aux_sym_cost_comp_list_repeat1,
  [3156] = 3,
    ACTIONS(597), 1,
      sym__indent,
    STATE(275), 1,
      sym_postings,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3167] = 3,
    ACTIONS(698), 1,
      sym__indent,
    ACTIONS(701), 1,
      sym__eol,
    STATE(178), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3178] = 3,
    ACTIONS(597), 1,
      sym__indent,
    STATE(239), 1,
      sym_postings,
    STATE(167), 2,
      sym_posting,
      aux_sym_postings_repeat1,
  [3189] = 4,
    ACTIONS(703), 1,
      sym__indent,
    ACTIONS(706), 1,
      sym__eol,
    STATE(194), 1,
      aux_sym_metadata_repeat1,
    STATE(235), 1,
      sym_metadata,
  [3202] = 2,
    ACTIONS(710), 1,
      sym_rcurl,
    ACTIONS(708), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3210] = 3,
    ACTIONS(423), 1,
      sym_comment,
    ACTIONS(425), 1,
      sym_flag,
    ACTIONS(431), 1,
      sym_account,
  [3220] = 3,
    ACTIONS(94), 1,
      sym__indent,
    ACTIONS(712), 1,
      sym__eol,
    STATE(192), 1,
      aux_sym_metadata_repeat1,
  [3230] = 2,
    ACTIONS(716), 1,
      sym_rcurl,
    ACTIONS(714), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3238] = 2,
    ACTIONS(592), 1,
      sym_rcurl,
    ACTIONS(590), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3246] = 2,
    ACTIONS(720), 1,
      sym_rcurl,
    ACTIONS(718), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3254] = 2,
    ACTIONS(724), 1,
      sym__eol,
    ACTIONS(722), 2,
      sym__indent,
      sym_comment,
  [3262] = 2,
    ACTIONS(728), 1,
      sym_rcurl,
    ACTIONS(726), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3270] = 2,
    ACTIONS(732), 1,
      sym_rcurl,
    ACTIONS(730), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3278] = 2,
    ACTIONS(736), 1,
      sym_rcurl,
    ACTIONS(734), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3286] = 2,
    ACTIONS(740), 1,
      sym_rcurl,
    ACTIONS(738), 2,
      sym_rcurlrcurl,
      sym__comma,
  [3294] = 3,
    ACTIONS(742), 1,
      sym__indent,
    ACTIONS(745), 1,
      sym__eol,
    STATE(192), 1,
      aux_sym_metadata_repeat1,
  [3304] = 1,
    ACTIONS(747), 3,
      sym__indent,
      sym_tag,
      sym_link,
  [3310] = 3,
    ACTIONS(712), 1,
      sym__eol,
    ACTIONS(749), 1,
      sym__indent,
    STATE(192), 1,
      aux_sym_metadata_repeat1,
  [3320] = 2,
    ACTIONS(752), 1,
      sym__indent,
    ACTIONS(754), 1,
      sym__eol,
  [3327] = 2,
    ACTIONS(756), 1,
      sym__indent,
    ACTIONS(758), 1,
      sym__eol,
  [3334] = 2,
    ACTIONS(760), 1,
      sym_key,
    STATE(241), 1,
      sym_key_value_line,
  [3341] = 2,
    ACTIONS(762), 1,
      sym__indent,
    ACTIONS(764), 1,
      sym__eol,
  [3348] = 1,
    ACTIONS(427), 2,
      sym_tag,
      sym_link,
  [3353] = 2,
    ACTIONS(766), 1,
      sym__indent,
    ACTIONS(768), 1,
      sym__eol,
  [3360] = 2,
    ACTIONS(429), 1,
      sym_key,
    STATE(208), 1,
      sym_key_value,
  [3367] = 2,
    ACTIONS(770), 1,
      sym__indent,
    ACTIONS(772), 1,
      sym__eol,
  [3374] = 2,
    ACTIONS(774), 1,
      sym__indent,
    ACTIONS(776), 1,
      sym__eol,
  [3381] = 2,
    ACTIONS(760), 1,
      sym_key,
    STATE(240), 1,
      sym_key_value_line,
  [3388] = 2,
    ACTIONS(778), 1,
      sym__indent,
    ACTIONS(780), 1,
      sym__eol,
  [3395] = 2,
    ACTIONS(782), 1,
      sym__indent,
    ACTIONS(784), 1,
      sym__eol,
  [3402] = 2,
    ACTIONS(786), 1,
      sym__indent,
    ACTIONS(788), 1,
      sym__eol,
  [3409] = 2,
    ACTIONS(745), 1,
      sym__eol,
    ACTIONS(790), 1,
      sym__indent,
  [3416] = 2,
    ACTIONS(792), 1,
      sym__indent,
    ACTIONS(794), 1,
      sym__eol,
  [3423] = 2,
    ACTIONS(701), 1,
      sym__eol,
    ACTIONS(796), 1,
      sym__indent,
  [3430] = 2,
    ACTIONS(798), 1,
      sym__indent,
    ACTIONS(800), 1,
      sym__eol,
  [3437] = 2,
    ACTIONS(802), 1,
      sym__indent,
    ACTIONS(804), 1,
      sym__eol,
  [3444] = 2,
    ACTIONS(806), 1,
      sym__indent,
    ACTIONS(808), 1,
      sym__eol,
  [3451] = 2,
    ACTIONS(810), 1,
      sym__indent,
    ACTIONS(812), 1,
      sym__eol,
  [3458] = 2,
    ACTIONS(814), 1,
      sym__indent,
    ACTIONS(816), 1,
      sym__eol,
  [3465] = 2,
    ACTIONS(818), 1,
      sym__indent,
    ACTIONS(820), 1,
      sym__eol,
  [3472] = 2,
    ACTIONS(822), 1,
      sym_string,
    STATE(100), 1,
      sym_filename,
  [3479] = 2,
    ACTIONS(824), 1,
      sym__indent,
    ACTIONS(826), 1,
      sym__eol,
  [3486] = 2,
    ACTIONS(828), 1,
      sym__indent,
    ACTIONS(830), 1,
      sym__eol,
  [3493] = 2,
    ACTIONS(832), 1,
      sym__indent,
    ACTIONS(834), 1,
      sym__eol,
  [3500] = 2,
    ACTIONS(836), 1,
      sym__indent,
    ACTIONS(838), 1,
      sym__eol,
  [3507] = 2,
    ACTIONS(840), 1,
      sym__indent,
    ACTIONS(842), 1,
      sym__eol,
  [3514] = 2,
    ACTIONS(844), 1,
      sym__indent,
    ACTIONS(846), 1,
      sym__eol,
  [3521] = 2,
    ACTIONS(848), 1,
      sym__indent,
    ACTIONS(850), 1,
      sym__eol,
  [3528] = 2,
    ACTIONS(852), 1,
      sym__indent,
    ACTIONS(854), 1,
      sym__eol,
  [3535] = 2,
    ACTIONS(856), 1,
      sym__indent,
    ACTIONS(858), 1,
      sym__eol,
  [3542] = 2,
    ACTIONS(860), 1,
      sym__indent,
    ACTIONS(862), 1,
      sym__eol,
  [3549] = 2,
    ACTIONS(864), 1,
      sym__indent,
    ACTIONS(866), 1,
      sym__eol,
  [3556] = 2,
    ACTIONS(868), 1,
      sym__indent,
    ACTIONS(870), 1,
      sym__eol,
  [3563] = 2,
    ACTIONS(872), 1,
      sym__indent,
    ACTIONS(874), 1,
      sym__eol,
  [3570] = 2,
    ACTIONS(876), 1,
      sym__indent,
    ACTIONS(878), 1,
      sym__eol,
  [3577] = 2,
    ACTIONS(880), 1,
      sym__indent,
    ACTIONS(882), 1,
      sym__eol,
  [3584] = 2,
    ACTIONS(884), 1,
      sym__indent,
    ACTIONS(886), 1,
      sym__eol,
  [3591] = 2,
    ACTIONS(888), 1,
      sym__indent,
    ACTIONS(890), 1,
      sym__eol,
  [3598] = 2,
    ACTIONS(892), 1,
      sym__indent,
    ACTIONS(894), 1,
      sym__eol,
  [3605] = 2,
    ACTIONS(896), 1,
      sym__indent,
    ACTIONS(898), 1,
      sym__eol,
  [3612] = 1,
    ACTIONS(900), 1,
      sym__eol,
  [3616] = 1,
    ACTIONS(902), 1,
      sym__eol,
  [3620] = 1,
    ACTIONS(904), 1,
      sym__eol,
  [3624] = 1,
    ACTIONS(906), 1,
      sym__eol,
  [3628] = 1,
    ACTIONS(908), 1,
      sym__eol,
  [3632] = 1,
    ACTIONS(910), 1,
      sym_currency,
  [3636] = 1,
    ACTIONS(912), 1,
      sym__eol,
  [3640] = 1,
    ACTIONS(914), 1,
      sym__eol,
  [3644] = 1,
    ACTIONS(916), 1,
      sym__colon,
  [3648] = 1,
    ACTIONS(918), 1,
      sym__eol,
  [3652] = 1,
    ACTIONS(920), 1,
      sym_string,
  [3656] = 1,
    ACTIONS(922), 1,
      sym__eol,
  [3660] = 1,
    ACTIONS(924), 1,
      sym_rcurl,
  [3664] = 1,
    ACTIONS(926), 1,
      sym__eol,
  [3668] = 1,
    ACTIONS(928), 1,
      sym__eol,
  [3672] = 1,
    ACTIONS(930), 1,
      sym_string,
  [3676] = 1,
    ACTIONS(932), 1,
      sym__eol,
  [3680] = 1,
    ACTIONS(473), 1,
      sym__eol,
  [3684] = 1,
    ACTIONS(934), 1,
      sym__eol,
  [3688] = 1,
    ACTIONS(936), 1,
      sym__eol,
  [3692] = 1,
    ACTIONS(938), 1,
      sym__eol,
  [3696] = 1,
    ACTIONS(940), 1,
      sym_currency,
  [3700] = 1,
    ACTIONS(942), 1,
      sym__eol,
  [3704] = 1,
    ACTIONS(944), 1,
      sym__eol,
  [3708] = 1,
    ACTIONS(946), 1,
      sym__eol,
  [3712] = 1,
    ACTIONS(924), 1,
      sym_rcurlrcurl,
  [3716] = 1,
    ACTIONS(948), 1,
      sym__eol,
  [3720] = 1,
    ACTIONS(950), 1,
      sym__eol,
  [3724] = 1,
    ACTIONS(952), 1,
      sym_account,
  [3728] = 1,
    ACTIONS(954), 1,
      sym__eol,
  [3732] = 1,
    ACTIONS(956), 1,
      sym__eol,
  [3736] = 1,
    ACTIONS(958), 1,
      sym_string,
  [3740] = 1,
    ACTIONS(960), 1,
      sym__eol,
  [3744] = 1,
    ACTIONS(962), 1,
      sym__eol,
  [3748] = 1,
    ACTIONS(964), 1,
      sym_string,
  [3752] = 1,
    ACTIONS(966), 1,
      sym_string,
  [3756] = 1,
    ACTIONS(968), 1,
      sym_account,
  [3760] = 1,
    ACTIONS(970), 1,
      sym_string,
  [3764] = 1,
    ACTIONS(972), 1,
      sym__eol,
  [3768] = 1,
    ACTIONS(974), 1,
      sym__eol,
  [3772] = 1,
    ACTIONS(976), 1,
      sym__eol,
  [3776] = 1,
    ACTIONS(978), 1,
      sym__eol,
  [3780] = 1,
    ACTIONS(980), 1,
      sym_account,
  [3784] = 1,
    ACTIONS(982), 1,
      sym__eol,
  [3788] = 1,
    ACTIONS(984), 1,
      aux_sym__skipped_lines_token1,
  [3792] = 1,
    ACTIONS(986), 1,
      sym_account,
  [3796] = 1,
    ACTIONS(988), 1,
      sym_account,
  [3800] = 1,
    ACTIONS(990), 1,
      sym_string,
  [3804] = 1,
    ACTIONS(329), 1,
      sym__eol,
  [3808] = 1,
    ACTIONS(992), 1,
      sym_account,
  [3812] = 1,
    ACTIONS(994), 1,
      sym_string,
  [3816] = 1,
    ACTIONS(996), 1,
      sym_currency,
  [3820] = 1,
    ACTIONS(998), 1,
      sym_account,
  [3824] = 1,
    ACTIONS(1000), 1,
      sym_account,
  [3828] = 1,
    ACTIONS(1002), 1,
      sym__eol,
  [3832] = 1,
    ACTIONS(1004), 1,
      ts_builtin_sym_end,
  [3836] = 1,
    ACTIONS(1006), 1,
      sym_string,
  [3840] = 1,
    ACTIONS(1008), 1,
      sym_string,
  [3844] = 1,
    ACTIONS(1010), 1,
      sym__eol,
  [3848] = 1,
    ACTIONS(1012), 1,
      sym__eol,
  [3852] = 1,
    ACTIONS(1014), 1,
      sym__eol,
  [3856] = 1,
    ACTIONS(1016), 1,
      sym_tag,
  [3860] = 1,
    ACTIONS(1018), 1,
      sym_tag,
  [3864] = 1,
    ACTIONS(1020), 1,
      sym__eol,
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
  [SMALL_STATE(23)] = 687,
  [SMALL_STATE(24)] = 707,
  [SMALL_STATE(25)] = 725,
  [SMALL_STATE(26)] = 743,
  [SMALL_STATE(27)] = 759,
  [SMALL_STATE(28)] = 777,
  [SMALL_STATE(29)] = 793,
  [SMALL_STATE(30)] = 809,
  [SMALL_STATE(31)] = 825,
  [SMALL_STATE(32)] = 841,
  [SMALL_STATE(33)] = 857,
  [SMALL_STATE(34)] = 873,
  [SMALL_STATE(35)] = 889,
  [SMALL_STATE(36)] = 905,
  [SMALL_STATE(37)] = 921,
  [SMALL_STATE(38)] = 937,
  [SMALL_STATE(39)] = 953,
  [SMALL_STATE(40)] = 969,
  [SMALL_STATE(41)] = 985,
  [SMALL_STATE(42)] = 1001,
  [SMALL_STATE(43)] = 1017,
  [SMALL_STATE(44)] = 1033,
  [SMALL_STATE(45)] = 1049,
  [SMALL_STATE(46)] = 1065,
  [SMALL_STATE(47)] = 1081,
  [SMALL_STATE(48)] = 1097,
  [SMALL_STATE(49)] = 1113,
  [SMALL_STATE(50)] = 1129,
  [SMALL_STATE(51)] = 1145,
  [SMALL_STATE(52)] = 1161,
  [SMALL_STATE(53)] = 1177,
  [SMALL_STATE(54)] = 1193,
  [SMALL_STATE(55)] = 1209,
  [SMALL_STATE(56)] = 1225,
  [SMALL_STATE(57)] = 1241,
  [SMALL_STATE(58)] = 1257,
  [SMALL_STATE(59)] = 1273,
  [SMALL_STATE(60)] = 1289,
  [SMALL_STATE(61)] = 1305,
  [SMALL_STATE(62)] = 1321,
  [SMALL_STATE(63)] = 1337,
  [SMALL_STATE(64)] = 1353,
  [SMALL_STATE(65)] = 1369,
  [SMALL_STATE(66)] = 1385,
  [SMALL_STATE(67)] = 1401,
  [SMALL_STATE(68)] = 1417,
  [SMALL_STATE(69)] = 1454,
  [SMALL_STATE(70)] = 1473,
  [SMALL_STATE(71)] = 1490,
  [SMALL_STATE(72)] = 1507,
  [SMALL_STATE(73)] = 1524,
  [SMALL_STATE(74)] = 1557,
  [SMALL_STATE(75)] = 1591,
  [SMALL_STATE(76)] = 1625,
  [SMALL_STATE(77)] = 1640,
  [SMALL_STATE(78)] = 1661,
  [SMALL_STATE(79)] = 1688,
  [SMALL_STATE(80)] = 1708,
  [SMALL_STATE(81)] = 1734,
  [SMALL_STATE(82)] = 1756,
  [SMALL_STATE(83)] = 1776,
  [SMALL_STATE(84)] = 1802,
  [SMALL_STATE(85)] = 1822,
  [SMALL_STATE(86)] = 1842,
  [SMALL_STATE(87)] = 1867,
  [SMALL_STATE(88)] = 1884,
  [SMALL_STATE(89)] = 1901,
  [SMALL_STATE(90)] = 1918,
  [SMALL_STATE(91)] = 1935,
  [SMALL_STATE(92)] = 1952,
  [SMALL_STATE(93)] = 1969,
  [SMALL_STATE(94)] = 1986,
  [SMALL_STATE(95)] = 2003,
  [SMALL_STATE(96)] = 2028,
  [SMALL_STATE(97)] = 2045,
  [SMALL_STATE(98)] = 2062,
  [SMALL_STATE(99)] = 2087,
  [SMALL_STATE(100)] = 2112,
  [SMALL_STATE(101)] = 2135,
  [SMALL_STATE(102)] = 2152,
  [SMALL_STATE(103)] = 2169,
  [SMALL_STATE(104)] = 2186,
  [SMALL_STATE(105)] = 2198,
  [SMALL_STATE(106)] = 2212,
  [SMALL_STATE(107)] = 2224,
  [SMALL_STATE(108)] = 2244,
  [SMALL_STATE(109)] = 2256,
  [SMALL_STATE(110)] = 2268,
  [SMALL_STATE(111)] = 2286,
  [SMALL_STATE(112)] = 2301,
  [SMALL_STATE(113)] = 2316,
  [SMALL_STATE(114)] = 2331,
  [SMALL_STATE(115)] = 2348,
  [SMALL_STATE(116)] = 2363,
  [SMALL_STATE(117)] = 2378,
  [SMALL_STATE(118)] = 2393,
  [SMALL_STATE(119)] = 2410,
  [SMALL_STATE(120)] = 2426,
  [SMALL_STATE(121)] = 2438,
  [SMALL_STATE(122)] = 2450,
  [SMALL_STATE(123)] = 2460,
  [SMALL_STATE(124)] = 2474,
  [SMALL_STATE(125)] = 2486,
  [SMALL_STATE(126)] = 2500,
  [SMALL_STATE(127)] = 2516,
  [SMALL_STATE(128)] = 2532,
  [SMALL_STATE(129)] = 2548,
  [SMALL_STATE(130)] = 2558,
  [SMALL_STATE(131)] = 2574,
  [SMALL_STATE(132)] = 2586,
  [SMALL_STATE(133)] = 2602,
  [SMALL_STATE(134)] = 2614,
  [SMALL_STATE(135)] = 2630,
  [SMALL_STATE(136)] = 2640,
  [SMALL_STATE(137)] = 2652,
  [SMALL_STATE(138)] = 2664,
  [SMALL_STATE(139)] = 2680,
  [SMALL_STATE(140)] = 2692,
  [SMALL_STATE(141)] = 2708,
  [SMALL_STATE(142)] = 2721,
  [SMALL_STATE(143)] = 2734,
  [SMALL_STATE(144)] = 2747,
  [SMALL_STATE(145)] = 2760,
  [SMALL_STATE(146)] = 2773,
  [SMALL_STATE(147)] = 2784,
  [SMALL_STATE(148)] = 2797,
  [SMALL_STATE(149)] = 2810,
  [SMALL_STATE(150)] = 2823,
  [SMALL_STATE(151)] = 2834,
  [SMALL_STATE(152)] = 2847,
  [SMALL_STATE(153)] = 2860,
  [SMALL_STATE(154)] = 2873,
  [SMALL_STATE(155)] = 2886,
  [SMALL_STATE(156)] = 2899,
  [SMALL_STATE(157)] = 2912,
  [SMALL_STATE(158)] = 2925,
  [SMALL_STATE(159)] = 2938,
  [SMALL_STATE(160)] = 2947,
  [SMALL_STATE(161)] = 2960,
  [SMALL_STATE(162)] = 2973,
  [SMALL_STATE(163)] = 2984,
  [SMALL_STATE(164)] = 2997,
  [SMALL_STATE(165)] = 3010,
  [SMALL_STATE(166)] = 3023,
  [SMALL_STATE(167)] = 3036,
  [SMALL_STATE(168)] = 3047,
  [SMALL_STATE(169)] = 3060,
  [SMALL_STATE(170)] = 3073,
  [SMALL_STATE(171)] = 3082,
  [SMALL_STATE(172)] = 3095,
  [SMALL_STATE(173)] = 3108,
  [SMALL_STATE(174)] = 3121,
  [SMALL_STATE(175)] = 3134,
  [SMALL_STATE(176)] = 3143,
  [SMALL_STATE(177)] = 3156,
  [SMALL_STATE(178)] = 3167,
  [SMALL_STATE(179)] = 3178,
  [SMALL_STATE(180)] = 3189,
  [SMALL_STATE(181)] = 3202,
  [SMALL_STATE(182)] = 3210,
  [SMALL_STATE(183)] = 3220,
  [SMALL_STATE(184)] = 3230,
  [SMALL_STATE(185)] = 3238,
  [SMALL_STATE(186)] = 3246,
  [SMALL_STATE(187)] = 3254,
  [SMALL_STATE(188)] = 3262,
  [SMALL_STATE(189)] = 3270,
  [SMALL_STATE(190)] = 3278,
  [SMALL_STATE(191)] = 3286,
  [SMALL_STATE(192)] = 3294,
  [SMALL_STATE(193)] = 3304,
  [SMALL_STATE(194)] = 3310,
  [SMALL_STATE(195)] = 3320,
  [SMALL_STATE(196)] = 3327,
  [SMALL_STATE(197)] = 3334,
  [SMALL_STATE(198)] = 3341,
  [SMALL_STATE(199)] = 3348,
  [SMALL_STATE(200)] = 3353,
  [SMALL_STATE(201)] = 3360,
  [SMALL_STATE(202)] = 3367,
  [SMALL_STATE(203)] = 3374,
  [SMALL_STATE(204)] = 3381,
  [SMALL_STATE(205)] = 3388,
  [SMALL_STATE(206)] = 3395,
  [SMALL_STATE(207)] = 3402,
  [SMALL_STATE(208)] = 3409,
  [SMALL_STATE(209)] = 3416,
  [SMALL_STATE(210)] = 3423,
  [SMALL_STATE(211)] = 3430,
  [SMALL_STATE(212)] = 3437,
  [SMALL_STATE(213)] = 3444,
  [SMALL_STATE(214)] = 3451,
  [SMALL_STATE(215)] = 3458,
  [SMALL_STATE(216)] = 3465,
  [SMALL_STATE(217)] = 3472,
  [SMALL_STATE(218)] = 3479,
  [SMALL_STATE(219)] = 3486,
  [SMALL_STATE(220)] = 3493,
  [SMALL_STATE(221)] = 3500,
  [SMALL_STATE(222)] = 3507,
  [SMALL_STATE(223)] = 3514,
  [SMALL_STATE(224)] = 3521,
  [SMALL_STATE(225)] = 3528,
  [SMALL_STATE(226)] = 3535,
  [SMALL_STATE(227)] = 3542,
  [SMALL_STATE(228)] = 3549,
  [SMALL_STATE(229)] = 3556,
  [SMALL_STATE(230)] = 3563,
  [SMALL_STATE(231)] = 3570,
  [SMALL_STATE(232)] = 3577,
  [SMALL_STATE(233)] = 3584,
  [SMALL_STATE(234)] = 3591,
  [SMALL_STATE(235)] = 3598,
  [SMALL_STATE(236)] = 3605,
  [SMALL_STATE(237)] = 3612,
  [SMALL_STATE(238)] = 3616,
  [SMALL_STATE(239)] = 3620,
  [SMALL_STATE(240)] = 3624,
  [SMALL_STATE(241)] = 3628,
  [SMALL_STATE(242)] = 3632,
  [SMALL_STATE(243)] = 3636,
  [SMALL_STATE(244)] = 3640,
  [SMALL_STATE(245)] = 3644,
  [SMALL_STATE(246)] = 3648,
  [SMALL_STATE(247)] = 3652,
  [SMALL_STATE(248)] = 3656,
  [SMALL_STATE(249)] = 3660,
  [SMALL_STATE(250)] = 3664,
  [SMALL_STATE(251)] = 3668,
  [SMALL_STATE(252)] = 3672,
  [SMALL_STATE(253)] = 3676,
  [SMALL_STATE(254)] = 3680,
  [SMALL_STATE(255)] = 3684,
  [SMALL_STATE(256)] = 3688,
  [SMALL_STATE(257)] = 3692,
  [SMALL_STATE(258)] = 3696,
  [SMALL_STATE(259)] = 3700,
  [SMALL_STATE(260)] = 3704,
  [SMALL_STATE(261)] = 3708,
  [SMALL_STATE(262)] = 3712,
  [SMALL_STATE(263)] = 3716,
  [SMALL_STATE(264)] = 3720,
  [SMALL_STATE(265)] = 3724,
  [SMALL_STATE(266)] = 3728,
  [SMALL_STATE(267)] = 3732,
  [SMALL_STATE(268)] = 3736,
  [SMALL_STATE(269)] = 3740,
  [SMALL_STATE(270)] = 3744,
  [SMALL_STATE(271)] = 3748,
  [SMALL_STATE(272)] = 3752,
  [SMALL_STATE(273)] = 3756,
  [SMALL_STATE(274)] = 3760,
  [SMALL_STATE(275)] = 3764,
  [SMALL_STATE(276)] = 3768,
  [SMALL_STATE(277)] = 3772,
  [SMALL_STATE(278)] = 3776,
  [SMALL_STATE(279)] = 3780,
  [SMALL_STATE(280)] = 3784,
  [SMALL_STATE(281)] = 3788,
  [SMALL_STATE(282)] = 3792,
  [SMALL_STATE(283)] = 3796,
  [SMALL_STATE(284)] = 3800,
  [SMALL_STATE(285)] = 3804,
  [SMALL_STATE(286)] = 3808,
  [SMALL_STATE(287)] = 3812,
  [SMALL_STATE(288)] = 3816,
  [SMALL_STATE(289)] = 3820,
  [SMALL_STATE(290)] = 3824,
  [SMALL_STATE(291)] = 3828,
  [SMALL_STATE(292)] = 3832,
  [SMALL_STATE(293)] = 3836,
  [SMALL_STATE(294)] = 3840,
  [SMALL_STATE(295)] = 3844,
  [SMALL_STATE(296)] = 3848,
  [SMALL_STATE(297)] = 3852,
  [SMALL_STATE(298)] = 3856,
  [SMALL_STATE(299)] = 3860,
  [SMALL_STATE(300)] = 3864,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(281),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(300),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(68),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(299),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(298),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(197),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(204),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(247),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(294),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(293),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 2, .production_id = 1), SHIFT(201),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 7), SHIFT(201),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 7),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(94),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(89),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(11),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(11),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(22),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 23),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 50),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 14),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 13),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 12),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 5),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 16),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 19),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 74),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 73),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 72),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 6),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 20),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 4),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 21),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 16),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 18),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 22),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 54),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 40),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 26),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 53),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 52),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 24),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 41),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 51),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 42),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 17),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 49),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 3),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 25),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 48),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 15),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 47),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 43),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 46),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 45),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 44),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [315] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 28), SHIFT(201),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 28),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 9), SHIFT(201),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 9),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 32),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 32),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 58), SHIFT(201),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 58),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 36), SHIFT(201),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 36),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 8), SHIFT(201),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 8),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 27), SHIFT(201),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 27),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_value, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__key_value_value, 1),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [445] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [447] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_currency_list_repeat1, 2),
  [449] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_currency_list_repeat1, 2), SHIFT_REPEAT(242),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_open_repeat1, 2),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(116),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 2),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_currency_list, 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_currency_list, 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_value, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 59), SHIFT(201),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 59),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [488] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(199),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2), SHIFT_REPEAT(123),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_tags_and_links, 1), SHIFT(199),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_and_links, 1),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [505] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 68), SHIFT(201),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 68),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [512] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 10), SHIFT(201),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 10),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [519] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 34), SHIFT(201),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 34),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 64),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 64),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 78), SHIFT(201),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 78),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [537] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 29), SHIFT(201),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 29),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [546] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 37), SHIFT(201),
  [549] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 37),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [563] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 56), SHIFT(201),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 56),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [570] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 28), SHIFT(201),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 28),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 10), SHIFT(201),
  [578] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 10),
  [580] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 78), SHIFT(201),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 78),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 68), SHIFT(201),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 68),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cost_comp_list_repeat1, 2), SHIFT_REPEAT(13),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [599] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [601] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 59), SHIFT(201),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 59),
  [606] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 58), SHIFT(201),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 58),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 1), SHIFT(201),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 1),
  [616] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 56), SHIFT(201),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 56),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 37), SHIFT(201),
  [626] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 37),
  [628] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 36), SHIFT(201),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 36),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 34), SHIFT(201),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 34),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 2),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 2),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [644] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 29), SHIFT(201),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 29),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [657] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 27), SHIFT(201),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 27),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_postings, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [672] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_and_links_repeat1, 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [678] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [680] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 7), SHIFT(201),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 7),
  [685] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 9), SHIFT(201),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 9),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [692] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [696] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2), SHIFT_REPEAT(182),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_postings_repeat1, 2),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 8), SHIFT(201),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 8),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 31),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 31),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 92),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 92),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 83),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 83),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 2),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_annotation, 2),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 82),
  [728] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 82),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 63),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 63),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 62),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 62),
  [742] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(201),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_metadata, 1), SHIFT(201),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 85),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 85),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 66),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 66),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 33),
  [764] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 33),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 35),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 35),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 38),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 38),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 39),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 39),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 70),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 70),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 94),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 94),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 93),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 93),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 91),
  [794] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 91),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_postings_repeat1, 2),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 90),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 90),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 89),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 89),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 88),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 88),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 87),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 87),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 86),
  [816] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 86),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 84),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 84),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 30),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 30),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 81),
  [830] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 81),
  [832] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [834] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_opt_booking, 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 80),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 80),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 71),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 71),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 79),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 79),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 57),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 57),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 77),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 77),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 76),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 76),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 2),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value, 2),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 60),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 60),
  [872] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 75),
  [874] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 75),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 61),
  [878] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 61),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_with_tolerance, 4),
  [882] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount_with_tolerance, 4),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 11),
  [886] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 11),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 67),
  [890] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 67),
  [892] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 65),
  [894] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 65),
  [896] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 69),
  [898] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 69),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [914] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1004] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
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
