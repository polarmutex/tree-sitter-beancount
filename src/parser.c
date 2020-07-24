#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 313
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 132
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym__indent = 1,
  aux_sym__eol_token1 = 2,
  sym_comment = 3,
  sym__pipe = 4,
  sym__atat = 5,
  sym__at = 6,
  sym__lcurllcurl = 7,
  sym__rcurlrcurl = 8,
  sym__lcurl = 9,
  sym__rcurl = 10,
  sym__equal = 11,
  sym__comma = 12,
  sym__tilde = 13,
  sym__hash = 14,
  sym__asterisk = 15,
  sym__slash = 16,
  anon_sym_COLON = 17,
  sym__plus = 18,
  sym__minus = 19,
  sym__lparen = 20,
  sym__rparen = 21,
  sym_flag = 22,
  anon_sym_TRUE = 23,
  anon_sym_FALSE = 24,
  sym_date = 25,
  anon_sym_Assets = 26,
  anon_sym_Liabilities = 27,
  anon_sym_Equity = 28,
  anon_sym_Income = 29,
  anon_sym_Expenses = 30,
  aux_sym__account_name_token1 = 31,
  aux_sym__account_name_token2 = 32,
  aux_sym_account_token1 = 33,
  sym_currency = 34,
  anon_sym_DQUOTE = 35,
  aux_sym__string_token1 = 36,
  aux_sym__string_token2 = 37,
  sym__number = 38,
  sym_tag = 39,
  sym_link = 40,
  sym_key = 41,
  anon_sym_txn = 42,
  anon_sym_pushtag = 43,
  anon_sym_poptag = 44,
  anon_sym_pushmeta = 45,
  anon_sym_popmeta = 46,
  anon_sym_open = 47,
  anon_sym_close = 48,
  anon_sym_commodity = 49,
  anon_sym_pad = 50,
  anon_sym_balance = 51,
  anon_sym_price = 52,
  anon_sym_event = 53,
  anon_sym_query = 54,
  anon_sym_note = 55,
  anon_sym_document = 56,
  anon_sym_custom = 57,
  anon_sym_option = 58,
  anon_sym_include = 59,
  anon_sym_plugin = 60,
  sym__ASCII = 61,
  sym__UTF_8_1 = 62,
  aux_sym__UTF_8_2_token1 = 63,
  aux_sym__UTF_8_3_token1 = 64,
  aux_sym__UTF_8_3_token2 = 65,
  aux_sym__UTF_8_3_token3 = 66,
  aux_sym__UTF_8_3_token4 = 67,
  aux_sym__UTF_8_4_token1 = 68,
  aux_sym__UTF_8_4_token2 = 69,
  aux_sym__UTF_8_4_token3 = 70,
  sym_file = 71,
  sym__eol = 72,
  sym__colon = 73,
  sym__bool = 74,
  sym__account_type = 75,
  sym__account_name = 76,
  sym_account = 77,
  sym__string = 78,
  sym_txn = 79,
  sym_number_expr = 80,
  sym_txn_strings = 81,
  sym_tags_links = 82,
  sym_transaction = 83,
  sym_optflag = 84,
  sym_posting = 85,
  sym_key_value_line = 86,
  sym_key_value_value = 87,
  sym__posting_or_kv_list = 88,
  sym__currency_list = 89,
  sym_pushtag = 90,
  sym_poptag = 91,
  sym_pushmeta = 92,
  sym_popmeta = 93,
  sym_open = 94,
  sym_opt_booking = 95,
  sym_close = 96,
  sym_commodity = 97,
  sym_pad = 98,
  sym_balance = 99,
  sym_amount = 100,
  sym_amount_tolerance = 101,
  sym_compound_amout = 102,
  sym_cost_spec = 103,
  sym_cost_comp_list = 104,
  sym_cost_comp = 105,
  sym_price = 106,
  sym_event = 107,
  sym_query = 108,
  sym_note = 109,
  sym_filename = 110,
  sym_document = 111,
  sym_custom_value = 112,
  sym_custom = 113,
  sym_entry = 114,
  sym_option = 115,
  sym_include = 116,
  sym_plugin = 117,
  sym_directive = 118,
  sym__declarations = 119,
  sym__UTF_8_2 = 120,
  sym__UTF_8_3 = 121,
  sym__UTF_8_4 = 122,
  sym__UTF_8_ONLY = 123,
  aux_sym_file_repeat1 = 124,
  aux_sym__account_name_repeat1 = 125,
  aux_sym_account_repeat1 = 126,
  aux_sym__string_repeat1 = 127,
  aux_sym_transaction_repeat1 = 128,
  aux_sym_open_repeat1 = 129,
  aux_sym_open_repeat2 = 130,
  aux_sym_custom_repeat1 = 131,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__indent] = "_indent",
  [aux_sym__eol_token1] = "_eol_token1",
  [sym_comment] = "comment",
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
  [anon_sym_COLON] = ":",
  [sym__plus] = "_plus",
  [sym__minus] = "_minus",
  [sym__lparen] = "_lparen",
  [sym__rparen] = "_rparen",
  [sym_flag] = "flag",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_date] = "date",
  [anon_sym_Assets] = "Assets",
  [anon_sym_Liabilities] = "Liabilities",
  [anon_sym_Equity] = "Equity",
  [anon_sym_Income] = "Income",
  [anon_sym_Expenses] = "Expenses",
  [aux_sym__account_name_token1] = "_account_name_token1",
  [aux_sym__account_name_token2] = "_account_name_token2",
  [aux_sym_account_token1] = "account_token1",
  [sym_currency] = "currency",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym__string_token2] = "_string_token2",
  [sym__number] = "_number",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [sym_key] = "key",
  [anon_sym_txn] = "txn",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_pushmeta] = "pushmeta",
  [anon_sym_popmeta] = "popmeta",
  [anon_sym_open] = "open",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_pad] = "pad",
  [anon_sym_balance] = "balance",
  [anon_sym_price] = "price",
  [anon_sym_event] = "event",
  [anon_sym_query] = "query",
  [anon_sym_note] = "note",
  [anon_sym_document] = "document",
  [anon_sym_custom] = "custom",
  [anon_sym_option] = "option",
  [anon_sym_include] = "include",
  [anon_sym_plugin] = "plugin",
  [sym__ASCII] = "_ASCII",
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
  [sym__eol] = "_eol",
  [sym__colon] = "_colon",
  [sym__bool] = "_bool",
  [sym__account_type] = "_account_type",
  [sym__account_name] = "_account_name",
  [sym_account] = "account",
  [sym__string] = "_string",
  [sym_txn] = "txn",
  [sym_number_expr] = "number_expr",
  [sym_txn_strings] = "txn_strings",
  [sym_tags_links] = "tags_links",
  [sym_transaction] = "transaction",
  [sym_optflag] = "optflag",
  [sym_posting] = "posting",
  [sym_key_value_line] = "key_value_line",
  [sym_key_value_value] = "key_value_value",
  [sym__posting_or_kv_list] = "_posting_or_kv_list",
  [sym__currency_list] = "_currency_list",
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
  [sym_compound_amout] = "compound_amout",
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
  [sym_custom] = "custom",
  [sym_entry] = "entry",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym_directive] = "directive",
  [sym__declarations] = "_declarations",
  [sym__UTF_8_2] = "_UTF_8_2",
  [sym__UTF_8_3] = "_UTF_8_3",
  [sym__UTF_8_4] = "_UTF_8_4",
  [sym__UTF_8_ONLY] = "_UTF_8_ONLY",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym__account_name_repeat1] = "_account_name_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_open_repeat2] = "open_repeat2",
  [aux_sym_custom_repeat1] = "custom_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__indent] = sym__indent,
  [aux_sym__eol_token1] = aux_sym__eol_token1,
  [sym_comment] = sym_comment,
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
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__plus] = sym__plus,
  [sym__minus] = sym__minus,
  [sym__lparen] = sym__lparen,
  [sym__rparen] = sym__rparen,
  [sym_flag] = sym_flag,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_date] = sym_date,
  [anon_sym_Assets] = anon_sym_Assets,
  [anon_sym_Liabilities] = anon_sym_Liabilities,
  [anon_sym_Equity] = anon_sym_Equity,
  [anon_sym_Income] = anon_sym_Income,
  [anon_sym_Expenses] = anon_sym_Expenses,
  [aux_sym__account_name_token1] = aux_sym__account_name_token1,
  [aux_sym__account_name_token2] = aux_sym__account_name_token2,
  [aux_sym_account_token1] = aux_sym_account_token1,
  [sym_currency] = sym_currency,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [sym__number] = sym__number,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [sym_key] = sym_key,
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_plugin] = anon_sym_plugin,
  [sym__ASCII] = sym__ASCII,
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
  [sym__eol] = sym__eol,
  [sym__colon] = sym__colon,
  [sym__bool] = sym__bool,
  [sym__account_type] = sym__account_type,
  [sym__account_name] = sym__account_name,
  [sym_account] = sym_account,
  [sym__string] = sym__string,
  [sym_txn] = sym_txn,
  [sym_number_expr] = sym_number_expr,
  [sym_txn_strings] = sym_txn_strings,
  [sym_tags_links] = sym_tags_links,
  [sym_transaction] = sym_transaction,
  [sym_optflag] = sym_optflag,
  [sym_posting] = sym_posting,
  [sym_key_value_line] = sym_key_value_line,
  [sym_key_value_value] = sym_key_value_value,
  [sym__posting_or_kv_list] = sym__posting_or_kv_list,
  [sym__currency_list] = sym__currency_list,
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
  [sym_compound_amout] = sym_compound_amout,
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
  [sym_custom] = sym_custom,
  [sym_entry] = sym_entry,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym_directive] = sym_directive,
  [sym__declarations] = sym__declarations,
  [sym__UTF_8_2] = sym__UTF_8_2,
  [sym__UTF_8_3] = sym__UTF_8_3,
  [sym__UTF_8_4] = sym__UTF_8_4,
  [sym__UTF_8_ONLY] = sym__UTF_8_ONLY,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym__account_name_repeat1] = aux_sym__account_name_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_open_repeat2] = aux_sym_open_repeat2,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
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
  [aux_sym__eol_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_flag] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Assets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Liabilities] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Equity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Income] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expenses] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__account_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__account_name_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_currency] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__number] = {
    .visible = false,
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
  [anon_sym_txn] = {
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
  [anon_sym_open] = {
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
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
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
  [sym__ASCII] = {
    .visible = false,
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
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__colon] = {
    .visible = false,
    .named = true,
  },
  [sym__bool] = {
    .visible = false,
    .named = true,
  },
  [sym__account_type] = {
    .visible = false,
    .named = true,
  },
  [sym__account_name] = {
    .visible = false,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_txn] = {
    .visible = true,
    .named = true,
  },
  [sym_number_expr] = {
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
  [sym_posting] = {
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
  [sym__posting_or_kv_list] = {
    .visible = false,
    .named = true,
  },
  [sym__currency_list] = {
    .visible = false,
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
  [sym_compound_amout] = {
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
  [sym_custom] = {
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
  [sym__UTF_8_2] = {
    .visible = false,
    .named = true,
  },
  [sym__UTF_8_3] = {
    .visible = false,
    .named = true,
  },
  [sym__UTF_8_4] = {
    .visible = false,
    .named = true,
  },
  [sym__UTF_8_ONLY] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__account_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(212);
      if (lookahead == '\t') ADVANCE(213);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '=') ADVANCE(227);
      if (lookahead == '@') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(319);
      if (lookahead == '{') ADVANCE(223);
      if (lookahead == '|') ADVANCE(217);
      if (lookahead == '}') ADVANCE(225);
      if (lookahead == '~') ADVANCE(229);
      if (lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(282);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(282);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(282);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(282);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      if ((0 <= lookahead && lookahead <= 127)) ADVANCE(282);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(282);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(252);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '\\') ADVANCE(207);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (lookahead != 0) ADVANCE(282);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'c') ADVANCE(100);
      if (lookahead == 'd') ADVANCE(123);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'p') ADVANCE(53);
      if (lookahead == 'q') ADVANCE(160);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '~') ADVANCE(229);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(230);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == '}') ADVANCE(167);
      if (lookahead == 224) ADVANCE(201);
      if (lookahead == 237) ADVANCE(200);
      if (lookahead == 240) ADVANCE(203);
      if (lookahead == 244) ADVANCE(199);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(325);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(323);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(321);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(251);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == '1') ADVANCE(170);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(194);
      if (lookahead == '3') ADVANCE(169);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(195);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(301);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(299);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(316);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'g') ADVANCE(297);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'g') ADVANCE(295);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'g') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'h') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 't') ADVANCE(13);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'm') ADVANCE(19);
      if (lookahead == 't') ADVANCE(14);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(314);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 30:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'o') ADVANCE(29);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'p') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 't') ADVANCE(24);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 35:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(256);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 41:
      if (lookahead == 'A') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(240);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(242);
      END_STATE();
    case 44:
      if (lookahead == 'L') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'R') ADVANCE(258);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 46:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 48:
      if (lookahead == 'U') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 'a') ADVANCE(300);
      END_STATE();
    case 51:
      if (lookahead == 'a') ADVANCE(298);
      END_STATE();
    case 52:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'a') ADVANCE(63);
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 54:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 57:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 59:
      if (lookahead == 'c') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 61:
      if (lookahead == 'c') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'c') ADVANCE(72);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(305);
      END_STATE();
    case 64:
      if (lookahead == 'd') ADVANCE(67);
      END_STATE();
    case 65:
      if (lookahead == 'd') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 67:
      if (lookahead == 'e') ADVANCE(315);
      END_STATE();
    case 68:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 69:
      if (lookahead == 'e') ADVANCE(310);
      END_STATE();
    case 70:
      if (lookahead == 'e') ADVANCE(303);
      END_STATE();
    case 71:
      if (lookahead == 'e') ADVANCE(307);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(306);
      END_STATE();
    case 73:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 74:
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 77:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 78:
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(296);
      END_STATE();
    case 83:
      if (lookahead == 'g') ADVANCE(294);
      END_STATE();
    case 84:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 88:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 89:
      if (lookahead == 'i') ADVANCE(99);
      END_STATE();
    case 90:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 91:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 93:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(152);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 96:
      if (lookahead == 'l') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(32);
      if (lookahead == 'u') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 97:
      if (lookahead == 'l') ADVANCE(158);
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 98:
      if (lookahead == 'l') ADVANCE(159);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(95);
      END_STATE();
    case 100:
      if (lookahead == 'l') ADVANCE(127);
      if (lookahead == 'o') ADVANCE(104);
      if (lookahead == 'u') ADVANCE(144);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 102:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 103:
      if (lookahead == 'm') ADVANCE(66);
      END_STATE();
    case 104:
      if (lookahead == 'm') ADVANCE(105);
      END_STATE();
    case 105:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 106:
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 107:
      if (lookahead == 'm') ADVANCE(81);
      END_STATE();
    case 108:
      if (lookahead == 'm') ADVANCE(78);
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 109:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 110:
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 111:
      if (lookahead == 'n') ADVANCE(313);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(317);
      END_STATE();
    case 113:
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 114:
      if (lookahead == 'n') ADVANCE(293);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(302);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(147);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(143);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(103);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(111);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(65);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 126:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 127:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 128:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 129:
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 130:
      if (lookahead == 'p') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 131:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 132:
      if (lookahead == 'p') ADVANCE(80);
      END_STATE();
    case 133:
      if (lookahead == 'q') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(131);
      END_STATE();
    case 134:
      if (lookahead == 'q') ADVANCE(157);
      if (lookahead == 'x') ADVANCE(131);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(165);
      END_STATE();
    case 136:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 137:
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 138:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 139:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(245);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(249);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(246);
      END_STATE();
    case 143:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 144:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 145:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 146:
      if (lookahead == 't') ADVANCE(164);
      END_STATE();
    case 147:
      if (lookahead == 't') ADVANCE(308);
      END_STATE();
    case 148:
      if (lookahead == 't') ADVANCE(311);
      END_STATE();
    case 149:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 150:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 151:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 152:
      if (lookahead == 't') ADVANCE(166);
      END_STATE();
    case 153:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 154:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 155:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 156:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 157:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 158:
      if (lookahead == 'u') ADVANCE(84);
      END_STATE();
    case 159:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 160:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 161:
      if (lookahead == 'u') ADVANCE(107);
      END_STATE();
    case 162:
      if (lookahead == 'v') ADVANCE(79);
      END_STATE();
    case 163:
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 164:
      if (lookahead == 'y') ADVANCE(247);
      END_STATE();
    case 165:
      if (lookahead == 'y') ADVANCE(309);
      END_STATE();
    case 166:
      if (lookahead == 'y') ADVANCE(304);
      END_STATE();
    case 167:
      if (lookahead == '}') ADVANCE(222);
      END_STATE();
    case 168:
      if (lookahead == 224) ADVANCE(201);
      if (lookahead == 237) ADVANCE(200);
      if (lookahead == 240) ADVANCE(203);
      if (lookahead == 244) ADVANCE(199);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(325);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(323);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(250);
      END_STATE();
    case 169:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(8);
      END_STATE();
    case 171:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 172:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 173:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 174:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 175:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(264);
      END_STATE();
    case 176:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 177:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      END_STATE();
    case 178:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(263);
      END_STATE();
    case 179:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 180:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 181:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(270);
      END_STATE();
    case 182:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 183:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(272);
      END_STATE();
    case 184:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(269);
      END_STATE();
    case 185:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      END_STATE();
    case 186:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      END_STATE();
    case 187:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 188:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(273);
      END_STATE();
    case 189:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 190:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(275);
      END_STATE();
    case 191:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(279);
      END_STATE();
    case 192:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      END_STATE();
    case 193:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 194:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 199:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(328);
      END_STATE();
    case 200:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(324);
      END_STATE();
    case 201:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(322);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 203:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(326);
      END_STATE();
    case 204:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 205:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 206:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 207:
      if (lookahead != 0) ADVANCE(283);
      END_STATE();
    case 208:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == 'A') ADVANCE(136);
      if (lookahead == 'E') ADVANCE(133);
      if (lookahead == 'F') ADVANCE(41);
      if (lookahead == 'I') ADVANCE(109);
      if (lookahead == 'L') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(46);
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 209:
      if (eof) ADVANCE(212);
      if (lookahead == '\n') ADVANCE(214);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(198);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      END_STATE();
    case 210:
      if (eof) ADVANCE(212);
      if (lookahead == '!') ADVANCE(239);
      if (lookahead == '#') ADVANCE(231);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == '*') ADVANCE(232);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == '/') ADVANCE(233);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == '^') ADVANCE(206);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'p') ADVANCE(96);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(225);
      if (lookahead == '~') ADVANCE(229);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(204);
      END_STATE();
    case 211:
      if (eof) ADVANCE(212);
      if (lookahead == '"') ADVANCE(281);
      if (lookahead == '#') ADVANCE(205);
      if (lookahead == '(') ADVANCE(237);
      if (lookahead == ')') ADVANCE(238);
      if (lookahead == '+') ADVANCE(235);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(236);
      if (lookahead == ':') ADVANCE(234);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead == '@') ADVANCE(220);
      if (lookahead == 'A') ADVANCE(137);
      if (lookahead == 'E') ADVANCE(134);
      if (lookahead == 'F') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(110);
      if (lookahead == 'L') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'p') ADVANCE(97);
      if (lookahead == '{') ADVANCE(224);
      if (lookahead == '}') ADVANCE(226);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(287);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(191);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(320);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__indent);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym__eol_token1);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ';') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__pipe);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__atat);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__at);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__at);
      if (lookahead == '@') ADVANCE(218);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__lcurllcurl);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__rcurlrcurl);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__lcurl);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__lcurl);
      if (lookahead == '{') ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__rcurl);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__rcurl);
      if (lookahead == '}') ADVANCE(222);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__equal);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__comma);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__tilde);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__hash);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__hash);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__asterisk);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__slash);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__plus);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__minus);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__lparen);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__rparen);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(anon_sym_TRUE);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(275);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_FALSE);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__account_name_token1);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym__account_name_token2);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_account_token1);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(241);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(243);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(275);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(257);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'S') ADVANCE(255);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'U') ADVANCE(254);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(259);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(260);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(261);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(266);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(263);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(268);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(265);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(267);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(272);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(269);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(274);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(276);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(273);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(278);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(275);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(277);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(253);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '.') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '.') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '.') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__number);
      if (lookahead == ',') ADVANCE(6);
      if (lookahead == '.') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(290);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_txn);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_pushtag);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_poptag);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_popmeta);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_option);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_plugin);
      if (lookahead == ':') ADVANCE(292);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__ASCII);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__UTF_8_1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym__UTF_8_2_token1);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token1);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token2);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token3);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token4);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token1);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token2);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token3);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 211},
  [2] = {.lex_state = 211},
  [3] = {.lex_state = 211},
  [4] = {.lex_state = 210},
  [5] = {.lex_state = 210},
  [6] = {.lex_state = 210},
  [7] = {.lex_state = 210},
  [8] = {.lex_state = 210},
  [9] = {.lex_state = 210},
  [10] = {.lex_state = 210},
  [11] = {.lex_state = 210},
  [12] = {.lex_state = 210},
  [13] = {.lex_state = 210},
  [14] = {.lex_state = 210},
  [15] = {.lex_state = 210},
  [16] = {.lex_state = 210},
  [17] = {.lex_state = 210},
  [18] = {.lex_state = 210},
  [19] = {.lex_state = 208},
  [20] = {.lex_state = 208},
  [21] = {.lex_state = 210},
  [22] = {.lex_state = 210},
  [23] = {.lex_state = 208},
  [24] = {.lex_state = 210},
  [25] = {.lex_state = 210},
  [26] = {.lex_state = 210},
  [27] = {.lex_state = 211},
  [28] = {.lex_state = 210},
  [29] = {.lex_state = 210},
  [30] = {.lex_state = 211},
  [31] = {.lex_state = 210},
  [32] = {.lex_state = 210},
  [33] = {.lex_state = 210},
  [34] = {.lex_state = 210},
  [35] = {.lex_state = 210},
  [36] = {.lex_state = 210},
  [37] = {.lex_state = 210},
  [38] = {.lex_state = 210},
  [39] = {.lex_state = 210},
  [40] = {.lex_state = 210},
  [41] = {.lex_state = 210},
  [42] = {.lex_state = 210},
  [43] = {.lex_state = 210},
  [44] = {.lex_state = 210},
  [45] = {.lex_state = 210},
  [46] = {.lex_state = 210},
  [47] = {.lex_state = 210},
  [48] = {.lex_state = 210},
  [49] = {.lex_state = 210},
  [50] = {.lex_state = 210},
  [51] = {.lex_state = 210},
  [52] = {.lex_state = 209},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 208},
  [55] = {.lex_state = 208},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 208},
  [64] = {.lex_state = 208},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 208},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 208},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 168},
  [76] = {.lex_state = 168},
  [77] = {.lex_state = 168},
  [78] = {.lex_state = 168},
  [79] = {.lex_state = 168},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 168},
  [82] = {.lex_state = 3},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 168},
  [86] = {.lex_state = 168},
  [87] = {.lex_state = 168},
  [88] = {.lex_state = 210},
  [89] = {.lex_state = 210},
  [90] = {.lex_state = 210},
  [91] = {.lex_state = 210},
  [92] = {.lex_state = 210},
  [93] = {.lex_state = 210},
  [94] = {.lex_state = 210},
  [95] = {.lex_state = 210},
  [96] = {.lex_state = 210},
  [97] = {.lex_state = 210},
  [98] = {.lex_state = 210},
  [99] = {.lex_state = 210},
  [100] = {.lex_state = 209},
  [101] = {.lex_state = 210},
  [102] = {.lex_state = 210},
  [103] = {.lex_state = 210},
  [104] = {.lex_state = 210},
  [105] = {.lex_state = 210},
  [106] = {.lex_state = 210},
  [107] = {.lex_state = 210},
  [108] = {.lex_state = 4},
  [109] = {.lex_state = 209},
  [110] = {.lex_state = 210},
  [111] = {.lex_state = 210},
  [112] = {.lex_state = 210},
  [113] = {.lex_state = 210},
  [114] = {.lex_state = 210},
  [115] = {.lex_state = 210},
  [116] = {.lex_state = 210},
  [117] = {.lex_state = 210},
  [118] = {.lex_state = 210},
  [119] = {.lex_state = 210},
  [120] = {.lex_state = 210},
  [121] = {.lex_state = 210},
  [122] = {.lex_state = 208},
  [123] = {.lex_state = 208},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 211},
  [128] = {.lex_state = 5},
  [129] = {.lex_state = 211},
  [130] = {.lex_state = 3},
  [131] = {.lex_state = 211},
  [132] = {.lex_state = 3},
  [133] = {.lex_state = 211},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 211},
  [136] = {.lex_state = 211},
  [137] = {.lex_state = 211},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 3},
  [140] = {.lex_state = 211},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 5},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 5},
  [147] = {.lex_state = 211},
  [148] = {.lex_state = 208},
  [149] = {.lex_state = 209},
  [150] = {.lex_state = 211},
  [151] = {.lex_state = 209},
  [152] = {.lex_state = 211},
  [153] = {.lex_state = 211},
  [154] = {.lex_state = 211},
  [155] = {.lex_state = 211},
  [156] = {.lex_state = 211},
  [157] = {.lex_state = 211},
  [158] = {.lex_state = 211},
  [159] = {.lex_state = 210},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 3},
  [162] = {.lex_state = 210},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 209},
  [166] = {.lex_state = 208},
  [167] = {.lex_state = 208},
  [168] = {.lex_state = 208},
  [169] = {.lex_state = 211},
  [170] = {.lex_state = 211},
  [171] = {.lex_state = 208},
  [172] = {.lex_state = 3},
  [173] = {.lex_state = 211},
  [174] = {.lex_state = 3},
  [175] = {.lex_state = 209},
  [176] = {.lex_state = 208},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 209},
  [180] = {.lex_state = 211},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 211},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 2},
  [185] = {.lex_state = 208},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 208},
  [189] = {.lex_state = 209},
  [190] = {.lex_state = 211},
  [191] = {.lex_state = 208},
  [192] = {.lex_state = 208},
  [193] = {.lex_state = 208},
  [194] = {.lex_state = 209},
  [195] = {.lex_state = 209},
  [196] = {.lex_state = 209},
  [197] = {.lex_state = 208},
  [198] = {.lex_state = 208},
  [199] = {.lex_state = 208},
  [200] = {.lex_state = 208},
  [201] = {.lex_state = 208},
  [202] = {.lex_state = 211},
  [203] = {.lex_state = 209},
  [204] = {.lex_state = 208},
  [205] = {.lex_state = 208},
  [206] = {.lex_state = 208},
  [207] = {.lex_state = 208},
  [208] = {.lex_state = 211},
  [209] = {.lex_state = 208},
  [210] = {.lex_state = 211},
  [211] = {.lex_state = 208},
  [212] = {.lex_state = 211},
  [213] = {.lex_state = 211},
  [214] = {.lex_state = 211},
  [215] = {.lex_state = 211},
  [216] = {.lex_state = 208},
  [217] = {.lex_state = 208},
  [218] = {.lex_state = 208},
  [219] = {.lex_state = 211},
  [220] = {.lex_state = 208},
  [221] = {.lex_state = 211},
  [222] = {.lex_state = 211},
  [223] = {.lex_state = 211},
  [224] = {.lex_state = 211},
  [225] = {.lex_state = 211},
  [226] = {.lex_state = 211},
  [227] = {.lex_state = 211},
  [228] = {.lex_state = 211},
  [229] = {.lex_state = 211},
  [230] = {.lex_state = 211},
  [231] = {.lex_state = 211},
  [232] = {.lex_state = 211},
  [233] = {.lex_state = 208},
  [234] = {.lex_state = 211},
  [235] = {.lex_state = 208},
  [236] = {.lex_state = 208},
  [237] = {.lex_state = 211},
  [238] = {.lex_state = 211},
  [239] = {.lex_state = 210},
  [240] = {.lex_state = 208},
  [241] = {.lex_state = 210},
  [242] = {.lex_state = 211},
  [243] = {.lex_state = 211},
  [244] = {.lex_state = 211},
  [245] = {.lex_state = 211},
  [246] = {.lex_state = 211},
  [247] = {.lex_state = 208},
  [248] = {.lex_state = 210},
  [249] = {.lex_state = 211},
  [250] = {.lex_state = 210},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 210},
  [253] = {.lex_state = 211},
  [254] = {.lex_state = 5},
  [255] = {.lex_state = 211},
  [256] = {.lex_state = 211},
  [257] = {.lex_state = 211},
  [258] = {.lex_state = 211},
  [259] = {.lex_state = 211},
  [260] = {.lex_state = 210},
  [261] = {.lex_state = 211},
  [262] = {.lex_state = 211},
  [263] = {.lex_state = 211},
  [264] = {.lex_state = 3},
  [265] = {.lex_state = 211},
  [266] = {.lex_state = 211},
  [267] = {.lex_state = 211},
  [268] = {.lex_state = 211},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 3},
  [271] = {.lex_state = 211},
  [272] = {.lex_state = 211},
  [273] = {.lex_state = 211},
  [274] = {.lex_state = 210},
  [275] = {.lex_state = 210},
  [276] = {.lex_state = 211},
  [277] = {.lex_state = 3},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 211},
  [281] = {.lex_state = 211},
  [282] = {.lex_state = 3},
  [283] = {.lex_state = 3},
  [284] = {.lex_state = 211},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 211},
  [287] = {.lex_state = 211},
  [288] = {.lex_state = 3},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 211},
  [291] = {.lex_state = 211},
  [292] = {.lex_state = 3},
  [293] = {.lex_state = 3},
  [294] = {.lex_state = 211},
  [295] = {.lex_state = 211},
  [296] = {.lex_state = 211},
  [297] = {.lex_state = 211},
  [298] = {.lex_state = 211},
  [299] = {.lex_state = 211},
  [300] = {.lex_state = 211},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 211},
  [303] = {.lex_state = 211},
  [304] = {.lex_state = 3},
  [305] = {.lex_state = 211},
  [306] = {.lex_state = 211},
  [307] = {.lex_state = 211},
  [308] = {.lex_state = 211},
  [309] = {.lex_state = 210},
  [310] = {.lex_state = 210},
  [311] = {.lex_state = 210},
  [312] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [aux_sym__eol_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym__pipe] = ACTIONS(1),
    [sym__at] = ACTIONS(1),
    [sym__lcurl] = ACTIONS(1),
    [sym__rcurl] = ACTIONS(1),
    [sym__equal] = ACTIONS(1),
    [sym__comma] = ACTIONS(1),
    [sym__tilde] = ACTIONS(1),
    [sym__hash] = ACTIONS(1),
    [sym__asterisk] = ACTIONS(1),
    [sym__slash] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym__plus] = ACTIONS(1),
    [sym__minus] = ACTIONS(1),
    [sym__lparen] = ACTIONS(1),
    [sym__rparen] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [aux_sym__account_name_token1] = ACTIONS(1),
    [aux_sym__account_name_token2] = ACTIONS(1),
    [aux_sym_account_token1] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__string_token1] = ACTIONS(1),
    [sym__ASCII] = ACTIONS(1),
    [sym__UTF_8_1] = ACTIONS(1),
    [aux_sym__UTF_8_2_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token2] = ACTIONS(1),
    [aux_sym__UTF_8_3_token4] = ACTIONS(1),
    [aux_sym__UTF_8_4_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(296),
    [sym_transaction] = STATE(127),
    [sym_pushtag] = STATE(133),
    [sym_poptag] = STATE(133),
    [sym_pushmeta] = STATE(133),
    [sym_popmeta] = STATE(133),
    [sym_open] = STATE(127),
    [sym_close] = STATE(127),
    [sym_commodity] = STATE(127),
    [sym_pad] = STATE(127),
    [sym_balance] = STATE(127),
    [sym_price] = STATE(127),
    [sym_event] = STATE(127),
    [sym_query] = STATE(127),
    [sym_note] = STATE(127),
    [sym_document] = STATE(127),
    [sym_custom] = STATE(127),
    [sym_entry] = STATE(3),
    [sym_option] = STATE(133),
    [sym_include] = STATE(133),
    [sym_plugin] = STATE(133),
    [sym_directive] = STATE(3),
    [sym__declarations] = STATE(3),
    [aux_sym_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
    [sym_date] = ACTIONS(9),
    [aux_sym_account_token1] = ACTIONS(11),
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
  [0] = 14,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_comment,
    ACTIONS(32), 1,
      sym_date,
    ACTIONS(35), 1,
      anon_sym_pushtag,
    ACTIONS(38), 1,
      anon_sym_poptag,
    ACTIONS(41), 1,
      anon_sym_pushmeta,
    ACTIONS(44), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(50), 1,
      anon_sym_include,
    ACTIONS(53), 1,
      anon_sym_plugin,
    STATE(2), 4,
      sym_entry,
      sym_directive,
      sym__declarations,
      aux_sym_file_repeat1,
    STATE(133), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(127), 12,
      sym_transaction,
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
  [63] = 14,
    ACTIONS(9), 1,
      sym_date,
    ACTIONS(11), 1,
      aux_sym_account_token1,
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
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym_comment,
    STATE(2), 4,
      sym_entry,
      sym_directive,
      sym__declarations,
      aux_sym_file_repeat1,
    STATE(133), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(127), 12,
      sym_transaction,
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
  [126] = 13,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(62), 1,
      sym__atat,
    ACTIONS(64), 1,
      sym__at,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(76), 1,
      sym_currency,
    ACTIONS(78), 1,
      sym__number,
    STATE(159), 1,
      sym_number_expr,
    STATE(255), 1,
      sym_cost_spec,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(70), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(60), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [186] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(82), 11,
      sym__at,
      sym__lcurl,
      sym__hash,
      sym__number,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(80), 19,
      ts_builtin_sym_end,
      sym_comment,
      sym__atat,
      sym__lcurllcurl,
      sym__asterisk,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      sym_tag,
      sym_link,
      sym_key,
  [224] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(86), 11,
      sym__at,
      sym__lcurl,
      sym__hash,
      sym__number,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(84), 19,
      ts_builtin_sym_end,
      sym_comment,
      sym__atat,
      sym__lcurllcurl,
      sym__asterisk,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      sym_tag,
      sym_link,
      sym_key,
  [262] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    STATE(4), 1,
      sym_account,
    STATE(154), 1,
      sym_optflag,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(92), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(96), 2,
      sym_tag,
      sym_link,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(94), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    STATE(9), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
    ACTIONS(100), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [317] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    STATE(4), 1,
      sym_account,
    STATE(154), 1,
      sym_optflag,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(92), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(96), 2,
      sym_tag,
      sym_link,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(94), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    STATE(9), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
    ACTIONS(104), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [372] = 13,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(108), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym__hash,
    ACTIONS(123), 1,
      sym_key,
    STATE(4), 1,
      sym_account,
    STATE(154), 1,
      sym_optflag,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(114), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(120), 2,
      sym_tag,
      sym_link,
    ACTIONS(117), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    STATE(9), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
    ACTIONS(126), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [429] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    STATE(4), 1,
      sym_account,
    STATE(154), 1,
      sym_optflag,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(92), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(96), 2,
      sym_tag,
      sym_link,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(94), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    STATE(9), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
    ACTIONS(130), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [484] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(138), 1,
      sym__lparen,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(142), 1,
      sym__number,
    STATE(29), 1,
      sym_number_expr,
    ACTIONS(136), 2,
      sym__plus,
      sym__minus,
    ACTIONS(134), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(132), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [529] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(138), 1,
      sym__lparen,
    ACTIONS(142), 1,
      sym__number,
    ACTIONS(148), 1,
      sym_currency,
    STATE(33), 1,
      sym_number_expr,
    ACTIONS(136), 2,
      sym__plus,
      sym__minus,
    ACTIONS(146), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [574] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(138), 1,
      sym__lparen,
    ACTIONS(142), 1,
      sym__number,
    ACTIONS(154), 1,
      sym_currency,
    STATE(28), 1,
      sym_number_expr,
    ACTIONS(136), 2,
      sym__plus,
      sym__minus,
    ACTIONS(152), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [619] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(138), 1,
      sym__lparen,
    ACTIONS(142), 1,
      sym__number,
    ACTIONS(160), 1,
      sym_currency,
    STATE(36), 1,
      sym_number_expr,
    ACTIONS(136), 2,
      sym__plus,
      sym__minus,
    ACTIONS(158), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(156), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [664] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(138), 1,
      sym__lparen,
    ACTIONS(142), 1,
      sym__number,
    ACTIONS(166), 1,
      sym_currency,
    STATE(32), 1,
      sym_number_expr,
    ACTIONS(136), 2,
      sym__plus,
      sym__minus,
    ACTIONS(164), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [709] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(168), 1,
      sym__atat,
    ACTIONS(170), 1,
      sym__at,
    ACTIONS(172), 1,
      sym__lcurllcurl,
    ACTIONS(174), 1,
      sym__lcurl,
    STATE(22), 1,
      sym_cost_spec,
    ACTIONS(134), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(132), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [753] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(172), 1,
      sym__lcurllcurl,
    ACTIONS(174), 1,
      sym__lcurl,
    ACTIONS(176), 1,
      sym__atat,
    ACTIONS(178), 1,
      sym__at,
    STATE(21), 1,
      sym_cost_spec,
    ACTIONS(164), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [797] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(186), 1,
      sym__slash,
    ACTIONS(184), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
    ACTIONS(182), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(180), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      sym_tag,
      sym_link,
      sym_key,
  [834] = 13,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(192), 1,
      sym__lparen,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym__number,
    STATE(61), 1,
      sym_number_expr,
    STATE(92), 1,
      sym__eol,
    STATE(227), 1,
      sym__account_type,
    ACTIONS(188), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(190), 2,
      sym__plus,
      sym__minus,
    STATE(20), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(194), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
    STATE(68), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(196), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [886] = 13,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(192), 1,
      sym__lparen,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(200), 1,
      sym__number,
    STATE(61), 1,
      sym_number_expr,
    STATE(112), 1,
      sym__eol,
    STATE(227), 1,
      sym__account_type,
    ACTIONS(190), 2,
      sym__plus,
      sym__minus,
    ACTIONS(202), 2,
      aux_sym__eol_token1,
      sym_comment,
    STATE(23), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(194), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
    STATE(68), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(196), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [938] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(168), 1,
      sym__atat,
    ACTIONS(170), 1,
      sym__at,
    ACTIONS(134), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(132), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [973] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(204), 1,
      sym__atat,
    ACTIONS(206), 1,
      sym__at,
    ACTIONS(146), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1008] = 12,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(213), 1,
      sym__lparen,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym__number,
    STATE(61), 1,
      sym_number_expr,
    STATE(227), 1,
      sym__account_type,
    ACTIONS(208), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(210), 2,
      sym__plus,
      sym__minus,
    STATE(23), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(216), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
    STATE(68), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(219), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1057] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(230), 9,
      sym__at,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(228), 14,
      ts_builtin_sym_end,
      sym_comment,
      sym__atat,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1088] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(234), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(232), 14,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      sym_tag,
      sym_link,
      sym_key,
  [1118] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(240), 1,
      sym_currency,
    ACTIONS(238), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(236), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1150] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(138), 1,
      sym__lparen,
    ACTIONS(142), 1,
      sym__number,
    ACTIONS(246), 1,
      anon_sym_DQUOTE,
    STATE(26), 1,
      sym_number_expr,
    STATE(40), 1,
      sym_key_value_value,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(136), 2,
      sym__plus,
      sym__minus,
    ACTIONS(244), 2,
      sym_date,
      sym_tag,
    ACTIONS(242), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
    STATE(41), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(94), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1198] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(166), 1,
      sym_currency,
    ACTIONS(164), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1230] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(148), 1,
      sym_currency,
    ACTIONS(146), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1262] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(250), 1,
      sym__lparen,
    ACTIONS(256), 1,
      sym__number,
    STATE(203), 1,
      sym_number_expr,
    STATE(227), 1,
      sym__account_type,
    STATE(240), 1,
      sym_key_value_value,
    ACTIONS(248), 2,
      sym__plus,
      sym__minus,
    ACTIONS(254), 2,
      sym_date,
      sym_tag,
    ACTIONS(252), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
    STATE(233), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(196), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1310] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(234), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(232), 14,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      sym_tag,
      sym_link,
      sym_key,
  [1340] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(140), 1,
      sym_currency,
    ACTIONS(134), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(132), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1372] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(160), 1,
      sym_currency,
    ACTIONS(158), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(156), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1404] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(234), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(232), 14,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      sym_tag,
      sym_link,
      sym_key,
  [1434] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(260), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(258), 14,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      sym_tag,
      sym_link,
      sym_key,
  [1464] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(266), 1,
      sym_currency,
    ACTIONS(264), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(262), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1496] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(158), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(156), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1525] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(270), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(268), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1554] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(134), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(132), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1583] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(274), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(272), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1612] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(238), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(236), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1641] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(278), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(276), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1670] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(282), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(280), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1699] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(164), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1728] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(264), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(262), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1757] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(286), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(284), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1786] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(146), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1815] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(290), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(288), 13,
      ts_builtin_sym_end,
      sym_comment,
      sym__asterisk,
      sym_flag,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_tag,
      sym_link,
      sym_key,
  [1844] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    ACTIONS(292), 1,
      sym_comment,
    STATE(4), 1,
      sym_account,
    STATE(154), 1,
      sym_optflag,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(92), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(96), 2,
      sym_tag,
      sym_link,
    ACTIONS(94), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    STATE(10), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
  [1888] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    ACTIONS(294), 1,
      sym_comment,
    STATE(4), 1,
      sym_account,
    STATE(154), 1,
      sym_optflag,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(92), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(96), 2,
      sym_tag,
      sym_link,
    ACTIONS(94), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    STATE(7), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
  [1932] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    ACTIONS(296), 1,
      sym_comment,
    STATE(4), 1,
      sym_account,
    STATE(154), 1,
      sym_optflag,
    STATE(225), 1,
      sym__account_type,
    ACTIONS(92), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(96), 2,
      sym_tag,
      sym_link,
    ACTIONS(94), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
    STATE(8), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
  [1976] = 9,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      sym_currency,
    STATE(116), 1,
      sym__eol,
    STATE(199), 1,
      sym_opt_booking,
    STATE(235), 1,
      sym__string,
    ACTIONS(300), 2,
      aux_sym__eol_token1,
      sym_comment,
    STATE(149), 2,
      sym__currency_list,
      aux_sym_open_repeat1,
    ACTIONS(298), 9,
      ts_builtin_sym_end,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [2014] = 5,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(306), 1,
      sym__slash,
    ACTIONS(304), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
    ACTIONS(182), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(180), 10,
      aux_sym__eol_token1,
      sym_comment,
      sym__lparen,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2044] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(290), 1,
      sym__number,
    ACTIONS(288), 16,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
  [2069] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(286), 1,
      sym__number,
    ACTIONS(284), 16,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
  [2094] = 14,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(310), 1,
      anon_sym_open,
    ACTIONS(312), 1,
      anon_sym_close,
    ACTIONS(314), 1,
      anon_sym_commodity,
    ACTIONS(316), 1,
      anon_sym_pad,
    ACTIONS(318), 1,
      anon_sym_balance,
    ACTIONS(320), 1,
      anon_sym_price,
    ACTIONS(322), 1,
      anon_sym_event,
    ACTIONS(324), 1,
      anon_sym_query,
    ACTIONS(326), 1,
      anon_sym_note,
    ACTIONS(328), 1,
      anon_sym_document,
    ACTIONS(330), 1,
      anon_sym_custom,
    STATE(148), 1,
      sym_txn,
    ACTIONS(308), 4,
      sym__hash,
      sym__asterisk,
      sym_flag,
      anon_sym_txn,
  [2140] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(234), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(232), 12,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2164] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(234), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(232), 12,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2188] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(234), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(232), 12,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2212] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(260), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(258), 12,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2236] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(336), 1,
      sym_currency,
    ACTIONS(334), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym__number,
    ACTIONS(332), 12,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2262] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(86), 2,
      sym__at,
      sym__lcurl,
    ACTIONS(84), 13,
      sym__atat,
      sym__lcurllcurl,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      anon_sym_DQUOTE,
      sym__number,
  [2285] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(86), 1,
      sym__number,
    ACTIONS(84), 14,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2308] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(270), 1,
      sym__number,
    ACTIONS(268), 14,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2331] = 8,
    ACTIONS(340), 1,
      aux_sym__account_name_token2,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(338), 2,
      anon_sym_COLON,
      aux_sym_account_token1,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2364] = 8,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(354), 1,
      aux_sym__account_name_token2,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    ACTIONS(352), 2,
      anon_sym_COLON,
      aux_sym_account_token1,
    STATE(70), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2397] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(338), 1,
      anon_sym_COLON,
    ACTIONS(356), 1,
      aux_sym__account_name_token2,
    ACTIONS(358), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(366), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(360), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(362), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(364), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(69), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2432] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(334), 1,
      sym__number,
    ACTIONS(332), 14,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2455] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      anon_sym_COLON,
    ACTIONS(358), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(366), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(368), 1,
      aux_sym__account_name_token2,
    ACTIONS(360), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(362), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(364), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(72), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2490] = 8,
    ACTIONS(372), 1,
      aux_sym__account_name_token2,
    ACTIONS(375), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(387), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(370), 2,
      anon_sym_COLON,
      aux_sym_account_token1,
    ACTIONS(378), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(381), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(384), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(70), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2523] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(82), 1,
      sym__number,
    ACTIONS(80), 14,
      aux_sym__eol_token1,
      sym_comment,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_DQUOTE,
  [2546] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(370), 1,
      anon_sym_COLON,
    ACTIONS(390), 1,
      aux_sym__account_name_token2,
    ACTIONS(393), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(405), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(396), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(399), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(402), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(72), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2581] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(82), 2,
      sym__at,
      sym__lcurl,
    ACTIONS(80), 13,
      sym__atat,
      sym__lcurllcurl,
      sym__plus,
      sym__minus,
      sym__lparen,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_currency,
      anon_sym_DQUOTE,
      sym__number,
  [2604] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(408), 1,
      sym__hash,
    ACTIONS(412), 1,
      sym_currency,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_number_expr,
    STATE(190), 1,
      sym_cost_comp,
    STATE(251), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(410), 2,
      sym__asterisk,
      sym_date,
    STATE(213), 2,
      sym__string,
      sym_compound_amout,
  [2644] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(273), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2678] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(290), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2712] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(286), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2746] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(303), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2780] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(258), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2814] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(408), 1,
      sym__hash,
    ACTIONS(412), 1,
      sym_currency,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_number_expr,
    STATE(190), 1,
      sym_cost_comp,
    STATE(248), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(410), 2,
      sym__asterisk,
      sym_date,
    STATE(213), 2,
      sym__string,
      sym_compound_amout,
  [2854] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(280), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2888] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(420), 1,
      sym__slash,
    ACTIONS(182), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(418), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
    ACTIONS(180), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [2914] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(408), 1,
      sym__hash,
    ACTIONS(412), 1,
      sym_currency,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_number_expr,
    STATE(190), 1,
      sym_cost_comp,
    STATE(250), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(410), 2,
      sym__asterisk,
      sym_date,
    STATE(213), 2,
      sym__string,
      sym_compound_amout,
  [2954] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(408), 1,
      sym__hash,
    ACTIONS(412), 1,
      sym_currency,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_number_expr,
    STATE(190), 1,
      sym_cost_comp,
    STATE(254), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(410), 2,
      sym__asterisk,
      sym_date,
    STATE(213), 2,
      sym__string,
      sym_compound_amout,
  [2994] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(262), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [3028] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(358), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(366), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(422), 1,
      aux_sym__account_name_token1,
    STATE(307), 1,
      sym__account_name,
    ACTIONS(360), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(362), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(364), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(67), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [3062] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(342), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(350), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(416), 1,
      aux_sym__account_name_token1,
    STATE(267), 1,
      sym__account_name,
    ACTIONS(344), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(346), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(348), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [3096] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(424), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(426), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3121] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(428), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(430), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3146] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(432), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(434), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3171] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(436), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(438), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3196] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(115), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(440), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(442), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3221] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(444), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(446), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3246] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(450), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3271] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(452), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(454), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3296] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(99), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(456), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(458), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3321] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(456), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(458), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3346] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(462), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(460), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(465), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3371] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(467), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(469), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3396] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(84), 13,
      ts_builtin_sym_end,
      aux_sym__eol_token1,
      sym_comment,
      sym_date,
      sym_currency,
      anon_sym_DQUOTE,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3415] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(471), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(473), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3440] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(103), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(471), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(473), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3465] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(475), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(477), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3490] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(479), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(481), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3515] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(90), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(483), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(485), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3540] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(91), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(487), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(489), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3565] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(93), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(491), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(493), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3590] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(408), 1,
      sym__hash,
    ACTIONS(412), 1,
      sym_currency,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(172), 1,
      sym_number_expr,
    STATE(210), 1,
      sym_cost_comp,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(410), 2,
      sym__asterisk,
      sym_date,
    STATE(213), 2,
      sym__string,
      sym_compound_amout,
  [3627] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(80), 13,
      ts_builtin_sym_end,
      aux_sym__eol_token1,
      sym_comment,
      sym_date,
      sym_currency,
      anon_sym_DQUOTE,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3646] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(118), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(495), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(497), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3671] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(117), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(499), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(501), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3696] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(104), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(503), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(505), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3721] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(507), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(509), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3746] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(97), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(507), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(509), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3771] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(503), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(505), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3796] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(113), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(511), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(513), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3821] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(515), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(517), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3846] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(519), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(521), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3871] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(95), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(523), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(525), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3896] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(88), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(527), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(529), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3921] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(94), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(531), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(533), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3946] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(119), 1,
      sym__eol,
    ACTIONS(537), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(535), 9,
      ts_builtin_sym_end,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3968] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(111), 1,
      sym__eol,
    ACTIONS(541), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(539), 9,
      ts_builtin_sym_end,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3990] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(543), 1,
      sym__atat,
    ACTIONS(545), 1,
      sym__at,
    ACTIONS(547), 1,
      sym_currency,
    ACTIONS(549), 1,
      sym__number,
    STATE(162), 1,
      sym_number_expr,
    STATE(219), 1,
      sym_cost_spec,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4025] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(551), 10,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4041] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(553), 10,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4057] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(555), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4073] = 1,
    ACTIONS(553), 11,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym_account_token1,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4087] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(557), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4103] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(234), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(232), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [4121] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(559), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4137] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(260), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(258), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [4155] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(561), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4171] = 1,
    ACTIONS(563), 11,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym_account_token1,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4185] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(565), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4201] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(567), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4217] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(569), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4233] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(571), 10,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4249] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(234), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(232), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [4267] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(573), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4283] = 1,
    ACTIONS(575), 11,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym_account_token1,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4297] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(575), 10,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4313] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(563), 10,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4329] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(234), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(232), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [4347] = 1,
    ACTIONS(571), 11,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym_account_token1,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4361] = 1,
    ACTIONS(551), 11,
      anon_sym_COLON,
      aux_sym__account_name_token2,
      aux_sym_account_token1,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
  [4375] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(577), 10,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [4391] = 8,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(51), 1,
      sym__eol,
    STATE(166), 1,
      sym_txn_strings,
    STATE(168), 1,
      sym__string,
    STATE(217), 1,
      sym_tags_links,
    ACTIONS(579), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(581), 2,
      sym_tag,
      sym_link,
  [4418] = 8,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    ACTIONS(302), 1,
      sym_currency,
    STATE(114), 1,
      sym__eol,
    STATE(193), 1,
      sym_opt_booking,
    STATE(235), 1,
      sym__string,
    ACTIONS(583), 2,
      aux_sym__eol_token1,
      sym_comment,
    STATE(165), 2,
      sym__currency_list,
      aux_sym_open_repeat1,
  [4445] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(214), 1,
      sym_account,
    STATE(238), 1,
      sym__account_type,
    ACTIONS(585), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4462] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(589), 1,
      sym__slash,
    ACTIONS(180), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
    ACTIONS(587), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
  [4479] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(222), 1,
      sym_account,
    STATE(238), 1,
      sym__account_type,
    ACTIONS(585), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4496] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(161), 1,
      sym_account,
    STATE(238), 1,
      sym__account_type,
    ACTIONS(585), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4513] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(124), 1,
      sym_account,
    STATE(238), 1,
      sym__account_type,
    ACTIONS(585), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4530] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(158), 1,
      sym_account,
    STATE(238), 1,
      sym__account_type,
    ACTIONS(585), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4547] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(123), 1,
      sym_account,
    STATE(229), 1,
      sym__account_type,
    ACTIONS(591), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4564] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(52), 1,
      sym_account,
    STATE(229), 1,
      sym__account_type,
    ACTIONS(591), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4581] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(122), 1,
      sym_account,
    STATE(229), 1,
      sym__account_type,
    ACTIONS(591), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4598] = 7,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(543), 1,
      sym__atat,
    ACTIONS(545), 1,
      sym__at,
    ACTIONS(593), 1,
      sym_currency,
    STATE(219), 1,
      sym_cost_spec,
  [4620] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(549), 1,
      sym__number,
    ACTIONS(595), 1,
      sym_currency,
    STATE(309), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4640] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(549), 1,
      sym__number,
    STATE(191), 1,
      sym_amount_tolerance,
    STATE(252), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4660] = 7,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(176), 1,
      sym__atat,
    ACTIONS(178), 1,
      sym__at,
    ACTIONS(597), 1,
      sym_currency,
    STATE(228), 1,
      sym_cost_spec,
  [4682] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(549), 1,
      sym__number,
    STATE(188), 1,
      sym_amount,
    STATE(274), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4702] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(549), 1,
      sym__number,
    ACTIONS(599), 1,
      sym_currency,
    STATE(310), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4722] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(603), 1,
      sym_currency,
    STATE(165), 2,
      sym__currency_list,
      aux_sym_open_repeat1,
    ACTIONS(601), 3,
      aux_sym__eol_token1,
      sym_comment,
      anon_sym_DQUOTE,
  [4738] = 5,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(50), 1,
      sym__eol,
    STATE(209), 1,
      sym_tags_links,
    ACTIONS(581), 2,
      sym_tag,
      sym_link,
    ACTIONS(606), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4756] = 5,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(89), 1,
      sym__eol,
    STATE(192), 1,
      sym_tags_links,
    ACTIONS(581), 2,
      sym_tag,
      sym_link,
    ACTIONS(608), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4774] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(185), 1,
      sym__string,
    ACTIONS(610), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_tag,
      sym_link,
  [4790] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(612), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4801] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(543), 1,
      sym__atat,
    ACTIONS(545), 1,
      sym__at,
    STATE(219), 1,
      sym_cost_spec,
  [4820] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(614), 5,
      aux_sym__eol_token1,
      sym_comment,
      anon_sym_DQUOTE,
      sym_tag,
      sym_link,
  [4831] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(595), 1,
      sym_currency,
    ACTIONS(618), 1,
      sym__rcurl,
    ACTIONS(620), 1,
      sym__hash,
    ACTIONS(616), 2,
      sym__rcurlrcurl,
      sym__comma,
  [4848] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(176), 1,
      sym__atat,
    ACTIONS(178), 1,
      sym__at,
    STATE(228), 1,
      sym_cost_spec,
  [4867] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(549), 1,
      sym__number,
    STATE(311), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4884] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(624), 1,
      sym__comma,
    ACTIONS(622), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
      anon_sym_DQUOTE,
  [4897] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(626), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_tag,
      sym_link,
  [4907] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      aux_sym__string_token1,
    ACTIONS(633), 1,
      aux_sym__string_token2,
    STATE(177), 1,
      aux_sym__string_repeat1,
  [4923] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(638), 1,
      aux_sym__string_token1,
    ACTIONS(640), 1,
      aux_sym__string_token2,
    STATE(186), 1,
      aux_sym__string_repeat1,
  [4939] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(642), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
      anon_sym_DQUOTE,
  [4949] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(290), 1,
      sym__rcurl,
    ACTIONS(288), 3,
      sym__rcurlrcurl,
      sym__comma,
      anon_sym_DQUOTE,
  [4961] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(644), 1,
      anon_sym_DQUOTE,
    ACTIONS(646), 1,
      aux_sym__string_token1,
    ACTIONS(648), 1,
      aux_sym__string_token2,
    STATE(183), 1,
      aux_sym__string_repeat1,
  [4977] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(286), 1,
      sym__rcurl,
    ACTIONS(284), 3,
      sym__rcurlrcurl,
      sym__comma,
      anon_sym_DQUOTE,
  [4989] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(650), 1,
      anon_sym_DQUOTE,
    ACTIONS(652), 1,
      aux_sym__string_token1,
    ACTIONS(654), 1,
      aux_sym__string_token2,
    STATE(177), 1,
      aux_sym__string_repeat1,
  [5005] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    ACTIONS(658), 1,
      aux_sym__string_token1,
    ACTIONS(660), 1,
      aux_sym__string_token2,
    STATE(187), 1,
      aux_sym__string_repeat1,
  [5021] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(662), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_tag,
      sym_link,
  [5031] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(652), 1,
      aux_sym__string_token1,
    ACTIONS(654), 1,
      aux_sym__string_token2,
    ACTIONS(664), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      aux_sym__string_repeat1,
  [5047] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(652), 1,
      aux_sym__string_token1,
    ACTIONS(654), 1,
      aux_sym__string_token2,
    ACTIONS(666), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      aux_sym__string_repeat1,
  [5063] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(107), 1,
      sym__eol,
    ACTIONS(668), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5074] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(232), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [5083] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(672), 1,
      sym__rcurl,
    ACTIONS(670), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5094] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(121), 1,
      sym__eol,
    ACTIONS(674), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5105] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(102), 1,
      sym__eol,
    ACTIONS(676), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5116] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(96), 1,
      sym__eol,
    ACTIONS(678), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5127] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(232), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [5136] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(232), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [5145] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(258), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [5154] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(140), 1,
      sym__eol,
    ACTIONS(680), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5165] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(137), 1,
      sym__eol,
    ACTIONS(682), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5176] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(114), 1,
      sym__eol,
    ACTIONS(583), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5187] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(136), 1,
      sym__eol,
    ACTIONS(684), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5198] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(135), 1,
      sym__eol,
    ACTIONS(686), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5209] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(690), 1,
      sym__rcurl,
    ACTIONS(688), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5220] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(692), 1,
      sym_currency,
    ACTIONS(236), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5231] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(129), 1,
      sym__eol,
    ACTIONS(694), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5242] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(131), 1,
      sym__eol,
    ACTIONS(696), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5253] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(147), 1,
      sym__eol,
    ACTIONS(698), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5264] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(110), 1,
      sym__eol,
    ACTIONS(700), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5275] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(704), 1,
      sym__rcurl,
    ACTIONS(702), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5286] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(49), 1,
      sym__eol,
    ACTIONS(706), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5297] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(710), 1,
      sym__rcurl,
    ACTIONS(708), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5308] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(120), 1,
      sym__eol,
    ACTIONS(712), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5319] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(618), 1,
      sym__rcurl,
    ACTIONS(616), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5330] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(716), 1,
      sym__rcurl,
    ACTIONS(714), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5341] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym_filename,
    STATE(176), 1,
      sym__string,
  [5354] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(720), 1,
      sym__rcurl,
    ACTIONS(718), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5365] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(105), 1,
      sym__eol,
    ACTIONS(722), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5376] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(50), 1,
      sym__eol,
    ACTIONS(606), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5387] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(106), 1,
      sym__eol,
    ACTIONS(724), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5398] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(176), 1,
      sym__atat,
    ACTIONS(178), 1,
      sym__at,
  [5408] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(276), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5416] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(726), 1,
      anon_sym_COLON,
    STATE(256), 1,
      aux_sym_account_repeat1,
  [5426] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      sym__string,
  [5436] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym__string,
  [5446] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym__string,
  [5456] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(728), 1,
      anon_sym_COLON,
    STATE(221), 1,
      aux_sym_account_repeat1,
  [5466] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(730), 1,
      anon_sym_COLON,
    STATE(256), 1,
      aux_sym_account_repeat1,
  [5476] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(732), 1,
      anon_sym_COLON,
    STATE(226), 1,
      aux_sym_account_repeat1,
  [5486] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(168), 1,
      sym__atat,
    ACTIONS(170), 1,
      sym__at,
  [5496] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(734), 1,
      anon_sym_COLON,
    STATE(230), 1,
      aux_sym_account_repeat1,
  [5506] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(736), 1,
      anon_sym_COLON,
    STATE(256), 1,
      aux_sym_account_repeat1,
  [5516] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(228), 1,
      sym__atat,
    ACTIONS(230), 1,
      sym__at,
  [5526] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(206), 1,
      sym__string,
  [5536] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(236), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5544] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(738), 1,
      anon_sym_COLON,
    STATE(256), 1,
      aux_sym_account_repeat1,
  [5554] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(740), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5562] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(742), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5570] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(744), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym__colon,
  [5580] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(746), 1,
      anon_sym_COLON,
    STATE(234), 1,
      aux_sym_account_repeat1,
  [5590] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(748), 1,
      sym_key,
    STATE(200), 1,
      sym_key_value_line,
  [5600] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(272), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5608] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(748), 1,
      sym_key,
    STATE(201), 1,
      sym_key_value_line,
  [5618] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      sym__string,
  [5628] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(19), 1,
      sym__string,
  [5638] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym__string,
  [5648] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(198), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym__string,
  [5658] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(750), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym__colon,
  [5668] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(752), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5676] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(754), 1,
      sym__rcurl,
    ACTIONS(756), 1,
      sym__comma,
  [5686] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(223), 1,
      sym__string,
  [5696] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(756), 1,
      sym__comma,
    ACTIONS(758), 1,
      sym__rcurl,
  [5706] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(754), 1,
      sym__rcurlrcurl,
    ACTIONS(756), 1,
      sym__comma,
  [5716] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(760), 1,
      sym__tilde,
    ACTIONS(762), 1,
      sym_currency,
  [5726] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    STATE(224), 1,
      sym__string,
  [5736] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(756), 1,
      sym__comma,
    ACTIONS(758), 1,
      sym__rcurlrcurl,
  [5746] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(543), 1,
      sym__atat,
    ACTIONS(545), 1,
      sym__at,
  [5756] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(764), 1,
      anon_sym_COLON,
    STATE(256), 1,
      aux_sym_account_repeat1,
  [5766] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(767), 1,
      sym__UTF_8_1,
  [5773] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(771), 1,
      aux_sym_account_token1,
  [5780] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(773), 1,
      sym__UTF_8_1,
  [5787] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(775), 1,
      sym_currency,
  [5794] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(777), 1,
      sym__UTF_8_1,
  [5801] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(779), 1,
      aux_sym_account_token1,
  [5808] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(781), 1,
      sym_tag,
  [5815] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(783), 1,
      sym__number,
  [5822] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(785), 1,
      sym__rparen,
  [5829] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(787), 1,
      sym__UTF_8_1,
  [5836] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(789), 1,
      aux_sym_account_token1,
  [5843] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(791), 1,
      sym__rparen,
  [5850] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(793), 1,
      sym__number,
  [5857] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(795), 1,
      sym__number,
  [5864] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(797), 1,
      sym__UTF_8_1,
  [5871] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(799), 1,
      sym__UTF_8_1,
  [5878] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(801), 1,
      aux_sym_account_token1,
  [5885] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(692), 1,
      sym_currency,
  [5892] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(803), 1,
      sym_currency,
  [5899] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(805), 1,
      sym__UTF_8_1,
  [5906] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(807), 1,
      sym__number,
  [5913] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(809), 1,
      sym__number,
  [5920] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(811), 1,
      sym__number,
  [5927] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(813), 1,
      aux_sym_account_token1,
  [5934] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(815), 1,
      sym__rparen,
  [5941] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(817), 1,
      sym__number,
  [5948] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(819), 1,
      sym__number,
  [5955] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(821), 1,
      sym__UTF_8_1,
  [5962] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(823), 1,
      sym__number,
  [5969] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(825), 1,
      aux_sym_account_token1,
  [5976] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(827), 1,
      sym__rparen,
  [5983] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(829), 1,
      sym__number,
  [5990] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(831), 1,
      sym__number,
  [5997] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(833), 1,
      aux_sym_account_token1,
  [6004] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(835), 1,
      sym__UTF_8_1,
  [6011] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(837), 1,
      sym__number,
  [6018] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(839), 1,
      sym__number,
  [6025] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(841), 1,
      sym__UTF_8_1,
  [6032] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(843), 1,
      sym__UTF_8_1,
  [6039] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
  [6046] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(847), 1,
      sym__UTF_8_1,
  [6053] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(849), 1,
      sym__UTF_8_1,
  [6060] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(851), 1,
      sym__UTF_8_1,
  [6067] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(853), 1,
      sym__UTF_8_1,
  [6074] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(855), 1,
      sym__number,
  [6081] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(857), 1,
      sym__UTF_8_1,
  [6088] = 2,
    ACTIONS(769), 1,
      anon_sym_COLON,
    ACTIONS(859), 1,
      aux_sym_account_token1,
  [6095] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(861), 1,
      sym__number,
  [6102] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(863), 1,
      sym_tag,
  [6109] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(865), 1,
      sym__UTF_8_1,
  [6116] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(769), 1,
      anon_sym_COLON,
  [6123] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(867), 1,
      sym__UTF_8_1,
  [6130] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(599), 1,
      sym_currency,
  [6137] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(869), 1,
      sym_currency,
  [6144] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(871), 1,
      sym_currency,
  [6151] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(873), 1,
      sym__number,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 372,
  [SMALL_STATE(10)] = 429,
  [SMALL_STATE(11)] = 484,
  [SMALL_STATE(12)] = 529,
  [SMALL_STATE(13)] = 574,
  [SMALL_STATE(14)] = 619,
  [SMALL_STATE(15)] = 664,
  [SMALL_STATE(16)] = 709,
  [SMALL_STATE(17)] = 753,
  [SMALL_STATE(18)] = 797,
  [SMALL_STATE(19)] = 834,
  [SMALL_STATE(20)] = 886,
  [SMALL_STATE(21)] = 938,
  [SMALL_STATE(22)] = 973,
  [SMALL_STATE(23)] = 1008,
  [SMALL_STATE(24)] = 1057,
  [SMALL_STATE(25)] = 1088,
  [SMALL_STATE(26)] = 1118,
  [SMALL_STATE(27)] = 1150,
  [SMALL_STATE(28)] = 1198,
  [SMALL_STATE(29)] = 1230,
  [SMALL_STATE(30)] = 1262,
  [SMALL_STATE(31)] = 1310,
  [SMALL_STATE(32)] = 1340,
  [SMALL_STATE(33)] = 1372,
  [SMALL_STATE(34)] = 1404,
  [SMALL_STATE(35)] = 1434,
  [SMALL_STATE(36)] = 1464,
  [SMALL_STATE(37)] = 1496,
  [SMALL_STATE(38)] = 1525,
  [SMALL_STATE(39)] = 1554,
  [SMALL_STATE(40)] = 1583,
  [SMALL_STATE(41)] = 1612,
  [SMALL_STATE(42)] = 1641,
  [SMALL_STATE(43)] = 1670,
  [SMALL_STATE(44)] = 1699,
  [SMALL_STATE(45)] = 1728,
  [SMALL_STATE(46)] = 1757,
  [SMALL_STATE(47)] = 1786,
  [SMALL_STATE(48)] = 1815,
  [SMALL_STATE(49)] = 1844,
  [SMALL_STATE(50)] = 1888,
  [SMALL_STATE(51)] = 1932,
  [SMALL_STATE(52)] = 1976,
  [SMALL_STATE(53)] = 2014,
  [SMALL_STATE(54)] = 2044,
  [SMALL_STATE(55)] = 2069,
  [SMALL_STATE(56)] = 2094,
  [SMALL_STATE(57)] = 2140,
  [SMALL_STATE(58)] = 2164,
  [SMALL_STATE(59)] = 2188,
  [SMALL_STATE(60)] = 2212,
  [SMALL_STATE(61)] = 2236,
  [SMALL_STATE(62)] = 2262,
  [SMALL_STATE(63)] = 2285,
  [SMALL_STATE(64)] = 2308,
  [SMALL_STATE(65)] = 2331,
  [SMALL_STATE(66)] = 2364,
  [SMALL_STATE(67)] = 2397,
  [SMALL_STATE(68)] = 2432,
  [SMALL_STATE(69)] = 2455,
  [SMALL_STATE(70)] = 2490,
  [SMALL_STATE(71)] = 2523,
  [SMALL_STATE(72)] = 2546,
  [SMALL_STATE(73)] = 2581,
  [SMALL_STATE(74)] = 2604,
  [SMALL_STATE(75)] = 2644,
  [SMALL_STATE(76)] = 2678,
  [SMALL_STATE(77)] = 2712,
  [SMALL_STATE(78)] = 2746,
  [SMALL_STATE(79)] = 2780,
  [SMALL_STATE(80)] = 2814,
  [SMALL_STATE(81)] = 2854,
  [SMALL_STATE(82)] = 2888,
  [SMALL_STATE(83)] = 2914,
  [SMALL_STATE(84)] = 2954,
  [SMALL_STATE(85)] = 2994,
  [SMALL_STATE(86)] = 3028,
  [SMALL_STATE(87)] = 3062,
  [SMALL_STATE(88)] = 3096,
  [SMALL_STATE(89)] = 3121,
  [SMALL_STATE(90)] = 3146,
  [SMALL_STATE(91)] = 3171,
  [SMALL_STATE(92)] = 3196,
  [SMALL_STATE(93)] = 3221,
  [SMALL_STATE(94)] = 3246,
  [SMALL_STATE(95)] = 3271,
  [SMALL_STATE(96)] = 3296,
  [SMALL_STATE(97)] = 3321,
  [SMALL_STATE(98)] = 3346,
  [SMALL_STATE(99)] = 3371,
  [SMALL_STATE(100)] = 3396,
  [SMALL_STATE(101)] = 3415,
  [SMALL_STATE(102)] = 3440,
  [SMALL_STATE(103)] = 3465,
  [SMALL_STATE(104)] = 3490,
  [SMALL_STATE(105)] = 3515,
  [SMALL_STATE(106)] = 3540,
  [SMALL_STATE(107)] = 3565,
  [SMALL_STATE(108)] = 3590,
  [SMALL_STATE(109)] = 3627,
  [SMALL_STATE(110)] = 3646,
  [SMALL_STATE(111)] = 3671,
  [SMALL_STATE(112)] = 3696,
  [SMALL_STATE(113)] = 3721,
  [SMALL_STATE(114)] = 3746,
  [SMALL_STATE(115)] = 3771,
  [SMALL_STATE(116)] = 3796,
  [SMALL_STATE(117)] = 3821,
  [SMALL_STATE(118)] = 3846,
  [SMALL_STATE(119)] = 3871,
  [SMALL_STATE(120)] = 3896,
  [SMALL_STATE(121)] = 3921,
  [SMALL_STATE(122)] = 3946,
  [SMALL_STATE(123)] = 3968,
  [SMALL_STATE(124)] = 3990,
  [SMALL_STATE(125)] = 4025,
  [SMALL_STATE(126)] = 4041,
  [SMALL_STATE(127)] = 4057,
  [SMALL_STATE(128)] = 4073,
  [SMALL_STATE(129)] = 4087,
  [SMALL_STATE(130)] = 4103,
  [SMALL_STATE(131)] = 4121,
  [SMALL_STATE(132)] = 4137,
  [SMALL_STATE(133)] = 4155,
  [SMALL_STATE(134)] = 4171,
  [SMALL_STATE(135)] = 4185,
  [SMALL_STATE(136)] = 4201,
  [SMALL_STATE(137)] = 4217,
  [SMALL_STATE(138)] = 4233,
  [SMALL_STATE(139)] = 4249,
  [SMALL_STATE(140)] = 4267,
  [SMALL_STATE(141)] = 4283,
  [SMALL_STATE(142)] = 4297,
  [SMALL_STATE(143)] = 4313,
  [SMALL_STATE(144)] = 4329,
  [SMALL_STATE(145)] = 4347,
  [SMALL_STATE(146)] = 4361,
  [SMALL_STATE(147)] = 4375,
  [SMALL_STATE(148)] = 4391,
  [SMALL_STATE(149)] = 4418,
  [SMALL_STATE(150)] = 4445,
  [SMALL_STATE(151)] = 4462,
  [SMALL_STATE(152)] = 4479,
  [SMALL_STATE(153)] = 4496,
  [SMALL_STATE(154)] = 4513,
  [SMALL_STATE(155)] = 4530,
  [SMALL_STATE(156)] = 4547,
  [SMALL_STATE(157)] = 4564,
  [SMALL_STATE(158)] = 4581,
  [SMALL_STATE(159)] = 4598,
  [SMALL_STATE(160)] = 4620,
  [SMALL_STATE(161)] = 4640,
  [SMALL_STATE(162)] = 4660,
  [SMALL_STATE(163)] = 4682,
  [SMALL_STATE(164)] = 4702,
  [SMALL_STATE(165)] = 4722,
  [SMALL_STATE(166)] = 4738,
  [SMALL_STATE(167)] = 4756,
  [SMALL_STATE(168)] = 4774,
  [SMALL_STATE(169)] = 4790,
  [SMALL_STATE(170)] = 4801,
  [SMALL_STATE(171)] = 4820,
  [SMALL_STATE(172)] = 4831,
  [SMALL_STATE(173)] = 4848,
  [SMALL_STATE(174)] = 4867,
  [SMALL_STATE(175)] = 4884,
  [SMALL_STATE(176)] = 4897,
  [SMALL_STATE(177)] = 4907,
  [SMALL_STATE(178)] = 4923,
  [SMALL_STATE(179)] = 4939,
  [SMALL_STATE(180)] = 4949,
  [SMALL_STATE(181)] = 4961,
  [SMALL_STATE(182)] = 4977,
  [SMALL_STATE(183)] = 4989,
  [SMALL_STATE(184)] = 5005,
  [SMALL_STATE(185)] = 5021,
  [SMALL_STATE(186)] = 5031,
  [SMALL_STATE(187)] = 5047,
  [SMALL_STATE(188)] = 5063,
  [SMALL_STATE(189)] = 5074,
  [SMALL_STATE(190)] = 5083,
  [SMALL_STATE(191)] = 5094,
  [SMALL_STATE(192)] = 5105,
  [SMALL_STATE(193)] = 5116,
  [SMALL_STATE(194)] = 5127,
  [SMALL_STATE(195)] = 5136,
  [SMALL_STATE(196)] = 5145,
  [SMALL_STATE(197)] = 5154,
  [SMALL_STATE(198)] = 5165,
  [SMALL_STATE(199)] = 5176,
  [SMALL_STATE(200)] = 5187,
  [SMALL_STATE(201)] = 5198,
  [SMALL_STATE(202)] = 5209,
  [SMALL_STATE(203)] = 5220,
  [SMALL_STATE(204)] = 5231,
  [SMALL_STATE(205)] = 5242,
  [SMALL_STATE(206)] = 5253,
  [SMALL_STATE(207)] = 5264,
  [SMALL_STATE(208)] = 5275,
  [SMALL_STATE(209)] = 5286,
  [SMALL_STATE(210)] = 5297,
  [SMALL_STATE(211)] = 5308,
  [SMALL_STATE(212)] = 5319,
  [SMALL_STATE(213)] = 5330,
  [SMALL_STATE(214)] = 5341,
  [SMALL_STATE(215)] = 5354,
  [SMALL_STATE(216)] = 5365,
  [SMALL_STATE(217)] = 5376,
  [SMALL_STATE(218)] = 5387,
  [SMALL_STATE(219)] = 5398,
  [SMALL_STATE(220)] = 5408,
  [SMALL_STATE(221)] = 5416,
  [SMALL_STATE(222)] = 5426,
  [SMALL_STATE(223)] = 5436,
  [SMALL_STATE(224)] = 5446,
  [SMALL_STATE(225)] = 5456,
  [SMALL_STATE(226)] = 5466,
  [SMALL_STATE(227)] = 5476,
  [SMALL_STATE(228)] = 5486,
  [SMALL_STATE(229)] = 5496,
  [SMALL_STATE(230)] = 5506,
  [SMALL_STATE(231)] = 5516,
  [SMALL_STATE(232)] = 5526,
  [SMALL_STATE(233)] = 5536,
  [SMALL_STATE(234)] = 5544,
  [SMALL_STATE(235)] = 5554,
  [SMALL_STATE(236)] = 5562,
  [SMALL_STATE(237)] = 5570,
  [SMALL_STATE(238)] = 5580,
  [SMALL_STATE(239)] = 5590,
  [SMALL_STATE(240)] = 5600,
  [SMALL_STATE(241)] = 5608,
  [SMALL_STATE(242)] = 5618,
  [SMALL_STATE(243)] = 5628,
  [SMALL_STATE(244)] = 5638,
  [SMALL_STATE(245)] = 5648,
  [SMALL_STATE(246)] = 5658,
  [SMALL_STATE(247)] = 5668,
  [SMALL_STATE(248)] = 5676,
  [SMALL_STATE(249)] = 5686,
  [SMALL_STATE(250)] = 5696,
  [SMALL_STATE(251)] = 5706,
  [SMALL_STATE(252)] = 5716,
  [SMALL_STATE(253)] = 5726,
  [SMALL_STATE(254)] = 5736,
  [SMALL_STATE(255)] = 5746,
  [SMALL_STATE(256)] = 5756,
  [SMALL_STATE(257)] = 5766,
  [SMALL_STATE(258)] = 5773,
  [SMALL_STATE(259)] = 5780,
  [SMALL_STATE(260)] = 5787,
  [SMALL_STATE(261)] = 5794,
  [SMALL_STATE(262)] = 5801,
  [SMALL_STATE(263)] = 5808,
  [SMALL_STATE(264)] = 5815,
  [SMALL_STATE(265)] = 5822,
  [SMALL_STATE(266)] = 5829,
  [SMALL_STATE(267)] = 5836,
  [SMALL_STATE(268)] = 5843,
  [SMALL_STATE(269)] = 5850,
  [SMALL_STATE(270)] = 5857,
  [SMALL_STATE(271)] = 5864,
  [SMALL_STATE(272)] = 5871,
  [SMALL_STATE(273)] = 5878,
  [SMALL_STATE(274)] = 5885,
  [SMALL_STATE(275)] = 5892,
  [SMALL_STATE(276)] = 5899,
  [SMALL_STATE(277)] = 5906,
  [SMALL_STATE(278)] = 5913,
  [SMALL_STATE(279)] = 5920,
  [SMALL_STATE(280)] = 5927,
  [SMALL_STATE(281)] = 5934,
  [SMALL_STATE(282)] = 5941,
  [SMALL_STATE(283)] = 5948,
  [SMALL_STATE(284)] = 5955,
  [SMALL_STATE(285)] = 5962,
  [SMALL_STATE(286)] = 5969,
  [SMALL_STATE(287)] = 5976,
  [SMALL_STATE(288)] = 5983,
  [SMALL_STATE(289)] = 5990,
  [SMALL_STATE(290)] = 5997,
  [SMALL_STATE(291)] = 6004,
  [SMALL_STATE(292)] = 6011,
  [SMALL_STATE(293)] = 6018,
  [SMALL_STATE(294)] = 6025,
  [SMALL_STATE(295)] = 6032,
  [SMALL_STATE(296)] = 6039,
  [SMALL_STATE(297)] = 6046,
  [SMALL_STATE(298)] = 6053,
  [SMALL_STATE(299)] = 6060,
  [SMALL_STATE(300)] = 6067,
  [SMALL_STATE(301)] = 6074,
  [SMALL_STATE(302)] = 6081,
  [SMALL_STATE(303)] = 6088,
  [SMALL_STATE(304)] = 6095,
  [SMALL_STATE(305)] = 6102,
  [SMALL_STATE(306)] = 6109,
  [SMALL_STATE(307)] = 6116,
  [SMALL_STATE(308)] = 6123,
  [SMALL_STATE(309)] = 6130,
  [SMALL_STATE(310)] = 6137,
  [SMALL_STATE(311)] = 6144,
  [SMALL_STATE(312)] = 6151,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(56),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(263),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(305),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(239),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(241),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(242),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(244),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(245),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 5),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 4),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(9),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(169),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(169),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(225),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(42),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(246),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 1),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expr, 1),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(264),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(293),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(68),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(227),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(181),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(53),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expr, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_value, 1),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_value, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 2),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expr, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_line, 3),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_links, 1),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [290] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__account_name, 1),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__account_name, 2),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(70),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(297),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(291),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(284),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(259),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(261),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(72),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(257),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(266),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(294),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(295),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(308),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 6),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2), SHIFT_REPEAT(246),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_open_repeat2, 2),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7),
  [477] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5),
  [489] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 4),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 3),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_2, 2),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_4, 4),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_4, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_3, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_3, 3),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(175),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 1),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 1),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currency_list, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [630] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(177),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(177),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [638] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currency_list, 2),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [646] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [652] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [658] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 2),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 3),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 3),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 3),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 4),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [764] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(86),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [845] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
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
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
