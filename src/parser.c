#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  sym_date = 1,
  anon_sym_txn = 2,
  anon_sym_BANG = 3,
  anon_sym_STAR = 4,
  anon_sym_COLON = 5,
  sym_amount = 6,
  sym_currency = 7,
  anon_sym_DQUOTE = 8,
  aux_sym__string_token1 = 9,
  aux_sym__string_token2 = 10,
  sym__UTF_8_1 = 11,
  aux_sym__UTF_8_2_token1 = 12,
  aux_sym__UTF_8_3_token1 = 13,
  aux_sym__UTF_8_3_token2 = 14,
  aux_sym__UTF_8_3_token3 = 15,
  aux_sym__UTF_8_3_token4 = 16,
  aux_sym__UTF_8_4_token1 = 17,
  aux_sym__UTF_8_4_token2 = 18,
  aux_sym__UTF_8_4_token3 = 19,
  aux_sym__account_name_token1 = 20,
  aux_sym__account_name_token2 = 21,
  anon_sym_Assets = 22,
  anon_sym_Liabilities = 23,
  anon_sym_Equity = 24,
  anon_sym_Income = 25,
  anon_sym_Expenses = 26,
  sym__tag = 27,
  sym__link = 28,
  sym_source_file = 29,
  sym__statement = 30,
  sym_transaction = 31,
  sym_txn = 32,
  sym_txn_strings = 33,
  sym_posting = 34,
  sym_account = 35,
  sym__string = 36,
  sym__UTF_8_2 = 37,
  sym__UTF_8_3 = 38,
  sym__UTF_8_4 = 39,
  sym__UTF_8_ONLY = 40,
  sym__account_name = 41,
  sym__account_type = 42,
  aux_sym_transaction_repeat1 = 43,
  aux_sym_account_repeat1 = 44,
  aux_sym__string_repeat1 = 45,
  aux_sym__account_name_repeat1 = 46,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_date] = "date",
  [anon_sym_txn] = "txn",
  [anon_sym_BANG] = "!",
  [anon_sym_STAR] = "*",
  [anon_sym_COLON] = ":",
  [sym_amount] = "amount",
  [sym_currency] = "currency",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_token1] = "_string_token1",
  [aux_sym__string_token2] = "_string_token2",
  [sym__UTF_8_1] = "_UTF_8_1",
  [aux_sym__UTF_8_2_token1] = "_UTF_8_2_token1",
  [aux_sym__UTF_8_3_token1] = "_UTF_8_3_token1",
  [aux_sym__UTF_8_3_token2] = "_UTF_8_3_token2",
  [aux_sym__UTF_8_3_token3] = "_UTF_8_3_token3",
  [aux_sym__UTF_8_3_token4] = "_UTF_8_3_token4",
  [aux_sym__UTF_8_4_token1] = "_UTF_8_4_token1",
  [aux_sym__UTF_8_4_token2] = "_UTF_8_4_token2",
  [aux_sym__UTF_8_4_token3] = "_UTF_8_4_token3",
  [aux_sym__account_name_token1] = "_account_name_token1",
  [aux_sym__account_name_token2] = "_account_name_token2",
  [anon_sym_Assets] = "Assets",
  [anon_sym_Liabilities] = "Liabilities",
  [anon_sym_Equity] = "Equity",
  [anon_sym_Income] = "Income",
  [anon_sym_Expenses] = "Expenses",
  [sym__tag] = "_tag",
  [sym__link] = "_link",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_transaction] = "transaction",
  [sym_txn] = "txn",
  [sym_txn_strings] = "txn_strings",
  [sym_posting] = "posting",
  [sym_account] = "account",
  [sym__string] = "_string",
  [sym__UTF_8_2] = "_UTF_8_2",
  [sym__UTF_8_3] = "_UTF_8_3",
  [sym__UTF_8_4] = "_UTF_8_4",
  [sym__UTF_8_ONLY] = "_UTF_8_ONLY",
  [sym__account_name] = "_account_name",
  [sym__account_type] = "_account_type",
  [aux_sym_transaction_repeat1] = "transaction_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym__string_repeat1] = "_string_repeat1",
  [aux_sym__account_name_repeat1] = "_account_name_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_date] = sym_date,
  [anon_sym_txn] = anon_sym_txn,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_amount] = sym_amount,
  [sym_currency] = sym_currency,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_token1] = aux_sym__string_token1,
  [aux_sym__string_token2] = aux_sym__string_token2,
  [sym__UTF_8_1] = sym__UTF_8_1,
  [aux_sym__UTF_8_2_token1] = aux_sym__UTF_8_2_token1,
  [aux_sym__UTF_8_3_token1] = aux_sym__UTF_8_3_token1,
  [aux_sym__UTF_8_3_token2] = aux_sym__UTF_8_3_token2,
  [aux_sym__UTF_8_3_token3] = aux_sym__UTF_8_3_token3,
  [aux_sym__UTF_8_3_token4] = aux_sym__UTF_8_3_token4,
  [aux_sym__UTF_8_4_token1] = aux_sym__UTF_8_4_token1,
  [aux_sym__UTF_8_4_token2] = aux_sym__UTF_8_4_token2,
  [aux_sym__UTF_8_4_token3] = aux_sym__UTF_8_4_token3,
  [aux_sym__account_name_token1] = aux_sym__account_name_token1,
  [aux_sym__account_name_token2] = aux_sym__account_name_token2,
  [anon_sym_Assets] = anon_sym_Assets,
  [anon_sym_Liabilities] = anon_sym_Liabilities,
  [anon_sym_Equity] = anon_sym_Equity,
  [anon_sym_Income] = anon_sym_Income,
  [anon_sym_Expenses] = anon_sym_Expenses,
  [sym__tag] = sym__tag,
  [sym__link] = sym__link,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_transaction] = sym_transaction,
  [sym_txn] = sym_txn,
  [sym_txn_strings] = sym_txn_strings,
  [sym_posting] = sym_posting,
  [sym_account] = sym_account,
  [sym__string] = sym__string,
  [sym__UTF_8_2] = sym__UTF_8_2,
  [sym__UTF_8_3] = sym__UTF_8_3,
  [sym__UTF_8_4] = sym__UTF_8_4,
  [sym__UTF_8_ONLY] = sym__UTF_8_ONLY,
  [sym__account_name] = sym__account_name,
  [sym__account_type] = sym__account_type,
  [aux_sym_transaction_repeat1] = aux_sym_transaction_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym__string_repeat1] = aux_sym__string_repeat1,
  [aux_sym__account_name_repeat1] = aux_sym__account_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_txn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
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
  [aux_sym__account_name_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__account_name_token2] = {
    .visible = false,
    .named = false,
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
  [sym__tag] = {
    .visible = false,
    .named = true,
  },
  [sym__link] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_transaction] = {
    .visible = true,
    .named = true,
  },
  [sym_txn] = {
    .visible = true,
    .named = true,
  },
  [sym_txn_strings] = {
    .visible = true,
    .named = true,
  },
  [sym_posting] = {
    .visible = true,
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
  [sym__account_name] = {
    .visible = false,
    .named = true,
  },
  [sym__account_type] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_transaction_repeat1] = {
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
  [aux_sym__account_name_repeat1] = {
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
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '#') ADVANCE(80);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '^') ADVANCE(81);
      if (lookahead == 224) ADVANCE(77);
      if (lookahead == 237) ADVANCE(76);
      if (lookahead == 240) ADVANCE(79);
      if (lookahead == 244) ADVANCE(75);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(130);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(126);
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(69);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(8);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'q') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(28);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 28:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(145);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(142);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'x') ADVANCE(22);
      END_STATE();
    case 38:
      if (lookahead == 'y') ADVANCE(143);
      END_STATE();
    case 39:
      if (lookahead == 224) ADVANCE(77);
      if (lookahead == 237) ADVANCE(76);
      if (lookahead == 240) ADVANCE(79);
      if (lookahead == 244) ADVANCE(75);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(130);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(128);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      END_STATE();
    case 40:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(3);
      END_STATE();
    case 42:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 43:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      END_STATE();
    case 44:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 45:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(100);
      END_STATE();
    case 46:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 47:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(101);
      END_STATE();
    case 48:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 49:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 50:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      END_STATE();
    case 51:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(105);
      END_STATE();
    case 52:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      END_STATE();
    case 53:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(107);
      END_STATE();
    case 54:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 56:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 57:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      END_STATE();
    case 58:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      END_STATE();
    case 59:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      END_STATE();
    case 60:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 61:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 62:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(119);
      END_STATE();
    case 63:
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(117);
      END_STATE();
    case 64:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 65:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(2);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      END_STATE();
    case 75:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(133);
      END_STATE();
    case 76:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(129);
      END_STATE();
    case 77:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(127);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 79:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(131);
      END_STATE();
    case 80:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 81:
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 82:
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 83:
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(88);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == 'A') ADVANCE(27);
      if (lookahead == 'E') ADVANCE(26);
      if (lookahead == 'I') ADVANCE(21);
      if (lookahead == 'L') ADVANCE(14);
      if (lookahead == 't') ADVANCE(37);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(83)
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(62);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '-') ADVANCE(136);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'E') ADVANCE(139);
      if (lookahead == 'I') ADVANCE(138);
      if (lookahead == 'L') ADVANCE(137);
      if (lookahead == 224) ADVANCE(77);
      if (lookahead == 237) ADVANCE(76);
      if (lookahead == 240) ADVANCE(79);
      if (lookahead == 244) ADVANCE(75);
      if (lookahead == 238 ||
          lookahead == 239) ADVANCE(130);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if ((225 <= lookahead && lookahead <= 236)) ADVANCE(128);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(126);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_txn);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_amount);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(70);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_currency);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(120);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(101);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(103);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(105);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(107);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(113);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(115);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_currency);
      if (lookahead == '\'' ||
          lookahead == '-' ||
          lookahead == '.' ||
          lookahead == '_') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_currency);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(98);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__string_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__string_token2);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__UTF_8_1);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__UTF_8_2_token1);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token1);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token2);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token3);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__UTF_8_3_token4);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token2);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__UTF_8_4_token3);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__account_name_token1);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__account_name_token2);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__account_name_token2);
      if (lookahead == '0') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__account_name_token2);
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__account_name_token2);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__account_name_token2);
      if (lookahead == 'q') ADVANCE(36);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__account_name_token2);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__tag);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__link);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 83},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 84},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 84},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 83},
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 84},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 83},
  [19] = {.lex_state = 83},
  [20] = {.lex_state = 83},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 83},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 83},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 83},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym__string_token2] = ACTIONS(1),
    [sym__UTF_8_1] = ACTIONS(1),
    [aux_sym__UTF_8_2_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token1] = ACTIONS(1),
    [aux_sym__UTF_8_3_token2] = ACTIONS(1),
    [aux_sym__UTF_8_3_token3] = ACTIONS(1),
    [aux_sym__UTF_8_3_token4] = ACTIONS(1),
    [aux_sym__UTF_8_4_token1] = ACTIONS(1),
    [aux_sym__UTF_8_4_token2] = ACTIONS(1),
    [aux_sym__UTF_8_4_token3] = ACTIONS(1),
    [aux_sym__account_name_token1] = ACTIONS(1),
    [aux_sym__account_name_token2] = ACTIONS(1),
    [sym__tag] = ACTIONS(1),
    [sym__link] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym__statement] = STATE(40),
    [sym_transaction] = STATE(40),
    [sym_date] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(19), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(22), 1,
      aux_sym__account_name_token2,
    ACTIONS(10), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(13), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(16), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(2), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
    ACTIONS(5), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [39] = 8,
    ACTIONS(27), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(35), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(37), 1,
      aux_sym__account_name_token2,
    ACTIONS(29), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(31), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(33), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(2), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
    ACTIONS(25), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [78] = 8,
    ACTIONS(27), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(35), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(41), 1,
      aux_sym__account_name_token2,
    ACTIONS(29), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(31), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(33), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(3), 5,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
      aux_sym__account_name_repeat1,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [117] = 2,
    ACTIONS(45), 1,
      aux_sym__account_name_token2,
    ACTIONS(43), 16,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [139] = 2,
    ACTIONS(49), 1,
      aux_sym__account_name_token2,
    ACTIONS(47), 16,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [161] = 2,
    ACTIONS(53), 1,
      aux_sym__account_name_token2,
    ACTIONS(51), 16,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [183] = 2,
    ACTIONS(57), 1,
      aux_sym__account_name_token2,
    ACTIONS(55), 16,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [205] = 2,
    ACTIONS(61), 1,
      aux_sym__account_name_token2,
    ACTIONS(59), 16,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      aux_sym__UTF_8_2_token1,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token3,
      aux_sym__UTF_8_3_token4,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token2,
      aux_sym__UTF_8_4_token3,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [227] = 8,
    ACTIONS(27), 1,
      aux_sym__UTF_8_2_token1,
    ACTIONS(35), 1,
      aux_sym__UTF_8_4_token2,
    ACTIONS(63), 1,
      aux_sym__account_name_token1,
    STATE(17), 1,
      sym__account_name,
    ACTIONS(29), 2,
      aux_sym__UTF_8_3_token1,
      aux_sym__UTF_8_3_token3,
    ACTIONS(31), 2,
      aux_sym__UTF_8_3_token2,
      aux_sym__UTF_8_3_token4,
    ACTIONS(33), 2,
      aux_sym__UTF_8_4_token1,
      aux_sym__UTF_8_4_token3,
    STATE(4), 4,
      sym__UTF_8_2,
      sym__UTF_8_3,
      sym__UTF_8_4,
      sym__UTF_8_ONLY,
  [258] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__account_type,
    STATE(21), 1,
      sym_account,
    STATE(13), 2,
      sym_posting,
      aux_sym_transaction_repeat1,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [279] = 5,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__account_type,
    STATE(21), 1,
      sym_account,
    STATE(11), 2,
      sym_posting,
      aux_sym_transaction_repeat1,
    ACTIONS(67), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [300] = 5,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym__account_type,
    STATE(21), 1,
      sym_account,
    STATE(13), 2,
      sym_posting,
      aux_sym_transaction_repeat1,
    ACTIONS(73), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [321] = 3,
    ACTIONS(78), 1,
      anon_sym_COLON,
    STATE(14), 1,
      aux_sym_account_repeat1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      sym_amount,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [337] = 3,
    ACTIONS(83), 1,
      anon_sym_COLON,
    STATE(16), 1,
      aux_sym_account_repeat1,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      sym_amount,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [353] = 3,
    ACTIONS(83), 1,
      anon_sym_COLON,
    STATE(14), 1,
      aux_sym_account_repeat1,
    ACTIONS(85), 7,
      ts_builtin_sym_end,
      sym_amount,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [369] = 1,
    ACTIONS(76), 8,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_amount,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [380] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym__string,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [395] = 1,
    ACTIONS(91), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [405] = 1,
    ACTIONS(93), 7,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [415] = 2,
    ACTIONS(97), 1,
      sym_amount,
    ACTIONS(95), 6,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [427] = 1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [436] = 1,
    ACTIONS(101), 6,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [445] = 4,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      aux_sym__string_token1,
    ACTIONS(108), 1,
      aux_sym__string_token2,
    STATE(24), 1,
      aux_sym__string_repeat1,
  [458] = 4,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      aux_sym__string_token1,
    ACTIONS(115), 1,
      aux_sym__string_token2,
    STATE(26), 1,
      aux_sym__string_repeat1,
  [471] = 4,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      aux_sym__string_token1,
    ACTIONS(121), 1,
      aux_sym__string_token2,
    STATE(24), 1,
      aux_sym__string_repeat1,
  [484] = 2,
    STATE(28), 1,
      sym_txn,
    ACTIONS(123), 3,
      anon_sym_txn,
      anon_sym_BANG,
      anon_sym_STAR,
  [493] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    STATE(12), 1,
      sym_txn_strings,
    STATE(18), 1,
      sym__string,
  [503] = 1,
    ACTIONS(125), 1,
      sym__UTF_8_1,
  [507] = 1,
    ACTIONS(127), 1,
      sym_currency,
  [511] = 1,
    ACTIONS(129), 1,
      sym__UTF_8_1,
  [515] = 1,
    ACTIONS(131), 1,
      sym__UTF_8_1,
  [519] = 1,
    ACTIONS(133), 1,
      sym__UTF_8_1,
  [523] = 1,
    ACTIONS(135), 1,
      sym__UTF_8_1,
  [527] = 1,
    ACTIONS(137), 1,
      sym__UTF_8_1,
  [531] = 1,
    ACTIONS(139), 1,
      sym__UTF_8_1,
  [535] = 1,
    ACTIONS(141), 1,
      sym__UTF_8_1,
  [539] = 1,
    ACTIONS(143), 1,
      anon_sym_DQUOTE,
  [543] = 1,
    ACTIONS(145), 1,
      sym__UTF_8_1,
  [547] = 1,
    ACTIONS(147), 1,
      ts_builtin_sym_end,
  [551] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 139,
  [SMALL_STATE(7)] = 161,
  [SMALL_STATE(8)] = 183,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 227,
  [SMALL_STATE(11)] = 258,
  [SMALL_STATE(12)] = 279,
  [SMALL_STATE(13)] = 300,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 337,
  [SMALL_STATE(16)] = 353,
  [SMALL_STATE(17)] = 369,
  [SMALL_STATE(18)] = 380,
  [SMALL_STATE(19)] = 395,
  [SMALL_STATE(20)] = 405,
  [SMALL_STATE(21)] = 415,
  [SMALL_STATE(22)] = 427,
  [SMALL_STATE(23)] = 436,
  [SMALL_STATE(24)] = 445,
  [SMALL_STATE(25)] = 458,
  [SMALL_STATE(26)] = 471,
  [SMALL_STATE(27)] = 484,
  [SMALL_STATE(28)] = 493,
  [SMALL_STATE(29)] = 503,
  [SMALL_STATE(30)] = 507,
  [SMALL_STATE(31)] = 511,
  [SMALL_STATE(32)] = 515,
  [SMALL_STATE(33)] = 519,
  [SMALL_STATE(34)] = 523,
  [SMALL_STATE(35)] = 527,
  [SMALL_STATE(36)] = 531,
  [SMALL_STATE(37)] = 535,
  [SMALL_STATE(38)] = 539,
  [SMALL_STATE(39)] = 543,
  [SMALL_STATE(40)] = 547,
  [SMALL_STATE(41)] = 551,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(37),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(36),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(32),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(31),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(29),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__account_name_repeat1, 2), SHIFT_REPEAT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__account_name, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__account_name, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_4, 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__UTF_8_4, 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_4, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__UTF_8_4, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_3, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__UTF_8_3, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_3, 2),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__UTF_8_3, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__UTF_8_2, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__UTF_8_2, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_repeat1, 2), SHIFT_REPEAT(15),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__string, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn_strings, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_posting, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(24),
  [108] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__string_repeat1, 2), SHIFT_REPEAT(24),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
