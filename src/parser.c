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
#define STATE_COUNT 310
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
  [18] = {.lex_state = 208},
  [19] = {.lex_state = 208},
  [20] = {.lex_state = 210},
  [21] = {.lex_state = 210},
  [22] = {.lex_state = 210},
  [23] = {.lex_state = 208},
  [24] = {.lex_state = 210},
  [25] = {.lex_state = 210},
  [26] = {.lex_state = 210},
  [27] = {.lex_state = 211},
  [28] = {.lex_state = 210},
  [29] = {.lex_state = 210},
  [30] = {.lex_state = 210},
  [31] = {.lex_state = 210},
  [32] = {.lex_state = 211},
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
  [50] = {.lex_state = 209},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 208},
  [53] = {.lex_state = 208},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 208},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 208},
  [64] = {.lex_state = 3},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 5},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 208},
  [70] = {.lex_state = 208},
  [71] = {.lex_state = 3},
  [72] = {.lex_state = 168},
  [73] = {.lex_state = 168},
  [74] = {.lex_state = 168},
  [75] = {.lex_state = 168},
  [76] = {.lex_state = 168},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 168},
  [79] = {.lex_state = 168},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 168},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 4},
  [84] = {.lex_state = 4},
  [85] = {.lex_state = 168},
  [86] = {.lex_state = 210},
  [87] = {.lex_state = 210},
  [88] = {.lex_state = 210},
  [89] = {.lex_state = 209},
  [90] = {.lex_state = 210},
  [91] = {.lex_state = 210},
  [92] = {.lex_state = 210},
  [93] = {.lex_state = 210},
  [94] = {.lex_state = 210},
  [95] = {.lex_state = 210},
  [96] = {.lex_state = 210},
  [97] = {.lex_state = 210},
  [98] = {.lex_state = 210},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 210},
  [101] = {.lex_state = 210},
  [102] = {.lex_state = 210},
  [103] = {.lex_state = 209},
  [104] = {.lex_state = 210},
  [105] = {.lex_state = 210},
  [106] = {.lex_state = 210},
  [107] = {.lex_state = 210},
  [108] = {.lex_state = 210},
  [109] = {.lex_state = 210},
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
  [120] = {.lex_state = 208},
  [121] = {.lex_state = 208},
  [122] = {.lex_state = 3},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 3},
  [125] = {.lex_state = 211},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 211},
  [128] = {.lex_state = 211},
  [129] = {.lex_state = 5},
  [130] = {.lex_state = 211},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 211},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 211},
  [136] = {.lex_state = 211},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 211},
  [140] = {.lex_state = 211},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 3},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 5},
  [146] = {.lex_state = 209},
  [147] = {.lex_state = 211},
  [148] = {.lex_state = 211},
  [149] = {.lex_state = 211},
  [150] = {.lex_state = 209},
  [151] = {.lex_state = 211},
  [152] = {.lex_state = 211},
  [153] = {.lex_state = 211},
  [154] = {.lex_state = 211},
  [155] = {.lex_state = 211},
  [156] = {.lex_state = 210},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 3},
  [161] = {.lex_state = 208},
  [162] = {.lex_state = 208},
  [163] = {.lex_state = 209},
  [164] = {.lex_state = 208},
  [165] = {.lex_state = 210},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 211},
  [168] = {.lex_state = 211},
  [169] = {.lex_state = 3},
  [170] = {.lex_state = 209},
  [171] = {.lex_state = 211},
  [172] = {.lex_state = 208},
  [173] = {.lex_state = 209},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 208},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 211},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 211},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 2},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 208},
  [185] = {.lex_state = 208},
  [186] = {.lex_state = 208},
  [187] = {.lex_state = 208},
  [188] = {.lex_state = 208},
  [189] = {.lex_state = 209},
  [190] = {.lex_state = 209},
  [191] = {.lex_state = 211},
  [192] = {.lex_state = 211},
  [193] = {.lex_state = 209},
  [194] = {.lex_state = 211},
  [195] = {.lex_state = 209},
  [196] = {.lex_state = 211},
  [197] = {.lex_state = 208},
  [198] = {.lex_state = 208},
  [199] = {.lex_state = 211},
  [200] = {.lex_state = 208},
  [201] = {.lex_state = 208},
  [202] = {.lex_state = 208},
  [203] = {.lex_state = 208},
  [204] = {.lex_state = 208},
  [205] = {.lex_state = 211},
  [206] = {.lex_state = 208},
  [207] = {.lex_state = 211},
  [208] = {.lex_state = 208},
  [209] = {.lex_state = 209},
  [210] = {.lex_state = 208},
  [211] = {.lex_state = 211},
  [212] = {.lex_state = 211},
  [213] = {.lex_state = 208},
  [214] = {.lex_state = 208},
  [215] = {.lex_state = 211},
  [216] = {.lex_state = 208},
  [217] = {.lex_state = 211},
  [218] = {.lex_state = 208},
  [219] = {.lex_state = 211},
  [220] = {.lex_state = 211},
  [221] = {.lex_state = 211},
  [222] = {.lex_state = 208},
  [223] = {.lex_state = 211},
  [224] = {.lex_state = 208},
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
  [235] = {.lex_state = 211},
  [236] = {.lex_state = 210},
  [237] = {.lex_state = 210},
  [238] = {.lex_state = 211},
  [239] = {.lex_state = 211},
  [240] = {.lex_state = 211},
  [241] = {.lex_state = 211},
  [242] = {.lex_state = 211},
  [243] = {.lex_state = 211},
  [244] = {.lex_state = 208},
  [245] = {.lex_state = 210},
  [246] = {.lex_state = 211},
  [247] = {.lex_state = 210},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 211},
  [251] = {.lex_state = 210},
  [252] = {.lex_state = 211},
  [253] = {.lex_state = 211},
  [254] = {.lex_state = 3},
  [255] = {.lex_state = 211},
  [256] = {.lex_state = 210},
  [257] = {.lex_state = 211},
  [258] = {.lex_state = 211},
  [259] = {.lex_state = 211},
  [260] = {.lex_state = 210},
  [261] = {.lex_state = 3},
  [262] = {.lex_state = 211},
  [263] = {.lex_state = 211},
  [264] = {.lex_state = 211},
  [265] = {.lex_state = 211},
  [266] = {.lex_state = 3},
  [267] = {.lex_state = 3},
  [268] = {.lex_state = 211},
  [269] = {.lex_state = 211},
  [270] = {.lex_state = 211},
  [271] = {.lex_state = 211},
  [272] = {.lex_state = 211},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 3},
  [275] = {.lex_state = 3},
  [276] = {.lex_state = 3},
  [277] = {.lex_state = 211},
  [278] = {.lex_state = 211},
  [279] = {.lex_state = 3},
  [280] = {.lex_state = 3},
  [281] = {.lex_state = 211},
  [282] = {.lex_state = 210},
  [283] = {.lex_state = 211},
  [284] = {.lex_state = 211},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 3},
  [287] = {.lex_state = 211},
  [288] = {.lex_state = 211},
  [289] = {.lex_state = 3},
  [290] = {.lex_state = 3},
  [291] = {.lex_state = 211},
  [292] = {.lex_state = 211},
  [293] = {.lex_state = 211},
  [294] = {.lex_state = 211},
  [295] = {.lex_state = 211},
  [296] = {.lex_state = 211},
  [297] = {.lex_state = 211},
  [298] = {.lex_state = 3},
  [299] = {.lex_state = 211},
  [300] = {.lex_state = 211},
  [301] = {.lex_state = 3},
  [302] = {.lex_state = 211},
  [303] = {.lex_state = 210},
  [304] = {.lex_state = 210},
  [305] = {.lex_state = 211},
  [306] = {.lex_state = 211},
  [307] = {.lex_state = 210},
  [308] = {.lex_state = 211},
  [309] = {.lex_state = 211},
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
    [sym_file] = STATE(293),
    [sym_transaction] = STATE(125),
    [sym_pushtag] = STATE(130),
    [sym_poptag] = STATE(130),
    [sym_pushmeta] = STATE(130),
    [sym_popmeta] = STATE(130),
    [sym_open] = STATE(125),
    [sym_close] = STATE(125),
    [sym_commodity] = STATE(125),
    [sym_pad] = STATE(125),
    [sym_balance] = STATE(125),
    [sym_price] = STATE(125),
    [sym_event] = STATE(125),
    [sym_query] = STATE(125),
    [sym_note] = STATE(125),
    [sym_document] = STATE(125),
    [sym_custom] = STATE(125),
    [sym_entry] = STATE(3),
    [sym_option] = STATE(130),
    [sym_include] = STATE(130),
    [sym_plugin] = STATE(130),
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
    STATE(130), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(125), 12,
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
    STATE(130), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(125), 12,
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
    STATE(165), 1,
      sym_number_expr,
    STATE(215), 1,
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
    STATE(153), 1,
      sym_optflag,
    STATE(223), 1,
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
    STATE(8), 5,
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
  [317] = 13,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(104), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym__hash,
    ACTIONS(119), 1,
      sym_key,
    STATE(4), 1,
      sym_account,
    STATE(153), 1,
      sym_optflag,
    STATE(223), 1,
      sym__account_type,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(110), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(116), 2,
      sym_tag,
      sym_link,
    ACTIONS(113), 5,
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
    ACTIONS(122), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [374] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    STATE(4), 1,
      sym_account,
    STATE(153), 1,
      sym_optflag,
    STATE(223), 1,
      sym__account_type,
    ACTIONS(92), 2,
      sym__asterisk,
      sym_flag,
    ACTIONS(96), 2,
      sym_tag,
      sym_link,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
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
    ACTIONS(126), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [429] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(134), 1,
      sym__lparen,
    ACTIONS(136), 1,
      sym_currency,
    ACTIONS(138), 1,
      sym__number,
    STATE(30), 1,
      sym_number_expr,
    ACTIONS(132), 2,
      sym__plus,
      sym__minus,
    ACTIONS(130), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(128), 13,
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
  [474] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(134), 1,
      sym__lparen,
    ACTIONS(138), 1,
      sym__number,
    ACTIONS(144), 1,
      sym_currency,
    STATE(28), 1,
      sym_number_expr,
    ACTIONS(132), 2,
      sym__plus,
      sym__minus,
    ACTIONS(142), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(140), 13,
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
  [519] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(134), 1,
      sym__lparen,
    ACTIONS(138), 1,
      sym__number,
    ACTIONS(150), 1,
      sym_currency,
    STATE(29), 1,
      sym_number_expr,
    ACTIONS(132), 2,
      sym__plus,
      sym__minus,
    ACTIONS(148), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(146), 13,
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
  [564] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(134), 1,
      sym__lparen,
    ACTIONS(138), 1,
      sym__number,
    ACTIONS(156), 1,
      sym_currency,
    STATE(33), 1,
      sym_number_expr,
    ACTIONS(132), 2,
      sym__plus,
      sym__minus,
    ACTIONS(154), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(152), 13,
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
  [609] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(134), 1,
      sym__lparen,
    ACTIONS(138), 1,
      sym__number,
    ACTIONS(162), 1,
      sym_currency,
    STATE(31), 1,
      sym_number_expr,
    ACTIONS(132), 2,
      sym__plus,
      sym__minus,
    ACTIONS(160), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(158), 13,
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
  [654] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(164), 1,
      sym__atat,
    ACTIONS(166), 1,
      sym__at,
    ACTIONS(168), 1,
      sym__lcurllcurl,
    ACTIONS(170), 1,
      sym__lcurl,
    STATE(20), 1,
      sym_cost_spec,
    ACTIONS(160), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(158), 13,
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
  [698] = 8,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(168), 1,
      sym__lcurllcurl,
    ACTIONS(170), 1,
      sym__lcurl,
    ACTIONS(172), 1,
      sym__atat,
    ACTIONS(174), 1,
      sym__at,
    STATE(22), 1,
      sym_cost_spec,
    ACTIONS(154), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(152), 13,
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
  [742] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(182), 1,
      sym__slash,
    ACTIONS(180), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
    ACTIONS(178), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(176), 13,
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
  [779] = 13,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(188), 1,
      sym__lparen,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      sym__number,
    STATE(59), 1,
      sym_number_expr,
    STATE(105), 1,
      sym__eol,
    STATE(227), 1,
      sym__account_type,
    ACTIONS(184), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(186), 2,
      sym__plus,
      sym__minus,
    STATE(19), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(190), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
    STATE(70), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(192), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [831] = 13,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(188), 1,
      sym__lparen,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 1,
      sym__number,
    STATE(59), 1,
      sym_number_expr,
    STATE(119), 1,
      sym__eol,
    STATE(227), 1,
      sym__account_type,
    ACTIONS(186), 2,
      sym__plus,
      sym__minus,
    ACTIONS(198), 2,
      aux_sym__eol_token1,
      sym_comment,
    STATE(23), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(190), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_date,
    STATE(70), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(192), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [883] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(172), 1,
      sym__atat,
    ACTIONS(174), 1,
      sym__at,
    ACTIONS(154), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(152), 13,
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
  [918] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(202), 9,
      sym__at,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(200), 14,
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
  [949] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(204), 1,
      sym__atat,
    ACTIONS(206), 1,
      sym__at,
    ACTIONS(148), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(146), 13,
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
  [984] = 12,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(213), 1,
      sym__lparen,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      sym__number,
    STATE(59), 1,
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
    STATE(70), 4,
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
  [1033] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(230), 8,
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
  [1063] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(230), 8,
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
  [1093] = 3,
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
  [1123] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(238), 1,
      sym__lparen,
    ACTIONS(244), 1,
      sym__number,
    STATE(209), 1,
      sym_number_expr,
    STATE(224), 1,
      sym_key_value_value,
    STATE(227), 1,
      sym__account_type,
    ACTIONS(236), 2,
      sym__plus,
      sym__minus,
    ACTIONS(242), 2,
      sym_date,
      sym_tag,
    ACTIONS(240), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
    STATE(222), 4,
      sym__bool,
      sym_account,
      sym__string,
      sym_amount,
    ACTIONS(192), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1171] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(162), 1,
      sym_currency,
    ACTIONS(160), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(158), 13,
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
  [1203] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(136), 1,
      sym_currency,
    ACTIONS(130), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(128), 13,
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
  [1235] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(250), 1,
      sym_currency,
    ACTIONS(248), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(246), 13,
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
  [1267] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(156), 1,
      sym_currency,
    ACTIONS(154), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(152), 13,
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
  [1299] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(134), 1,
      sym__lparen,
    ACTIONS(138), 1,
      sym__number,
    ACTIONS(256), 1,
      anon_sym_DQUOTE,
    STATE(34), 1,
      sym_number_expr,
    STATE(38), 1,
      sym_key_value_value,
    STATE(223), 1,
      sym__account_type,
    ACTIONS(132), 2,
      sym__plus,
      sym__minus,
    ACTIONS(254), 2,
      sym_date,
      sym_tag,
    ACTIONS(252), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
    STATE(39), 4,
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
  [1347] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(150), 1,
      sym_currency,
    ACTIONS(148), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(146), 13,
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
  [1379] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(262), 1,
      sym_currency,
    ACTIONS(260), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(258), 13,
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
  [1411] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(230), 8,
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
  [1441] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(148), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(146), 13,
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
  [1470] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(160), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(158), 13,
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
  [1499] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(266), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(264), 13,
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
  [1528] = 3,
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
    ACTIONS(258), 13,
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
  [1557] = 3,
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
  [1586] = 3,
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
  [1615] = 3,
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
  [1644] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(154), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(152), 13,
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
  [1673] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(248), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(246), 13,
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
  [1702] = 3,
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
  [1731] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(130), 8,
      sym__hash,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
    ACTIONS(128), 13,
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
  [1760] = 3,
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
  [1789] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    ACTIONS(288), 1,
      sym_comment,
    STATE(4), 1,
      sym_account,
    STATE(153), 1,
      sym_optflag,
    STATE(223), 1,
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
  [1833] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(90), 1,
      sym__hash,
    ACTIONS(98), 1,
      sym_key,
    ACTIONS(290), 1,
      sym_comment,
    STATE(4), 1,
      sym_account,
    STATE(153), 1,
      sym_optflag,
    STATE(223), 1,
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
    STATE(9), 5,
      sym_tags_links,
      sym_posting,
      sym_key_value_line,
      sym__posting_or_kv_list,
      aux_sym_transaction_repeat1,
  [1877] = 9,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      sym_currency,
    STATE(110), 1,
      sym__eol,
    STATE(198), 1,
      sym_opt_booking,
    STATE(233), 1,
      sym__string,
    ACTIONS(294), 2,
      aux_sym__eol_token1,
      sym_comment,
    STATE(146), 2,
      sym__currency_list,
      aux_sym_open_repeat1,
    ACTIONS(292), 9,
      ts_builtin_sym_end,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [1915] = 5,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(300), 1,
      sym__slash,
    ACTIONS(298), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
    ACTIONS(178), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(176), 10,
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
  [1945] = 3,
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
  [1970] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(282), 1,
      sym__number,
    ACTIONS(280), 16,
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
  [1995] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(230), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(228), 12,
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
  [2019] = 3,
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
  [2043] = 14,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(304), 1,
      anon_sym_open,
    ACTIONS(306), 1,
      anon_sym_close,
    ACTIONS(308), 1,
      anon_sym_commodity,
    ACTIONS(310), 1,
      anon_sym_pad,
    ACTIONS(312), 1,
      anon_sym_balance,
    ACTIONS(314), 1,
      anon_sym_price,
    ACTIONS(316), 1,
      anon_sym_event,
    ACTIONS(318), 1,
      anon_sym_query,
    ACTIONS(320), 1,
      anon_sym_note,
    ACTIONS(322), 1,
      anon_sym_document,
    ACTIONS(324), 1,
      anon_sym_custom,
    STATE(196), 1,
      sym_txn,
    ACTIONS(302), 4,
      sym__hash,
      sym__asterisk,
      sym_flag,
      anon_sym_txn,
  [2089] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(230), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(228), 12,
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
  [2113] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(230), 4,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym_currency,
      sym__number,
    ACTIONS(228), 12,
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
  [2137] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(330), 1,
      sym_currency,
    ACTIONS(328), 3,
      anon_sym_TRUE,
      anon_sym_FALSE,
      sym__number,
    ACTIONS(326), 12,
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
  [2163] = 3,
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
  [2186] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(332), 1,
      anon_sym_COLON,
    ACTIONS(334), 1,
      aux_sym__account_name_token2,
    ACTIONS(336), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(344), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(338), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(340), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(342), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(68), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2221] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(336), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(344), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(346), 1,
      anon_sym_COLON,
    ACTIONS(348), 1,
      aux_sym__account_name_token2,
    ACTIONS(338), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(340), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(342), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(61), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2256] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(278), 1,
      sym__number,
    ACTIONS(276), 14,
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
  [2279] = 3,
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
  [2302] = 8,
    ACTIONS(350), 1,
      aux_sym__account_name_token2,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(332), 2,
      anon_sym_COLON,
      aux_sym_account_token1,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(67), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2335] = 8,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(362), 1,
      aux_sym__account_name_token2,
    ACTIONS(346), 2,
      anon_sym_COLON,
      aux_sym_account_token1,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(65), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2368] = 8,
    ACTIONS(366), 1,
      aux_sym__account_name_token2,
    ACTIONS(369), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(381), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(364), 2,
      anon_sym_COLON,
      aux_sym_account_token1,
    ACTIONS(372), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(375), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(378), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(67), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2401] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(364), 1,
      anon_sym_COLON,
    ACTIONS(384), 1,
      aux_sym__account_name_token2,
    ACTIONS(387), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(399), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(390), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(393), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(396), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(68), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
  [2436] = 3,
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
  [2459] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(328), 1,
      sym__number,
    ACTIONS(326), 14,
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
  [2482] = 3,
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
  [2505] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(277), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2539] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(283), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2573] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(295), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2607] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(287), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2641] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(281), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2675] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(406), 1,
      sym__slash,
    ACTIONS(178), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(404), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
    ACTIONS(176), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [2701] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(288), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2735] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(336), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(344), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(408), 1,
      aux_sym__account_name_token1,
    STATE(272), 1,
      sym__account_name,
    ACTIONS(338), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(340), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(342), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(62), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2769] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(410), 1,
      sym__hash,
    ACTIONS(414), 1,
      sym_currency,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_number_expr,
    STATE(194), 1,
      sym_cost_comp,
    STATE(245), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(412), 2,
      sym__asterisk,
      sym_date,
    STATE(191), 2,
      sym__string,
      sym_compound_amout,
  [2809] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(264), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2843] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(410), 1,
      sym__hash,
    ACTIONS(414), 1,
      sym_currency,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_number_expr,
    STATE(194), 1,
      sym_cost_comp,
    STATE(249), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(412), 2,
      sym__asterisk,
      sym_date,
    STATE(191), 2,
      sym__string,
      sym_compound_amout,
  [2883] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(410), 1,
      sym__hash,
    ACTIONS(414), 1,
      sym_currency,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_number_expr,
    STATE(194), 1,
      sym_cost_comp,
    STATE(247), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(412), 2,
      sym__asterisk,
      sym_date,
    STATE(191), 2,
      sym__string,
      sym_compound_amout,
  [2923] = 12,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(410), 1,
      sym__hash,
    ACTIONS(414), 1,
      sym_currency,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_number_expr,
    STATE(194), 1,
      sym_cost_comp,
    STATE(248), 1,
      sym_cost_comp_list,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(412), 2,
      sym__asterisk,
      sym_date,
    STATE(191), 2,
      sym__string,
      sym_compound_amout,
  [2963] = 9,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(352), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(360), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(402), 1,
      aux_sym__account_name_token1,
    STATE(270), 1,
      sym__account_name,
    ACTIONS(354), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(356), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(358), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(66), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [2997] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(418), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(420), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3022] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(102), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(424), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3047] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(426), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(428), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3072] = 2,
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
  [3091] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(86), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(430), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(432), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3116] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(430), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(432), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3141] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(434), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(436), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3166] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(438), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(440), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3191] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(442), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(444), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3216] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(446), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(448), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3241] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(452), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3266] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(95), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(454), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(456), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3291] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(458), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(460), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3316] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(78), 1,
      sym__number,
    ACTIONS(410), 1,
      sym__hash,
    ACTIONS(414), 1,
      sym_currency,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym_number_expr,
    STATE(207), 1,
      sym_cost_comp,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
    ACTIONS(412), 2,
      sym__asterisk,
      sym_date,
    STATE(191), 2,
      sym__string,
      sym_compound_amout,
  [3353] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(422), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(424), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3378] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(464), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(462), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(467), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3403] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(469), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(471), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3428] = 2,
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
  [3447] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(111), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(473), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(475), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3472] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(118), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(477), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(479), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3497] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(481), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(483), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3522] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(485), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(487), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3547] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(100), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(485), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(487), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3572] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(96), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(489), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(491), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3597] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(107), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(493), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(495), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3622] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(497), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(499), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3647] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(501), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(503), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3672] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(94), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(505), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(507), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3697] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(93), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(509), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(511), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3722] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(92), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(513), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(515), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3747] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(91), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(517), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(519), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3772] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(112), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(521), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(523), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3797] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(527), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3822] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(98), 1,
      sym_key,
    STATE(88), 2,
      sym_key_value_line,
      aux_sym_open_repeat2,
    ACTIONS(525), 3,
      ts_builtin_sym_end,
      sym_comment,
      sym_date,
    ACTIONS(527), 7,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3847] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(106), 1,
      sym__eol,
    ACTIONS(531), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(529), 9,
      ts_builtin_sym_end,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3869] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(104), 1,
      sym__eol,
    ACTIONS(535), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(533), 9,
      ts_builtin_sym_end,
      sym_date,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
  [3891] = 11,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(537), 1,
      sym__atat,
    ACTIONS(539), 1,
      sym__at,
    ACTIONS(541), 1,
      sym_currency,
    ACTIONS(543), 1,
      sym__number,
    STATE(156), 1,
      sym_number_expr,
    STATE(239), 1,
      sym_cost_spec,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [3926] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(545), 10,
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
  [3942] = 3,
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
  [3960] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(547), 10,
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
  [3976] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(549), 10,
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
  [3992] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(551), 10,
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
  [4008] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(553), 10,
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
  [4024] = 1,
    ACTIONS(555), 11,
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
  [4038] = 2,
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
  [4054] = 1,
    ACTIONS(549), 11,
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
  [4068] = 1,
    ACTIONS(559), 11,
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
  [4082] = 2,
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
  [4098] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(559), 10,
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
  [4114] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(563), 10,
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
  [4130] = 2,
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
  [4146] = 1,
    ACTIONS(545), 11,
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
  [4160] = 1,
    ACTIONS(567), 11,
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
  [4174] = 2,
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
  [4190] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(571), 10,
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
  [4206] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(567), 10,
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
  [4222] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(230), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(228), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [4240] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(230), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(228), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [4258] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(230), 3,
      sym__at,
      sym__lcurl,
      sym__rcurl,
    ACTIONS(228), 7,
      sym__atat,
      sym__lcurllcurl,
      sym__rcurlrcurl,
      sym__comma,
      sym__tilde,
      sym__hash,
      sym_currency,
  [4276] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(555), 10,
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
  [4292] = 8,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    ACTIONS(296), 1,
      sym_currency,
    STATE(108), 1,
      sym__eol,
    STATE(187), 1,
      sym_opt_booking,
    STATE(233), 1,
      sym__string,
    ACTIONS(573), 2,
      aux_sym__eol_token1,
      sym_comment,
    STATE(163), 2,
      sym__currency_list,
      aux_sym_open_repeat1,
  [4319] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(121), 1,
      sym_account,
    STATE(226), 1,
      sym__account_type,
    ACTIONS(575), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4336] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(159), 1,
      sym_account,
    STATE(231), 1,
      sym__account_type,
    ACTIONS(577), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4353] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(219), 1,
      sym_account,
    STATE(231), 1,
      sym__account_type,
    ACTIONS(577), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4370] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(581), 1,
      sym__slash,
    ACTIONS(176), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
    ACTIONS(579), 3,
      sym__asterisk,
      sym__plus,
      sym__minus,
  [4387] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(211), 1,
      sym_account,
    STATE(231), 1,
      sym__account_type,
    ACTIONS(577), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4404] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(120), 1,
      sym_account,
    STATE(226), 1,
      sym__account_type,
    ACTIONS(575), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4421] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(122), 1,
      sym_account,
    STATE(231), 1,
      sym__account_type,
    ACTIONS(577), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4438] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(152), 1,
      sym_account,
    STATE(231), 1,
      sym__account_type,
    ACTIONS(577), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4455] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    STATE(50), 1,
      sym_account,
    STATE(226), 1,
      sym__account_type,
    ACTIONS(575), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4472] = 7,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(164), 1,
      sym__atat,
    ACTIONS(166), 1,
      sym__at,
    ACTIONS(583), 1,
      sym_currency,
    STATE(228), 1,
      sym_cost_spec,
  [4494] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(543), 1,
      sym__number,
    ACTIONS(585), 1,
      sym_currency,
    STATE(303), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4514] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(543), 1,
      sym__number,
    ACTIONS(587), 1,
      sym_currency,
    STATE(307), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4534] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(543), 1,
      sym__number,
    STATE(188), 1,
      sym_amount_tolerance,
    STATE(251), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4554] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(543), 1,
      sym__number,
    STATE(210), 1,
      sym_amount,
    STATE(260), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4574] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(175), 1,
      sym__string,
    ACTIONS(589), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_tag,
      sym_link,
  [4590] = 5,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(48), 1,
      sym__eol,
    STATE(185), 1,
      sym_tags_links,
    ACTIONS(591), 2,
      aux_sym__eol_token1,
      sym_comment,
    ACTIONS(593), 2,
      sym_tag,
      sym_link,
  [4608] = 4,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(597), 1,
      sym_currency,
    STATE(163), 2,
      sym__currency_list,
      aux_sym_open_repeat1,
    ACTIONS(595), 3,
      aux_sym__eol_token1,
      sym_comment,
      anon_sym_DQUOTE,
  [4624] = 5,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(116), 1,
      sym__eol,
    STATE(186), 1,
      sym_tags_links,
    ACTIONS(593), 2,
      sym_tag,
      sym_link,
    ACTIONS(600), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4642] = 7,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(537), 1,
      sym__atat,
    ACTIONS(539), 1,
      sym__at,
    ACTIONS(602), 1,
      sym_currency,
    STATE(239), 1,
      sym_cost_spec,
  [4664] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(585), 1,
      sym_currency,
    ACTIONS(606), 1,
      sym__rcurl,
    ACTIONS(608), 1,
      sym__hash,
    ACTIONS(604), 2,
      sym__rcurlrcurl,
      sym__comma,
  [4681] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(537), 1,
      sym__atat,
    ACTIONS(539), 1,
      sym__at,
    STATE(239), 1,
      sym_cost_spec,
  [4700] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(610), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [4711] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(74), 1,
      sym__lparen,
    ACTIONS(543), 1,
      sym__number,
    STATE(304), 1,
      sym_number_expr,
    ACTIONS(72), 2,
      sym__plus,
      sym__minus,
  [4728] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(614), 1,
      sym__comma,
    ACTIONS(612), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
      anon_sym_DQUOTE,
  [4741] = 6,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(66), 1,
      sym__lcurllcurl,
    ACTIONS(68), 1,
      sym__lcurl,
    ACTIONS(164), 1,
      sym__atat,
    ACTIONS(166), 1,
      sym__at,
    STATE(228), 1,
      sym_cost_spec,
  [4760] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(616), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_tag,
      sym_link,
  [4770] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(618), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
      anon_sym_DQUOTE,
  [4780] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(620), 1,
      anon_sym_DQUOTE,
    ACTIONS(622), 1,
      aux_sym__string_token1,
    ACTIONS(624), 1,
      aux_sym__string_token2,
    STATE(178), 1,
      aux_sym__string_repeat1,
  [4796] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(626), 4,
      aux_sym__eol_token1,
      sym_comment,
      sym_tag,
      sym_link,
  [4806] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(628), 1,
      anon_sym_DQUOTE,
    ACTIONS(630), 1,
      aux_sym__string_token1,
    ACTIONS(632), 1,
      aux_sym__string_token2,
    STATE(179), 1,
      aux_sym__string_repeat1,
  [4822] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(282), 1,
      sym__rcurl,
    ACTIONS(280), 3,
      sym__rcurlrcurl,
      sym__comma,
      anon_sym_DQUOTE,
  [4834] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(634), 1,
      anon_sym_DQUOTE,
    ACTIONS(636), 1,
      aux_sym__string_token1,
    ACTIONS(638), 1,
      aux_sym__string_token2,
    STATE(182), 1,
      aux_sym__string_repeat1,
  [4850] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(636), 1,
      aux_sym__string_token1,
    ACTIONS(638), 1,
      aux_sym__string_token2,
    ACTIONS(640), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      aux_sym__string_repeat1,
  [4866] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(286), 1,
      sym__rcurl,
    ACTIONS(284), 3,
      sym__rcurlrcurl,
      sym__comma,
      anon_sym_DQUOTE,
  [4878] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(642), 1,
      anon_sym_DQUOTE,
    ACTIONS(644), 1,
      aux_sym__string_token1,
    ACTIONS(646), 1,
      aux_sym__string_token2,
    STATE(183), 1,
      aux_sym__string_repeat1,
  [4894] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(648), 1,
      anon_sym_DQUOTE,
    ACTIONS(650), 1,
      aux_sym__string_token1,
    ACTIONS(653), 1,
      aux_sym__string_token2,
    STATE(182), 1,
      aux_sym__string_repeat1,
  [4910] = 5,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(636), 1,
      aux_sym__string_token1,
    ACTIONS(638), 1,
      aux_sym__string_token2,
    ACTIONS(656), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      aux_sym__string_repeat1,
  [4926] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(114), 1,
      sym__eol,
    ACTIONS(658), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4937] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(49), 1,
      sym__eol,
    ACTIONS(660), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4948] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(90), 1,
      sym__eol,
    ACTIONS(662), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4959] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(87), 1,
      sym__eol,
    ACTIONS(664), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4970] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(109), 1,
      sym__eol,
    ACTIONS(666), 2,
      aux_sym__eol_token1,
      sym_comment,
  [4981] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(228), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [4990] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(228), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [4999] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(670), 1,
      sym__rcurl,
    ACTIONS(668), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5010] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(606), 1,
      sym__rcurl,
    ACTIONS(604), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5021] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(228), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [5030] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(674), 1,
      sym__rcurl,
    ACTIONS(672), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5041] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(232), 3,
      aux_sym__eol_token1,
      sym_comment,
      sym_currency,
  [5050] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym__string,
    STATE(162), 1,
      sym_txn_strings,
  [5063] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(139), 1,
      sym__eol,
    ACTIONS(676), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5074] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(108), 1,
      sym__eol,
    ACTIONS(573), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5085] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(680), 1,
      sym__rcurl,
    ACTIONS(678), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5096] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(136), 1,
      sym__eol,
    ACTIONS(682), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5107] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(135), 1,
      sym__eol,
    ACTIONS(684), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5118] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(133), 1,
      sym__eol,
    ACTIONS(686), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5129] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(128), 1,
      sym__eol,
    ACTIONS(688), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5140] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(127), 1,
      sym__eol,
    ACTIONS(690), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5151] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(694), 1,
      sym__rcurl,
    ACTIONS(692), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5162] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(117), 1,
      sym__eol,
    ACTIONS(696), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5173] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(700), 1,
      sym__rcurl,
    ACTIONS(698), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5184] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(140), 1,
      sym__eol,
    ACTIONS(702), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5195] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(704), 1,
      sym_currency,
    ACTIONS(258), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5206] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(97), 1,
      sym__eol,
    ACTIONS(706), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5217] = 4,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_filename,
    STATE(172), 1,
      sym__string,
  [5230] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(710), 1,
      sym__rcurl,
    ACTIONS(708), 2,
      sym__rcurlrcurl,
      sym__comma,
  [5241] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(113), 1,
      sym__eol,
    ACTIONS(712), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5252] = 3,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    STATE(115), 1,
      sym__eol,
    ACTIONS(714), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5263] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(537), 1,
      sym__atat,
    ACTIONS(539), 1,
      sym__at,
  [5273] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(716), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5281] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(718), 1,
      anon_sym_COLON,
    STATE(252), 1,
      aux_sym_account_repeat1,
  [5291] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(268), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5299] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym__string,
  [5309] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym__string,
  [5319] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym__string,
  [5329] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(258), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5337] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(720), 1,
      anon_sym_COLON,
    STATE(217), 1,
      aux_sym_account_repeat1,
  [5347] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(264), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5355] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(722), 1,
      anon_sym_COLON,
    STATE(252), 1,
      aux_sym_account_repeat1,
  [5365] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(724), 1,
      anon_sym_COLON,
    STATE(232), 1,
      aux_sym_account_repeat1,
  [5375] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(726), 1,
      anon_sym_COLON,
    STATE(225), 1,
      aux_sym_account_repeat1,
  [5385] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(172), 1,
      sym__atat,
    ACTIONS(174), 1,
      sym__at,
  [5395] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym__string,
  [5405] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(728), 1,
      anon_sym_COLON,
    STATE(252), 1,
      aux_sym_account_repeat1,
  [5415] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(730), 1,
      anon_sym_COLON,
    STATE(230), 1,
      aux_sym_account_repeat1,
  [5425] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(732), 1,
      anon_sym_COLON,
    STATE(252), 1,
      aux_sym_account_repeat1,
  [5435] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(734), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5443] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(736), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym__colon,
  [5453] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(200), 1,
      sym__atat,
    ACTIONS(202), 1,
      sym__at,
  [5463] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(738), 1,
      sym_key,
    STATE(201), 1,
      sym_key_value_line,
  [5473] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(738), 1,
      sym_key,
    STATE(202), 1,
      sym_key_value_line,
  [5483] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(229), 1,
      sym__string,
  [5493] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(164), 1,
      sym__atat,
    ACTIONS(166), 1,
      sym__at,
  [5503] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(203), 1,
      sym__string,
  [5513] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym__string,
  [5523] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
    STATE(204), 1,
      sym__string,
  [5533] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(740), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym__colon,
  [5543] = 2,
    ACTIONS(3), 1,
      aux_sym_account_token1,
    ACTIONS(742), 2,
      aux_sym__eol_token1,
      sym_comment,
  [5551] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(744), 1,
      sym__rcurl,
    ACTIONS(746), 1,
      sym__comma,
  [5561] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(220), 1,
      sym__string,
  [5571] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(746), 1,
      sym__comma,
    ACTIONS(748), 1,
      sym__rcurl,
  [5581] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(746), 1,
      sym__comma,
    ACTIONS(748), 1,
      sym__rcurlrcurl,
  [5591] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(744), 1,
      sym__rcurlrcurl,
    ACTIONS(746), 1,
      sym__comma,
  [5601] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(416), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      sym__string,
  [5611] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(750), 1,
      sym__tilde,
    ACTIONS(752), 1,
      sym_currency,
  [5621] = 3,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(754), 1,
      anon_sym_COLON,
    STATE(252), 1,
      aux_sym_account_repeat1,
  [5631] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(757), 1,
      sym__UTF_8_1,
  [5638] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(759), 1,
      sym__number,
  [5645] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(761), 1,
      sym__UTF_8_1,
  [5652] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(763), 1,
      sym_currency,
  [5659] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(765), 1,
      sym__UTF_8_1,
  [5666] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(767), 1,
      sym__UTF_8_1,
  [5673] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(769), 1,
      anon_sym_DQUOTE,
  [5680] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(704), 1,
      sym_currency,
  [5687] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(771), 1,
      sym__number,
  [5694] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(773), 1,
      sym__UTF_8_1,
  [5701] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(775), 1,
      sym__UTF_8_1,
  [5708] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(779), 1,
      aux_sym_account_token1,
  [5715] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(781), 1,
      sym__rparen,
  [5722] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(783), 1,
      sym__number,
  [5729] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(785), 1,
      sym__number,
  [5736] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(787), 1,
      sym__UTF_8_1,
  [5743] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(789), 1,
      sym__UTF_8_1,
  [5750] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(791), 1,
      aux_sym_account_token1,
  [5757] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(793), 1,
      sym__UTF_8_1,
  [5764] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(777), 1,
      anon_sym_COLON,
  [5771] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(795), 1,
      sym__number,
  [5778] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(797), 1,
      sym__number,
  [5785] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(799), 1,
      sym__number,
  [5792] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(801), 1,
      sym__number,
  [5799] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(803), 1,
      aux_sym_account_token1,
  [5806] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(805), 1,
      sym__rparen,
  [5813] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(807), 1,
      sym__number,
  [5820] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(809), 1,
      sym__number,
  [5827] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(811), 1,
      aux_sym_account_token1,
  [5834] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(813), 1,
      sym_currency,
  [5841] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(815), 1,
      aux_sym_account_token1,
  [5848] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(817), 1,
      sym__rparen,
  [5855] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(819), 1,
      sym__number,
  [5862] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(821), 1,
      sym__number,
  [5869] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(823), 1,
      aux_sym_account_token1,
  [5876] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(825), 1,
      aux_sym_account_token1,
  [5883] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(827), 1,
      sym__number,
  [5890] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(829), 1,
      sym__number,
  [5897] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(831), 1,
      sym__UTF_8_1,
  [5904] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(833), 1,
      sym__UTF_8_1,
  [5911] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(835), 1,
      ts_builtin_sym_end,
  [5918] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(837), 1,
      sym__UTF_8_1,
  [5925] = 2,
    ACTIONS(777), 1,
      anon_sym_COLON,
    ACTIONS(839), 1,
      aux_sym_account_token1,
  [5932] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(841), 1,
      sym__UTF_8_1,
  [5939] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(843), 1,
      sym__UTF_8_1,
  [5946] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(845), 1,
      sym__number,
  [5953] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(847), 1,
      sym__UTF_8_1,
  [5960] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(849), 1,
      sym__UTF_8_1,
  [5967] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(851), 1,
      sym__number,
  [5974] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(853), 1,
      sym_tag,
  [5981] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(587), 1,
      sym_currency,
  [5988] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(855), 1,
      sym_currency,
  [5995] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(857), 1,
      sym__UTF_8_1,
  [6002] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(859), 1,
      sym__UTF_8_1,
  [6009] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(861), 1,
      sym_currency,
  [6016] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(863), 1,
      sym__rparen,
  [6023] = 2,
    ACTIONS(11), 1,
      aux_sym_account_token1,
    ACTIONS(865), 1,
      sym_tag,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 126,
  [SMALL_STATE(5)] = 186,
  [SMALL_STATE(6)] = 224,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 317,
  [SMALL_STATE(9)] = 374,
  [SMALL_STATE(10)] = 429,
  [SMALL_STATE(11)] = 474,
  [SMALL_STATE(12)] = 519,
  [SMALL_STATE(13)] = 564,
  [SMALL_STATE(14)] = 609,
  [SMALL_STATE(15)] = 654,
  [SMALL_STATE(16)] = 698,
  [SMALL_STATE(17)] = 742,
  [SMALL_STATE(18)] = 779,
  [SMALL_STATE(19)] = 831,
  [SMALL_STATE(20)] = 883,
  [SMALL_STATE(21)] = 918,
  [SMALL_STATE(22)] = 949,
  [SMALL_STATE(23)] = 984,
  [SMALL_STATE(24)] = 1033,
  [SMALL_STATE(25)] = 1063,
  [SMALL_STATE(26)] = 1093,
  [SMALL_STATE(27)] = 1123,
  [SMALL_STATE(28)] = 1171,
  [SMALL_STATE(29)] = 1203,
  [SMALL_STATE(30)] = 1235,
  [SMALL_STATE(31)] = 1267,
  [SMALL_STATE(32)] = 1299,
  [SMALL_STATE(33)] = 1347,
  [SMALL_STATE(34)] = 1379,
  [SMALL_STATE(35)] = 1411,
  [SMALL_STATE(36)] = 1441,
  [SMALL_STATE(37)] = 1470,
  [SMALL_STATE(38)] = 1499,
  [SMALL_STATE(39)] = 1528,
  [SMALL_STATE(40)] = 1557,
  [SMALL_STATE(41)] = 1586,
  [SMALL_STATE(42)] = 1615,
  [SMALL_STATE(43)] = 1644,
  [SMALL_STATE(44)] = 1673,
  [SMALL_STATE(45)] = 1702,
  [SMALL_STATE(46)] = 1731,
  [SMALL_STATE(47)] = 1760,
  [SMALL_STATE(48)] = 1789,
  [SMALL_STATE(49)] = 1833,
  [SMALL_STATE(50)] = 1877,
  [SMALL_STATE(51)] = 1915,
  [SMALL_STATE(52)] = 1945,
  [SMALL_STATE(53)] = 1970,
  [SMALL_STATE(54)] = 1995,
  [SMALL_STATE(55)] = 2019,
  [SMALL_STATE(56)] = 2043,
  [SMALL_STATE(57)] = 2089,
  [SMALL_STATE(58)] = 2113,
  [SMALL_STATE(59)] = 2137,
  [SMALL_STATE(60)] = 2163,
  [SMALL_STATE(61)] = 2186,
  [SMALL_STATE(62)] = 2221,
  [SMALL_STATE(63)] = 2256,
  [SMALL_STATE(64)] = 2279,
  [SMALL_STATE(65)] = 2302,
  [SMALL_STATE(66)] = 2335,
  [SMALL_STATE(67)] = 2368,
  [SMALL_STATE(68)] = 2401,
  [SMALL_STATE(69)] = 2436,
  [SMALL_STATE(70)] = 2459,
  [SMALL_STATE(71)] = 2482,
  [SMALL_STATE(72)] = 2505,
  [SMALL_STATE(73)] = 2539,
  [SMALL_STATE(74)] = 2573,
  [SMALL_STATE(75)] = 2607,
  [SMALL_STATE(76)] = 2641,
  [SMALL_STATE(77)] = 2675,
  [SMALL_STATE(78)] = 2701,
  [SMALL_STATE(79)] = 2735,
  [SMALL_STATE(80)] = 2769,
  [SMALL_STATE(81)] = 2809,
  [SMALL_STATE(82)] = 2843,
  [SMALL_STATE(83)] = 2883,
  [SMALL_STATE(84)] = 2923,
  [SMALL_STATE(85)] = 2963,
  [SMALL_STATE(86)] = 2997,
  [SMALL_STATE(87)] = 3022,
  [SMALL_STATE(88)] = 3047,
  [SMALL_STATE(89)] = 3072,
  [SMALL_STATE(90)] = 3091,
  [SMALL_STATE(91)] = 3116,
  [SMALL_STATE(92)] = 3141,
  [SMALL_STATE(93)] = 3166,
  [SMALL_STATE(94)] = 3191,
  [SMALL_STATE(95)] = 3216,
  [SMALL_STATE(96)] = 3241,
  [SMALL_STATE(97)] = 3266,
  [SMALL_STATE(98)] = 3291,
  [SMALL_STATE(99)] = 3316,
  [SMALL_STATE(100)] = 3353,
  [SMALL_STATE(101)] = 3378,
  [SMALL_STATE(102)] = 3403,
  [SMALL_STATE(103)] = 3428,
  [SMALL_STATE(104)] = 3447,
  [SMALL_STATE(105)] = 3472,
  [SMALL_STATE(106)] = 3497,
  [SMALL_STATE(107)] = 3522,
  [SMALL_STATE(108)] = 3547,
  [SMALL_STATE(109)] = 3572,
  [SMALL_STATE(110)] = 3597,
  [SMALL_STATE(111)] = 3622,
  [SMALL_STATE(112)] = 3647,
  [SMALL_STATE(113)] = 3672,
  [SMALL_STATE(114)] = 3697,
  [SMALL_STATE(115)] = 3722,
  [SMALL_STATE(116)] = 3747,
  [SMALL_STATE(117)] = 3772,
  [SMALL_STATE(118)] = 3797,
  [SMALL_STATE(119)] = 3822,
  [SMALL_STATE(120)] = 3847,
  [SMALL_STATE(121)] = 3869,
  [SMALL_STATE(122)] = 3891,
  [SMALL_STATE(123)] = 3926,
  [SMALL_STATE(124)] = 3942,
  [SMALL_STATE(125)] = 3960,
  [SMALL_STATE(126)] = 3976,
  [SMALL_STATE(127)] = 3992,
  [SMALL_STATE(128)] = 4008,
  [SMALL_STATE(129)] = 4024,
  [SMALL_STATE(130)] = 4038,
  [SMALL_STATE(131)] = 4054,
  [SMALL_STATE(132)] = 4068,
  [SMALL_STATE(133)] = 4082,
  [SMALL_STATE(134)] = 4098,
  [SMALL_STATE(135)] = 4114,
  [SMALL_STATE(136)] = 4130,
  [SMALL_STATE(137)] = 4146,
  [SMALL_STATE(138)] = 4160,
  [SMALL_STATE(139)] = 4174,
  [SMALL_STATE(140)] = 4190,
  [SMALL_STATE(141)] = 4206,
  [SMALL_STATE(142)] = 4222,
  [SMALL_STATE(143)] = 4240,
  [SMALL_STATE(144)] = 4258,
  [SMALL_STATE(145)] = 4276,
  [SMALL_STATE(146)] = 4292,
  [SMALL_STATE(147)] = 4319,
  [SMALL_STATE(148)] = 4336,
  [SMALL_STATE(149)] = 4353,
  [SMALL_STATE(150)] = 4370,
  [SMALL_STATE(151)] = 4387,
  [SMALL_STATE(152)] = 4404,
  [SMALL_STATE(153)] = 4421,
  [SMALL_STATE(154)] = 4438,
  [SMALL_STATE(155)] = 4455,
  [SMALL_STATE(156)] = 4472,
  [SMALL_STATE(157)] = 4494,
  [SMALL_STATE(158)] = 4514,
  [SMALL_STATE(159)] = 4534,
  [SMALL_STATE(160)] = 4554,
  [SMALL_STATE(161)] = 4574,
  [SMALL_STATE(162)] = 4590,
  [SMALL_STATE(163)] = 4608,
  [SMALL_STATE(164)] = 4624,
  [SMALL_STATE(165)] = 4642,
  [SMALL_STATE(166)] = 4664,
  [SMALL_STATE(167)] = 4681,
  [SMALL_STATE(168)] = 4700,
  [SMALL_STATE(169)] = 4711,
  [SMALL_STATE(170)] = 4728,
  [SMALL_STATE(171)] = 4741,
  [SMALL_STATE(172)] = 4760,
  [SMALL_STATE(173)] = 4770,
  [SMALL_STATE(174)] = 4780,
  [SMALL_STATE(175)] = 4796,
  [SMALL_STATE(176)] = 4806,
  [SMALL_STATE(177)] = 4822,
  [SMALL_STATE(178)] = 4834,
  [SMALL_STATE(179)] = 4850,
  [SMALL_STATE(180)] = 4866,
  [SMALL_STATE(181)] = 4878,
  [SMALL_STATE(182)] = 4894,
  [SMALL_STATE(183)] = 4910,
  [SMALL_STATE(184)] = 4926,
  [SMALL_STATE(185)] = 4937,
  [SMALL_STATE(186)] = 4948,
  [SMALL_STATE(187)] = 4959,
  [SMALL_STATE(188)] = 4970,
  [SMALL_STATE(189)] = 4981,
  [SMALL_STATE(190)] = 4990,
  [SMALL_STATE(191)] = 4999,
  [SMALL_STATE(192)] = 5010,
  [SMALL_STATE(193)] = 5021,
  [SMALL_STATE(194)] = 5030,
  [SMALL_STATE(195)] = 5041,
  [SMALL_STATE(196)] = 5050,
  [SMALL_STATE(197)] = 5063,
  [SMALL_STATE(198)] = 5074,
  [SMALL_STATE(199)] = 5085,
  [SMALL_STATE(200)] = 5096,
  [SMALL_STATE(201)] = 5107,
  [SMALL_STATE(202)] = 5118,
  [SMALL_STATE(203)] = 5129,
  [SMALL_STATE(204)] = 5140,
  [SMALL_STATE(205)] = 5151,
  [SMALL_STATE(206)] = 5162,
  [SMALL_STATE(207)] = 5173,
  [SMALL_STATE(208)] = 5184,
  [SMALL_STATE(209)] = 5195,
  [SMALL_STATE(210)] = 5206,
  [SMALL_STATE(211)] = 5217,
  [SMALL_STATE(212)] = 5230,
  [SMALL_STATE(213)] = 5241,
  [SMALL_STATE(214)] = 5252,
  [SMALL_STATE(215)] = 5263,
  [SMALL_STATE(216)] = 5273,
  [SMALL_STATE(217)] = 5281,
  [SMALL_STATE(218)] = 5291,
  [SMALL_STATE(219)] = 5299,
  [SMALL_STATE(220)] = 5309,
  [SMALL_STATE(221)] = 5319,
  [SMALL_STATE(222)] = 5329,
  [SMALL_STATE(223)] = 5337,
  [SMALL_STATE(224)] = 5347,
  [SMALL_STATE(225)] = 5355,
  [SMALL_STATE(226)] = 5365,
  [SMALL_STATE(227)] = 5375,
  [SMALL_STATE(228)] = 5385,
  [SMALL_STATE(229)] = 5395,
  [SMALL_STATE(230)] = 5405,
  [SMALL_STATE(231)] = 5415,
  [SMALL_STATE(232)] = 5425,
  [SMALL_STATE(233)] = 5435,
  [SMALL_STATE(234)] = 5443,
  [SMALL_STATE(235)] = 5453,
  [SMALL_STATE(236)] = 5463,
  [SMALL_STATE(237)] = 5473,
  [SMALL_STATE(238)] = 5483,
  [SMALL_STATE(239)] = 5493,
  [SMALL_STATE(240)] = 5503,
  [SMALL_STATE(241)] = 5513,
  [SMALL_STATE(242)] = 5523,
  [SMALL_STATE(243)] = 5533,
  [SMALL_STATE(244)] = 5543,
  [SMALL_STATE(245)] = 5551,
  [SMALL_STATE(246)] = 5561,
  [SMALL_STATE(247)] = 5571,
  [SMALL_STATE(248)] = 5581,
  [SMALL_STATE(249)] = 5591,
  [SMALL_STATE(250)] = 5601,
  [SMALL_STATE(251)] = 5611,
  [SMALL_STATE(252)] = 5621,
  [SMALL_STATE(253)] = 5631,
  [SMALL_STATE(254)] = 5638,
  [SMALL_STATE(255)] = 5645,
  [SMALL_STATE(256)] = 5652,
  [SMALL_STATE(257)] = 5659,
  [SMALL_STATE(258)] = 5666,
  [SMALL_STATE(259)] = 5673,
  [SMALL_STATE(260)] = 5680,
  [SMALL_STATE(261)] = 5687,
  [SMALL_STATE(262)] = 5694,
  [SMALL_STATE(263)] = 5701,
  [SMALL_STATE(264)] = 5708,
  [SMALL_STATE(265)] = 5715,
  [SMALL_STATE(266)] = 5722,
  [SMALL_STATE(267)] = 5729,
  [SMALL_STATE(268)] = 5736,
  [SMALL_STATE(269)] = 5743,
  [SMALL_STATE(270)] = 5750,
  [SMALL_STATE(271)] = 5757,
  [SMALL_STATE(272)] = 5764,
  [SMALL_STATE(273)] = 5771,
  [SMALL_STATE(274)] = 5778,
  [SMALL_STATE(275)] = 5785,
  [SMALL_STATE(276)] = 5792,
  [SMALL_STATE(277)] = 5799,
  [SMALL_STATE(278)] = 5806,
  [SMALL_STATE(279)] = 5813,
  [SMALL_STATE(280)] = 5820,
  [SMALL_STATE(281)] = 5827,
  [SMALL_STATE(282)] = 5834,
  [SMALL_STATE(283)] = 5841,
  [SMALL_STATE(284)] = 5848,
  [SMALL_STATE(285)] = 5855,
  [SMALL_STATE(286)] = 5862,
  [SMALL_STATE(287)] = 5869,
  [SMALL_STATE(288)] = 5876,
  [SMALL_STATE(289)] = 5883,
  [SMALL_STATE(290)] = 5890,
  [SMALL_STATE(291)] = 5897,
  [SMALL_STATE(292)] = 5904,
  [SMALL_STATE(293)] = 5911,
  [SMALL_STATE(294)] = 5918,
  [SMALL_STATE(295)] = 5925,
  [SMALL_STATE(296)] = 5932,
  [SMALL_STATE(297)] = 5939,
  [SMALL_STATE(298)] = 5946,
  [SMALL_STATE(299)] = 5953,
  [SMALL_STATE(300)] = 5960,
  [SMALL_STATE(301)] = 5967,
  [SMALL_STATE(302)] = 5974,
  [SMALL_STATE(303)] = 5981,
  [SMALL_STATE(304)] = 5988,
  [SMALL_STATE(305)] = 5995,
  [SMALL_STATE(306)] = 6002,
  [SMALL_STATE(307)] = 6009,
  [SMALL_STATE(308)] = 6016,
  [SMALL_STATE(309)] = 6023,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(56),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(309),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(302),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(236),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(237),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(238),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(240),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(242),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(8),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(168),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(168),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(223),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(40),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(243),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expr, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(261),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(290),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(70),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(227),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(176),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(51),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expr, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expr, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expr, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [244] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_value, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_value, 1),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_line, 3),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tags_links, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [286] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__string, 3),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 3),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__account_name, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__account_name, 1),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(67),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(306),
  [372] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(300),
  [375] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(299),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(297),
  [381] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(296),
  [384] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(68),
  [387] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(253),
  [390] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(263),
  [393] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(291),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(292),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(305),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7),
  [420] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6),
  [424] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6),
  [436] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 6),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2), SHIFT_REPEAT(243),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_open_repeat2, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5),
  [487] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4),
  [497] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5),
  [499] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5),
  [501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5),
  [503] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5),
  [505] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5),
  [515] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5),
  [521] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4),
  [525] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 4),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_2, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry, 1),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_4, 3),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_4, 4),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 1),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_3, 3),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 3),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_3, 2),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [597] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(170),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currency_list, 1),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__currency_list, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [636] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(182),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(182),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 1),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 2),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 2),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp_list, 3),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp_list, 3),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amout, 4),
  [710] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amout, 4),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [734] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [742] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [754] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(79),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [835] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
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
