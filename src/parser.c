#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 615
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 2
#define TOKEN_COUNT 68
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 28
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 87

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_CR = 3,
  sym__eol = 4,
  aux_sym__any_token1 = 5,
  aux_sym__org_stars_token1 = 6,
  aux_sym_headline_token1 = 7,
  sym__indent = 8,
  sym_atat = 9,
  sym_at = 10,
  anon_sym_STAR = 11,
  sym_slash = 12,
  sym_plus = 13,
  sym_minus = 14,
  sym_flag = 15,
  sym__none = 16,
  sym_bool = 17,
  sym_date = 18,
  sym_account = 19,
  sym_currency = 20,
  sym_string = 21,
  sym_number = 22,
  sym_tag = 23,
  sym_link = 24,
  sym_key = 25,
  anon_sym_txn = 26,
  anon_sym_POUND = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_COLON = 30,
  anon_sym_pushtag = 31,
  anon_sym_poptag = 32,
  anon_sym_pushmeta = 33,
  anon_sym_popmeta = 34,
  anon_sym_open = 35,
  anon_sym_COMMA = 36,
  anon_sym_close = 37,
  anon_sym_commodity = 38,
  anon_sym_pad = 39,
  anon_sym_balance = 40,
  anon_sym_TILDE = 41,
  anon_sym_LBRACE = 42,
  anon_sym_RBRACE = 43,
  anon_sym_LBRACE_LBRACE = 44,
  anon_sym_RBRACE_RBRACE = 45,
  anon_sym_price = 46,
  anon_sym_event = 47,
  anon_sym_query = 48,
  anon_sym_note = 49,
  anon_sym_document = 50,
  anon_sym_custom = 51,
  anon_sym_option = 52,
  anon_sym_include = 53,
  anon_sym_plugin = 54,
  anon_sym_SEMI = 55,
  sym__UTF_8_1 = 56,
  aux_sym__UTF_8_2_token1 = 57,
  aux_sym__UTF_8_3_token1 = 58,
  aux_sym__UTF_8_3_token2 = 59,
  aux_sym__UTF_8_3_token3 = 60,
  aux_sym__UTF_8_3_token4 = 61,
  aux_sym__UTF_8_4_token1 = 62,
  aux_sym__UTF_8_4_token2 = 63,
  aux_sym__UTF_8_4_token3 = 64,
  sym__stars = 65,
  sym__sectionend = 66,
  sym__eof = 67,
  sym_file = 68,
  sym__nl = 69,
  sym__any = 70,
  sym_section = 71,
  sym__org_stars = 72,
  sym_headline = 73,
  sym_item = 74,
  sym_asterisk = 75,
  sym_txn = 76,
  sym__number_expr = 77,
  sym__paren__number_expr = 78,
  sym_unary_number_expr = 79,
  sym_binary_number_expr = 80,
  sym__txn_strings = 81,
  sym_tags_links = 82,
  sym_transaction = 83,
  sym_optflag = 84,
  sym_price_annotation = 85,
  sym_posting = 86,
  sym_key_value = 87,
  sym_key_value_line = 88,
  sym__key_value_value = 89,
  aux_sym__key_value_list = 90,
  sym_pushtag = 91,
  sym_poptag = 92,
  sym_pushmeta = 93,
  sym_popmeta = 94,
  sym_open = 95,
  sym_opt_booking = 96,
  sym_close = 97,
  sym_commodity = 98,
  sym_pad = 99,
  sym_balance = 100,
  sym_amount = 101,
  sym_amount_tolerance = 102,
  sym_compound_amount = 103,
  sym_incomplete_amount = 104,
  sym_cost_spec = 105,
  sym__cost_comp_list = 106,
  sym_cost_comp = 107,
  sym_price = 108,
  sym_event = 109,
  sym_query = 110,
  sym_note = 111,
  sym_filename = 112,
  sym_document = 113,
  sym_custom_value = 114,
  sym_custom = 115,
  sym__entry = 116,
  sym_option = 117,
  sym_include = 118,
  sym_plugin = 119,
  sym__directive = 120,
  sym__declarations = 121,
  sym_comment = 122,
  sym__skipped_lines = 123,
  aux_sym_file_repeat1 = 124,
  aux_sym_section_repeat1 = 125,
  aux_sym_section_repeat2 = 126,
  aux_sym_tags_links_repeat1 = 127,
  aux_sym_transaction_repeat1 = 128,
  aux_sym_open_repeat1 = 129,
  aux_sym_open_repeat2 = 130,
  aux_sym__cost_comp_list_repeat1 = 131,
  aux_sym_custom_repeat1 = 132,
  alias_sym_narration = 133,
  alias_sym_payee = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [sym__eol] = "_eol",
  [aux_sym__any_token1] = "_any_token1",
  [aux_sym__org_stars_token1] = "_org_stars_token1",
  [aux_sym_headline_token1] = "headline_token1",
  [sym__indent] = "_indent",
  [sym_atat] = "atat",
  [sym_at] = "at",
  [anon_sym_STAR] = "*",
  [sym_slash] = "slash",
  [sym_plus] = "plus",
  [sym_minus] = "minus",
  [sym_flag] = "flag",
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
  [anon_sym_txn] = "txn",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_pushmeta] = "pushmeta",
  [anon_sym_popmeta] = "popmeta",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_pad] = "pad",
  [anon_sym_balance] = "balance",
  [anon_sym_TILDE] = "~",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_price] = "price",
  [anon_sym_event] = "event",
  [anon_sym_query] = "query",
  [anon_sym_note] = "note",
  [anon_sym_document] = "document",
  [anon_sym_custom] = "custom",
  [anon_sym_option] = "option",
  [anon_sym_include] = "include",
  [anon_sym_plugin] = "plugin",
  [anon_sym_SEMI] = ";",
  [sym__UTF_8_1] = "_UTF_8_1",
  [aux_sym__UTF_8_2_token1] = "_UTF_8_2_token1",
  [aux_sym__UTF_8_3_token1] = "_UTF_8_3_token1",
  [aux_sym__UTF_8_3_token2] = "_UTF_8_3_token2",
  [aux_sym__UTF_8_3_token3] = "_UTF_8_3_token3",
  [aux_sym__UTF_8_3_token4] = "_UTF_8_3_token4",
  [aux_sym__UTF_8_4_token1] = "_UTF_8_4_token1",
  [aux_sym__UTF_8_4_token2] = "_UTF_8_4_token2",
  [aux_sym__UTF_8_4_token3] = "_UTF_8_4_token3",
  [sym__stars] = "_stars",
  [sym__sectionend] = "_sectionend",
  [sym__eof] = "_eof",
  [sym_file] = "file",
  [sym__nl] = "_nl",
  [sym__any] = "_any",
  [sym_section] = "section",
  [sym__org_stars] = "_org_stars",
  [sym_headline] = "headline",
  [sym_item] = "item",
  [sym_asterisk] = "asterisk",
  [sym_txn] = "txn",
  [sym__number_expr] = "_number_expr",
  [sym__paren__number_expr] = "_paren__number_expr",
  [sym_unary_number_expr] = "unary_number_expr",
  [sym_binary_number_expr] = "binary_number_expr",
  [sym__txn_strings] = "_txn_strings",
  [sym_tags_links] = "tags_links",
  [sym_transaction] = "transaction",
  [sym_optflag] = "optflag",
  [sym_price_annotation] = "price_annotation",
  [sym_posting] = "posting",
  [sym_key_value] = "key_value",
  [sym_key_value_line] = "key_value_line",
  [sym__key_value_value] = "_key_value_value",
  [aux_sym__key_value_list] = "_key_value_list",
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
  [sym__cost_comp_list] = "_cost_comp_list",
  [sym_cost_comp] = "cost_comp",
  [sym_price] = "price",
  [sym_event] = "event",
  [sym_query] = "query",
  [sym_note] = "note",
  [sym_filename] = "filename",
  [sym_document] = "document",
  [sym_custom_value] = "custom_value",
  [sym_custom] = "custom",
  [sym__entry] = "_entry",
  [sym_option] = "option",
  [sym_include] = "include",
  [sym_plugin] = "plugin",
  [sym__directive] = "_directive",
  [sym__declarations] = "_declarations",
  [sym_comment] = "comment",
  [sym__skipped_lines] = "_skipped_lines",
  [aux_sym_file_repeat1] = "file_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_section_repeat2] = "section_repeat2",
  [aux_sym_tags_links_repeat1] = "tags_links_repeat1",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_open_repeat1] = "open_repeat1",
  [aux_sym_open_repeat2] = "open_repeat2",
  [aux_sym__cost_comp_list_repeat1] = "_cost_comp_list_repeat1",
  [aux_sym_custom_repeat1] = "custom_repeat1",
  [alias_sym_narration] = "narration",
  [alias_sym_payee] = "payee",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [sym__eol] = sym__eol,
  [aux_sym__any_token1] = aux_sym__any_token1,
  [aux_sym__org_stars_token1] = aux_sym__org_stars_token1,
  [aux_sym_headline_token1] = aux_sym_headline_token1,
  [sym__indent] = sym__indent,
  [sym_atat] = sym_atat,
  [sym_at] = sym_at,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_slash] = sym_slash,
  [sym_plus] = sym_plus,
  [sym_minus] = sym_minus,
  [sym_flag] = sym_flag,
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
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_pushmeta] = anon_sym_pushmeta,
  [anon_sym_popmeta] = anon_sym_popmeta,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_event] = anon_sym_event,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_document] = anon_sym_document,
  [anon_sym_custom] = anon_sym_custom,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_plugin] = anon_sym_plugin,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym__UTF_8_1] = sym__UTF_8_1,
  [aux_sym__UTF_8_2_token1] = aux_sym__UTF_8_2_token1,
  [aux_sym__UTF_8_3_token1] = aux_sym__UTF_8_3_token1,
  [aux_sym__UTF_8_3_token2] = aux_sym__UTF_8_3_token2,
  [aux_sym__UTF_8_3_token3] = aux_sym__UTF_8_3_token3,
  [aux_sym__UTF_8_3_token4] = aux_sym__UTF_8_3_token4,
  [aux_sym__UTF_8_4_token1] = aux_sym__UTF_8_4_token1,
  [aux_sym__UTF_8_4_token2] = aux_sym__UTF_8_4_token2,
  [aux_sym__UTF_8_4_token3] = aux_sym__UTF_8_4_token3,
  [sym__stars] = sym__stars,
  [sym__sectionend] = sym__sectionend,
  [sym__eof] = sym__eof,
  [sym_file] = sym_file,
  [sym__nl] = sym__nl,
  [sym__any] = sym__any,
  [sym_section] = sym_section,
  [sym__org_stars] = sym__org_stars,
  [sym_headline] = sym_headline,
  [sym_item] = sym_item,
  [sym_asterisk] = sym_asterisk,
  [sym_txn] = sym_txn,
  [sym__number_expr] = sym__number_expr,
  [sym__paren__number_expr] = sym__paren__number_expr,
  [sym_unary_number_expr] = sym_unary_number_expr,
  [sym_binary_number_expr] = sym_binary_number_expr,
  [sym__txn_strings] = sym__txn_strings,
  [sym_tags_links] = sym_tags_links,
  [sym_transaction] = sym_transaction,
  [sym_optflag] = sym_optflag,
  [sym_price_annotation] = sym_price_annotation,
  [sym_posting] = sym_posting,
  [sym_key_value] = sym_key_value,
  [sym_key_value_line] = sym_key_value_line,
  [sym__key_value_value] = sym__key_value_value,
  [aux_sym__key_value_list] = aux_sym__key_value_list,
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
  [sym__cost_comp_list] = sym__cost_comp_list,
  [sym_cost_comp] = sym_cost_comp,
  [sym_price] = sym_price,
  [sym_event] = sym_event,
  [sym_query] = sym_query,
  [sym_note] = sym_note,
  [sym_filename] = sym_filename,
  [sym_document] = sym_document,
  [sym_custom_value] = sym_custom_value,
  [sym_custom] = sym_custom,
  [sym__entry] = sym__entry,
  [sym_option] = sym_option,
  [sym_include] = sym_include,
  [sym_plugin] = sym_plugin,
  [sym__directive] = sym__directive,
  [sym__declarations] = sym__declarations,
  [sym_comment] = sym_comment,
  [sym__skipped_lines] = sym__skipped_lines,
  [aux_sym_file_repeat1] = aux_sym_file_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_section_repeat2] = aux_sym_section_repeat2,
  [aux_sym_tags_links_repeat1] = aux_sym_tags_links_repeat1,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_open_repeat1] = aux_sym_open_repeat1,
  [aux_sym_open_repeat2] = aux_sym_open_repeat2,
  [aux_sym__cost_comp_list_repeat1] = aux_sym__cost_comp_list_repeat1,
  [aux_sym_custom_repeat1] = aux_sym_custom_repeat1,
  [alias_sym_narration] = alias_sym_narration,
  [alias_sym_payee] = alias_sym_payee,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__any_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__org_stars_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_headline_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__indent] = {
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_slash] = {
    .visible = true,
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
  [sym_flag] = {
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
  [anon_sym_txn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_COMMA] = {
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
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
  [anon_sym_SEMI] = {
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
  [sym__stars] = {
    .visible = false,
    .named = true,
  },
  [sym__sectionend] = {
    .visible = false,
    .named = true,
  },
  [sym__eof] = {
    .visible = false,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym__nl] = {
    .visible = false,
    .named = true,
  },
  [sym__any] = {
    .visible = false,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__org_stars] = {
    .visible = false,
    .named = true,
  },
  [sym_headline] = {
    .visible = true,
    .named = true,
  },
  [sym_item] = {
    .visible = true,
    .named = true,
  },
  [sym_asterisk] = {
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
  [sym__txn_strings] = {
    .visible = false,
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
  [aux_sym__key_value_list] = {
    .visible = false,
    .named = false,
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
  [sym__cost_comp_list] = {
    .visible = false,
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
  [sym__entry] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
    .supertype = true,
  },
  [sym__declarations] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
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
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_links_repeat1] = {
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
  [aux_sym__cost_comp_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_custom_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_narration] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_payee] = {
    .visible = true,
    .named = true,
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
  field_headline = 13,
  field_item = 14,
  field_key = 15,
  field_name = 16,
  field_note = 17,
  field_opt_booking = 18,
  field_optflag = 19,
  field_per = 20,
  field_price_annotation = 21,
  field_query = 22,
  field_subsection = 23,
  field_tags_links = 24,
  field_total = 25,
  field_txn = 26,
  field_type = 27,
  field_value = 28,
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
  [field_headline] = "headline",
  [field_item] = "item",
  [field_key] = "key",
  [field_name] = "name",
  [field_note] = "note",
  [field_opt_booking] = "opt_booking",
  [field_optflag] = "optflag",
  [field_per] = "per",
  [field_price_annotation] = "price_annotation",
  [field_query] = "query",
  [field_subsection] = "subsection",
  [field_tags_links] = "tags_links",
  [field_total] = "total",
  [field_txn] = "txn",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 3},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 1},
  [15] = {.index = 23, .length = 2},
  [16] = {.index = 25, .length = 3},
  [17] = {.index = 28, .length = 3},
  [18] = {.index = 31, .length = 3},
  [19] = {.index = 34, .length = 3},
  [20] = {.index = 37, .length = 3},
  [21] = {.index = 40, .length = 3},
  [22] = {.index = 43, .length = 3},
  [23] = {.index = 46, .length = 3},
  [24] = {.index = 49, .length = 3},
  [25] = {.index = 52, .length = 3},
  [26] = {.index = 55, .length = 3},
  [27] = {.index = 58, .length = 3},
  [28] = {.index = 61, .length = 3},
  [29] = {.index = 64, .length = 3},
  [30] = {.index = 67, .length = 4},
  [31] = {.index = 71, .length = 4},
  [32] = {.index = 75, .length = 4},
  [33] = {.index = 79, .length = 4},
  [34] = {.index = 83, .length = 4},
  [35] = {.index = 87, .length = 4},
  [36] = {.index = 91, .length = 4},
  [37] = {.index = 95, .length = 1},
  [38] = {.index = 96, .length = 4},
  [39] = {.index = 100, .length = 5},
  [40] = {.index = 105, .length = 1},
  [41] = {.index = 106, .length = 1},
  [42] = {.index = 107, .length = 2},
  [43] = {.index = 109, .length = 2},
  [44] = {.index = 111, .length = 2},
  [45] = {.index = 113, .length = 2},
  [46] = {.index = 115, .length = 2},
  [47] = {.index = 117, .length = 2},
  [48] = {.index = 119, .length = 1},
  [49] = {.index = 120, .length = 2},
  [50] = {.index = 122, .length = 1},
  [51] = {.index = 123, .length = 3},
  [52] = {.index = 126, .length = 3},
  [53] = {.index = 129, .length = 3},
  [54] = {.index = 132, .length = 3},
  [55] = {.index = 135, .length = 3},
  [56] = {.index = 138, .length = 3},
  [57] = {.index = 141, .length = 3},
  [58] = {.index = 144, .length = 2},
  [59] = {.index = 146, .length = 2},
  [60] = {.index = 148, .length = 3},
  [61] = {.index = 151, .length = 3},
  [62] = {.index = 154, .length = 4},
  [63] = {.index = 158, .length = 3},
  [64] = {.index = 161, .length = 3},
  [65] = {.index = 164, .length = 3},
  [66] = {.index = 167, .length = 3},
  [67] = {.index = 170, .length = 4},
  [68] = {.index = 174, .length = 4},
  [69] = {.index = 178, .length = 4},
  [70] = {.index = 182, .length = 3},
  [71] = {.index = 185, .length = 4},
  [72] = {.index = 189, .length = 4},
  [73] = {.index = 193, .length = 4},
  [74] = {.index = 197, .length = 4},
  [75] = {.index = 201, .length = 4},
  [76] = {.index = 205, .length = 4},
  [77] = {.index = 209, .length = 4},
  [78] = {.index = 213, .length = 5},
  [79] = {.index = 218, .length = 4},
  [80] = {.index = 222, .length = 4},
  [81] = {.index = 226, .length = 5},
  [82] = {.index = 231, .length = 5},
  [83] = {.index = 236, .length = 5},
  [84] = {.index = 241, .length = 5},
  [85] = {.index = 246, .length = 5},
  [86] = {.index = 251, .length = 6},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_headline, 0},
  [1] =
    {field_subsection, 0},
  [2] =
    {field_date, 0},
    {field_txn, 1},
  [4] =
    {field_headline, 0},
    {field_subsection, 1, .inherited = true},
  [6] =
    {field_subsection, 0, .inherited = true},
    {field_subsection, 1, .inherited = true},
  [8] =
    {field_account, 2},
    {field_date, 0},
  [10] =
    {field_currency, 2},
    {field_date, 0},
  [12] =
    {field_date, 0},
    {field_name, 2},
  [14] =
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [17] =
    {field_comment, 2},
    {field_date, 0},
    {field_txn, 1},
  [20] =
    {field_key, 1},
    {field_value, 2},
  [22] =
    {field_item, 2},
  [23] =
    {field_headline, 0},
    {field_subsection, 2, .inherited = true},
  [25] =
    {field_account, 2},
    {field_date, 0},
    {field_opt_booking, 3},
  [28] =
    {field_account, 2},
    {field_comment, 3},
    {field_date, 0},
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
    {field_account, 2},
    {field_amount, 3},
    {field_date, 0},
  [43] =
    {field_amount, 3},
    {field_currency, 2},
    {field_date, 0},
  [46] =
    {field_date, 0},
    {field_desc, 3},
    {field_type, 2},
  [49] =
    {field_date, 0},
    {field_name, 2},
    {field_query, 3},
  [52] =
    {field_account, 2},
    {field_date, 0},
    {field_note, 3},
  [55] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
  [58] =
    {field_custom_value_list, 3},
    {field_date, 0},
    {field_name, 2},
  [61] =
    {field_date, 0},
    {field_tags_links, 3},
    {field_txn, 1},
  [64] =
    {field_comment, 3},
    {field_date, 0},
    {field_txn, 1},
  [67] =
    {field_comment, 3},
    {field_date, 0},
    {field_tags_links, 2},
    {field_txn, 1},
  [71] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_opt_booking, 3},
  [75] =
    {field_account, 2},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [79] =
    {field_account, 2},
    {field_comment, 4},
    {field_currencies, 3},
    {field_date, 0},
  [83] =
    {field_account, 2},
    {field_comment, 4},
    {field_date, 0},
    {field_from_account, 3},
  [87] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_date, 0},
  [91] =
    {field_account, 2},
    {field_date, 0},
    {field_filename, 3},
    {field_tags_links, 4},
  [95] =
    {field_account, 1},
  [96] =
    {field_comment, 4},
    {field_date, 0},
    {field_tags_links, 3},
    {field_txn, 1},
  [100] =
    {field_account, 2},
    {field_comment, 5},
    {field_currencies, 3},
    {field_date, 0},
    {field_opt_booking, 4},
  [105] =
    {field_currency, 0},
  [106] =
    {field_per, 0},
  [107] =
    {field_account, 1},
    {field_amount, 2},
  [109] =
    {field_account, 1},
    {field_cost_spec, 2},
  [111] =
    {field_account, 1},
    {field_comment, 2},
  [113] =
    {field_account, 2},
    {field_optflag, 1},
  [115] =
    {field_account, 1},
    {field_price_annotation, 3},
  [117] =
    {field_account, 1},
    {field_comment, 3},
  [119] =
    {field_currency, 1},
  [120] =
    {field_currency, 1},
    {field_per, 0},
  [122] =
    {field_cost_comp_list, 1},
  [123] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
  [126] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 3},
  [129] =
    {field_account, 1},
    {field_comment, 3},
    {field_cost_spec, 2},
  [132] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
  [135] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [138] =
    {field_account, 2},
    {field_comment, 3},
    {field_optflag, 1},
  [141] =
    {field_account, 1},
    {field_comment, 4},
    {field_price_annotation, 3},
  [144] =
    {field_currency, 2},
    {field_total, 1},
  [146] =
    {field_currency, 2},
    {field_per, 0},
  [148] =
    {field_account, 1},
    {field_amount, 2},
    {field_price_annotation, 4},
  [151] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
  [154] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
  [158] =
    {field_account, 1},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [161] =
    {field_account, 1},
    {field_comment, 4},
    {field_cost_spec, 2},
  [164] =
    {field_account, 2},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [167] =
    {field_account, 2},
    {field_comment, 4},
    {field_optflag, 1},
  [170] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [174] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 4},
    {field_optflag, 1},
  [178] =
    {field_account, 2},
    {field_comment, 4},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [182] =
    {field_currency, 3},
    {field_per, 0},
    {field_total, 2},
  [185] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_price_annotation, 4},
  [189] =
    {field_account, 1},
    {field_amount, 2},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [193] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
  [197] =
    {field_account, 1},
    {field_comment, 5},
    {field_cost_spec, 2},
    {field_price_annotation, 4},
  [201] =
    {field_account, 2},
    {field_comment, 5},
    {field_optflag, 1},
    {field_price_annotation, 4},
  [205] =
    {field_account, 2},
    {field_amount, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [209] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_optflag, 1},
  [213] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 5},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [218] =
    {field_account, 2},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [222] =
    {field_account, 2},
    {field_comment, 5},
    {field_cost_spec, 3},
    {field_optflag, 1},
  [226] =
    {field_account, 1},
    {field_amount, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_price_annotation, 5},
  [231] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [236] =
    {field_account, 2},
    {field_amount, 3},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
  [241] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 6},
    {field_cost_spec, 4},
    {field_optflag, 1},
  [246] =
    {field_account, 2},
    {field_comment, 6},
    {field_cost_spec, 3},
    {field_optflag, 1},
    {field_price_annotation, 5},
  [251] =
    {field_account, 2},
    {field_amount, 3},
    {field_comment, 7},
    {field_cost_spec, 4},
    {field_optflag, 1},
    {field_price_annotation, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [0] = alias_sym_narration,
  },
  [10] = {
    [0] = alias_sym_payee,
    [1] = alias_sym_narration,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
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

static inline bool sym_account_character_set_1(int32_t c) {
  return (c < 7736
    ? (c < 1012
      ? (c < 439
        ? (c < 330
          ? (c < 284
            ? (c < 262
              ? (c < 192
                ? (c < 178
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= 179 || (c < 188
                    ? c == 185
                    : c <= 190)))
                : (c <= 214 || (c < 258
                  ? (c < 256
                    ? (c >= 216 && c <= 222)
                    : c <= 256)
                  : (c <= 258 || c == 260))))
              : (c <= 262 || (c < 274
                ? (c < 268
                  ? (c < 266
                    ? c == 264
                    : c <= 266)
                  : (c <= 268 || (c < 272
                    ? c == 270
                    : c <= 272)))
                : (c <= 274 || (c < 280
                  ? (c < 278
                    ? c == 276
                    : c <= 278)
                  : (c <= 280 || c == 282))))))
            : (c <= 284 || (c < 306
              ? (c < 296
                ? (c < 290
                  ? (c < 288
                    ? c == 286
                    : c <= 288)
                  : (c <= 290 || (c < 294
                    ? c == 292
                    : c <= 294)))
                : (c <= 296 || (c < 302
                  ? (c < 300
                    ? c == 298
                    : c <= 300)
                  : (c <= 302 || c == 304))))
              : (c <= 306 || (c < 319
                ? (c < 313
                  ? (c < 310
                    ? c == 308
                    : c <= 310)
                  : (c <= 313 || (c < 317
                    ? c == 315
                    : c <= 317)))
                : (c <= 319 || (c < 325
                  ? (c < 323
                    ? c == 321
                    : c <= 323)
                  : (c <= 325 || c == 327))))))))
          : (c <= 330 || (c < 374
            ? (c < 352
              ? (c < 342
                ? (c < 336
                  ? (c < 334
                    ? c == 332
                    : c <= 334)
                  : (c <= 336 || (c < 340
                    ? c == 338
                    : c <= 340)))
                : (c <= 342 || (c < 348
                  ? (c < 346
                    ? c == 344
                    : c <= 346)
                  : (c <= 348 || c == 350))))
              : (c <= 352 || (c < 364
                ? (c < 358
                  ? (c < 356
                    ? c == 354
                    : c <= 356)
                  : (c <= 358 || (c < 362
                    ? c == 360
                    : c <= 362)))
                : (c <= 364 || (c < 370
                  ? (c < 368
                    ? c == 366
                    : c <= 368)
                  : (c <= 370 || c == 372))))))
            : (c <= 374 || (c < 412
              ? (c < 390
                ? (c < 381
                  ? (c < 379
                    ? (c >= 376 && c <= 377)
                    : c <= 379)
                  : (c <= 381 || (c < 388
                    ? (c >= 385 && c <= 386)
                    : c <= 388)))
                : (c <= 391 || (c < 403
                  ? (c < 398
                    ? (c >= 393 && c <= 395)
                    : c <= 401)
                  : (c <= 404 || (c >= 406 && c <= 408)))))
              : (c <= 413 || (c < 425
                ? (c < 420
                  ? (c < 418
                    ? (c >= 415 && c <= 416)
                    : c <= 418)
                  : (c <= 420 || (c >= 422 && c <= 423)))
                : (c <= 425 || (c < 433
                  ? (c < 430
                    ? c == 428
                    : c <= 431)
                  : (c <= 435 || c == 437))))))))))
        : (c <= 440 || (c < 542
          ? (c < 497
            ? (c < 473
              ? (c < 463
                ? (c < 455
                  ? (c < 452
                    ? c == 444
                    : c <= 452)
                  : (c <= 455 || (c < 461
                    ? c == 458
                    : c <= 461)))
                : (c <= 463 || (c < 469
                  ? (c < 467
                    ? c == 465
                    : c <= 467)
                  : (c <= 469 || c == 471))))
              : (c <= 473 || (c < 486
                ? (c < 480
                  ? (c < 478
                    ? c == 475
                    : c <= 478)
                  : (c <= 480 || (c < 484
                    ? c == 482
                    : c <= 484)))
                : (c <= 486 || (c < 492
                  ? (c < 490
                    ? c == 488
                    : c <= 490)
                  : (c <= 492 || c == 494))))))
            : (c <= 497 || (c < 522
              ? (c < 512
                ? (c < 506
                  ? (c < 502
                    ? c == 500
                    : c <= 504)
                  : (c <= 506 || (c < 510
                    ? c == 508
                    : c <= 510)))
                : (c <= 512 || (c < 518
                  ? (c < 516
                    ? c == 514
                    : c <= 516)
                  : (c <= 518 || c == 520))))
              : (c <= 522 || (c < 532
                ? (c < 528
                  ? (c < 526
                    ? c == 524
                    : c <= 526)
                  : (c <= 528 || c == 530))
                : (c <= 532 || (c < 538
                  ? (c < 536
                    ? c == 534
                    : c <= 536)
                  : (c <= 538 || c == 540))))))))
          : (c <= 542 || (c < 895
            ? (c < 570
              ? (c < 554
                ? (c < 548
                  ? (c < 546
                    ? c == 544
                    : c <= 546)
                  : (c <= 548 || (c < 552
                    ? c == 550
                    : c <= 552)))
                : (c <= 554 || (c < 560
                  ? (c < 558
                    ? c == 556
                    : c <= 558)
                  : (c <= 560 || c == 562))))
              : (c <= 571 || (c < 588
                ? (c < 579
                  ? (c < 577
                    ? (c >= 573 && c <= 574)
                    : c <= 577)
                  : (c <= 582 || (c < 586
                    ? c == 584
                    : c <= 586)))
                : (c <= 588 || (c < 882
                  ? (c < 880
                    ? c == 590
                    : c <= 880)
                  : (c <= 882 || c == 886))))))
            : (c <= 895 || (c < 988
              ? (c < 931
                ? (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c < 913
                    ? (c >= 910 && c <= 911)
                    : c <= 929)))
                : (c <= 939 || (c < 984
                  ? (c < 978
                    ? c == 975
                    : c <= 980)
                  : (c <= 984 || c == 986))))
              : (c <= 988 || (c < 998
                ? (c < 994
                  ? (c < 992
                    ? c == 990
                    : c <= 992)
                  : (c <= 994 || c == 996))
                : (c <= 998 || (c < 1004
                  ? (c < 1002
                    ? c == 1000
                    : c <= 1002)
                  : (c <= 1004 || c == 1006))))))))))))
      : (c <= 1012 || (c < 1296
        ? (c < 1208
          ? (c < 1164
            ? (c < 1134
              ? (c < 1124
                ? (c < 1021
                  ? (c < 1017
                    ? c == 1015
                    : c <= 1018)
                  : (c <= 1071 || (c < 1122
                    ? c == 1120
                    : c <= 1122)))
                : (c <= 1124 || (c < 1130
                  ? (c < 1128
                    ? c == 1126
                    : c <= 1128)
                  : (c <= 1130 || c == 1132))))
              : (c <= 1134 || (c < 1146
                ? (c < 1140
                  ? (c < 1138
                    ? c == 1136
                    : c <= 1138)
                  : (c <= 1140 || (c < 1144
                    ? c == 1142
                    : c <= 1144)))
                : (c <= 1146 || (c < 1152
                  ? (c < 1150
                    ? c == 1148
                    : c <= 1150)
                  : (c <= 1152 || c == 1162))))))
            : (c <= 1164 || (c < 1186
              ? (c < 1176
                ? (c < 1170
                  ? (c < 1168
                    ? c == 1166
                    : c <= 1168)
                  : (c <= 1170 || (c < 1174
                    ? c == 1172
                    : c <= 1174)))
                : (c <= 1176 || (c < 1182
                  ? (c < 1180
                    ? c == 1178
                    : c <= 1180)
                  : (c <= 1182 || c == 1184))))
              : (c <= 1186 || (c < 1198
                ? (c < 1192
                  ? (c < 1190
                    ? c == 1188
                    : c <= 1190)
                  : (c <= 1192 || (c < 1196
                    ? c == 1194
                    : c <= 1196)))
                : (c <= 1198 || (c < 1204
                  ? (c < 1202
                    ? c == 1200
                    : c <= 1202)
                  : (c <= 1204 || c == 1206))))))))
          : (c <= 1208 || (c < 1254
            ? (c < 1232
              ? (c < 1221
                ? (c < 1214
                  ? (c < 1212
                    ? c == 1210
                    : c <= 1212)
                  : (c <= 1214 || (c < 1219
                    ? (c >= 1216 && c <= 1217)
                    : c <= 1219)))
                : (c <= 1221 || (c < 1227
                  ? (c < 1225
                    ? c == 1223
                    : c <= 1225)
                  : (c <= 1227 || c == 1229))))
              : (c <= 1232 || (c < 1244
                ? (c < 1238
                  ? (c < 1236
                    ? c == 1234
                    : c <= 1236)
                  : (c <= 1238 || (c < 1242
                    ? c == 1240
                    : c <= 1242)))
                : (c <= 1244 || (c < 1250
                  ? (c < 1248
                    ? c == 1246
                    : c <= 1248)
                  : (c <= 1250 || c == 1252))))))
            : (c <= 1254 || (c < 1276
              ? (c < 1266
                ? (c < 1260
                  ? (c < 1258
                    ? c == 1256
                    : c <= 1258)
                  : (c <= 1260 || (c < 1264
                    ? c == 1262
                    : c <= 1264)))
                : (c <= 1266 || (c < 1272
                  ? (c < 1270
                    ? c == 1268
                    : c <= 1270)
                  : (c <= 1272 || c == 1274))))
              : (c <= 1276 || (c < 1286
                ? (c < 1282
                  ? (c < 1280
                    ? c == 1278
                    : c <= 1280)
                  : (c <= 1282 || c == 1284))
                : (c <= 1286 || (c < 1292
                  ? (c < 1290
                    ? c == 1288
                    : c <= 1290)
                  : (c <= 1292 || c == 1294))))))))))
        : (c <= 1296 || (c < 5024
          ? (c < 2548
            ? (c < 1318
              ? (c < 1308
                ? (c < 1302
                  ? (c < 1300
                    ? c == 1298
                    : c <= 1300)
                  : (c <= 1302 || (c < 1306
                    ? c == 1304
                    : c <= 1306)))
                : (c <= 1308 || (c < 1314
                  ? (c < 1312
                    ? c == 1310
                    : c <= 1312)
                  : (c <= 1314 || c == 1316))))
              : (c <= 1318 || (c < 1632
                ? (c < 1324
                  ? (c < 1322
                    ? c == 1320
                    : c <= 1322)
                  : (c <= 1324 || (c < 1329
                    ? c == 1326
                    : c <= 1366)))
                : (c <= 1641 || (c < 2406
                  ? (c < 1984
                    ? (c >= 1776 && c <= 1785)
                    : c <= 1993)
                  : (c <= 2415 || (c >= 2534 && c <= 2543)))))))
            : (c <= 2553 || (c < 3558
              ? (c < 3174
                ? (c < 2918
                  ? (c < 2790
                    ? (c >= 2662 && c <= 2671)
                    : c <= 2799)
                  : (c <= 2927 || (c < 3046
                    ? (c >= 2930 && c <= 2935)
                    : c <= 3058)))
                : (c <= 3183 || (c < 3416
                  ? (c < 3302
                    ? (c >= 3192 && c <= 3198)
                    : c <= 3311)
                  : (c <= 3422 || (c >= 3430 && c <= 3448)))))
              : (c <= 3567 || (c < 4240
                ? (c < 3872
                  ? (c < 3792
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3801)
                  : (c <= 3891 || (c >= 4160 && c <= 4169)))
                : (c <= 4249 || (c < 4301
                  ? (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)
                  : (c <= 4301 || (c >= 4969 && c <= 4988)))))))))
          : (c <= 5109 || (c < 7694
            ? (c < 7232
              ? (c < 6608
                ? (c < 6128
                  ? (c < 6112
                    ? (c >= 5870 && c <= 5872)
                    : c <= 6121)
                  : (c <= 6137 || (c < 6470
                    ? (c >= 6160 && c <= 6169)
                    : c <= 6479)))
                : (c <= 6618 || (c < 6992
                  ? (c < 6800
                    ? (c >= 6784 && c <= 6793)
                    : c <= 6809)
                  : (c <= 7001 || (c >= 7088 && c <= 7097)))))
              : (c <= 7241 || (c < 7684
                ? (c < 7357
                  ? (c < 7312
                    ? (c >= 7248 && c <= 7257)
                    : c <= 7354)
                  : (c <= 7359 || (c < 7682
                    ? c == 7680
                    : c <= 7682)))
                : (c <= 7684 || (c < 7690
                  ? (c < 7688
                    ? c == 7686
                    : c <= 7688)
                  : (c <= 7690 || c == 7692))))))
            : (c <= 7694 || (c < 7716
              ? (c < 7706
                ? (c < 7700
                  ? (c < 7698
                    ? c == 7696
                    : c <= 7698)
                  : (c <= 7700 || (c < 7704
                    ? c == 7702
                    : c <= 7704)))
                : (c <= 7706 || (c < 7712
                  ? (c < 7710
                    ? c == 7708
                    : c <= 7710)
                  : (c <= 7712 || c == 7714))))
              : (c <= 7716 || (c < 7726
                ? (c < 7722
                  ? (c < 7720
                    ? c == 7718
                    : c <= 7720)
                  : (c <= 7722 || c == 7724))
                : (c <= 7726 || (c < 7732
                  ? (c < 7730
                    ? c == 7728
                    : c <= 7730)
                  : (c <= 7732 || c == 7734))))))))))))))
    : (c <= 7736 || (c < 11456
      ? (c < 7918
        ? (c < 7824
          ? (c < 7780
            ? (c < 7758
              ? (c < 7748
                ? (c < 7742
                  ? (c < 7740
                    ? c == 7738
                    : c <= 7740)
                  : (c <= 7742 || (c < 7746
                    ? c == 7744
                    : c <= 7746)))
                : (c <= 7748 || (c < 7754
                  ? (c < 7752
                    ? c == 7750
                    : c <= 7752)
                  : (c <= 7754 || c == 7756))))
              : (c <= 7758 || (c < 7770
                ? (c < 7764
                  ? (c < 7762
                    ? c == 7760
                    : c <= 7762)
                  : (c <= 7764 || (c < 7768
                    ? c == 7766
                    : c <= 7768)))
                : (c <= 7770 || (c < 7776
                  ? (c < 7774
                    ? c == 7772
                    : c <= 7774)
                  : (c <= 7776 || c == 7778))))))
            : (c <= 7780 || (c < 7802
              ? (c < 7792
                ? (c < 7786
                  ? (c < 7784
                    ? c == 7782
                    : c <= 7784)
                  : (c <= 7786 || (c < 7790
                    ? c == 7788
                    : c <= 7790)))
                : (c <= 7792 || (c < 7798
                  ? (c < 7796
                    ? c == 7794
                    : c <= 7796)
                  : (c <= 7798 || c == 7800))))
              : (c <= 7802 || (c < 7814
                ? (c < 7808
                  ? (c < 7806
                    ? c == 7804
                    : c <= 7806)
                  : (c <= 7808 || (c < 7812
                    ? c == 7810
                    : c <= 7812)))
                : (c <= 7814 || (c < 7820
                  ? (c < 7818
                    ? c == 7816
                    : c <= 7818)
                  : (c <= 7820 || c == 7822))))))))
          : (c <= 7824 || (c < 7876
            ? (c < 7854
              ? (c < 7844
                ? (c < 7838
                  ? (c < 7828
                    ? c == 7826
                    : c <= 7828)
                  : (c <= 7838 || (c < 7842
                    ? c == 7840
                    : c <= 7842)))
                : (c <= 7844 || (c < 7850
                  ? (c < 7848
                    ? c == 7846
                    : c <= 7848)
                  : (c <= 7850 || c == 7852))))
              : (c <= 7854 || (c < 7866
                ? (c < 7860
                  ? (c < 7858
                    ? c == 7856
                    : c <= 7858)
                  : (c <= 7860 || (c < 7864
                    ? c == 7862
                    : c <= 7864)))
                : (c <= 7866 || (c < 7872
                  ? (c < 7870
                    ? c == 7868
                    : c <= 7870)
                  : (c <= 7872 || c == 7874))))))
            : (c <= 7876 || (c < 7898
              ? (c < 7888
                ? (c < 7882
                  ? (c < 7880
                    ? c == 7878
                    : c <= 7880)
                  : (c <= 7882 || (c < 7886
                    ? c == 7884
                    : c <= 7886)))
                : (c <= 7888 || (c < 7894
                  ? (c < 7892
                    ? c == 7890
                    : c <= 7892)
                  : (c <= 7894 || c == 7896))))
              : (c <= 7898 || (c < 7908
                ? (c < 7904
                  ? (c < 7902
                    ? c == 7900
                    : c <= 7902)
                  : (c <= 7904 || c == 7906))
                : (c <= 7908 || (c < 7914
                  ? (c < 7912
                    ? c == 7910
                    : c <= 7912)
                  : (c <= 7914 || c == 7916))))))))))
        : (c <= 7918 || (c < 9450
          ? (c < 8168
            ? (c < 7976
              ? (c < 7930
                ? (c < 7924
                  ? (c < 7922
                    ? c == 7920
                    : c <= 7922)
                  : (c <= 7924 || (c < 7928
                    ? c == 7926
                    : c <= 7928)))
                : (c <= 7930 || (c < 7944
                  ? (c < 7934
                    ? c == 7932
                    : c <= 7934)
                  : (c <= 7951 || (c >= 7960 && c <= 7965)))))
              : (c <= 7983 || (c < 8031
                ? (c < 8025
                  ? (c < 8008
                    ? (c >= 7992 && c <= 7999)
                    : c <= 8013)
                  : (c <= 8025 || (c < 8029
                    ? c == 8027
                    : c <= 8029)))
                : (c <= 8031 || (c < 8136
                  ? (c < 8120
                    ? (c >= 8040 && c <= 8047)
                    : c <= 8123)
                  : (c <= 8139 || (c >= 8152 && c <= 8155)))))))
            : (c <= 8172 || (c < 8484
              ? (c < 8455
                ? (c < 8308
                  ? (c < 8304
                    ? (c >= 8184 && c <= 8187)
                    : c <= 8304)
                  : (c <= 8313 || (c < 8450
                    ? (c >= 8320 && c <= 8329)
                    : c <= 8450)))
                : (c <= 8455 || (c < 8469
                  ? (c < 8464
                    ? (c >= 8459 && c <= 8461)
                    : c <= 8466)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))))
              : (c <= 8484 || (c < 8510
                ? (c < 8490
                  ? (c < 8488
                    ? c == 8486
                    : c <= 8488)
                  : (c <= 8493 || (c >= 8496 && c <= 8499)))
                : (c <= 8511 || (c < 8581
                  ? (c < 8528
                    ? c == 8517
                    : c <= 8579)
                  : (c <= 8585 || (c >= 9312 && c <= 9371)))))))))
          : (c <= 9471 || (c < 11414
            ? (c < 11390
              ? (c < 11369
                ? (c < 11360
                  ? (c < 11264
                    ? (c >= 10102 && c <= 10131)
                    : c <= 11311)
                  : (c <= 11360 || (c < 11367
                    ? (c >= 11362 && c <= 11364)
                    : c <= 11367)))
                : (c <= 11369 || (c < 11378
                  ? (c < 11373
                    ? c == 11371
                    : c <= 11376)
                  : (c <= 11378 || c == 11381))))
              : (c <= 11392 || (c < 11404
                ? (c < 11398
                  ? (c < 11396
                    ? c == 11394
                    : c <= 11396)
                  : (c <= 11398 || (c < 11402
                    ? c == 11400
                    : c <= 11402)))
                : (c <= 11404 || (c < 11410
                  ? (c < 11408
                    ? c == 11406
                    : c <= 11408)
                  : (c <= 11410 || c == 11412))))))
            : (c <= 11414 || (c < 11436
              ? (c < 11426
                ? (c < 11420
                  ? (c < 11418
                    ? c == 11416
                    : c <= 11418)
                  : (c <= 11420 || (c < 11424
                    ? c == 11422
                    : c <= 11424)))
                : (c <= 11426 || (c < 11432
                  ? (c < 11430
                    ? c == 11428
                    : c <= 11430)
                  : (c <= 11432 || c == 11434))))
              : (c <= 11436 || (c < 11446
                ? (c < 11442
                  ? (c < 11440
                    ? c == 11438
                    : c <= 11440)
                  : (c <= 11442 || c == 11444))
                : (c <= 11446 || (c < 11452
                  ? (c < 11450
                    ? c == 11448
                    : c <= 11450)
                  : (c <= 11452 || c == 11454))))))))))))
      : (c <= 11456 || (c < 42822
        ? (c < 42584
          ? (c < 12295
            ? (c < 11478
              ? (c < 11468
                ? (c < 11462
                  ? (c < 11460
                    ? c == 11458
                    : c <= 11460)
                  : (c <= 11462 || (c < 11466
                    ? c == 11464
                    : c <= 11466)))
                : (c <= 11468 || (c < 11474
                  ? (c < 11472
                    ? c == 11470
                    : c <= 11472)
                  : (c <= 11474 || c == 11476))))
              : (c <= 11478 || (c < 11490
                ? (c < 11484
                  ? (c < 11482
                    ? c == 11480
                    : c <= 11482)
                  : (c <= 11484 || (c < 11488
                    ? c == 11486
                    : c <= 11488)))
                : (c <= 11490 || (c < 11506
                  ? (c < 11501
                    ? c == 11499
                    : c <= 11501)
                  : (c <= 11506 || c == 11517))))))
            : (c <= 12295 || (c < 42562
              ? (c < 12881
                ? (c < 12690
                  ? (c < 12344
                    ? (c >= 12321 && c <= 12329)
                    : c <= 12346)
                  : (c <= 12693 || (c < 12872
                    ? (c >= 12832 && c <= 12841)
                    : c <= 12879)))
                : (c <= 12895 || (c < 42528
                  ? (c < 12977
                    ? (c >= 12928 && c <= 12937)
                    : c <= 12991)
                  : (c <= 42537 || c == 42560))))
              : (c <= 42562 || (c < 42574
                ? (c < 42568
                  ? (c < 42566
                    ? c == 42564
                    : c <= 42566)
                  : (c <= 42568 || (c < 42572
                    ? c == 42570
                    : c <= 42572)))
                : (c <= 42574 || (c < 42580
                  ? (c < 42578
                    ? c == 42576
                    : c <= 42578)
                  : (c <= 42580 || c == 42582))))))))
          : (c <= 42584 || (c < 42646
            ? (c < 42624
              ? (c < 42596
                ? (c < 42590
                  ? (c < 42588
                    ? c == 42586
                    : c <= 42588)
                  : (c <= 42590 || (c < 42594
                    ? c == 42592
                    : c <= 42594)))
                : (c <= 42596 || (c < 42602
                  ? (c < 42600
                    ? c == 42598
                    : c <= 42600)
                  : (c <= 42602 || c == 42604))))
              : (c <= 42624 || (c < 42636
                ? (c < 42630
                  ? (c < 42628
                    ? c == 42626
                    : c <= 42628)
                  : (c <= 42630 || (c < 42634
                    ? c == 42632
                    : c <= 42634)))
                : (c <= 42636 || (c < 42642
                  ? (c < 42640
                    ? c == 42638
                    : c <= 42640)
                  : (c <= 42642 || c == 42644))))))
            : (c <= 42646 || (c < 42802
              ? (c < 42790
                ? (c < 42726
                  ? (c < 42650
                    ? c == 42648
                    : c <= 42650)
                  : (c <= 42735 || (c < 42788
                    ? c == 42786
                    : c <= 42788)))
                : (c <= 42790 || (c < 42796
                  ? (c < 42794
                    ? c == 42792
                    : c <= 42794)
                  : (c <= 42796 || c == 42798))))
              : (c <= 42802 || (c < 42812
                ? (c < 42808
                  ? (c < 42806
                    ? c == 42804
                    : c <= 42806)
                  : (c <= 42808 || c == 42810))
                : (c <= 42812 || (c < 42818
                  ? (c < 42816
                    ? c == 42814
                    : c <= 42816)
                  : (c <= 42818 || c == 42820))))))))))
        : (c <= 42822 || (c < 42928
          ? (c < 42875
            ? (c < 42844
              ? (c < 42834
                ? (c < 42828
                  ? (c < 42826
                    ? c == 42824
                    : c <= 42826)
                  : (c <= 42828 || (c < 42832
                    ? c == 42830
                    : c <= 42832)))
                : (c <= 42834 || (c < 42840
                  ? (c < 42838
                    ? c == 42836
                    : c <= 42838)
                  : (c <= 42840 || c == 42842))))
              : (c <= 42844 || (c < 42856
                ? (c < 42850
                  ? (c < 42848
                    ? c == 42846
                    : c <= 42848)
                  : (c <= 42850 || (c < 42854
                    ? c == 42852
                    : c <= 42854)))
                : (c <= 42856 || (c < 42862
                  ? (c < 42860
                    ? c == 42858
                    : c <= 42860)
                  : (c <= 42862 || c == 42873))))))
            : (c <= 42875 || (c < 42904
              ? (c < 42891
                ? (c < 42882
                  ? (c < 42880
                    ? (c >= 42877 && c <= 42878)
                    : c <= 42880)
                  : (c <= 42882 || (c < 42886
                    ? c == 42884
                    : c <= 42886)))
                : (c <= 42891 || (c < 42898
                  ? (c < 42896
                    ? c == 42893
                    : c <= 42896)
                  : (c <= 42898 || c == 42902))))
              : (c <= 42904 || (c < 42914
                ? (c < 42910
                  ? (c < 42908
                    ? c == 42906
                    : c <= 42908)
                  : (c <= 42910 || c == 42912))
                : (c <= 42914 || (c < 42920
                  ? (c < 42918
                    ? c == 42916
                    : c <= 42918)
                  : (c <= 42920 || (c >= 42922 && c <= 42926)))))))))
          : (c <= 42932 || (c < 65313
            ? (c < 42966
              ? (c < 42944
                ? (c < 42938
                  ? (c < 42936
                    ? c == 42934
                    : c <= 42936)
                  : (c <= 42938 || (c < 42942
                    ? c == 42940
                    : c <= 42942)))
                : (c <= 42944 || (c < 42953
                  ? (c < 42948
                    ? c == 42946
                    : c <= 42951)
                  : (c <= 42953 || c == 42960))))
              : (c <= 42966 || (c < 43472
                ? (c < 43056
                  ? (c < 42997
                    ? c == 42968
                    : c <= 42997)
                  : (c <= 43061 || (c < 43264
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43273)))
                : (c <= 43481 || (c < 44016
                  ? (c < 43600
                    ? (c >= 43504 && c <= 43513)
                    : c <= 43609)
                  : (c <= 44025 || (c >= 65296 && c <= 65305)))))))
            : (c <= 65338 || (c < 66736
              ? (c < 66369
                ? (c < 65930
                  ? (c < 65856
                    ? (c >= 65799 && c <= 65843)
                    : c <= 65912)
                  : (c <= 65931 || (c < 66336
                    ? (c >= 66273 && c <= 66299)
                    : c <= 66339)))
                : (c <= 66369 || (c < 66560
                  ? (c < 66513
                    ? c == 66378
                    : c <= 66517)
                  : (c <= 66599 || (c >= 66720 && c <= 66729)))))
              : (c <= 66771 || (c < 67672
                ? (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c >= 66964 && c <= 66965)))
                : (c <= 67679 || (c < 67835
                  ? (c < 67751
                    ? (c >= 67705 && c <= 67711)
                    : c <= 67759)
                  : (c <= 67839 || (c >= 67862 && c <= 67867)))))))))))))))));
}

static inline bool sym_account_character_set_2(int32_t c) {
  return (c < 6656
    ? (c < 3046
      ? (c < 2392
        ? (c < 1376
          ? (c < 748
            ? (c < 185
              ? (c < 'a'
                ? (c < '0'
                  ? c == '-'
                  : (c <= '9' || (c >= 'A' && c <= 'Z')))
                : (c <= 'z' || (c < 178
                  ? c == 170
                  : (c <= 179 || c == 181))))
              : (c <= 186 || (c < 248
                ? (c < 192
                  ? (c >= 188 && c <= 190)
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 908
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : (c <= 902 || (c >= 904 && c <= 906)))))
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1984
            ? (c < 1765
              ? (c < 1632
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1641 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : (c <= 1747 || c == 1749))))
              : (c <= 1766 || (c < 1810
                ? (c < 1791
                  ? (c >= 1774 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))))
            : (c <= 2026 || (c < 2144
              ? (c < 2074
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : (c <= 2042 || (c >= 2048 && c <= 2069)))
                : (c <= 2074 || (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))))
              : (c <= 2154 || (c < 2308
                ? (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : (c <= 2190 || (c >= 2208 && c <= 2249)))
                : (c <= 2361 || (c < 2384
                  ? c == 2365
                  : c <= 2384)))))))))
        : (c <= 2401 || (c < 2730
          ? (c < 2556
            ? (c < 2486
              ? (c < 2447
                ? (c < 2417
                  ? (c >= 2406 && c <= 2415)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))))
              : (c <= 2489 || (c < 2527
                ? (c < 2510
                  ? c == 2493
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2548
                  ? (c >= 2534 && c <= 2545)
                  : c <= 2553)))))
            : (c <= 2556 || (c < 2649
              ? (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))))
              : (c <= 2652 || (c < 2693
                ? (c < 2662
                  ? c == 2654
                  : (c <= 2671 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))))))
          : (c <= 2736 || (c < 2908
            ? (c < 2821
              ? (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2790
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2799 || c == 2809))))
              : (c <= 2828 || (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))))
            : (c <= 2909 || (c < 2969
              ? (c < 2947
                ? (c < 2918
                  ? (c >= 2911 && c <= 2913)
                  : (c <= 2927 || (c >= 2929 && c <= 2935)))
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : (c <= 2960 || (c >= 2962 && c <= 2965)))))
              : (c <= 2970 || (c < 2984
                ? (c < 2974
                  ? c == 2972
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : c <= 3024)))))))))))
      : (c <= 3058 || (c < 4176
        ? (c < 3450
          ? (c < 3242
            ? (c < 3168
              ? (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))))
              : (c <= 3169 || (c < 3205
                ? (c < 3192
                  ? (c >= 3174 && c <= 3183)
                  : (c <= 3198 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3313
                  ? (c >= 3302 && c <= 3311)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))))
              : (c <= 3344 || (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3430
                  ? (c >= 3416 && c <= 3425)
                  : c <= 3448)))))))
          : (c <= 3455 || (c < 3749
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3558
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3567 || (c >= 3585 && c <= 3632)))))
              : (c <= 3635 || (c < 3716
                ? (c < 3664
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3673 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3792
                  ? c == 3782
                  : (c <= 3801 || (c >= 3804 && c <= 3807)))))
              : (c <= 3840 || (c < 3976
                ? (c < 3904
                  ? (c >= 3872 && c <= 3891)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4169)))))))))
        : (c <= 4181 || (c < 5024
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4240 && c <= 4249)))))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4802
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : (c <= 4798 || c == 4800))))
              : (c <= 4805 || (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 4992
                  ? (c >= 4969 && c <= 4988)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6112
            ? (c < 5919
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5870
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))))
              : (c <= 5937 || (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))))
            : (c <= 6121 || (c < 6320
              ? (c < 6272
                ? (c < 6160
                  ? (c >= 6128 && c <= 6137)
                  : (c <= 6169 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6528
                ? (c < 6470
                  ? (c >= 6400 && c <= 6430)
                  : (c <= 6509 || (c >= 6512 && c <= 6516)))
                : (c <= 6571 || (c < 6608
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6618)))))))))))))
    : (c <= 6678 || (c < 43138
      ? (c < 10102
        ? (c < 8064
          ? (c < 7357
            ? (c < 7043
              ? (c < 6823
                ? (c < 6784
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6793 || (c >= 6800 && c <= 6809)))
                : (c <= 6823 || (c < 6981
                  ? (c >= 6917 && c <= 6963)
                  : (c <= 6988 || (c >= 6992 && c <= 7001)))))
              : (c <= 7072 || (c < 7245
                ? (c < 7168
                  ? (c >= 7086 && c <= 7141)
                  : (c <= 7203 || (c >= 7232 && c <= 7241)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7968
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))))
              : (c <= 8005 || (c < 8027
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : (c <= 8023 || c == 8025))
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8178
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))))
              : (c <= 8180 || (c < 8319
                ? (c < 8304
                  ? (c >= 8182 && c <= 8188)
                  : (c <= 8305 || (c >= 8308 && c <= 8313)))
                : (c <= 8329 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8495
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : (c <= 8488 || (c >= 8490 && c <= 8493)))))
              : (c <= 8505 || (c < 8528
                ? (c < 8517
                  ? (c >= 8508 && c <= 8511)
                  : (c <= 8521 || c == 8526))
                : (c <= 8585 || (c < 9450
                  ? (c >= 9312 && c <= 9371)
                  : c <= 9471)))))))))
        : (c <= 10131 || (c < 12690
          ? (c < 11712
            ? (c < 11568
              ? (c < 11517
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11517 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12344
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12321
                  ? (c >= 12293 && c <= 12295)
                  : (c <= 12329 || (c >= 12337 && c <= 12341)))))
              : (c <= 12348 || (c < 12540
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : (c <= 12447 || (c >= 12449 && c <= 12538)))
                : (c <= 12543 || (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : c <= 12686)))))))
          : (c <= 12693 || (c < 42560
            ? (c < 13312
              ? (c < 12872
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || (c >= 12832 && c <= 12841)))
                : (c <= 12879 || (c < 12928
                  ? (c >= 12881 && c <= 12895)
                  : (c <= 12937 || (c >= 12977 && c <= 12991)))))
              : (c <= 13312 || (c < 42192
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || (c >= 40959 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42965
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42735 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42960
                  ? (c >= 42891 && c <= 42954)
                  : (c <= 42961 || c == 42963))))
              : (c <= 42969 || (c < 43020
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
                  : (c <= 43013 || (c >= 43015 && c <= 43018)))
                : (c <= 43042 || (c < 43072
                  ? (c >= 43056 && c <= 43061)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65345
        ? (c < 43808
          ? (c < 43600
            ? (c < 43396
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43216 && c <= 43225)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43264 && c <= 43301)
                  : (c <= 43334 || (c >= 43360 && c <= 43388)))))
              : (c <= 43442 || (c < 43520
                ? (c < 43488
                  ? (c >= 43471 && c <= 43481)
                  : (c <= 43492 || (c >= 43494 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43609 || (c < 43714
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 44032
                  ? (c >= 44016 && c <= 44025)
                  : (c <= 44032 || c == 55203))))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64848
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : (c <= 64433 || (c >= 64467 && c <= 64829)))))
              : (c <= 64911 || (c < 65142
                ? (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : (c <= 65019 || (c >= 65136 && c <= 65140)))
                : (c <= 65276 || (c < 65313
                  ? (c >= 65296 && c <= 65305)
                  : c <= 65338)))))))))
        : (c <= 65370 || (c < 66816
          ? (c < 65930
            ? (c < 65576
              ? (c < 65490
                ? (c < 65474
                  ? (c >= 65382 && c <= 65470)
                  : (c <= 65479 || (c >= 65482 && c <= 65487)))
                : (c <= 65495 || (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))))
              : (c <= 65594 || (c < 65664
                ? (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : (c <= 65613 || (c >= 65616 && c <= 65629)))
                : (c <= 65786 || (c < 65856
                  ? (c >= 65799 && c <= 65843)
                  : c <= 65912)))))
            : (c <= 65931 || (c < 66464
              ? (c < 66304
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66273 && c <= 66299)))
                : (c <= 66339 || (c < 66384
                  ? (c >= 66349 && c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66720
                ? (c < 66513
                  ? (c >= 66504 && c <= 66511)
                  : (c <= 66517 || (c >= 66560 && c <= 66717)))
                : (c <= 66729 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67506
            ? (c < 66995
              ? (c < 66956
                ? (c < 66928
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))
                : (c <= 66962 || (c < 66967
                  ? (c >= 66964 && c <= 66965)
                  : (c <= 66977 || (c >= 66979 && c <= 66993)))))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67672
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67751
                  ? (c >= 67705 && c <= 67742)
                  : (c <= 67759 || (c >= 67808 && c <= 67826)))
                : (c <= 67829 || (c < 67872
                  ? (c >= 67835 && c <= 67867)
                  : c <= 67883)))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == '*') ADVANCE(119);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == 'N') ADVANCE(17);
      if (lookahead == '^') ADVANCE(100);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == 224) ADVANCE(95);
      if (lookahead == 237) ADVANCE(94);
      if (lookahead == 240) ADVANCE(97);
      if (lookahead == 244) ADVANCE(93);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(190);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(123);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(188);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(186);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(185);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(161);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '1') ADVANCE(64);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '3') ADVANCE(55);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(89);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(101);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(134);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(126);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(124);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(138);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'U') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'U') ADVANCE(10);
      END_STATE();
    case 19:
      if (lookahead == 'U') ADVANCE(136);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(20);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'q') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(39);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(42);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(42);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 51:
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 52:
      if (lookahead == '}') ADVANCE(182);
      END_STATE();
    case 53:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 54:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead == '\r') SKIP(54)
      END_STATE();
    case 55:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(129);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '@') ADVANCE(117);
      if (lookahead == '{') ADVANCE(178);
      if (lookahead == '}') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 57:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(57)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(99);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '*') ADVANCE(113);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'N') ADVANCE(19);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == '^') ADVANCE(100);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '}') ADVANCE(179);
      if (lookahead == '~') ADVANCE(177);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '}') ADVANCE(52);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 60:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(60)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'F') ADVANCE(9);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == 'T') ADVANCE(15);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 61:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(172);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(40);
      if (lookahead == 'I') ADVANCE(35);
      if (lookahead == 'L') ADVANCE(27);
      if (lookahead == '^') ADVANCE(100);
      if (lookahead == '!' ||
          lookahead == '%' ||
          lookahead == '&' ||
          lookahead == '?' ||
          lookahead == 'C' ||
          lookahead == 'M' ||
          lookahead == 'P' ||
          ('R' <= lookahead && lookahead <= 'U')) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(98);
      END_STATE();
    case 62:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '#') ADVANCE(171);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == ')') ADVANCE(174);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == ',') ADVANCE(176);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == '}') ADVANCE(180);
      if (lookahead == '~') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (lookahead == '\n') ADVANCE(109);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(173);
      if (lookahead == '*') ADVANCE(118);
      if (lookahead == '+') ADVANCE(121);
      if (lookahead == '-') ADVANCE(122);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(8);
      if (lookahead == 'I') ADVANCE(36);
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(85);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(4);
      END_STATE();
    case 65:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 66:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 67:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 68:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 69:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 70:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 71:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 72:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 73:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 74:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      END_STATE();
    case 75:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 76:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 77:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 78:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 79:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 80:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 81:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 82:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 83:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 84:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 85:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(159);
      END_STATE();
    case 86:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 87:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 88:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(193);
      END_STATE();
    case 94:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(189);
      END_STATE();
    case 95:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(187);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 97:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(191);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 99:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 100:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 101:
      if (sym_account_character_set_1(lookahead)) ADVANCE(130);
      END_STATE();
    case 102:
      if (eof) ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(102)
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(106);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(92);
      if (sym_flag_character_set_1(lookahead)) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '\r') ADVANCE(107);
      if (lookahead == ':') ADVANCE(175);
      if (lookahead == ';') ADVANCE(183);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(92);
      if (sym_flag_character_set_1(lookahead)) ADVANCE(123);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\r') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead == '\r') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__any_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__org_stars_token1);
      if (lookahead == '*') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_headline_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__indent);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(115);
      if (lookahead == '\r') ADVANCE(107);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_atat);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_at);
      if (lookahead == '@') ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(113);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_slash);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_plus);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_flag);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__none);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__none);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_bool);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_bool);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_account);
      if (lookahead == ':') ADVANCE(101);
      if (sym_account_character_set_2(lookahead)) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(125);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'L') ADVANCE(135);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'S') ADVANCE(133);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == 'U') ADVANCE(132);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(140);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(141);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(143);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(149);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(156);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(155);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(131);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ',') ADVANCE(2);
      if (lookahead == '.') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '{') ADVANCE(181);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead == '}') ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(184);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__UTF_8_1);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__UTF_8_2_token1);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token1);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token2);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token3);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token4);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token1);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token2);
      END_STATE();
    case 193:
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
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
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
      ACCEPT_TOKEN(anon_sym_pad);
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
      ACCEPT_TOKEN(anon_sym_txn);
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
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_open);
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
      ACCEPT_TOKEN(anon_sym_close);
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
      ACCEPT_TOKEN(anon_sym_event);
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
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_plugin);
      END_STATE();
    case 82:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 85:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_popmeta);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_pushmeta);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 102, .external_lex_state = 2},
  [2] = {.lex_state = 102, .external_lex_state = 3},
  [3] = {.lex_state = 102, .external_lex_state = 3},
  [4] = {.lex_state = 102, .external_lex_state = 3},
  [5] = {.lex_state = 102, .external_lex_state = 3},
  [6] = {.lex_state = 102, .external_lex_state = 2},
  [7] = {.lex_state = 102, .external_lex_state = 2},
  [8] = {.lex_state = 102, .external_lex_state = 3},
  [9] = {.lex_state = 103, .external_lex_state = 2},
  [10] = {.lex_state = 103, .external_lex_state = 2},
  [11] = {.lex_state = 103, .external_lex_state = 2},
  [12] = {.lex_state = 103, .external_lex_state = 2},
  [13] = {.lex_state = 103, .external_lex_state = 2},
  [14] = {.lex_state = 103, .external_lex_state = 2},
  [15] = {.lex_state = 103, .external_lex_state = 2},
  [16] = {.lex_state = 103, .external_lex_state = 3},
  [17] = {.lex_state = 103, .external_lex_state = 3},
  [18] = {.lex_state = 103, .external_lex_state = 3},
  [19] = {.lex_state = 103, .external_lex_state = 3},
  [20] = {.lex_state = 103, .external_lex_state = 3},
  [21] = {.lex_state = 103, .external_lex_state = 2},
  [22] = {.lex_state = 103, .external_lex_state = 2},
  [23] = {.lex_state = 103, .external_lex_state = 2},
  [24] = {.lex_state = 103, .external_lex_state = 2},
  [25] = {.lex_state = 103, .external_lex_state = 2},
  [26] = {.lex_state = 103, .external_lex_state = 2},
  [27] = {.lex_state = 103, .external_lex_state = 2},
  [28] = {.lex_state = 103, .external_lex_state = 2},
  [29] = {.lex_state = 103, .external_lex_state = 3},
  [30] = {.lex_state = 103, .external_lex_state = 3},
  [31] = {.lex_state = 103, .external_lex_state = 3},
  [32] = {.lex_state = 103, .external_lex_state = 3},
  [33] = {.lex_state = 103, .external_lex_state = 3},
  [34] = {.lex_state = 103, .external_lex_state = 3},
  [35] = {.lex_state = 103, .external_lex_state = 3},
  [36] = {.lex_state = 103, .external_lex_state = 3},
  [37] = {.lex_state = 103, .external_lex_state = 2},
  [38] = {.lex_state = 103, .external_lex_state = 3},
  [39] = {.lex_state = 103, .external_lex_state = 2},
  [40] = {.lex_state = 103, .external_lex_state = 3},
  [41] = {.lex_state = 103, .external_lex_state = 3},
  [42] = {.lex_state = 103, .external_lex_state = 3},
  [43] = {.lex_state = 103, .external_lex_state = 3},
  [44] = {.lex_state = 103, .external_lex_state = 2},
  [45] = {.lex_state = 103, .external_lex_state = 2},
  [46] = {.lex_state = 103, .external_lex_state = 3},
  [47] = {.lex_state = 103, .external_lex_state = 3},
  [48] = {.lex_state = 103, .external_lex_state = 3},
  [49] = {.lex_state = 103, .external_lex_state = 3},
  [50] = {.lex_state = 103, .external_lex_state = 3},
  [51] = {.lex_state = 103, .external_lex_state = 3},
  [52] = {.lex_state = 103, .external_lex_state = 3},
  [53] = {.lex_state = 103, .external_lex_state = 3},
  [54] = {.lex_state = 103, .external_lex_state = 3},
  [55] = {.lex_state = 103, .external_lex_state = 3},
  [56] = {.lex_state = 103, .external_lex_state = 3},
  [57] = {.lex_state = 103, .external_lex_state = 3},
  [58] = {.lex_state = 103, .external_lex_state = 3},
  [59] = {.lex_state = 103, .external_lex_state = 3},
  [60] = {.lex_state = 103, .external_lex_state = 3},
  [61] = {.lex_state = 103, .external_lex_state = 3},
  [62] = {.lex_state = 103, .external_lex_state = 3},
  [63] = {.lex_state = 103, .external_lex_state = 3},
  [64] = {.lex_state = 103, .external_lex_state = 3},
  [65] = {.lex_state = 103, .external_lex_state = 3},
  [66] = {.lex_state = 103, .external_lex_state = 3},
  [67] = {.lex_state = 103, .external_lex_state = 3},
  [68] = {.lex_state = 103, .external_lex_state = 3},
  [69] = {.lex_state = 103, .external_lex_state = 3},
  [70] = {.lex_state = 103, .external_lex_state = 3},
  [71] = {.lex_state = 103, .external_lex_state = 3},
  [72] = {.lex_state = 103, .external_lex_state = 3},
  [73] = {.lex_state = 103, .external_lex_state = 3},
  [74] = {.lex_state = 103, .external_lex_state = 3},
  [75] = {.lex_state = 103, .external_lex_state = 3},
  [76] = {.lex_state = 103, .external_lex_state = 2},
  [77] = {.lex_state = 103, .external_lex_state = 3},
  [78] = {.lex_state = 103, .external_lex_state = 2},
  [79] = {.lex_state = 103, .external_lex_state = 2},
  [80] = {.lex_state = 103, .external_lex_state = 2},
  [81] = {.lex_state = 103, .external_lex_state = 2},
  [82] = {.lex_state = 103, .external_lex_state = 3},
  [83] = {.lex_state = 103, .external_lex_state = 2},
  [84] = {.lex_state = 103, .external_lex_state = 2},
  [85] = {.lex_state = 103, .external_lex_state = 2},
  [86] = {.lex_state = 103, .external_lex_state = 2},
  [87] = {.lex_state = 103, .external_lex_state = 3},
  [88] = {.lex_state = 103, .external_lex_state = 3},
  [89] = {.lex_state = 103, .external_lex_state = 3},
  [90] = {.lex_state = 103, .external_lex_state = 3},
  [91] = {.lex_state = 103, .external_lex_state = 2},
  [92] = {.lex_state = 103, .external_lex_state = 3},
  [93] = {.lex_state = 103, .external_lex_state = 2},
  [94] = {.lex_state = 103, .external_lex_state = 2},
  [95] = {.lex_state = 103, .external_lex_state = 2},
  [96] = {.lex_state = 103, .external_lex_state = 2},
  [97] = {.lex_state = 103, .external_lex_state = 2},
  [98] = {.lex_state = 103, .external_lex_state = 2},
  [99] = {.lex_state = 103, .external_lex_state = 2},
  [100] = {.lex_state = 103, .external_lex_state = 2},
  [101] = {.lex_state = 103, .external_lex_state = 2},
  [102] = {.lex_state = 103, .external_lex_state = 2},
  [103] = {.lex_state = 103, .external_lex_state = 2},
  [104] = {.lex_state = 103, .external_lex_state = 2},
  [105] = {.lex_state = 103, .external_lex_state = 2},
  [106] = {.lex_state = 103, .external_lex_state = 2},
  [107] = {.lex_state = 103, .external_lex_state = 2},
  [108] = {.lex_state = 103, .external_lex_state = 2},
  [109] = {.lex_state = 103, .external_lex_state = 2},
  [110] = {.lex_state = 103, .external_lex_state = 2},
  [111] = {.lex_state = 103, .external_lex_state = 2},
  [112] = {.lex_state = 103, .external_lex_state = 2},
  [113] = {.lex_state = 103, .external_lex_state = 3},
  [114] = {.lex_state = 103, .external_lex_state = 2},
  [115] = {.lex_state = 103, .external_lex_state = 3},
  [116] = {.lex_state = 103, .external_lex_state = 3},
  [117] = {.lex_state = 103, .external_lex_state = 3},
  [118] = {.lex_state = 103, .external_lex_state = 3},
  [119] = {.lex_state = 103, .external_lex_state = 3},
  [120] = {.lex_state = 103, .external_lex_state = 3},
  [121] = {.lex_state = 103, .external_lex_state = 3},
  [122] = {.lex_state = 103, .external_lex_state = 3},
  [123] = {.lex_state = 103, .external_lex_state = 3},
  [124] = {.lex_state = 103, .external_lex_state = 3},
  [125] = {.lex_state = 103, .external_lex_state = 2},
  [126] = {.lex_state = 103, .external_lex_state = 2},
  [127] = {.lex_state = 103, .external_lex_state = 2},
  [128] = {.lex_state = 103, .external_lex_state = 2},
  [129] = {.lex_state = 103, .external_lex_state = 2},
  [130] = {.lex_state = 103, .external_lex_state = 2},
  [131] = {.lex_state = 103, .external_lex_state = 2},
  [132] = {.lex_state = 103, .external_lex_state = 2},
  [133] = {.lex_state = 103, .external_lex_state = 2},
  [134] = {.lex_state = 103, .external_lex_state = 2},
  [135] = {.lex_state = 103, .external_lex_state = 2},
  [136] = {.lex_state = 103, .external_lex_state = 2},
  [137] = {.lex_state = 103, .external_lex_state = 2},
  [138] = {.lex_state = 103, .external_lex_state = 2},
  [139] = {.lex_state = 103, .external_lex_state = 2},
  [140] = {.lex_state = 103, .external_lex_state = 2},
  [141] = {.lex_state = 103, .external_lex_state = 3},
  [142] = {.lex_state = 103, .external_lex_state = 2},
  [143] = {.lex_state = 103, .external_lex_state = 2},
  [144] = {.lex_state = 103, .external_lex_state = 3},
  [145] = {.lex_state = 103, .external_lex_state = 3},
  [146] = {.lex_state = 103, .external_lex_state = 3},
  [147] = {.lex_state = 103, .external_lex_state = 3},
  [148] = {.lex_state = 103, .external_lex_state = 2},
  [149] = {.lex_state = 103, .external_lex_state = 3},
  [150] = {.lex_state = 103, .external_lex_state = 3},
  [151] = {.lex_state = 103, .external_lex_state = 2},
  [152] = {.lex_state = 103, .external_lex_state = 3},
  [153] = {.lex_state = 103, .external_lex_state = 2},
  [154] = {.lex_state = 103, .external_lex_state = 3},
  [155] = {.lex_state = 103, .external_lex_state = 3},
  [156] = {.lex_state = 103, .external_lex_state = 2},
  [157] = {.lex_state = 103, .external_lex_state = 3},
  [158] = {.lex_state = 103, .external_lex_state = 3},
  [159] = {.lex_state = 103, .external_lex_state = 2},
  [160] = {.lex_state = 103, .external_lex_state = 2},
  [161] = {.lex_state = 103, .external_lex_state = 3},
  [162] = {.lex_state = 103, .external_lex_state = 2},
  [163] = {.lex_state = 103, .external_lex_state = 2},
  [164] = {.lex_state = 103, .external_lex_state = 3},
  [165] = {.lex_state = 103, .external_lex_state = 2},
  [166] = {.lex_state = 103, .external_lex_state = 2},
  [167] = {.lex_state = 56},
  [168] = {.lex_state = 103, .external_lex_state = 2},
  [169] = {.lex_state = 103, .external_lex_state = 3},
  [170] = {.lex_state = 103, .external_lex_state = 3},
  [171] = {.lex_state = 103, .external_lex_state = 2},
  [172] = {.lex_state = 103, .external_lex_state = 2},
  [173] = {.lex_state = 103, .external_lex_state = 3},
  [174] = {.lex_state = 103, .external_lex_state = 2},
  [175] = {.lex_state = 103, .external_lex_state = 3},
  [176] = {.lex_state = 103, .external_lex_state = 3},
  [177] = {.lex_state = 103, .external_lex_state = 3},
  [178] = {.lex_state = 56},
  [179] = {.lex_state = 103, .external_lex_state = 2},
  [180] = {.lex_state = 103, .external_lex_state = 2},
  [181] = {.lex_state = 103, .external_lex_state = 2},
  [182] = {.lex_state = 57},
  [183] = {.lex_state = 103, .external_lex_state = 3},
  [184] = {.lex_state = 103, .external_lex_state = 2},
  [185] = {.lex_state = 103, .external_lex_state = 3},
  [186] = {.lex_state = 103, .external_lex_state = 2},
  [187] = {.lex_state = 103, .external_lex_state = 3},
  [188] = {.lex_state = 103, .external_lex_state = 3},
  [189] = {.lex_state = 103, .external_lex_state = 2},
  [190] = {.lex_state = 103, .external_lex_state = 2},
  [191] = {.lex_state = 56},
  [192] = {.lex_state = 103, .external_lex_state = 3},
  [193] = {.lex_state = 103, .external_lex_state = 3},
  [194] = {.lex_state = 103, .external_lex_state = 2},
  [195] = {.lex_state = 103, .external_lex_state = 2},
  [196] = {.lex_state = 103, .external_lex_state = 3},
  [197] = {.lex_state = 103, .external_lex_state = 2},
  [198] = {.lex_state = 103, .external_lex_state = 3},
  [199] = {.lex_state = 103, .external_lex_state = 3},
  [200] = {.lex_state = 103, .external_lex_state = 2},
  [201] = {.lex_state = 103, .external_lex_state = 3},
  [202] = {.lex_state = 103, .external_lex_state = 3},
  [203] = {.lex_state = 103, .external_lex_state = 3},
  [204] = {.lex_state = 103, .external_lex_state = 2},
  [205] = {.lex_state = 103, .external_lex_state = 3},
  [206] = {.lex_state = 103, .external_lex_state = 2},
  [207] = {.lex_state = 103, .external_lex_state = 2},
  [208] = {.lex_state = 103, .external_lex_state = 2},
  [209] = {.lex_state = 58},
  [210] = {.lex_state = 59},
  [211] = {.lex_state = 103, .external_lex_state = 2},
  [212] = {.lex_state = 103, .external_lex_state = 2},
  [213] = {.lex_state = 103, .external_lex_state = 3},
  [214] = {.lex_state = 103, .external_lex_state = 2},
  [215] = {.lex_state = 103, .external_lex_state = 2},
  [216] = {.lex_state = 56},
  [217] = {.lex_state = 103, .external_lex_state = 2},
  [218] = {.lex_state = 103, .external_lex_state = 2},
  [219] = {.lex_state = 103, .external_lex_state = 3},
  [220] = {.lex_state = 103, .external_lex_state = 2},
  [221] = {.lex_state = 103, .external_lex_state = 2},
  [222] = {.lex_state = 103, .external_lex_state = 3},
  [223] = {.lex_state = 103, .external_lex_state = 2},
  [224] = {.lex_state = 103, .external_lex_state = 2},
  [225] = {.lex_state = 103, .external_lex_state = 2},
  [226] = {.lex_state = 103, .external_lex_state = 3},
  [227] = {.lex_state = 103, .external_lex_state = 3},
  [228] = {.lex_state = 103, .external_lex_state = 3},
  [229] = {.lex_state = 103, .external_lex_state = 3},
  [230] = {.lex_state = 103, .external_lex_state = 2},
  [231] = {.lex_state = 103, .external_lex_state = 3},
  [232] = {.lex_state = 103, .external_lex_state = 3},
  [233] = {.lex_state = 103, .external_lex_state = 3},
  [234] = {.lex_state = 103, .external_lex_state = 3},
  [235] = {.lex_state = 103, .external_lex_state = 3},
  [236] = {.lex_state = 103, .external_lex_state = 3},
  [237] = {.lex_state = 103, .external_lex_state = 2},
  [238] = {.lex_state = 103, .external_lex_state = 3},
  [239] = {.lex_state = 103, .external_lex_state = 3},
  [240] = {.lex_state = 103, .external_lex_state = 2},
  [241] = {.lex_state = 103, .external_lex_state = 3},
  [242] = {.lex_state = 103, .external_lex_state = 3},
  [243] = {.lex_state = 103, .external_lex_state = 2},
  [244] = {.lex_state = 103, .external_lex_state = 2},
  [245] = {.lex_state = 103, .external_lex_state = 2},
  [246] = {.lex_state = 103, .external_lex_state = 3},
  [247] = {.lex_state = 103, .external_lex_state = 2},
  [248] = {.lex_state = 103, .external_lex_state = 2},
  [249] = {.lex_state = 103, .external_lex_state = 3},
  [250] = {.lex_state = 103, .external_lex_state = 2},
  [251] = {.lex_state = 103, .external_lex_state = 2},
  [252] = {.lex_state = 102, .external_lex_state = 2},
  [253] = {.lex_state = 60},
  [254] = {.lex_state = 102, .external_lex_state = 2},
  [255] = {.lex_state = 56},
  [256] = {.lex_state = 56},
  [257] = {.lex_state = 102, .external_lex_state = 2},
  [258] = {.lex_state = 102, .external_lex_state = 2},
  [259] = {.lex_state = 102, .external_lex_state = 2},
  [260] = {.lex_state = 102, .external_lex_state = 2},
  [261] = {.lex_state = 102, .external_lex_state = 3},
  [262] = {.lex_state = 102, .external_lex_state = 3},
  [263] = {.lex_state = 102, .external_lex_state = 3},
  [264] = {.lex_state = 102, .external_lex_state = 2},
  [265] = {.lex_state = 102, .external_lex_state = 3},
  [266] = {.lex_state = 102, .external_lex_state = 2},
  [267] = {.lex_state = 102, .external_lex_state = 2},
  [268] = {.lex_state = 102, .external_lex_state = 3},
  [269] = {.lex_state = 60},
  [270] = {.lex_state = 102, .external_lex_state = 3},
  [271] = {.lex_state = 102, .external_lex_state = 2},
  [272] = {.lex_state = 102, .external_lex_state = 3},
  [273] = {.lex_state = 102, .external_lex_state = 2},
  [274] = {.lex_state = 60},
  [275] = {.lex_state = 60},
  [276] = {.lex_state = 102, .external_lex_state = 3},
  [277] = {.lex_state = 102, .external_lex_state = 2},
  [278] = {.lex_state = 102, .external_lex_state = 3},
  [279] = {.lex_state = 102, .external_lex_state = 3},
  [280] = {.lex_state = 102, .external_lex_state = 2},
  [281] = {.lex_state = 102, .external_lex_state = 2},
  [282] = {.lex_state = 102, .external_lex_state = 3},
  [283] = {.lex_state = 60},
  [284] = {.lex_state = 102, .external_lex_state = 3},
  [285] = {.lex_state = 102, .external_lex_state = 3},
  [286] = {.lex_state = 102, .external_lex_state = 3},
  [287] = {.lex_state = 102, .external_lex_state = 2},
  [288] = {.lex_state = 102, .external_lex_state = 2},
  [289] = {.lex_state = 58},
  [290] = {.lex_state = 61},
  [291] = {.lex_state = 61},
  [292] = {.lex_state = 56},
  [293] = {.lex_state = 62},
  [294] = {.lex_state = 56},
  [295] = {.lex_state = 63},
  [296] = {.lex_state = 56},
  [297] = {.lex_state = 56},
  [298] = {.lex_state = 63},
  [299] = {.lex_state = 56},
  [300] = {.lex_state = 56},
  [301] = {.lex_state = 56},
  [302] = {.lex_state = 62},
  [303] = {.lex_state = 56},
  [304] = {.lex_state = 56},
  [305] = {.lex_state = 56},
  [306] = {.lex_state = 56},
  [307] = {.lex_state = 56},
  [308] = {.lex_state = 56},
  [309] = {.lex_state = 56},
  [310] = {.lex_state = 56},
  [311] = {.lex_state = 56},
  [312] = {.lex_state = 62},
  [313] = {.lex_state = 63},
  [314] = {.lex_state = 63},
  [315] = {.lex_state = 63},
  [316] = {.lex_state = 62},
  [317] = {.lex_state = 62},
  [318] = {.lex_state = 62},
  [319] = {.lex_state = 57},
  [320] = {.lex_state = 56},
  [321] = {.lex_state = 56},
  [322] = {.lex_state = 60},
  [323] = {.lex_state = 62},
  [324] = {.lex_state = 56},
  [325] = {.lex_state = 56},
  [326] = {.lex_state = 57},
  [327] = {.lex_state = 60},
  [328] = {.lex_state = 56},
  [329] = {.lex_state = 56},
  [330] = {.lex_state = 56},
  [331] = {.lex_state = 56},
  [332] = {.lex_state = 56},
  [333] = {.lex_state = 56},
  [334] = {.lex_state = 56},
  [335] = {.lex_state = 56},
  [336] = {.lex_state = 56},
  [337] = {.lex_state = 56},
  [338] = {.lex_state = 56},
  [339] = {.lex_state = 56},
  [340] = {.lex_state = 56},
  [341] = {.lex_state = 58},
  [342] = {.lex_state = 58},
  [343] = {.lex_state = 57},
  [344] = {.lex_state = 58},
  [345] = {.lex_state = 58},
  [346] = {.lex_state = 58},
  [347] = {.lex_state = 58},
  [348] = {.lex_state = 57},
  [349] = {.lex_state = 58},
  [350] = {.lex_state = 0, .external_lex_state = 3},
  [351] = {.lex_state = 58},
  [352] = {.lex_state = 58},
  [353] = {.lex_state = 56},
  [354] = {.lex_state = 58},
  [355] = {.lex_state = 56},
  [356] = {.lex_state = 0, .external_lex_state = 3},
  [357] = {.lex_state = 58},
  [358] = {.lex_state = 58},
  [359] = {.lex_state = 110},
  [360] = {.lex_state = 56},
  [361] = {.lex_state = 0, .external_lex_state = 3},
  [362] = {.lex_state = 58},
  [363] = {.lex_state = 58},
  [364] = {.lex_state = 0, .external_lex_state = 3},
  [365] = {.lex_state = 0, .external_lex_state = 3},
  [366] = {.lex_state = 58},
  [367] = {.lex_state = 57},
  [368] = {.lex_state = 57},
  [369] = {.lex_state = 56},
  [370] = {.lex_state = 56},
  [371] = {.lex_state = 57},
  [372] = {.lex_state = 56},
  [373] = {.lex_state = 56},
  [374] = {.lex_state = 56},
  [375] = {.lex_state = 57},
  [376] = {.lex_state = 57},
  [377] = {.lex_state = 56},
  [378] = {.lex_state = 57},
  [379] = {.lex_state = 58},
  [380] = {.lex_state = 56},
  [381] = {.lex_state = 56},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 56},
  [384] = {.lex_state = 56},
  [385] = {.lex_state = 56},
  [386] = {.lex_state = 57},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 56},
  [391] = {.lex_state = 56},
  [392] = {.lex_state = 56},
  [393] = {.lex_state = 56},
  [394] = {.lex_state = 57},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 56},
  [397] = {.lex_state = 56},
  [398] = {.lex_state = 56},
  [399] = {.lex_state = 56},
  [400] = {.lex_state = 56},
  [401] = {.lex_state = 56},
  [402] = {.lex_state = 56},
  [403] = {.lex_state = 57},
  [404] = {.lex_state = 56},
  [405] = {.lex_state = 56},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 56},
  [409] = {.lex_state = 56},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 57},
  [412] = {.lex_state = 56},
  [413] = {.lex_state = 56},
  [414] = {.lex_state = 56},
  [415] = {.lex_state = 56},
  [416] = {.lex_state = 56},
  [417] = {.lex_state = 56},
  [418] = {.lex_state = 56},
  [419] = {.lex_state = 56},
  [420] = {.lex_state = 56},
  [421] = {.lex_state = 56},
  [422] = {.lex_state = 56},
  [423] = {.lex_state = 56},
  [424] = {.lex_state = 56},
  [425] = {.lex_state = 56},
  [426] = {.lex_state = 56},
  [427] = {.lex_state = 56},
  [428] = {.lex_state = 56},
  [429] = {.lex_state = 53},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 56},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 53},
  [436] = {.lex_state = 0, .external_lex_state = 3},
  [437] = {.lex_state = 56},
  [438] = {.lex_state = 0, .external_lex_state = 3},
  [439] = {.lex_state = 0, .external_lex_state = 3},
  [440] = {.lex_state = 57},
  [441] = {.lex_state = 0, .external_lex_state = 3},
  [442] = {.lex_state = 56},
  [443] = {.lex_state = 57},
  [444] = {.lex_state = 56},
  [445] = {.lex_state = 56},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0, .external_lex_state = 3},
  [448] = {.lex_state = 56},
  [449] = {.lex_state = 56},
  [450] = {.lex_state = 56},
  [451] = {.lex_state = 54},
  [452] = {.lex_state = 56},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 54},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 111},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 57},
  [461] = {.lex_state = 56},
  [462] = {.lex_state = 56},
  [463] = {.lex_state = 56},
  [464] = {.lex_state = 56},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 56},
  [467] = {.lex_state = 56},
  [468] = {.lex_state = 56},
  [469] = {.lex_state = 56},
  [470] = {.lex_state = 56},
  [471] = {.lex_state = 56},
  [472] = {.lex_state = 56},
  [473] = {.lex_state = 56},
  [474] = {.lex_state = 56},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 56},
  [477] = {.lex_state = 56},
  [478] = {.lex_state = 56},
  [479] = {.lex_state = 56},
  [480] = {.lex_state = 56},
  [481] = {.lex_state = 56},
  [482] = {.lex_state = 58},
  [483] = {.lex_state = 56},
  [484] = {.lex_state = 56},
  [485] = {.lex_state = 56},
  [486] = {.lex_state = 56},
  [487] = {.lex_state = 56},
  [488] = {.lex_state = 56},
  [489] = {.lex_state = 57},
  [490] = {.lex_state = 56},
  [491] = {.lex_state = 56},
  [492] = {.lex_state = 56},
  [493] = {.lex_state = 56},
  [494] = {.lex_state = 56},
  [495] = {.lex_state = 56},
  [496] = {.lex_state = 56},
  [497] = {.lex_state = 111},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 56},
  [500] = {.lex_state = 56},
  [501] = {.lex_state = 56},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 56},
  [504] = {.lex_state = 56},
  [505] = {.lex_state = 56},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 56},
  [508] = {.lex_state = 56},
  [509] = {.lex_state = 56},
  [510] = {.lex_state = 56},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 56},
  [513] = {.lex_state = 58},
  [514] = {.lex_state = 56},
  [515] = {.lex_state = 56},
  [516] = {.lex_state = 56},
  [517] = {.lex_state = 56},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 56},
  [521] = {.lex_state = 58},
  [522] = {.lex_state = 56},
  [523] = {.lex_state = 56},
  [524] = {.lex_state = 0},
  [525] = {.lex_state = 56},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 56},
  [528] = {.lex_state = 56},
  [529] = {.lex_state = 56},
  [530] = {.lex_state = 56},
  [531] = {.lex_state = 56},
  [532] = {.lex_state = 56},
  [533] = {.lex_state = 56},
  [534] = {.lex_state = 56},
  [535] = {.lex_state = 56},
  [536] = {.lex_state = 56},
  [537] = {.lex_state = 56},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 56},
  [540] = {.lex_state = 56},
  [541] = {.lex_state = 0},
  [542] = {.lex_state = 0},
  [543] = {.lex_state = 56},
  [544] = {.lex_state = 56},
  [545] = {.lex_state = 56},
  [546] = {.lex_state = 56},
  [547] = {.lex_state = 56},
  [548] = {.lex_state = 56},
  [549] = {.lex_state = 56},
  [550] = {.lex_state = 56},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 56},
  [553] = {.lex_state = 56},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 56},
  [556] = {.lex_state = 56},
  [557] = {.lex_state = 56},
  [558] = {.lex_state = 57},
  [559] = {.lex_state = 56},
  [560] = {.lex_state = 56},
  [561] = {.lex_state = 56},
  [562] = {.lex_state = 0},
  [563] = {.lex_state = 56},
  [564] = {.lex_state = 56},
  [565] = {.lex_state = 56},
  [566] = {.lex_state = 56},
  [567] = {.lex_state = 56},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 56},
  [570] = {.lex_state = 56},
  [571] = {.lex_state = 56},
  [572] = {.lex_state = 56},
  [573] = {.lex_state = 56},
  [574] = {.lex_state = 56},
  [575] = {.lex_state = 56},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 56},
  [578] = {.lex_state = 56},
  [579] = {.lex_state = 56},
  [580] = {.lex_state = 0},
  [581] = {.lex_state = 56},
  [582] = {.lex_state = 56},
  [583] = {.lex_state = 56},
  [584] = {.lex_state = 111},
  [585] = {.lex_state = 56},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 56},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 0},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 58},
  [594] = {.lex_state = 0},
  [595] = {.lex_state = 0},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 56},
  [599] = {.lex_state = 56},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 0},
  [603] = {.lex_state = 56},
  [604] = {.lex_state = 56},
  [605] = {.lex_state = 0},
  [606] = {.lex_state = 57},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 58},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
};

enum {
  ts_external_token__stars = 0,
  ts_external_token__sectionend = 1,
  ts_external_token__eof = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__stars] = sym__stars,
  [ts_external_token__sectionend] = sym__sectionend,
  [ts_external_token__eof] = sym__eof,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__stars] = true,
    [ts_external_token__sectionend] = true,
    [ts_external_token__eof] = true,
  },
  [2] = {
    [ts_external_token__stars] = true,
  },
  [3] = {
    [ts_external_token__stars] = true,
    [ts_external_token__sectionend] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [aux_sym__org_stars_token1] = ACTIONS(1),
    [sym_atat] = ACTIONS(1),
    [sym_at] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_slash] = ACTIONS(1),
    [sym_plus] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [sym_flag] = ACTIONS(1),
    [sym__none] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_account] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_txn] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_pushmeta] = ACTIONS(1),
    [anon_sym_popmeta] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_plugin] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym__UTF_8_1] = ACTIONS(1),
    [aux_sym__UTF_8_2_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token2] = ACTIONS(1),
    [aux_sym__UTF_8_3_token3] = ACTIONS(1),
    [aux_sym__UTF_8_3_token4] = ACTIONS(1),
    [aux_sym__UTF_8_4_token1] = ACTIONS(1),
    [aux_sym__UTF_8_4_token2] = ACTIONS(1),
    [aux_sym__UTF_8_4_token3] = ACTIONS(1),
    [sym__stars] = ACTIONS(1),
    [sym__sectionend] = ACTIONS(1),
    [sym__eof] = ACTIONS(1),
  },
  [1] = {
    [sym_file] = STATE(455),
    [sym__nl] = STATE(7),
    [sym_section] = STATE(7),
    [sym__org_stars] = STATE(454),
    [sym_headline] = STATE(2),
    [sym_transaction] = STATE(264),
    [sym_pushtag] = STATE(254),
    [sym_poptag] = STATE(254),
    [sym_pushmeta] = STATE(254),
    [sym_popmeta] = STATE(254),
    [sym_open] = STATE(264),
    [sym_close] = STATE(264),
    [sym_commodity] = STATE(264),
    [sym_pad] = STATE(264),
    [sym_balance] = STATE(264),
    [sym_price] = STATE(264),
    [sym_event] = STATE(264),
    [sym_query] = STATE(264),
    [sym_note] = STATE(264),
    [sym_document] = STATE(264),
    [sym_custom] = STATE(264),
    [sym__entry] = STATE(7),
    [sym_option] = STATE(254),
    [sym_include] = STATE(254),
    [sym_plugin] = STATE(254),
    [sym__directive] = STATE(7),
    [sym__declarations] = STATE(7),
    [sym_comment] = STATE(452),
    [sym__skipped_lines] = STATE(7),
    [aux_sym_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(7),
    [sym__eol] = ACTIONS(5),
    [sym_flag] = ACTIONS(9),
    [sym_date] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(9),
    [anon_sym_pushtag] = ACTIONS(13),
    [anon_sym_poptag] = ACTIONS(15),
    [anon_sym_pushmeta] = ACTIONS(17),
    [anon_sym_popmeta] = ACTIONS(19),
    [anon_sym_option] = ACTIONS(21),
    [anon_sym_include] = ACTIONS(23),
    [anon_sym_plugin] = ACTIONS(25),
    [anon_sym_SEMI] = ACTIONS(27),
    [sym__stars] = ACTIONS(29),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(33), 1,
      anon_sym_CR,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(53), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(361), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
    STATE(491), 1,
      sym_comment,
    ACTIONS(31), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(5), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(262), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(261), 12,
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
  [91] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(57), 1,
      anon_sym_CR,
    ACTIONS(59), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(356), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
    STATE(491), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(55), 2,
      anon_sym_LF,
      sym__eol,
    STATE(8), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(262), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(261), 12,
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
  [182] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(63), 1,
      anon_sym_CR,
    ACTIONS(65), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(364), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
    STATE(491), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(61), 2,
      anon_sym_LF,
      sym__eol,
    STATE(3), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(262), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(261), 12,
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
  [273] = 22,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(37), 1,
      sym_date,
    ACTIONS(39), 1,
      anon_sym_pushtag,
    ACTIONS(41), 1,
      anon_sym_poptag,
    ACTIONS(43), 1,
      anon_sym_pushmeta,
    ACTIONS(45), 1,
      anon_sym_popmeta,
    ACTIONS(47), 1,
      anon_sym_option,
    ACTIONS(49), 1,
      anon_sym_include,
    ACTIONS(51), 1,
      anon_sym_plugin,
    ACTIONS(57), 1,
      anon_sym_CR,
    ACTIONS(67), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(365), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
    STATE(491), 1,
      sym_comment,
    ACTIONS(35), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(55), 2,
      anon_sym_LF,
      sym__eol,
    STATE(8), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(262), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(261), 12,
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
  [364] = 20,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_CR,
    ACTIONS(80), 1,
      sym_date,
    ACTIONS(83), 1,
      anon_sym_pushtag,
    ACTIONS(86), 1,
      anon_sym_poptag,
    ACTIONS(89), 1,
      anon_sym_pushmeta,
    ACTIONS(92), 1,
      anon_sym_popmeta,
    ACTIONS(95), 1,
      anon_sym_option,
    ACTIONS(98), 1,
      anon_sym_include,
    ACTIONS(101), 1,
      anon_sym_plugin,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      sym__stars,
    STATE(2), 1,
      sym_headline,
    STATE(452), 1,
      sym_comment,
    STATE(454), 1,
      sym__org_stars,
    ACTIONS(71), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(77), 2,
      sym_flag,
      anon_sym_COLON,
    STATE(6), 7,
      sym__nl,
      sym_section,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_file_repeat1,
    STATE(254), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(264), 12,
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
  [450] = 20,
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
      anon_sym_SEMI,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(114), 1,
      anon_sym_CR,
    STATE(2), 1,
      sym_headline,
    STATE(452), 1,
      sym_comment,
    STATE(454), 1,
      sym__org_stars,
    ACTIONS(9), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(112), 2,
      anon_sym_LF,
      sym__eol,
    STATE(6), 7,
      sym__nl,
      sym_section,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_file_repeat1,
    STATE(254), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(264), 12,
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
  [536] = 17,
    ACTIONS(119), 1,
      anon_sym_CR,
    ACTIONS(125), 1,
      sym_date,
    ACTIONS(128), 1,
      anon_sym_pushtag,
    ACTIONS(131), 1,
      anon_sym_poptag,
    ACTIONS(134), 1,
      anon_sym_pushmeta,
    ACTIONS(137), 1,
      anon_sym_popmeta,
    ACTIONS(140), 1,
      anon_sym_option,
    ACTIONS(143), 1,
      anon_sym_include,
    ACTIONS(146), 1,
      anon_sym_plugin,
    ACTIONS(149), 1,
      anon_sym_SEMI,
    STATE(491), 1,
      sym_comment,
    ACTIONS(116), 2,
      anon_sym_LF,
      sym__eol,
    ACTIONS(122), 2,
      sym_flag,
      anon_sym_COLON,
    ACTIONS(152), 2,
      sym__stars,
      sym__sectionend,
    STATE(8), 6,
      sym__nl,
      sym__entry,
      sym__directive,
      sym__declarations,
      sym__skipped_lines,
      aux_sym_section_repeat1,
    STATE(262), 7,
      sym_pushtag,
      sym_poptag,
      sym_pushmeta,
      sym_popmeta,
      sym_option,
      sym_include,
      sym_plugin,
    STATE(261), 12,
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
  [613] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(154), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(156), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [642] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(160), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(162), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [671] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(164), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(25), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(166), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [700] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(168), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(9), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(170), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [729] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(172), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(174), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [758] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(176), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(13), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(178), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [787] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(180), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(10), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(182), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [816] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(160), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(162), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [845] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(188), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(186), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [874] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(192), 2,
      sym__stars,
      sym__sectionend,
    STATE(38), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(190), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [903] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(196), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(194), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [932] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(164), 2,
      sym__stars,
      sym__sectionend,
    STATE(17), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(166), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [961] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(198), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(37), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(200), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [990] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(198), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(200), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1019] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(196), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(194), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1048] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(192), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(28), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(190), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1077] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(188), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(186), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1106] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(202), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(23), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(204), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1135] = 4,
    ACTIONS(210), 1,
      sym__indent,
    ACTIONS(206), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(208), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1164] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(213), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(215), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1193] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(219), 2,
      sym__stars,
      sym__sectionend,
    STATE(30), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(217), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1222] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(198), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(200), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1251] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(198), 2,
      sym__stars,
      sym__sectionend,
    STATE(35), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(200), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1280] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(176), 2,
      sym__stars,
      sym__sectionend,
    STATE(42), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(178), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1309] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(168), 2,
      sym__stars,
      sym__sectionend,
    STATE(40), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(170), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1338] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(202), 2,
      sym__stars,
      sym__sectionend,
    STATE(19), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(204), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1367] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(223), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(221), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1396] = 4,
    ACTIONS(225), 1,
      sym__indent,
    ACTIONS(206), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(208), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1425] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(223), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(27), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(221), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1454] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(213), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(215), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1483] = 4,
    ACTIONS(158), 1,
      sym__indent,
    ACTIONS(219), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(22), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(217), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1512] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(154), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(156), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1541] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(180), 2,
      sym__stars,
      sym__sectionend,
    STATE(16), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(182), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1570] = 4,
    ACTIONS(184), 1,
      sym__indent,
    ACTIONS(172), 2,
      sym__stars,
      sym__sectionend,
    STATE(36), 3,
      sym_posting,
      sym_key_value_line,
      aux_sym_transaction_repeat1,
    ACTIONS(174), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1599] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(232), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(228), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1627] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(234), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(134), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(236), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1655] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(240), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(98), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(242), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1683] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(246), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(244), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1711] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(250), 2,
      sym__stars,
      sym__sectionend,
    STATE(118), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(248), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1739] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(254), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(252), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1767] = 4,
    ACTIONS(258), 1,
      sym__indent,
    ACTIONS(261), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(256), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1795] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(265), 2,
      sym__stars,
      sym__sectionend,
    STATE(117), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(263), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1823] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(269), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(267), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1851] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(273), 2,
      sym__stars,
      sym__sectionend,
    STATE(115), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(271), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1879] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(277), 2,
      sym__stars,
      sym__sectionend,
    STATE(113), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(275), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1907] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(281), 2,
      sym__stars,
      sym__sectionend,
    STATE(90), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(279), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1935] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(240), 2,
      sym__stars,
      sym__sectionend,
    STATE(89), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(242), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1963] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(285), 2,
      sym__stars,
      sym__sectionend,
    STATE(88), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(283), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [1991] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(289), 2,
      sym__stars,
      sym__sectionend,
    STATE(82), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(287), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2019] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(293), 2,
      sym__stars,
      sym__sectionend,
    STATE(75), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(291), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2047] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(297), 2,
      sym__stars,
      sym__sectionend,
    STATE(70), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(295), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2075] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(301), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(299), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2103] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(305), 2,
      sym__stars,
      sym__sectionend,
    STATE(69), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(303), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2131] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(309), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(307), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2159] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(313), 2,
      sym__stars,
      sym__sectionend,
    STATE(43), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(311), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2187] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(317), 2,
      sym__stars,
      sym__sectionend,
    STATE(46), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(315), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2215] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(321), 2,
      sym__stars,
      sym__sectionend,
    STATE(48), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(319), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2243] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(325), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(323), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2271] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(329), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(327), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2299] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(333), 2,
      sym__stars,
      sym__sectionend,
    STATE(121), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(331), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2327] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(337), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(335), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2355] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(341), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(339), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2383] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(345), 2,
      sym__stars,
      sym__sectionend,
    STATE(51), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(343), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2411] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(349), 2,
      sym__stars,
      sym__sectionend,
    STATE(60), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(347), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2439] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(234), 2,
      sym__stars,
      sym__sectionend,
    STATE(62), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(236), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2467] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(353), 2,
      sym__stars,
      sym__sectionend,
    STATE(66), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(351), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2495] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(357), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(355), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2523] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(329), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(327), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2551] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(361), 2,
      sym__stars,
      sym__sectionend,
    STATE(122), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(359), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2579] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(363), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(365), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2607] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(367), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(369), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2635] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(371), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(373), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2663] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(375), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(377), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2691] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(381), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(379), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2719] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(383), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(76), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(385), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2747] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(387), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(389), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2775] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(391), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(393), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2803] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(353), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(130), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(351), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2831] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(397), 2,
      sym__stars,
      sym__sectionend,
    STATE(123), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(395), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2859] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(401), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(399), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2887] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(405), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(403), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2915] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(409), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(407), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2943] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(411), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(413), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2971] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(417), 2,
      sym__stars,
      sym__sectionend,
    STATE(119), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(415), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [2999] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(419), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(78), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(421), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3027] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(349), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(136), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(347), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3055] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(423), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(425), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3083] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(427), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(429), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3111] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(409), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(407), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3139] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(405), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(403), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3167] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(401), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(399), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3195] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(397), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(79), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(395), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3223] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(381), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(379), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3251] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(361), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(80), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(359), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3279] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(357), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(355), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3307] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(341), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(339), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3335] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(337), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(335), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3363] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(333), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(81), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(331), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3391] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(417), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(84), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(415), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3419] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(345), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(126), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(343), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3447] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(232), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(228), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3475] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(246), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(244), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3503] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(250), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(85), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(248), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3531] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(254), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(252), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3559] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(427), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(429), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3587] = 4,
    ACTIONS(431), 1,
      sym__indent,
    ACTIONS(261), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(256), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3615] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(423), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(425), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3643] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(419), 2,
      sym__stars,
      sym__sectionend,
    STATE(124), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(421), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3671] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(411), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(413), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3699] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(391), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(393), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3727] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(387), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(389), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3755] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(383), 2,
      sym__stars,
      sym__sectionend,
    STATE(67), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(385), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3783] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(375), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(377), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3811] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(371), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(373), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3839] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(367), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(369), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3867] = 4,
    ACTIONS(230), 1,
      sym__indent,
    ACTIONS(363), 2,
      sym__stars,
      sym__sectionend,
    STATE(49), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(365), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3895] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(265), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(91), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(263), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3923] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(269), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(267), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3951] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(273), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(95), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(271), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [3979] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(277), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(96), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(275), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4007] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(281), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(97), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(279), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4035] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(325), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(323), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4063] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(321), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(112), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(319), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4091] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(317), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(110), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(315), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4119] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(313), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(109), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(311), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4147] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(309), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(307), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4175] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(305), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(105), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(303), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4203] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(301), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(114), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(299), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4231] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(297), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(104), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(295), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4259] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(293), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(103), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(291), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4287] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(289), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(101), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(287), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4315] = 4,
    ACTIONS(238), 1,
      sym__indent,
    ACTIONS(285), 2,
      sym__stars,
      ts_builtin_sym_end,
    STATE(99), 2,
      sym_key_value_line,
      aux_sym__key_value_list,
    ACTIONS(283), 14,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4343] = 2,
    ACTIONS(436), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(434), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4365] = 2,
    ACTIONS(438), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4387] = 2,
    ACTIONS(442), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(444), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4409] = 2,
    ACTIONS(448), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(446), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4431] = 2,
    ACTIONS(452), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(450), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4453] = 2,
    ACTIONS(456), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(454), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4475] = 2,
    ACTIONS(460), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(458), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4497] = 2,
    ACTIONS(462), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(464), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4519] = 2,
    ACTIONS(468), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(466), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4541] = 2,
    ACTIONS(472), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(470), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4563] = 2,
    ACTIONS(474), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(476), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4585] = 2,
    ACTIONS(261), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(256), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4607] = 2,
    ACTIONS(478), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(480), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4629] = 2,
    ACTIONS(438), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(440), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4651] = 2,
    ACTIONS(206), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(208), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4673] = 2,
    ACTIONS(482), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(484), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4695] = 2,
    ACTIONS(488), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(486), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4717] = 2,
    ACTIONS(492), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(490), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4739] = 2,
    ACTIONS(494), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(496), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4761] = 2,
    ACTIONS(498), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(500), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4783] = 2,
    ACTIONS(504), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(502), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4805] = 2,
    ACTIONS(506), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(508), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4827] = 2,
    ACTIONS(436), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(434), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4849] = 2,
    ACTIONS(512), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(510), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4871] = 2,
    ACTIONS(206), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(208), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4893] = 2,
    ACTIONS(514), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(516), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4915] = 13,
    ACTIONS(518), 1,
      sym__eol,
    ACTIONS(520), 1,
      sym_atat,
    ACTIONS(522), 1,
      sym_at,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    STATE(339), 1,
      sym_incomplete_amount,
    STATE(372), 1,
      sym_cost_spec,
    STATE(505), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [4959] = 2,
    ACTIONS(536), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(538), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [4981] = 2,
    ACTIONS(542), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(540), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5003] = 2,
    ACTIONS(546), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(544), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5025] = 2,
    ACTIONS(548), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(550), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5047] = 2,
    ACTIONS(552), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(554), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5069] = 2,
    ACTIONS(558), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(556), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5091] = 2,
    ACTIONS(558), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(556), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5113] = 2,
    ACTIONS(552), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(554), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5135] = 2,
    ACTIONS(548), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(550), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5157] = 2,
    ACTIONS(536), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(538), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5179] = 13,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(560), 1,
      sym__eol,
    ACTIONS(562), 1,
      sym_atat,
    ACTIONS(564), 1,
      sym_at,
    STATE(336), 1,
      sym_incomplete_amount,
    STATE(373), 1,
      sym_cost_spec,
    STATE(552), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5223] = 2,
    ACTIONS(261), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(256), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5245] = 2,
    ACTIONS(546), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(544), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5267] = 2,
    ACTIONS(542), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(540), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5289] = 7,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(570), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(549), 2,
      sym__key_value_value,
      sym_amount,
    ACTIONS(566), 3,
      sym__none,
      sym_bool,
      sym_currency,
    ACTIONS(568), 4,
      sym_date,
      sym_account,
      sym_string,
      sym_tag,
    STATE(344), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5321] = 2,
    ACTIONS(514), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(516), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5343] = 2,
    ACTIONS(512), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(510), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5365] = 2,
    ACTIONS(506), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(508), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5387] = 2,
    ACTIONS(504), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(502), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5409] = 2,
    ACTIONS(498), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(500), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5431] = 2,
    ACTIONS(494), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(496), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5453] = 2,
    ACTIONS(492), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(490), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5475] = 2,
    ACTIONS(488), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(486), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5497] = 13,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(572), 1,
      sym__eol,
    ACTIONS(574), 1,
      sym_atat,
    ACTIONS(576), 1,
      sym_at,
    STATE(328), 1,
      sym_incomplete_amount,
    STATE(377), 1,
      sym_cost_spec,
    STATE(540), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5541] = 2,
    ACTIONS(482), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(484), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5563] = 2,
    ACTIONS(478), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(480), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5585] = 2,
    ACTIONS(578), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(580), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5607] = 2,
    ACTIONS(472), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(470), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5629] = 2,
    ACTIONS(474), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(476), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5651] = 2,
    ACTIONS(468), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(466), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5673] = 2,
    ACTIONS(462), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(464), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5695] = 2,
    ACTIONS(442), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(444), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5717] = 2,
    ACTIONS(456), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(454), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5739] = 2,
    ACTIONS(584), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(582), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5761] = 2,
    ACTIONS(578), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(580), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5783] = 2,
    ACTIONS(588), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(586), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5805] = 2,
    ACTIONS(590), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(592), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5827] = 2,
    ACTIONS(590), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(592), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5849] = 2,
    ACTIONS(594), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(596), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5871] = 2,
    ACTIONS(460), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(458), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5893] = 2,
    ACTIONS(584), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(582), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [5915] = 11,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      sym_currency,
    ACTIONS(602), 1,
      sym_number,
    ACTIONS(604), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      anon_sym_RBRACE,
    STATE(382), 1,
      sym_cost_comp,
    STATE(407), 1,
      sym_compound_amount,
    STATE(489), 1,
      sym__cost_comp_list,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    ACTIONS(598), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(317), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5955] = 11,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      sym_currency,
    ACTIONS(602), 1,
      sym_number,
    ACTIONS(604), 1,
      anon_sym_POUND,
    ACTIONS(606), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(382), 1,
      sym_cost_comp,
    STATE(407), 1,
      sym_compound_amount,
    STATE(480), 1,
      sym__cost_comp_list,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    ACTIONS(598), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(317), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [5995] = 2,
    ACTIONS(608), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(610), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6017] = 2,
    ACTIONS(612), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(614), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6039] = 2,
    ACTIONS(618), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(616), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6061] = 2,
    ACTIONS(620), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(622), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6083] = 2,
    ACTIONS(452), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(450), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6105] = 13,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(624), 1,
      sym__eol,
    ACTIONS(626), 1,
      sym_atat,
    ACTIONS(628), 1,
      sym_at,
    STATE(333), 1,
      sym_incomplete_amount,
    STATE(381), 1,
      sym_cost_spec,
    STATE(486), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [6149] = 2,
    ACTIONS(448), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(446), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6171] = 2,
    ACTIONS(630), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(632), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6193] = 2,
    ACTIONS(636), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(634), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6215] = 2,
    ACTIONS(638), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(640), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6237] = 2,
    ACTIONS(642), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(644), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6259] = 2,
    ACTIONS(648), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(646), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6281] = 2,
    ACTIONS(650), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(652), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6303] = 2,
    ACTIONS(654), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(656), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6325] = 2,
    ACTIONS(658), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(660), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6347] = 2,
    ACTIONS(664), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(662), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6369] = 2,
    ACTIONS(668), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(666), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6391] = 2,
    ACTIONS(672), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(670), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6413] = 2,
    ACTIONS(594), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(596), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6435] = 2,
    ACTIONS(588), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(586), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6457] = 2,
    ACTIONS(608), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(610), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6479] = 2,
    ACTIONS(612), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(614), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6501] = 2,
    ACTIONS(620), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(622), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6523] = 2,
    ACTIONS(630), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(632), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6545] = 2,
    ACTIONS(638), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(640), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6567] = 2,
    ACTIONS(676), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(674), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6589] = 2,
    ACTIONS(678), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(680), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6611] = 2,
    ACTIONS(684), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(682), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6633] = 2,
    ACTIONS(642), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(644), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6655] = 2,
    ACTIONS(684), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(682), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6677] = 2,
    ACTIONS(650), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(652), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6699] = 2,
    ACTIONS(654), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(656), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6721] = 2,
    ACTIONS(618), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(616), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6743] = 2,
    ACTIONS(636), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(634), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6765] = 2,
    ACTIONS(672), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(670), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6787] = 2,
    ACTIONS(658), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(660), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6809] = 2,
    ACTIONS(648), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(646), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6831] = 2,
    ACTIONS(664), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(662), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6853] = 2,
    ACTIONS(678), 2,
      sym__stars,
      sym__sectionend,
    ACTIONS(680), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6875] = 2,
    ACTIONS(668), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(666), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6897] = 2,
    ACTIONS(676), 2,
      sym__stars,
      ts_builtin_sym_end,
    ACTIONS(674), 15,
      anon_sym_LF,
      anon_sym_CR,
      sym__eol,
      sym__indent,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6919] = 2,
    ACTIONS(686), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(688), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6940] = 8,
    ACTIONS(690), 1,
      sym__eol,
    ACTIONS(696), 1,
      sym_number,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_amount,
    ACTIONS(692), 2,
      sym_plus,
      sym_minus,
    STATE(269), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(694), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(295), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [6973] = 2,
    ACTIONS(700), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(702), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [6994] = 14,
    ACTIONS(706), 1,
      sym_flag,
    ACTIONS(708), 1,
      anon_sym_open,
    ACTIONS(710), 1,
      anon_sym_close,
    ACTIONS(712), 1,
      anon_sym_commodity,
    ACTIONS(714), 1,
      anon_sym_pad,
    ACTIONS(716), 1,
      anon_sym_balance,
    ACTIONS(718), 1,
      anon_sym_price,
    ACTIONS(720), 1,
      anon_sym_event,
    ACTIONS(722), 1,
      anon_sym_query,
    ACTIONS(724), 1,
      anon_sym_note,
    ACTIONS(726), 1,
      anon_sym_document,
    ACTIONS(728), 1,
      anon_sym_custom,
    STATE(319), 1,
      sym_txn,
    ACTIONS(704), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_POUND,
  [7039] = 14,
    ACTIONS(706), 1,
      sym_flag,
    ACTIONS(730), 1,
      anon_sym_open,
    ACTIONS(732), 1,
      anon_sym_close,
    ACTIONS(734), 1,
      anon_sym_commodity,
    ACTIONS(736), 1,
      anon_sym_pad,
    ACTIONS(738), 1,
      anon_sym_balance,
    ACTIONS(740), 1,
      anon_sym_price,
    ACTIONS(742), 1,
      anon_sym_event,
    ACTIONS(744), 1,
      anon_sym_query,
    ACTIONS(746), 1,
      anon_sym_note,
    ACTIONS(748), 1,
      anon_sym_document,
    ACTIONS(750), 1,
      anon_sym_custom,
    STATE(326), 1,
      sym_txn,
    ACTIONS(704), 3,
      anon_sym_STAR,
      anon_sym_txn,
      anon_sym_POUND,
  [7084] = 2,
    ACTIONS(752), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(754), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7105] = 2,
    ACTIONS(756), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(758), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7126] = 2,
    ACTIONS(760), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(762), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7147] = 2,
    ACTIONS(764), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(766), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7168] = 2,
    ACTIONS(770), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(768), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7189] = 2,
    ACTIONS(700), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(702), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7210] = 2,
    ACTIONS(764), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(766), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7231] = 2,
    ACTIONS(770), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(768), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7252] = 2,
    ACTIONS(774), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(772), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7273] = 2,
    ACTIONS(776), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(778), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7294] = 2,
    ACTIONS(780), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(782), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7315] = 2,
    ACTIONS(786), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(784), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7336] = 8,
    ACTIONS(696), 1,
      sym_number,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(788), 1,
      sym__eol,
    STATE(322), 1,
      sym_amount,
    ACTIONS(692), 2,
      sym_plus,
      sym_minus,
    STATE(274), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(694), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(295), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7369] = 2,
    ACTIONS(792), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(790), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7390] = 2,
    ACTIONS(794), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(796), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7411] = 2,
    ACTIONS(800), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(798), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7432] = 2,
    ACTIONS(802), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(804), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7453] = 8,
    ACTIONS(806), 1,
      sym__eol,
    ACTIONS(814), 1,
      sym_number,
    ACTIONS(817), 1,
      anon_sym_LPAREN,
    STATE(322), 1,
      sym_amount,
    ACTIONS(808), 2,
      sym_plus,
      sym_minus,
    STATE(274), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(811), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(295), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7486] = 8,
    ACTIONS(696), 1,
      sym_number,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(820), 1,
      sym__eol,
    STATE(322), 1,
      sym_amount,
    ACTIONS(692), 2,
      sym_plus,
      sym_minus,
    STATE(283), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(694), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(295), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7519] = 2,
    ACTIONS(802), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(804), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7540] = 2,
    ACTIONS(822), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(824), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7561] = 2,
    ACTIONS(828), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(826), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7582] = 2,
    ACTIONS(780), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(782), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7603] = 2,
    ACTIONS(828), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(826), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7624] = 2,
    ACTIONS(830), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(832), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7645] = 2,
    ACTIONS(686), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(688), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7666] = 8,
    ACTIONS(696), 1,
      sym_number,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(834), 1,
      sym__eol,
    STATE(322), 1,
      sym_amount,
    ACTIONS(692), 2,
      sym_plus,
      sym_minus,
    STATE(274), 2,
      sym_custom_value,
      aux_sym_custom_repeat1,
    ACTIONS(694), 4,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
    STATE(295), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7699] = 2,
    ACTIONS(776), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(778), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7720] = 2,
    ACTIONS(822), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(824), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7741] = 2,
    ACTIONS(830), 3,
      sym__stars,
      sym__sectionend,
      anon_sym_CR,
    ACTIONS(832), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7762] = 2,
    ACTIONS(792), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(790), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7783] = 2,
    ACTIONS(786), 3,
      sym__stars,
      ts_builtin_sym_end,
      anon_sym_CR,
    ACTIONS(784), 13,
      anon_sym_LF,
      sym__eol,
      sym_flag,
      sym_date,
      anon_sym_COLON,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_pushmeta,
      anon_sym_popmeta,
      anon_sym_option,
      anon_sym_include,
      anon_sym_plugin,
      anon_sym_SEMI,
  [7804] = 9,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(600), 1,
      sym_currency,
    ACTIONS(602), 1,
      sym_number,
    ACTIONS(604), 1,
      anon_sym_POUND,
    STATE(407), 1,
      sym_compound_amount,
    STATE(430), 1,
      sym_cost_comp,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    ACTIONS(598), 3,
      anon_sym_STAR,
      sym_date,
      sym_string,
    STATE(317), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7838] = 11,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(836), 1,
      sym__eol,
    ACTIONS(838), 1,
      anon_sym_STAR,
    ACTIONS(842), 1,
      sym_account,
    ACTIONS(846), 1,
      sym_key,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(534), 1,
      sym_key_value,
    STATE(605), 1,
      sym_optflag,
    ACTIONS(840), 2,
      sym_flag,
      anon_sym_POUND,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
    STATE(533), 2,
      sym_tags_links,
      sym_comment,
  [7875] = 11,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(838), 1,
      anon_sym_STAR,
    ACTIONS(846), 1,
      sym_key,
    ACTIONS(848), 1,
      sym__eol,
    ACTIONS(850), 1,
      sym_account,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(550), 1,
      sym_key_value,
    STATE(551), 1,
      sym_optflag,
    ACTIONS(840), 2,
      sym_flag,
      anon_sym_POUND,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
    STATE(556), 2,
      sym_tags_links,
      sym_comment,
  [7912] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(852), 1,
      sym__eol,
    STATE(423), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(470), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [7944] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(854), 9,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [7968] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(862), 1,
      sym__eol,
    STATE(399), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(559), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8000] = 7,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(866), 1,
      sym_slash,
    ACTIONS(872), 1,
      sym_currency,
    STATE(335), 1,
      sym_asterisk,
    ACTIONS(868), 2,
      sym_plus,
      sym_minus,
    ACTIONS(870), 2,
      sym_bool,
      sym_number,
    ACTIONS(864), 5,
      sym__eol,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8028] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(874), 1,
      sym__eol,
    STATE(401), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(543), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8060] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(876), 1,
      sym__eol,
    STATE(398), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(561), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8092] = 3,
    STATE(335), 1,
      sym_asterisk,
    ACTIONS(880), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(878), 9,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8112] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(882), 1,
      sym__eol,
    STATE(393), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(569), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8144] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(884), 1,
      sym__eol,
    STATE(397), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(481), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8176] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(886), 1,
      sym__eol,
    STATE(422), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(478), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8208] = 3,
    ACTIONS(860), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(854), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [8228] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(888), 1,
      sym__eol,
    STATE(400), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(555), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8260] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(890), 1,
      sym__eol,
    STATE(409), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(479), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8292] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(892), 1,
      sym__eol,
    STATE(392), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(573), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8324] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(894), 1,
      sym__eol,
    STATE(428), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(473), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8356] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(896), 1,
      sym__eol,
    STATE(424), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(490), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8388] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(898), 1,
      sym__eol,
    STATE(391), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(577), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8420] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(900), 1,
      sym__eol,
    STATE(408), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(464), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8452] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(902), 1,
      sym__eol,
    STATE(418), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(581), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8484] = 9,
    ACTIONS(526), 1,
      sym_number,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(904), 1,
      sym__eol,
    STATE(396), 1,
      sym_price_annotation,
    STATE(448), 1,
      sym_incomplete_amount,
    STATE(468), 1,
      sym_comment,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(363), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8516] = 3,
    ACTIONS(880), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(878), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [8536] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(866), 1,
      sym_slash,
    STATE(335), 1,
      sym_asterisk,
    ACTIONS(860), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(854), 7,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8560] = 3,
    STATE(335), 1,
      sym_asterisk,
    ACTIONS(860), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(854), 9,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8580] = 2,
    ACTIONS(908), 3,
      sym_bool,
      sym_currency,
      sym_number,
    ACTIONS(906), 9,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8597] = 2,
    ACTIONS(908), 1,
      anon_sym_RBRACE,
    ACTIONS(906), 11,
      sym__eol,
      anon_sym_STAR,
      sym_slash,
      sym_plus,
      sym_minus,
      sym_currency,
      anon_sym_POUND,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_TILDE,
      anon_sym_RBRACE_RBRACE,
  [8614] = 8,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(912), 1,
      sym_currency,
    ACTIONS(914), 1,
      anon_sym_POUND,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
    ACTIONS(916), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [8641] = 5,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(920), 1,
      sym_currency,
    ACTIONS(922), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(354), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8661] = 8,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(924), 1,
      sym__eol,
    ACTIONS(926), 1,
      sym_string,
    STATE(343), 1,
      sym__txn_strings,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(390), 1,
      sym_tags_links,
    STATE(501), 1,
      sym_comment,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
  [8687] = 5,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym_number,
    STATE(514), 1,
      sym_amount,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(351), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8707] = 5,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_number,
    STATE(415), 1,
      sym_amount_tolerance,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(341), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8727] = 2,
    ACTIONS(870), 1,
      sym_number,
    ACTIONS(864), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8741] = 5,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(932), 1,
      sym_currency,
    ACTIONS(934), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(357), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8761] = 5,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(928), 1,
      sym_number,
    STATE(520), 1,
      sym_amount,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(351), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8781] = 5,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(930), 1,
      sym_number,
    STATE(413), 1,
      sym_amount_tolerance,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(341), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8801] = 8,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(926), 1,
      sym_string,
    ACTIONS(936), 1,
      sym__eol,
    STATE(348), 1,
      sym__txn_strings,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(405), 1,
      sym_tags_links,
    STATE(485), 1,
      sym_comment,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
  [8827] = 2,
    ACTIONS(940), 1,
      sym_number,
    ACTIONS(938), 8,
      sym__eol,
      sym_plus,
      sym_minus,
      sym_bool,
      sym_date,
      sym_account,
      sym_string,
      anon_sym_LPAREN,
  [8841] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(942), 1,
      sym__eol,
    ACTIONS(944), 1,
      sym_atat,
    ACTIONS(946), 1,
      sym_at,
    STATE(369), 1,
      sym_cost_spec,
    STATE(546), 1,
      sym_comment,
  [8866] = 4,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(948), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(355), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8883] = 4,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(950), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(352), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8900] = 4,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(952), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(293), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8917] = 4,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(954), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(353), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8934] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(956), 1,
      sym__eol,
    ACTIONS(958), 1,
      sym_atat,
    ACTIONS(960), 1,
      sym_at,
    STATE(370), 1,
      sym_cost_spec,
    STATE(477), 1,
      sym_comment,
  [8959] = 4,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(962), 1,
      sym_number,
    ACTIONS(692), 2,
      sym_plus,
      sym_minus,
    STATE(313), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8976] = 4,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(964), 1,
      sym_number,
    ACTIONS(692), 2,
      sym_plus,
      sym_minus,
    STATE(314), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [8993] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(966), 1,
      sym__eol,
    ACTIONS(968), 1,
      sym_atat,
    ACTIONS(970), 1,
      sym_at,
    STATE(374), 1,
      sym_cost_spec,
    STATE(564), 1,
      sym_comment,
  [9018] = 4,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(972), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(312), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9035] = 4,
    ACTIONS(698), 1,
      anon_sym_LPAREN,
    ACTIONS(974), 1,
      sym_number,
    ACTIONS(692), 2,
      sym_plus,
      sym_minus,
    STATE(298), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9052] = 8,
    ACTIONS(530), 1,
      anon_sym_LBRACE,
    ACTIONS(532), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(976), 1,
      sym__eol,
    ACTIONS(978), 1,
      sym_atat,
    ACTIONS(980), 1,
      sym_at,
    STATE(380), 1,
      sym_cost_spec,
    STATE(488), 1,
      sym_comment,
  [9077] = 4,
    ACTIONS(528), 1,
      anon_sym_LPAREN,
    ACTIONS(982), 1,
      sym_number,
    ACTIONS(524), 2,
      sym_plus,
      sym_minus,
    STATE(302), 4,
      sym__number_expr,
      sym__paren__number_expr,
      sym_unary_number_expr,
      sym_binary_number_expr,
  [9094] = 6,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(984), 1,
      sym_currency,
    ACTIONS(986), 1,
      anon_sym_TILDE,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9114] = 7,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(988), 1,
      sym__eol,
    ACTIONS(990), 1,
      sym_currency,
    ACTIONS(992), 1,
      sym_string,
    STATE(379), 1,
      aux_sym_open_repeat2,
    STATE(425), 1,
      sym_opt_booking,
    STATE(604), 1,
      sym_comment,
  [9136] = 6,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(994), 1,
      sym__eol,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(412), 1,
      sym_tags_links,
    STATE(522), 1,
      sym_comment,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
  [9156] = 6,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(996), 1,
      sym__eol,
    ACTIONS(998), 1,
      sym_currency,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9176] = 7,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(990), 1,
      sym_currency,
    ACTIONS(992), 1,
      sym_string,
    ACTIONS(1000), 1,
      sym__eol,
    STATE(379), 1,
      aux_sym_open_repeat2,
    STATE(404), 1,
      sym_opt_booking,
    STATE(527), 1,
      sym_comment,
  [9198] = 7,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(990), 1,
      sym_currency,
    ACTIONS(992), 1,
      sym_string,
    ACTIONS(1002), 1,
      sym__eol,
    STATE(342), 1,
      aux_sym_open_repeat2,
    STATE(420), 1,
      sym_opt_booking,
    STATE(499), 1,
      sym_comment,
  [9220] = 7,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(990), 1,
      sym_currency,
    ACTIONS(992), 1,
      sym_string,
    ACTIONS(1004), 1,
      sym__eol,
    STATE(345), 1,
      aux_sym_open_repeat2,
    STATE(417), 1,
      sym_opt_booking,
    STATE(507), 1,
      sym_comment,
  [9242] = 6,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1006), 1,
      sym__eol,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(402), 1,
      sym_tags_links,
    STATE(544), 1,
      sym_comment,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
  [9262] = 3,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(362), 1,
      aux_sym_open_repeat1,
    ACTIONS(1008), 4,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_SEMI,
  [9275] = 6,
    ACTIONS(1012), 1,
      sym__stars,
    ACTIONS(1015), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(350), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
  [9294] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(998), 1,
      sym_currency,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9311] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(1017), 1,
      sym_currency,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9328] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(1019), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9345] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(1021), 1,
      sym_currency,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9362] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(1023), 1,
      anon_sym_RPAREN,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9379] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1025), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(350), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
  [9398] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(1027), 1,
      sym_currency,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9415] = 3,
    ACTIONS(1031), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_open_repeat1,
    ACTIONS(1029), 4,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_SEMI,
  [9428] = 5,
    ACTIONS(1036), 1,
      aux_sym__any_token1,
    STATE(265), 1,
      sym__nl,
    STATE(429), 1,
      sym_item,
    STATE(435), 1,
      sym__any,
    ACTIONS(1034), 2,
      anon_sym_LF,
      anon_sym_CR,
  [9445] = 2,
    ACTIONS(1040), 2,
      sym_at,
      anon_sym_LBRACE,
    ACTIONS(1038), 4,
      sym__eol,
      sym_atat,
      anon_sym_LBRACE_LBRACE,
      anon_sym_SEMI,
  [9456] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1042), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(350), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
  [9475] = 3,
    ACTIONS(1010), 1,
      anon_sym_COMMA,
    STATE(358), 1,
      aux_sym_open_repeat1,
    ACTIONS(1044), 4,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_SEMI,
  [9488] = 5,
    ACTIONS(856), 1,
      anon_sym_STAR,
    ACTIONS(858), 1,
      sym_slash,
    ACTIONS(1046), 1,
      sym_currency,
    STATE(340), 1,
      sym_asterisk,
    ACTIONS(910), 2,
      sym_plus,
      sym_minus,
  [9505] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1048), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(350), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
  [9524] = 6,
    ACTIONS(29), 1,
      sym__stars,
    ACTIONS(1050), 1,
      sym__sectionend,
    STATE(4), 1,
      sym_headline,
    STATE(350), 1,
      aux_sym_section_repeat2,
    STATE(447), 1,
      sym_section,
    STATE(454), 1,
      sym__org_stars,
  [9543] = 1,
    ACTIONS(1029), 5,
      sym__eol,
      sym_currency,
      sym_string,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [9551] = 4,
    ACTIONS(1052), 1,
      sym__eol,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(531), 1,
      sym_tags_links,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
  [9565] = 2,
    ACTIONS(1056), 1,
      sym_string,
    ACTIONS(1054), 4,
      sym__eol,
      sym_tag,
      sym_link,
      anon_sym_SEMI,
  [9575] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1058), 1,
      sym__eol,
    ACTIONS(1060), 1,
      sym_atat,
    ACTIONS(1062), 1,
      sym_at,
    STATE(557), 1,
      sym_comment,
  [9591] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1064), 1,
      sym__eol,
    ACTIONS(1066), 1,
      sym_atat,
    ACTIONS(1068), 1,
      sym_at,
    STATE(469), 1,
      sym_comment,
  [9607] = 1,
    ACTIONS(1070), 5,
      sym__eol,
      sym_string,
      sym_tag,
      sym_link,
      anon_sym_SEMI,
  [9615] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1072), 1,
      sym__eol,
    ACTIONS(1074), 1,
      sym_atat,
    ACTIONS(1076), 1,
      sym_at,
    STATE(487), 1,
      sym_comment,
  [9631] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1078), 1,
      sym__eol,
    ACTIONS(1080), 1,
      sym_atat,
    ACTIONS(1082), 1,
      sym_at,
    STATE(566), 1,
      sym_comment,
  [9647] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1084), 1,
      sym__eol,
    ACTIONS(1086), 1,
      sym_atat,
    ACTIONS(1088), 1,
      sym_at,
    STATE(575), 1,
      sym_comment,
  [9663] = 4,
    ACTIONS(1090), 1,
      sym__eol,
    STATE(378), 1,
      aux_sym_tags_links_repeat1,
    STATE(563), 1,
      sym_tags_links,
    ACTIONS(844), 2,
      sym_tag,
      sym_link,
  [9677] = 3,
    STATE(376), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1092), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(1094), 2,
      sym_tag,
      sym_link,
  [9689] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1097), 1,
      sym__eol,
    ACTIONS(1099), 1,
      sym_atat,
    ACTIONS(1101), 1,
      sym_at,
    STATE(548), 1,
      sym_comment,
  [9705] = 3,
    STATE(376), 1,
      aux_sym_tags_links_repeat1,
    ACTIONS(1103), 2,
      sym__eol,
      anon_sym_SEMI,
    ACTIONS(1105), 2,
      sym_tag,
      sym_link,
  [9717] = 3,
    ACTIONS(1107), 1,
      sym_currency,
    STATE(379), 1,
      aux_sym_open_repeat2,
    ACTIONS(1044), 3,
      sym__eol,
      sym_string,
      anon_sym_SEMI,
  [9729] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1110), 1,
      sym__eol,
    ACTIONS(1112), 1,
      sym_atat,
    ACTIONS(1114), 1,
      sym_at,
    STATE(461), 1,
      sym_comment,
  [9745] = 5,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1116), 1,
      sym__eol,
    ACTIONS(1118), 1,
      sym_atat,
    ACTIONS(1120), 1,
      sym_at,
    STATE(476), 1,
      sym_comment,
  [9761] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1124), 1,
      anon_sym_RBRACE,
    ACTIONS(1126), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(387), 1,
      aux_sym__cost_comp_list_repeat1,
  [9774] = 2,
    ACTIONS(1130), 1,
      sym_at,
    ACTIONS(1128), 3,
      sym__eol,
      sym_atat,
      anon_sym_SEMI,
  [9783] = 2,
    ACTIONS(1134), 1,
      sym_at,
    ACTIONS(1132), 3,
      sym__eol,
      sym_atat,
      anon_sym_SEMI,
  [9792] = 1,
    ACTIONS(1136), 4,
      sym_plus,
      sym_minus,
      sym_number,
      anon_sym_LPAREN,
  [9799] = 1,
    ACTIONS(1138), 4,
      sym__eol,
      sym_tag,
      sym_link,
      anon_sym_SEMI,
  [9806] = 4,
    ACTIONS(1122), 1,
      anon_sym_COMMA,
    ACTIONS(1140), 1,
      anon_sym_RBRACE,
    ACTIONS(1142), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(388), 1,
      aux_sym__cost_comp_list_repeat1,
  [9819] = 4,
    ACTIONS(1144), 1,
      anon_sym_COMMA,
    ACTIONS(1147), 1,
      anon_sym_RBRACE,
    ACTIONS(1149), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(388), 1,
      aux_sym__cost_comp_list_repeat1,
  [9832] = 2,
    ACTIONS(1153), 1,
      anon_sym_RBRACE,
    ACTIONS(1151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [9840] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1155), 1,
      sym__eol,
    STATE(523), 1,
      sym_comment,
  [9850] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1157), 1,
      sym__eol,
    STATE(582), 1,
      sym_comment,
  [9860] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1159), 1,
      sym__eol,
    STATE(579), 1,
      sym_comment,
  [9870] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1161), 1,
      sym__eol,
    STATE(578), 1,
      sym_comment,
  [9880] = 3,
    ACTIONS(846), 1,
      sym_key,
    ACTIONS(1163), 1,
      sym__eol,
    STATE(550), 1,
      sym_key_value,
  [9890] = 2,
    ACTIONS(1167), 1,
      anon_sym_RBRACE,
    ACTIONS(1165), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [9898] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1169), 1,
      sym__eol,
    STATE(463), 1,
      sym_comment,
  [9908] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1171), 1,
      sym__eol,
    STATE(474), 1,
      sym_comment,
  [9918] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1173), 1,
      sym__eol,
    STATE(571), 1,
      sym_comment,
  [9928] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1175), 1,
      sym__eol,
    STATE(570), 1,
      sym_comment,
  [9938] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1177), 1,
      sym__eol,
    STATE(567), 1,
      sym_comment,
  [9948] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1179), 1,
      sym__eol,
    STATE(553), 1,
      sym_comment,
  [9958] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1181), 1,
      sym__eol,
    STATE(547), 1,
      sym_comment,
  [9968] = 1,
    ACTIONS(1183), 3,
      sym__eol,
      sym_tag,
      sym_link,
  [9974] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1185), 1,
      sym__eol,
    STATE(536), 1,
      sym_comment,
  [9984] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1187), 1,
      sym__eol,
    STATE(545), 1,
      sym_comment,
  [9994] = 2,
    ACTIONS(1191), 1,
      anon_sym_RBRACE,
    ACTIONS(1189), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10002] = 2,
    ACTIONS(1195), 1,
      anon_sym_RBRACE,
    ACTIONS(1193), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10010] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1197), 1,
      sym__eol,
    STATE(462), 1,
      sym_comment,
  [10020] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1199), 1,
      sym__eol,
    STATE(472), 1,
      sym_comment,
  [10030] = 2,
    ACTIONS(1203), 1,
      anon_sym_RBRACE,
    ACTIONS(1201), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10038] = 3,
    ACTIONS(846), 1,
      sym_key,
    ACTIONS(1205), 1,
      sym__eol,
    STATE(534), 1,
      sym_key_value,
  [10048] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1207), 1,
      sym__eol,
    STATE(535), 1,
      sym_comment,
  [10058] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1209), 1,
      sym__eol,
    STATE(585), 1,
      sym_comment,
  [10068] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1211), 1,
      sym__eol,
    STATE(599), 1,
      sym_comment,
  [10078] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1213), 1,
      sym__eol,
    STATE(530), 1,
      sym_comment,
  [10088] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1215), 1,
      sym__eol,
    STATE(528), 1,
      sym_comment,
  [10098] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1217), 1,
      sym__eol,
    STATE(525), 1,
      sym_comment,
  [10108] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1219), 1,
      sym__eol,
    STATE(583), 1,
      sym_comment,
  [10118] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1221), 1,
      sym__eol,
    STATE(512), 1,
      sym_comment,
  [10128] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1223), 1,
      sym__eol,
    STATE(574), 1,
      sym_comment,
  [10138] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1225), 1,
      sym__eol,
    STATE(508), 1,
      sym_comment,
  [10148] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1227), 1,
      sym__eol,
    STATE(471), 1,
      sym_comment,
  [10158] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1229), 1,
      sym__eol,
    STATE(466), 1,
      sym_comment,
  [10168] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1231), 1,
      sym__eol,
    STATE(483), 1,
      sym_comment,
  [10178] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1233), 1,
      sym__eol,
    STATE(539), 1,
      sym_comment,
  [10188] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1235), 1,
      sym__eol,
    STATE(510), 1,
      sym_comment,
  [10198] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1237), 1,
      sym__eol,
    STATE(509), 1,
      sym_comment,
  [10208] = 3,
    ACTIONS(534), 1,
      anon_sym_SEMI,
    ACTIONS(1239), 1,
      sym__eol,
    STATE(467), 1,
      sym_comment,
  [10218] = 3,
    ACTIONS(1241), 1,
      anon_sym_LF,
    ACTIONS(1243), 1,
      anon_sym_CR,
    STATE(272), 1,
      sym__nl,
  [10228] = 2,
    ACTIONS(1147), 1,
      anon_sym_RBRACE,
    ACTIONS(1149), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10236] = 2,
    ACTIONS(1247), 1,
      anon_sym_RBRACE,
    ACTIONS(1245), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10244] = 2,
    ACTIONS(1251), 1,
      anon_sym_RBRACE,
    ACTIONS(1249), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE_RBRACE,
  [10252] = 2,
    ACTIONS(1253), 1,
      sym__eol,
    ACTIONS(1255), 1,
      sym_string,
  [10259] = 2,
    ACTIONS(1257), 1,
      sym_string,
    STATE(375), 1,
      sym_filename,
  [10266] = 2,
    ACTIONS(1259), 1,
      anon_sym_LF,
    ACTIONS(1261), 1,
      anon_sym_CR,
  [10273] = 1,
    ACTIONS(760), 2,
      sym__stars,
      sym__sectionend,
  [10278] = 1,
    ACTIONS(1263), 2,
      sym__eol,
      anon_sym_SEMI,
  [10283] = 1,
    ACTIONS(752), 2,
      sym__stars,
      sym__sectionend,
  [10288] = 1,
    ACTIONS(756), 2,
      sym__stars,
      sym__sectionend,
  [10293] = 2,
    ACTIONS(846), 1,
      sym_key,
    STATE(572), 1,
      sym_key_value,
  [10300] = 1,
    ACTIONS(794), 2,
      sym__stars,
      sym__sectionend,
  [10305] = 2,
    ACTIONS(1265), 1,
      sym__eol,
    ACTIONS(1267), 1,
      sym_string,
  [10312] = 2,
    ACTIONS(846), 1,
      sym_key,
    STATE(495), 1,
      sym_key_value,
  [10319] = 1,
    ACTIONS(1269), 2,
      sym__eol,
      anon_sym_SEMI,
  [10324] = 1,
    ACTIONS(1271), 2,
      sym__eol,
      anon_sym_SEMI,
  [10329] = 2,
    ACTIONS(1257), 1,
      sym_string,
    STATE(367), 1,
      sym_filename,
  [10336] = 1,
    ACTIONS(1273), 2,
      sym__stars,
      sym__sectionend,
  [10341] = 1,
    ACTIONS(1275), 2,
      sym__eol,
      anon_sym_SEMI,
  [10346] = 1,
    ACTIONS(1277), 1,
      sym__eol,
  [10350] = 1,
    ACTIONS(1279), 1,
      sym__eol,
  [10354] = 1,
    ACTIONS(1281), 1,
      aux_sym_headline_token1,
  [10358] = 1,
    ACTIONS(1283), 1,
      sym__eol,
  [10362] = 1,
    ACTIONS(1285), 1,
      sym_string,
  [10366] = 1,
    ACTIONS(1287), 1,
      aux_sym_headline_token1,
  [10370] = 1,
    ACTIONS(1289), 1,
      ts_builtin_sym_end,
  [10374] = 1,
    ACTIONS(1291), 1,
      aux_sym__any_token1,
  [10378] = 1,
    ACTIONS(1293), 1,
      sym_string,
  [10382] = 1,
    ACTIONS(1295), 1,
      sym_string,
  [10386] = 1,
    ACTIONS(1297), 1,
      sym_string,
  [10390] = 1,
    ACTIONS(1299), 1,
      sym_key,
  [10394] = 1,
    ACTIONS(1301), 1,
      sym__eol,
  [10398] = 1,
    ACTIONS(1303), 1,
      sym__eol,
  [10402] = 1,
    ACTIONS(1305), 1,
      sym__eol,
  [10406] = 1,
    ACTIONS(1307), 1,
      sym__eol,
  [10410] = 1,
    ACTIONS(1309), 1,
      sym_tag,
  [10414] = 1,
    ACTIONS(1311), 1,
      sym__eol,
  [10418] = 1,
    ACTIONS(1313), 1,
      sym__eol,
  [10422] = 1,
    ACTIONS(1315), 1,
      sym__eol,
  [10426] = 1,
    ACTIONS(1317), 1,
      sym__eol,
  [10430] = 1,
    ACTIONS(1319), 1,
      sym__eol,
  [10434] = 1,
    ACTIONS(1321), 1,
      sym__eol,
  [10438] = 1,
    ACTIONS(1323), 1,
      sym__eol,
  [10442] = 1,
    ACTIONS(1325), 1,
      sym__eol,
  [10446] = 1,
    ACTIONS(1327), 1,
      sym__eol,
  [10450] = 1,
    ACTIONS(1329), 1,
      sym_tag,
  [10454] = 1,
    ACTIONS(1331), 1,
      sym__eol,
  [10458] = 1,
    ACTIONS(1333), 1,
      sym__eol,
  [10462] = 1,
    ACTIONS(1335), 1,
      sym__eol,
  [10466] = 1,
    ACTIONS(1337), 1,
      sym__eol,
  [10470] = 1,
    ACTIONS(1339), 1,
      anon_sym_RBRACE_RBRACE,
  [10474] = 1,
    ACTIONS(1341), 1,
      sym__eol,
  [10478] = 1,
    ACTIONS(1343), 1,
      sym_currency,
  [10482] = 1,
    ACTIONS(1345), 1,
      sym__eol,
  [10486] = 1,
    ACTIONS(1347), 1,
      sym__eol,
  [10490] = 1,
    ACTIONS(1349), 1,
      sym__eol,
  [10494] = 1,
    ACTIONS(1351), 1,
      sym__eol,
  [10498] = 1,
    ACTIONS(1353), 1,
      sym__eol,
  [10502] = 1,
    ACTIONS(1355), 1,
      sym__eol,
  [10506] = 1,
    ACTIONS(1339), 1,
      anon_sym_RBRACE,
  [10510] = 1,
    ACTIONS(1357), 1,
      sym__eol,
  [10514] = 1,
    ACTIONS(1359), 1,
      sym__eol,
  [10518] = 1,
    ACTIONS(1361), 1,
      sym__eol,
  [10522] = 1,
    ACTIONS(1363), 1,
      sym__eol,
  [10526] = 1,
    ACTIONS(1365), 1,
      sym__eol,
  [10530] = 1,
    ACTIONS(1367), 1,
      sym__eol,
  [10534] = 1,
    ACTIONS(1369), 1,
      sym__eol,
  [10538] = 1,
    ACTIONS(1371), 1,
      aux_sym__any_token1,
  [10542] = 1,
    ACTIONS(1373), 1,
      sym_string,
  [10546] = 1,
    ACTIONS(1375), 1,
      sym__eol,
  [10550] = 1,
    ACTIONS(1377), 1,
      sym__eol,
  [10554] = 1,
    ACTIONS(1379), 1,
      sym__eol,
  [10558] = 1,
    ACTIONS(1381), 1,
      sym_string,
  [10562] = 1,
    ACTIONS(1383), 1,
      sym__eol,
  [10566] = 1,
    ACTIONS(1385), 1,
      sym__eol,
  [10570] = 1,
    ACTIONS(1387), 1,
      sym__eol,
  [10574] = 1,
    ACTIONS(1389), 1,
      sym_account,
  [10578] = 1,
    ACTIONS(1391), 1,
      sym__eol,
  [10582] = 1,
    ACTIONS(1393), 1,
      sym__eol,
  [10586] = 1,
    ACTIONS(1395), 1,
      sym__eol,
  [10590] = 1,
    ACTIONS(1397), 1,
      sym__eol,
  [10594] = 1,
    ACTIONS(1399), 1,
      sym_account,
  [10598] = 1,
    ACTIONS(1401), 1,
      sym__eol,
  [10602] = 1,
    ACTIONS(1403), 1,
      sym_currency,
  [10606] = 1,
    ACTIONS(1405), 1,
      sym__eol,
  [10610] = 1,
    ACTIONS(1407), 1,
      sym__eol,
  [10614] = 1,
    ACTIONS(1409), 1,
      sym__eol,
  [10618] = 1,
    ACTIONS(1411), 1,
      sym__eol,
  [10622] = 1,
    ACTIONS(1413), 1,
      sym_account,
  [10626] = 1,
    ACTIONS(1415), 1,
      sym_account,
  [10630] = 1,
    ACTIONS(1417), 1,
      sym__eol,
  [10634] = 1,
    ACTIONS(1419), 1,
      sym_currency,
  [10638] = 1,
    ACTIONS(1421), 1,
      sym__eol,
  [10642] = 1,
    ACTIONS(1423), 1,
      sym__eol,
  [10646] = 1,
    ACTIONS(1425), 1,
      sym_string,
  [10650] = 1,
    ACTIONS(1427), 1,
      sym__eol,
  [10654] = 1,
    ACTIONS(1429), 1,
      sym_account,
  [10658] = 1,
    ACTIONS(1431), 1,
      sym__eol,
  [10662] = 1,
    ACTIONS(1433), 1,
      sym__eol,
  [10666] = 1,
    ACTIONS(1435), 1,
      sym__eol,
  [10670] = 1,
    ACTIONS(1437), 1,
      sym__eol,
  [10674] = 1,
    ACTIONS(1439), 1,
      sym__eol,
  [10678] = 1,
    ACTIONS(1441), 1,
      sym__eol,
  [10682] = 1,
    ACTIONS(1443), 1,
      sym__eol,
  [10686] = 1,
    ACTIONS(1445), 1,
      sym__eol,
  [10690] = 1,
    ACTIONS(1447), 1,
      sym__eol,
  [10694] = 1,
    ACTIONS(1449), 1,
      sym__eol,
  [10698] = 1,
    ACTIONS(1451), 1,
      sym__eol,
  [10702] = 1,
    ACTIONS(1453), 1,
      sym_string,
  [10706] = 1,
    ACTIONS(1455), 1,
      sym__eol,
  [10710] = 1,
    ACTIONS(1457), 1,
      sym__eol,
  [10714] = 1,
    ACTIONS(1459), 1,
      sym_account,
  [10718] = 1,
    ACTIONS(1461), 1,
      sym_account,
  [10722] = 1,
    ACTIONS(1463), 1,
      sym__eol,
  [10726] = 1,
    ACTIONS(1465), 1,
      sym__eol,
  [10730] = 1,
    ACTIONS(1467), 1,
      sym__eol,
  [10734] = 1,
    ACTIONS(1469), 1,
      sym__eol,
  [10738] = 1,
    ACTIONS(1471), 1,
      sym__eol,
  [10742] = 1,
    ACTIONS(1473), 1,
      sym__eol,
  [10746] = 1,
    ACTIONS(1475), 1,
      sym__eol,
  [10750] = 1,
    ACTIONS(1477), 1,
      sym__eol,
  [10754] = 1,
    ACTIONS(1479), 1,
      sym_account,
  [10758] = 1,
    ACTIONS(1481), 1,
      sym__eol,
  [10762] = 1,
    ACTIONS(1483), 1,
      sym__eol,
  [10766] = 1,
    ACTIONS(1485), 1,
      sym_string,
  [10770] = 1,
    ACTIONS(1487), 1,
      sym__eol,
  [10774] = 1,
    ACTIONS(1489), 1,
      sym__eol,
  [10778] = 1,
    ACTIONS(1491), 1,
      sym__eol,
  [10782] = 1,
    ACTIONS(1493), 1,
      aux_sym__org_stars_token1,
  [10786] = 1,
    ACTIONS(1495), 1,
      sym__eol,
  [10790] = 1,
    ACTIONS(1497), 1,
      sym__eol,
  [10794] = 1,
    ACTIONS(1499), 1,
      sym__eol,
  [10798] = 1,
    ACTIONS(1501), 1,
      sym_account,
  [10802] = 1,
    ACTIONS(1503), 1,
      sym__eol,
  [10806] = 1,
    ACTIONS(1505), 1,
      sym__eol,
  [10810] = 1,
    ACTIONS(1507), 1,
      sym__eol,
  [10814] = 1,
    ACTIONS(1509), 1,
      sym__eol,
  [10818] = 1,
    ACTIONS(1511), 1,
      sym__eol,
  [10822] = 1,
    ACTIONS(1513), 1,
      anon_sym_COLON,
  [10826] = 1,
    ACTIONS(1515), 1,
      sym__eol,
  [10830] = 1,
    ACTIONS(1517), 1,
      sym__eol,
  [10834] = 1,
    ACTIONS(1519), 1,
      sym__eol,
  [10838] = 1,
    ACTIONS(1521), 1,
      sym__eol,
  [10842] = 1,
    ACTIONS(1523), 1,
      sym__eol,
  [10846] = 1,
    ACTIONS(1525), 1,
      sym__eol,
  [10850] = 1,
    ACTIONS(1527), 1,
      sym__eol,
  [10854] = 1,
    ACTIONS(1529), 1,
      anon_sym_COLON,
  [10858] = 1,
    ACTIONS(1531), 1,
      sym__eol,
  [10862] = 1,
    ACTIONS(1533), 1,
      sym__eol,
  [10866] = 1,
    ACTIONS(1535), 1,
      sym__eol,
  [10870] = 1,
    ACTIONS(1537), 1,
      sym_string,
  [10874] = 1,
    ACTIONS(1539), 1,
      sym__eol,
  [10878] = 1,
    ACTIONS(1541), 1,
      sym__eol,
  [10882] = 1,
    ACTIONS(1543), 1,
      sym__eol,
  [10886] = 1,
    ACTIONS(1545), 1,
      aux_sym__any_token1,
  [10890] = 1,
    ACTIONS(1547), 1,
      sym__eol,
  [10894] = 1,
    ACTIONS(1549), 1,
      sym_tag,
  [10898] = 1,
    ACTIONS(1551), 1,
      sym_tag,
  [10902] = 1,
    ACTIONS(1553), 1,
      sym__eol,
  [10906] = 1,
    ACTIONS(1555), 1,
      sym_string,
  [10910] = 1,
    ACTIONS(1557), 1,
      sym_string,
  [10914] = 1,
    ACTIONS(1559), 1,
      sym_account,
  [10918] = 1,
    ACTIONS(1561), 1,
      sym_account,
  [10922] = 1,
    ACTIONS(1563), 1,
      sym_currency,
  [10926] = 1,
    ACTIONS(1565), 1,
      sym_string,
  [10930] = 1,
    ACTIONS(1567), 1,
      anon_sym_COLON,
  [10934] = 1,
    ACTIONS(1569), 1,
      sym_string,
  [10938] = 1,
    ACTIONS(1571), 1,
      sym_account,
  [10942] = 1,
    ACTIONS(1573), 1,
      sym__eol,
  [10946] = 1,
    ACTIONS(1575), 1,
      sym__eol,
  [10950] = 1,
    ACTIONS(1577), 1,
      sym_string,
  [10954] = 1,
    ACTIONS(1579), 1,
      sym_string,
  [10958] = 1,
    ACTIONS(1581), 1,
      sym_string,
  [10962] = 1,
    ACTIONS(1583), 1,
      sym__eol,
  [10966] = 1,
    ACTIONS(1585), 1,
      sym__eol,
  [10970] = 1,
    ACTIONS(1587), 1,
      sym_account,
  [10974] = 1,
    ACTIONS(1589), 1,
      sym_key,
  [10978] = 1,
    ACTIONS(1591), 1,
      sym_string,
  [10982] = 1,
    ACTIONS(1593), 1,
      sym_account,
  [10986] = 1,
    ACTIONS(1595), 1,
      sym_account,
  [10990] = 1,
    ACTIONS(1597), 1,
      sym_currency,
  [10994] = 1,
    ACTIONS(1599), 1,
      sym_string,
  [10998] = 1,
    ACTIONS(1601), 1,
      sym_string,
  [11002] = 1,
    ACTIONS(1603), 1,
      sym_account,
  [11006] = 1,
    ACTIONS(1605), 1,
      sym_account,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 91,
  [SMALL_STATE(4)] = 182,
  [SMALL_STATE(5)] = 273,
  [SMALL_STATE(6)] = 364,
  [SMALL_STATE(7)] = 450,
  [SMALL_STATE(8)] = 536,
  [SMALL_STATE(9)] = 613,
  [SMALL_STATE(10)] = 642,
  [SMALL_STATE(11)] = 671,
  [SMALL_STATE(12)] = 700,
  [SMALL_STATE(13)] = 729,
  [SMALL_STATE(14)] = 758,
  [SMALL_STATE(15)] = 787,
  [SMALL_STATE(16)] = 816,
  [SMALL_STATE(17)] = 845,
  [SMALL_STATE(18)] = 874,
  [SMALL_STATE(19)] = 903,
  [SMALL_STATE(20)] = 932,
  [SMALL_STATE(21)] = 961,
  [SMALL_STATE(22)] = 990,
  [SMALL_STATE(23)] = 1019,
  [SMALL_STATE(24)] = 1048,
  [SMALL_STATE(25)] = 1077,
  [SMALL_STATE(26)] = 1106,
  [SMALL_STATE(27)] = 1135,
  [SMALL_STATE(28)] = 1164,
  [SMALL_STATE(29)] = 1193,
  [SMALL_STATE(30)] = 1222,
  [SMALL_STATE(31)] = 1251,
  [SMALL_STATE(32)] = 1280,
  [SMALL_STATE(33)] = 1309,
  [SMALL_STATE(34)] = 1338,
  [SMALL_STATE(35)] = 1367,
  [SMALL_STATE(36)] = 1396,
  [SMALL_STATE(37)] = 1425,
  [SMALL_STATE(38)] = 1454,
  [SMALL_STATE(39)] = 1483,
  [SMALL_STATE(40)] = 1512,
  [SMALL_STATE(41)] = 1541,
  [SMALL_STATE(42)] = 1570,
  [SMALL_STATE(43)] = 1599,
  [SMALL_STATE(44)] = 1627,
  [SMALL_STATE(45)] = 1655,
  [SMALL_STATE(46)] = 1683,
  [SMALL_STATE(47)] = 1711,
  [SMALL_STATE(48)] = 1739,
  [SMALL_STATE(49)] = 1767,
  [SMALL_STATE(50)] = 1795,
  [SMALL_STATE(51)] = 1823,
  [SMALL_STATE(52)] = 1851,
  [SMALL_STATE(53)] = 1879,
  [SMALL_STATE(54)] = 1907,
  [SMALL_STATE(55)] = 1935,
  [SMALL_STATE(56)] = 1963,
  [SMALL_STATE(57)] = 1991,
  [SMALL_STATE(58)] = 2019,
  [SMALL_STATE(59)] = 2047,
  [SMALL_STATE(60)] = 2075,
  [SMALL_STATE(61)] = 2103,
  [SMALL_STATE(62)] = 2131,
  [SMALL_STATE(63)] = 2159,
  [SMALL_STATE(64)] = 2187,
  [SMALL_STATE(65)] = 2215,
  [SMALL_STATE(66)] = 2243,
  [SMALL_STATE(67)] = 2271,
  [SMALL_STATE(68)] = 2299,
  [SMALL_STATE(69)] = 2327,
  [SMALL_STATE(70)] = 2355,
  [SMALL_STATE(71)] = 2383,
  [SMALL_STATE(72)] = 2411,
  [SMALL_STATE(73)] = 2439,
  [SMALL_STATE(74)] = 2467,
  [SMALL_STATE(75)] = 2495,
  [SMALL_STATE(76)] = 2523,
  [SMALL_STATE(77)] = 2551,
  [SMALL_STATE(78)] = 2579,
  [SMALL_STATE(79)] = 2607,
  [SMALL_STATE(80)] = 2635,
  [SMALL_STATE(81)] = 2663,
  [SMALL_STATE(82)] = 2691,
  [SMALL_STATE(83)] = 2719,
  [SMALL_STATE(84)] = 2747,
  [SMALL_STATE(85)] = 2775,
  [SMALL_STATE(86)] = 2803,
  [SMALL_STATE(87)] = 2831,
  [SMALL_STATE(88)] = 2859,
  [SMALL_STATE(89)] = 2887,
  [SMALL_STATE(90)] = 2915,
  [SMALL_STATE(91)] = 2943,
  [SMALL_STATE(92)] = 2971,
  [SMALL_STATE(93)] = 2999,
  [SMALL_STATE(94)] = 3027,
  [SMALL_STATE(95)] = 3055,
  [SMALL_STATE(96)] = 3083,
  [SMALL_STATE(97)] = 3111,
  [SMALL_STATE(98)] = 3139,
  [SMALL_STATE(99)] = 3167,
  [SMALL_STATE(100)] = 3195,
  [SMALL_STATE(101)] = 3223,
  [SMALL_STATE(102)] = 3251,
  [SMALL_STATE(103)] = 3279,
  [SMALL_STATE(104)] = 3307,
  [SMALL_STATE(105)] = 3335,
  [SMALL_STATE(106)] = 3363,
  [SMALL_STATE(107)] = 3391,
  [SMALL_STATE(108)] = 3419,
  [SMALL_STATE(109)] = 3447,
  [SMALL_STATE(110)] = 3475,
  [SMALL_STATE(111)] = 3503,
  [SMALL_STATE(112)] = 3531,
  [SMALL_STATE(113)] = 3559,
  [SMALL_STATE(114)] = 3587,
  [SMALL_STATE(115)] = 3615,
  [SMALL_STATE(116)] = 3643,
  [SMALL_STATE(117)] = 3671,
  [SMALL_STATE(118)] = 3699,
  [SMALL_STATE(119)] = 3727,
  [SMALL_STATE(120)] = 3755,
  [SMALL_STATE(121)] = 3783,
  [SMALL_STATE(122)] = 3811,
  [SMALL_STATE(123)] = 3839,
  [SMALL_STATE(124)] = 3867,
  [SMALL_STATE(125)] = 3895,
  [SMALL_STATE(126)] = 3923,
  [SMALL_STATE(127)] = 3951,
  [SMALL_STATE(128)] = 3979,
  [SMALL_STATE(129)] = 4007,
  [SMALL_STATE(130)] = 4035,
  [SMALL_STATE(131)] = 4063,
  [SMALL_STATE(132)] = 4091,
  [SMALL_STATE(133)] = 4119,
  [SMALL_STATE(134)] = 4147,
  [SMALL_STATE(135)] = 4175,
  [SMALL_STATE(136)] = 4203,
  [SMALL_STATE(137)] = 4231,
  [SMALL_STATE(138)] = 4259,
  [SMALL_STATE(139)] = 4287,
  [SMALL_STATE(140)] = 4315,
  [SMALL_STATE(141)] = 4343,
  [SMALL_STATE(142)] = 4365,
  [SMALL_STATE(143)] = 4387,
  [SMALL_STATE(144)] = 4409,
  [SMALL_STATE(145)] = 4431,
  [SMALL_STATE(146)] = 4453,
  [SMALL_STATE(147)] = 4475,
  [SMALL_STATE(148)] = 4497,
  [SMALL_STATE(149)] = 4519,
  [SMALL_STATE(150)] = 4541,
  [SMALL_STATE(151)] = 4563,
  [SMALL_STATE(152)] = 4585,
  [SMALL_STATE(153)] = 4607,
  [SMALL_STATE(154)] = 4629,
  [SMALL_STATE(155)] = 4651,
  [SMALL_STATE(156)] = 4673,
  [SMALL_STATE(157)] = 4695,
  [SMALL_STATE(158)] = 4717,
  [SMALL_STATE(159)] = 4739,
  [SMALL_STATE(160)] = 4761,
  [SMALL_STATE(161)] = 4783,
  [SMALL_STATE(162)] = 4805,
  [SMALL_STATE(163)] = 4827,
  [SMALL_STATE(164)] = 4849,
  [SMALL_STATE(165)] = 4871,
  [SMALL_STATE(166)] = 4893,
  [SMALL_STATE(167)] = 4915,
  [SMALL_STATE(168)] = 4959,
  [SMALL_STATE(169)] = 4981,
  [SMALL_STATE(170)] = 5003,
  [SMALL_STATE(171)] = 5025,
  [SMALL_STATE(172)] = 5047,
  [SMALL_STATE(173)] = 5069,
  [SMALL_STATE(174)] = 5091,
  [SMALL_STATE(175)] = 5113,
  [SMALL_STATE(176)] = 5135,
  [SMALL_STATE(177)] = 5157,
  [SMALL_STATE(178)] = 5179,
  [SMALL_STATE(179)] = 5223,
  [SMALL_STATE(180)] = 5245,
  [SMALL_STATE(181)] = 5267,
  [SMALL_STATE(182)] = 5289,
  [SMALL_STATE(183)] = 5321,
  [SMALL_STATE(184)] = 5343,
  [SMALL_STATE(185)] = 5365,
  [SMALL_STATE(186)] = 5387,
  [SMALL_STATE(187)] = 5409,
  [SMALL_STATE(188)] = 5431,
  [SMALL_STATE(189)] = 5453,
  [SMALL_STATE(190)] = 5475,
  [SMALL_STATE(191)] = 5497,
  [SMALL_STATE(192)] = 5541,
  [SMALL_STATE(193)] = 5563,
  [SMALL_STATE(194)] = 5585,
  [SMALL_STATE(195)] = 5607,
  [SMALL_STATE(196)] = 5629,
  [SMALL_STATE(197)] = 5651,
  [SMALL_STATE(198)] = 5673,
  [SMALL_STATE(199)] = 5695,
  [SMALL_STATE(200)] = 5717,
  [SMALL_STATE(201)] = 5739,
  [SMALL_STATE(202)] = 5761,
  [SMALL_STATE(203)] = 5783,
  [SMALL_STATE(204)] = 5805,
  [SMALL_STATE(205)] = 5827,
  [SMALL_STATE(206)] = 5849,
  [SMALL_STATE(207)] = 5871,
  [SMALL_STATE(208)] = 5893,
  [SMALL_STATE(209)] = 5915,
  [SMALL_STATE(210)] = 5955,
  [SMALL_STATE(211)] = 5995,
  [SMALL_STATE(212)] = 6017,
  [SMALL_STATE(213)] = 6039,
  [SMALL_STATE(214)] = 6061,
  [SMALL_STATE(215)] = 6083,
  [SMALL_STATE(216)] = 6105,
  [SMALL_STATE(217)] = 6149,
  [SMALL_STATE(218)] = 6171,
  [SMALL_STATE(219)] = 6193,
  [SMALL_STATE(220)] = 6215,
  [SMALL_STATE(221)] = 6237,
  [SMALL_STATE(222)] = 6259,
  [SMALL_STATE(223)] = 6281,
  [SMALL_STATE(224)] = 6303,
  [SMALL_STATE(225)] = 6325,
  [SMALL_STATE(226)] = 6347,
  [SMALL_STATE(227)] = 6369,
  [SMALL_STATE(228)] = 6391,
  [SMALL_STATE(229)] = 6413,
  [SMALL_STATE(230)] = 6435,
  [SMALL_STATE(231)] = 6457,
  [SMALL_STATE(232)] = 6479,
  [SMALL_STATE(233)] = 6501,
  [SMALL_STATE(234)] = 6523,
  [SMALL_STATE(235)] = 6545,
  [SMALL_STATE(236)] = 6567,
  [SMALL_STATE(237)] = 6589,
  [SMALL_STATE(238)] = 6611,
  [SMALL_STATE(239)] = 6633,
  [SMALL_STATE(240)] = 6655,
  [SMALL_STATE(241)] = 6677,
  [SMALL_STATE(242)] = 6699,
  [SMALL_STATE(243)] = 6721,
  [SMALL_STATE(244)] = 6743,
  [SMALL_STATE(245)] = 6765,
  [SMALL_STATE(246)] = 6787,
  [SMALL_STATE(247)] = 6809,
  [SMALL_STATE(248)] = 6831,
  [SMALL_STATE(249)] = 6853,
  [SMALL_STATE(250)] = 6875,
  [SMALL_STATE(251)] = 6897,
  [SMALL_STATE(252)] = 6919,
  [SMALL_STATE(253)] = 6940,
  [SMALL_STATE(254)] = 6973,
  [SMALL_STATE(255)] = 6994,
  [SMALL_STATE(256)] = 7039,
  [SMALL_STATE(257)] = 7084,
  [SMALL_STATE(258)] = 7105,
  [SMALL_STATE(259)] = 7126,
  [SMALL_STATE(260)] = 7147,
  [SMALL_STATE(261)] = 7168,
  [SMALL_STATE(262)] = 7189,
  [SMALL_STATE(263)] = 7210,
  [SMALL_STATE(264)] = 7231,
  [SMALL_STATE(265)] = 7252,
  [SMALL_STATE(266)] = 7273,
  [SMALL_STATE(267)] = 7294,
  [SMALL_STATE(268)] = 7315,
  [SMALL_STATE(269)] = 7336,
  [SMALL_STATE(270)] = 7369,
  [SMALL_STATE(271)] = 7390,
  [SMALL_STATE(272)] = 7411,
  [SMALL_STATE(273)] = 7432,
  [SMALL_STATE(274)] = 7453,
  [SMALL_STATE(275)] = 7486,
  [SMALL_STATE(276)] = 7519,
  [SMALL_STATE(277)] = 7540,
  [SMALL_STATE(278)] = 7561,
  [SMALL_STATE(279)] = 7582,
  [SMALL_STATE(280)] = 7603,
  [SMALL_STATE(281)] = 7624,
  [SMALL_STATE(282)] = 7645,
  [SMALL_STATE(283)] = 7666,
  [SMALL_STATE(284)] = 7699,
  [SMALL_STATE(285)] = 7720,
  [SMALL_STATE(286)] = 7741,
  [SMALL_STATE(287)] = 7762,
  [SMALL_STATE(288)] = 7783,
  [SMALL_STATE(289)] = 7804,
  [SMALL_STATE(290)] = 7838,
  [SMALL_STATE(291)] = 7875,
  [SMALL_STATE(292)] = 7912,
  [SMALL_STATE(293)] = 7944,
  [SMALL_STATE(294)] = 7968,
  [SMALL_STATE(295)] = 8000,
  [SMALL_STATE(296)] = 8028,
  [SMALL_STATE(297)] = 8060,
  [SMALL_STATE(298)] = 8092,
  [SMALL_STATE(299)] = 8112,
  [SMALL_STATE(300)] = 8144,
  [SMALL_STATE(301)] = 8176,
  [SMALL_STATE(302)] = 8208,
  [SMALL_STATE(303)] = 8228,
  [SMALL_STATE(304)] = 8260,
  [SMALL_STATE(305)] = 8292,
  [SMALL_STATE(306)] = 8324,
  [SMALL_STATE(307)] = 8356,
  [SMALL_STATE(308)] = 8388,
  [SMALL_STATE(309)] = 8420,
  [SMALL_STATE(310)] = 8452,
  [SMALL_STATE(311)] = 8484,
  [SMALL_STATE(312)] = 8516,
  [SMALL_STATE(313)] = 8536,
  [SMALL_STATE(314)] = 8560,
  [SMALL_STATE(315)] = 8580,
  [SMALL_STATE(316)] = 8597,
  [SMALL_STATE(317)] = 8614,
  [SMALL_STATE(318)] = 8641,
  [SMALL_STATE(319)] = 8661,
  [SMALL_STATE(320)] = 8687,
  [SMALL_STATE(321)] = 8707,
  [SMALL_STATE(322)] = 8727,
  [SMALL_STATE(323)] = 8741,
  [SMALL_STATE(324)] = 8761,
  [SMALL_STATE(325)] = 8781,
  [SMALL_STATE(326)] = 8801,
  [SMALL_STATE(327)] = 8827,
  [SMALL_STATE(328)] = 8841,
  [SMALL_STATE(329)] = 8866,
  [SMALL_STATE(330)] = 8883,
  [SMALL_STATE(331)] = 8900,
  [SMALL_STATE(332)] = 8917,
  [SMALL_STATE(333)] = 8934,
  [SMALL_STATE(334)] = 8959,
  [SMALL_STATE(335)] = 8976,
  [SMALL_STATE(336)] = 8993,
  [SMALL_STATE(337)] = 9018,
  [SMALL_STATE(338)] = 9035,
  [SMALL_STATE(339)] = 9052,
  [SMALL_STATE(340)] = 9077,
  [SMALL_STATE(341)] = 9094,
  [SMALL_STATE(342)] = 9114,
  [SMALL_STATE(343)] = 9136,
  [SMALL_STATE(344)] = 9156,
  [SMALL_STATE(345)] = 9176,
  [SMALL_STATE(346)] = 9198,
  [SMALL_STATE(347)] = 9220,
  [SMALL_STATE(348)] = 9242,
  [SMALL_STATE(349)] = 9262,
  [SMALL_STATE(350)] = 9275,
  [SMALL_STATE(351)] = 9294,
  [SMALL_STATE(352)] = 9311,
  [SMALL_STATE(353)] = 9328,
  [SMALL_STATE(354)] = 9345,
  [SMALL_STATE(355)] = 9362,
  [SMALL_STATE(356)] = 9379,
  [SMALL_STATE(357)] = 9398,
  [SMALL_STATE(358)] = 9415,
  [SMALL_STATE(359)] = 9428,
  [SMALL_STATE(360)] = 9445,
  [SMALL_STATE(361)] = 9456,
  [SMALL_STATE(362)] = 9475,
  [SMALL_STATE(363)] = 9488,
  [SMALL_STATE(364)] = 9505,
  [SMALL_STATE(365)] = 9524,
  [SMALL_STATE(366)] = 9543,
  [SMALL_STATE(367)] = 9551,
  [SMALL_STATE(368)] = 9565,
  [SMALL_STATE(369)] = 9575,
  [SMALL_STATE(370)] = 9591,
  [SMALL_STATE(371)] = 9607,
  [SMALL_STATE(372)] = 9615,
  [SMALL_STATE(373)] = 9631,
  [SMALL_STATE(374)] = 9647,
  [SMALL_STATE(375)] = 9663,
  [SMALL_STATE(376)] = 9677,
  [SMALL_STATE(377)] = 9689,
  [SMALL_STATE(378)] = 9705,
  [SMALL_STATE(379)] = 9717,
  [SMALL_STATE(380)] = 9729,
  [SMALL_STATE(381)] = 9745,
  [SMALL_STATE(382)] = 9761,
  [SMALL_STATE(383)] = 9774,
  [SMALL_STATE(384)] = 9783,
  [SMALL_STATE(385)] = 9792,
  [SMALL_STATE(386)] = 9799,
  [SMALL_STATE(387)] = 9806,
  [SMALL_STATE(388)] = 9819,
  [SMALL_STATE(389)] = 9832,
  [SMALL_STATE(390)] = 9840,
  [SMALL_STATE(391)] = 9850,
  [SMALL_STATE(392)] = 9860,
  [SMALL_STATE(393)] = 9870,
  [SMALL_STATE(394)] = 9880,
  [SMALL_STATE(395)] = 9890,
  [SMALL_STATE(396)] = 9898,
  [SMALL_STATE(397)] = 9908,
  [SMALL_STATE(398)] = 9918,
  [SMALL_STATE(399)] = 9928,
  [SMALL_STATE(400)] = 9938,
  [SMALL_STATE(401)] = 9948,
  [SMALL_STATE(402)] = 9958,
  [SMALL_STATE(403)] = 9968,
  [SMALL_STATE(404)] = 9974,
  [SMALL_STATE(405)] = 9984,
  [SMALL_STATE(406)] = 9994,
  [SMALL_STATE(407)] = 10002,
  [SMALL_STATE(408)] = 10010,
  [SMALL_STATE(409)] = 10020,
  [SMALL_STATE(410)] = 10030,
  [SMALL_STATE(411)] = 10038,
  [SMALL_STATE(412)] = 10048,
  [SMALL_STATE(413)] = 10058,
  [SMALL_STATE(414)] = 10068,
  [SMALL_STATE(415)] = 10078,
  [SMALL_STATE(416)] = 10088,
  [SMALL_STATE(417)] = 10098,
  [SMALL_STATE(418)] = 10108,
  [SMALL_STATE(419)] = 10118,
  [SMALL_STATE(420)] = 10128,
  [SMALL_STATE(421)] = 10138,
  [SMALL_STATE(422)] = 10148,
  [SMALL_STATE(423)] = 10158,
  [SMALL_STATE(424)] = 10168,
  [SMALL_STATE(425)] = 10178,
  [SMALL_STATE(426)] = 10188,
  [SMALL_STATE(427)] = 10198,
  [SMALL_STATE(428)] = 10208,
  [SMALL_STATE(429)] = 10218,
  [SMALL_STATE(430)] = 10228,
  [SMALL_STATE(431)] = 10236,
  [SMALL_STATE(432)] = 10244,
  [SMALL_STATE(433)] = 10252,
  [SMALL_STATE(434)] = 10259,
  [SMALL_STATE(435)] = 10266,
  [SMALL_STATE(436)] = 10273,
  [SMALL_STATE(437)] = 10278,
  [SMALL_STATE(438)] = 10283,
  [SMALL_STATE(439)] = 10288,
  [SMALL_STATE(440)] = 10293,
  [SMALL_STATE(441)] = 10300,
  [SMALL_STATE(442)] = 10305,
  [SMALL_STATE(443)] = 10312,
  [SMALL_STATE(444)] = 10319,
  [SMALL_STATE(445)] = 10324,
  [SMALL_STATE(446)] = 10329,
  [SMALL_STATE(447)] = 10336,
  [SMALL_STATE(448)] = 10341,
  [SMALL_STATE(449)] = 10346,
  [SMALL_STATE(450)] = 10350,
  [SMALL_STATE(451)] = 10354,
  [SMALL_STATE(452)] = 10358,
  [SMALL_STATE(453)] = 10362,
  [SMALL_STATE(454)] = 10366,
  [SMALL_STATE(455)] = 10370,
  [SMALL_STATE(456)] = 10374,
  [SMALL_STATE(457)] = 10378,
  [SMALL_STATE(458)] = 10382,
  [SMALL_STATE(459)] = 10386,
  [SMALL_STATE(460)] = 10390,
  [SMALL_STATE(461)] = 10394,
  [SMALL_STATE(462)] = 10398,
  [SMALL_STATE(463)] = 10402,
  [SMALL_STATE(464)] = 10406,
  [SMALL_STATE(465)] = 10410,
  [SMALL_STATE(466)] = 10414,
  [SMALL_STATE(467)] = 10418,
  [SMALL_STATE(468)] = 10422,
  [SMALL_STATE(469)] = 10426,
  [SMALL_STATE(470)] = 10430,
  [SMALL_STATE(471)] = 10434,
  [SMALL_STATE(472)] = 10438,
  [SMALL_STATE(473)] = 10442,
  [SMALL_STATE(474)] = 10446,
  [SMALL_STATE(475)] = 10450,
  [SMALL_STATE(476)] = 10454,
  [SMALL_STATE(477)] = 10458,
  [SMALL_STATE(478)] = 10462,
  [SMALL_STATE(479)] = 10466,
  [SMALL_STATE(480)] = 10470,
  [SMALL_STATE(481)] = 10474,
  [SMALL_STATE(482)] = 10478,
  [SMALL_STATE(483)] = 10482,
  [SMALL_STATE(484)] = 10486,
  [SMALL_STATE(485)] = 10490,
  [SMALL_STATE(486)] = 10494,
  [SMALL_STATE(487)] = 10498,
  [SMALL_STATE(488)] = 10502,
  [SMALL_STATE(489)] = 10506,
  [SMALL_STATE(490)] = 10510,
  [SMALL_STATE(491)] = 10514,
  [SMALL_STATE(492)] = 10518,
  [SMALL_STATE(493)] = 10522,
  [SMALL_STATE(494)] = 10526,
  [SMALL_STATE(495)] = 10530,
  [SMALL_STATE(496)] = 10534,
  [SMALL_STATE(497)] = 10538,
  [SMALL_STATE(498)] = 10542,
  [SMALL_STATE(499)] = 10546,
  [SMALL_STATE(500)] = 10550,
  [SMALL_STATE(501)] = 10554,
  [SMALL_STATE(502)] = 10558,
  [SMALL_STATE(503)] = 10562,
  [SMALL_STATE(504)] = 10566,
  [SMALL_STATE(505)] = 10570,
  [SMALL_STATE(506)] = 10574,
  [SMALL_STATE(507)] = 10578,
  [SMALL_STATE(508)] = 10582,
  [SMALL_STATE(509)] = 10586,
  [SMALL_STATE(510)] = 10590,
  [SMALL_STATE(511)] = 10594,
  [SMALL_STATE(512)] = 10598,
  [SMALL_STATE(513)] = 10602,
  [SMALL_STATE(514)] = 10606,
  [SMALL_STATE(515)] = 10610,
  [SMALL_STATE(516)] = 10614,
  [SMALL_STATE(517)] = 10618,
  [SMALL_STATE(518)] = 10622,
  [SMALL_STATE(519)] = 10626,
  [SMALL_STATE(520)] = 10630,
  [SMALL_STATE(521)] = 10634,
  [SMALL_STATE(522)] = 10638,
  [SMALL_STATE(523)] = 10642,
  [SMALL_STATE(524)] = 10646,
  [SMALL_STATE(525)] = 10650,
  [SMALL_STATE(526)] = 10654,
  [SMALL_STATE(527)] = 10658,
  [SMALL_STATE(528)] = 10662,
  [SMALL_STATE(529)] = 10666,
  [SMALL_STATE(530)] = 10670,
  [SMALL_STATE(531)] = 10674,
  [SMALL_STATE(532)] = 10678,
  [SMALL_STATE(533)] = 10682,
  [SMALL_STATE(534)] = 10686,
  [SMALL_STATE(535)] = 10690,
  [SMALL_STATE(536)] = 10694,
  [SMALL_STATE(537)] = 10698,
  [SMALL_STATE(538)] = 10702,
  [SMALL_STATE(539)] = 10706,
  [SMALL_STATE(540)] = 10710,
  [SMALL_STATE(541)] = 10714,
  [SMALL_STATE(542)] = 10718,
  [SMALL_STATE(543)] = 10722,
  [SMALL_STATE(544)] = 10726,
  [SMALL_STATE(545)] = 10730,
  [SMALL_STATE(546)] = 10734,
  [SMALL_STATE(547)] = 10738,
  [SMALL_STATE(548)] = 10742,
  [SMALL_STATE(549)] = 10746,
  [SMALL_STATE(550)] = 10750,
  [SMALL_STATE(551)] = 10754,
  [SMALL_STATE(552)] = 10758,
  [SMALL_STATE(553)] = 10762,
  [SMALL_STATE(554)] = 10766,
  [SMALL_STATE(555)] = 10770,
  [SMALL_STATE(556)] = 10774,
  [SMALL_STATE(557)] = 10778,
  [SMALL_STATE(558)] = 10782,
  [SMALL_STATE(559)] = 10786,
  [SMALL_STATE(560)] = 10790,
  [SMALL_STATE(561)] = 10794,
  [SMALL_STATE(562)] = 10798,
  [SMALL_STATE(563)] = 10802,
  [SMALL_STATE(564)] = 10806,
  [SMALL_STATE(565)] = 10810,
  [SMALL_STATE(566)] = 10814,
  [SMALL_STATE(567)] = 10818,
  [SMALL_STATE(568)] = 10822,
  [SMALL_STATE(569)] = 10826,
  [SMALL_STATE(570)] = 10830,
  [SMALL_STATE(571)] = 10834,
  [SMALL_STATE(572)] = 10838,
  [SMALL_STATE(573)] = 10842,
  [SMALL_STATE(574)] = 10846,
  [SMALL_STATE(575)] = 10850,
  [SMALL_STATE(576)] = 10854,
  [SMALL_STATE(577)] = 10858,
  [SMALL_STATE(578)] = 10862,
  [SMALL_STATE(579)] = 10866,
  [SMALL_STATE(580)] = 10870,
  [SMALL_STATE(581)] = 10874,
  [SMALL_STATE(582)] = 10878,
  [SMALL_STATE(583)] = 10882,
  [SMALL_STATE(584)] = 10886,
  [SMALL_STATE(585)] = 10890,
  [SMALL_STATE(586)] = 10894,
  [SMALL_STATE(587)] = 10898,
  [SMALL_STATE(588)] = 10902,
  [SMALL_STATE(589)] = 10906,
  [SMALL_STATE(590)] = 10910,
  [SMALL_STATE(591)] = 10914,
  [SMALL_STATE(592)] = 10918,
  [SMALL_STATE(593)] = 10922,
  [SMALL_STATE(594)] = 10926,
  [SMALL_STATE(595)] = 10930,
  [SMALL_STATE(596)] = 10934,
  [SMALL_STATE(597)] = 10938,
  [SMALL_STATE(598)] = 10942,
  [SMALL_STATE(599)] = 10946,
  [SMALL_STATE(600)] = 10950,
  [SMALL_STATE(601)] = 10954,
  [SMALL_STATE(602)] = 10958,
  [SMALL_STATE(603)] = 10962,
  [SMALL_STATE(604)] = 10966,
  [SMALL_STATE(605)] = 10970,
  [SMALL_STATE(606)] = 10974,
  [SMALL_STATE(607)] = 10978,
  [SMALL_STATE(608)] = 10982,
  [SMALL_STATE(609)] = 10986,
  [SMALL_STATE(610)] = 10990,
  [SMALL_STATE(611)] = 10994,
  [SMALL_STATE(612)] = 10998,
  [SMALL_STATE(613)] = 11002,
  [SMALL_STATE(614)] = 11006,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(497),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(475),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(465),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(440),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(460),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(458),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(457),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(456),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(558),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(584),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(255),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(586),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(587),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(443),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(607),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(589),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(590),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(6),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(497),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(256),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(475),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(465),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(440),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(460),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(459),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(458),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(457),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(456),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_repeat1, 2), SHIFT_REPEAT(558),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(8),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(8),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(584),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(255),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(586),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(587),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(443),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(606),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(607),
  [143] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(589),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(590),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(456),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 12),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 12),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 30),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 30),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 29),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 29),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 12),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 12),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 11),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 11),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 11),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 11),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 30),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 30),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 29),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 29),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 38),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 38),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 6, .production_id = 28),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 6, .production_id = 28),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4, .production_id = 3),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 4, .production_id = 3),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 28),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 28),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(291),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 7, .production_id = 38),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 7, .production_id = 38),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 3, .production_id = 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3, .production_id = 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction, 5, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 5, .production_id = 3),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(290),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 18),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 18),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 4, .production_id = 7),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 4, .production_id = 7),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 5, .production_id = 23),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 5, .production_id = 23),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 17),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 17),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 31),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 31),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 16),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 16),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2),
  [258] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2), SHIFT_REPEAT(411),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__key_value_list, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 27),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 27),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 5, .production_id = 9),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 5, .production_id = 9),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 5, .production_id = 26),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, .production_id = 26),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 5, .production_id = 25),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 5, .production_id = 25),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 5, .production_id = 24),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 5, .production_id = 24),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 5, .production_id = 22),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 5, .production_id = 22),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 5, .production_id = 21),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 5, .production_id = 21),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 5, .production_id = 20),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 5, .production_id = 20),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 19),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 19),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 5, .production_id = 8),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 5, .production_id = 8),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 17),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 17),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 5, .production_id = 7),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 5, .production_id = 7),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 18),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 18),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 17),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 17),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 16),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 16),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 5, .production_id = 7),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 5, .production_id = 7),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 8, .production_id = 39),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 8, .production_id = 39),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 33),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 33),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close, 6, .production_id = 17),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close, 6, .production_id = 17),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 6, .production_id = 19),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 6, .production_id = 19),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 4, .production_id = 9),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 4, .production_id = 9),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity, 4, .production_id = 8),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity, 4, .production_id = 8),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 4, .production_id = 7),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 4, .production_id = 7),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 20),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 20),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 6, .production_id = 34),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 6, .production_id = 34),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, .production_id = 36),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 7, .production_id = 36),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 7, .production_id = 35),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 7, .production_id = 35),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad, 7, .production_id = 34),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad, 7, .production_id = 34),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 33),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 33),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 21),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 21),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 39),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 39),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 32),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 32),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 7, .production_id = 31),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 7, .production_id = 31),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance, 6, .production_id = 35),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance, 6, .production_id = 35),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 6, .production_id = 22),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 6, .production_id = 22),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event, 6, .production_id = 23),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event, 6, .production_id = 23),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query, 6, .production_id = 24),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query, 6, .production_id = 24),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom, 6, .production_id = 27),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom, 6, .production_id = 27),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open, 6, .production_id = 32),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open, 6, .production_id = 32),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 36),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 36),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6, .production_id = 26),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document, 6, .production_id = 26),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 6, .production_id = 25),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 6, .production_id = 25),
  [431] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__key_value_list, 2), SHIFT_REPEAT(394),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 64),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 64),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 43),
  [440] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 43),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 71),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 71),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_value_line, 3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value_line, 3),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 3),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 42),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 42),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 3, .production_id = 37),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3, .production_id = 37),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 69),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 69),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 51),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 51),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 52),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 52),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 55),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 55),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 68),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 68),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 67),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 67),
  [486] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 53),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 53),
  [490] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 45),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 45),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 54),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 54),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 66),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 66),
  [502] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 54),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 54),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 65),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 65),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 55),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 55),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 63),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 63),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 62),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 62),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 56),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 56),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 57),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 57),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 51),
  [550] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 51),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 61),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 61),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 6, .production_id = 60),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 6, .production_id = 60),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [564] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(549),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(549),
  [570] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(296),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 72),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 72),
  [582] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 47),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 47),
  [586] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 37),
  [588] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 37),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 73),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 73),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 9, .production_id = 86),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 9, .production_id = 86),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 85),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 85),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 84),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 84),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 42),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 42),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 83),
  [622] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 83),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [628] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 82),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 82),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 74),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 74),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 8, .production_id = 81),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 8, .production_id = 81),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 80),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 80),
  [646] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 43),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 43),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 79),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 79),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 5, .production_id = 46),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 5, .production_id = 46),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 78),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 78),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 75),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 75),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 44),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 44),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 76),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 76),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 4, .production_id = 45),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 4, .production_id = 45),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 67),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 67),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_posting, 7, .production_id = 77),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 7, .production_id = 77),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 4),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [696] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__directive, 1),
  [702] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__directive, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(592),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(593),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(608),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(609),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(610),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(612),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(613),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(594),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(541),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(554),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 1),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3, .production_id = 5),
  [758] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 3, .production_id = 5),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, .production_id = 1),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, .production_id = 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 2),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 2),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry, 1),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 3),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__skipped_lines, 3),
  [778] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__skipped_lines, 3),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 3),
  [782] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_plugin, 3),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushtag, 3),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [790] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_poptag, 3),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4, .production_id = 15),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 4, .production_id = 15),
  [798] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_headline, 4, .production_id = 14),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_headline, 4, .production_id = 14),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushmeta, 3),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pushmeta, 3),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2),
  [808] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(338),
  [811] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(322),
  [814] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(295),
  [817] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_custom_repeat1, 2), SHIFT_REPEAT(332),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option, 4, .production_id = 13),
  [824] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option, 4, .production_id = 13),
  [826] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 3),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_popmeta, 4),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_popmeta, 4),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(562),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(568),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [854] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_number_expr, 3),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_number_expr, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_value, 1),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [870] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_value, 1),
  [872] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_number_expr, 2),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_number_expr, 2),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [906] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__paren__number_expr, 3),
  [908] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__paren__number_expr, 3),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [916] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [918] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 41),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount, 2),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_amount, 2),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [946] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [970] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [980] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [996] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key_value_value, 1),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1008] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 1),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1012] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2, .production_id = 6), SHIFT_REPEAT(558),
  [1015] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 2, .production_id = 6),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1029] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2),
  [1031] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat1, 2), SHIFT_REPEAT(482),
  [1034] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1036] = {.entry = {.count = 1, .reusable = false}}, SHIFT(435),
  [1038] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_amount, 2),
  [1040] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_amount, 2),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1054] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 1, .production_id = 4),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1062] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [1070] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1076] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1082] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1088] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1092] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2),
  [1094] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_links_repeat1, 2), SHIFT_REPEAT(376),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [1099] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [1103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags_links, 1),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_repeat2, 2), SHIFT_REPEAT(349),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 1),
  [1126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 1),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 3, .production_id = 50),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 3, .production_id = 50),
  [1132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_spec, 2),
  [1134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_spec, 2),
  [1136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asterisk, 1),
  [1138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__txn_strings, 2, .production_id = 10),
  [1140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__cost_comp_list, 2),
  [1142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cost_comp_list, 2),
  [1144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2), SHIFT_REPEAT(289),
  [1147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cost_comp_list_repeat1, 2),
  [1151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 48),
  [1153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 48),
  [1155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [1157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [1167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 2, .production_id = 49),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [1183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 4, .production_id = 70),
  [1191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 4, .production_id = 70),
  [1193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost_comp, 1),
  [1195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost_comp, 1),
  [1197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 1, .production_id = 40),
  [1203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 1, .production_id = 40),
  [1205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [1213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [1219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [1223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [1227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [1231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [1239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [1247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 59),
  [1249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_amount, 3, .production_id = 58),
  [1251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_amount, 3, .production_id = 58),
  [1253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_item, 1),
  [1261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_item, 1),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 4),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opt_booking, 1),
  [1271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_amount_tolerance, 2),
  [1273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat2, 1, .production_id = 2),
  [1275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_annotation, 1),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__org_stars, 2),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [1285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(588),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [1299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [1301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [1317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(560),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [1341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [1351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [1389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [1397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(526),
  [1415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [1423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [1437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1439] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [1471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [1475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_value, 3),
  [1477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [1479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [1489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [1491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [1493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1501] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optflag, 1),
  [1503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [1507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [1517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [1527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(603),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(596),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(600),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(601),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_beancount_external_scanner_create(void);
void tree_sitter_beancount_external_scanner_destroy(void *);
bool tree_sitter_beancount_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_beancount_external_scanner_serialize(void *, char *);
void tree_sitter_beancount_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_beancount_external_scanner_create,
      tree_sitter_beancount_external_scanner_destroy,
      tree_sitter_beancount_external_scanner_scan,
      tree_sitter_beancount_external_scanner_serialize,
      tree_sitter_beancount_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
