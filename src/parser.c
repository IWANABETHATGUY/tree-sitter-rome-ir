#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_COMMA = 2,
  anon_sym_RPAREN = 3,
  anon_sym_List = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_SLASH_SLASH = 7,
  aux_sym_comment_token1 = 8,
  sym_ident = 9,
  anon_sym_DQUOTE = 10,
  anon_sym_BSLASH = 11,
  aux_sym__escape_sequence_token1 = 12,
  aux_sym__escape_sequence_token2 = 13,
  aux_sym__escape_sequence_token3 = 14,
  aux_sym__escape_sequence_token4 = 15,
  sym__string_content = 16,
  sym_root = 17,
  sym__root = 18,
  sym__element = 19,
  sym_call = 20,
  sym_list = 21,
  sym_comment = 22,
  sym_string_literal = 23,
  sym__escape_sequence = 24,
  aux_sym_list_repeat1 = 25,
  aux_sym_string_literal_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_List] = "List",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_ident] = "ident",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BSLASH] = "\\",
  [aux_sym__escape_sequence_token1] = "_escape_sequence_token1",
  [aux_sym__escape_sequence_token2] = "_escape_sequence_token2",
  [aux_sym__escape_sequence_token3] = "_escape_sequence_token3",
  [aux_sym__escape_sequence_token4] = "_escape_sequence_token4",
  [sym__string_content] = "_string_content",
  [sym_root] = "root",
  [sym__root] = "_root",
  [sym__element] = "_element",
  [sym_call] = "call",
  [sym_list] = "list",
  [sym_comment] = "comment",
  [sym_string_literal] = "string_literal",
  [sym__escape_sequence] = "_escape_sequence",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_List] = anon_sym_List,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_ident] = sym_ident,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym__escape_sequence_token1] = aux_sym__escape_sequence_token1,
  [aux_sym__escape_sequence_token2] = aux_sym__escape_sequence_token2,
  [aux_sym__escape_sequence_token3] = aux_sym__escape_sequence_token3,
  [aux_sym__escape_sequence_token4] = aux_sym__escape_sequence_token4,
  [sym__string_content] = sym__string_content,
  [sym_root] = sym_root,
  [sym__root] = sym__root,
  [sym__element] = sym__element,
  [sym_call] = sym_call,
  [sym_list] = sym_list,
  [sym_comment] = sym_comment,
  [sym_string_literal] = sym_string_literal,
  [sym__escape_sequence] = sym__escape_sequence,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_List] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__escape_sequence_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_sequence_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_sequence_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__escape_sequence_token4] = {
    .visible = false,
    .named = false,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_root] = {
    .visible = true,
    .named = true,
  },
  [sym__root] = {
    .visible = false,
    .named = true,
  },
  [sym__element] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == ',') ADVANCE(14);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(35);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(27);
      if (lookahead == 'x') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(24);
      if (lookahead == ']') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead == 'x') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '{') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_List);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '{') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      if (lookahead == '/') ADVANCE(19);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token1);
      if (lookahead == '/') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym__escape_sequence_token4);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0, .external_lex_state = 1},
  [7] = {.lex_state = 0, .external_lex_state = 1},
  [8] = {.lex_state = 0, .external_lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0, .external_lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {(TSStateId)(-1)},
};

enum {
  ts_external_token__string_content = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_List] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_ident] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym__escape_sequence_token2] = ACTIONS(1),
    [aux_sym__escape_sequence_token3] = ACTIONS(1),
    [aux_sym__escape_sequence_token4] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
  },
  [1] = {
    [sym_root] = STATE(32),
    [sym_call] = STATE(33),
    [sym_list] = STATE(33),
    [sym_comment] = STATE(1),
    [anon_sym_List] = ACTIONS(5),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [sym_ident] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_List,
    ACTIONS(9), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(23), 1,
      sym__element,
    STATE(26), 3,
      sym_call,
      sym_list,
      sym_string_literal,
  [24] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_List,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      sym_ident,
    STATE(3), 1,
      sym_comment,
    STATE(24), 1,
      sym__root,
    STATE(29), 2,
      sym_call,
      sym_list,
  [47] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_List,
    ACTIONS(15), 1,
      sym_ident,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(4), 1,
      sym_comment,
    STATE(24), 1,
      sym__root,
    STATE(29), 2,
      sym_call,
      sym_list,
  [70] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_List,
    ACTIONS(15), 1,
      sym_ident,
    STATE(5), 1,
      sym_comment,
    STATE(24), 1,
      sym__root,
    STATE(29), 2,
      sym_call,
      sym_list,
  [90] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 1,
      anon_sym_BSLASH,
    ACTIONS(24), 1,
      sym__string_content,
    STATE(22), 1,
      sym__escape_sequence,
    STATE(6), 2,
      sym_comment,
      aux_sym_string_literal_repeat1,
  [110] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      sym__string_content,
    STATE(6), 1,
      aux_sym_string_literal_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(22), 1,
      sym__escape_sequence,
  [132] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(29), 1,
      anon_sym_BSLASH,
    ACTIONS(31), 1,
      sym__string_content,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      aux_sym_string_literal_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(22), 1,
      sym__escape_sequence,
  [154] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_List,
    ACTIONS(15), 1,
      sym_ident,
    STATE(9), 1,
      sym_comment,
    STATE(17), 1,
      sym__root,
    STATE(29), 2,
      sym_call,
      sym_list,
  [174] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(10), 1,
      sym_comment,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [187] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(11), 1,
      sym_comment,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [200] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(12), 1,
      sym_comment,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [213] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(13), 1,
      sym_comment,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [226] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(14), 1,
      sym_comment,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [239] = 3,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    STATE(15), 1,
      sym_comment,
    ACTIONS(47), 4,
      aux_sym__escape_sequence_token1,
      aux_sym__escape_sequence_token2,
      aux_sym__escape_sequence_token3,
      aux_sym__escape_sequence_token4,
  [252] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [266] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(53), 1,
      anon_sym_COMMA,
    ACTIONS(55), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_list_repeat1,
  [282] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    STATE(18), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [296] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(19), 1,
      sym_comment,
    ACTIONS(59), 3,
      sym__string_content,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [308] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(64), 1,
      anon_sym_RBRACK,
    STATE(20), 2,
      sym_comment,
      aux_sym_list_repeat1,
  [322] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    STATE(20), 1,
      aux_sym_list_repeat1,
    STATE(21), 1,
      sym_comment,
  [338] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(22), 1,
      sym_comment,
    ACTIONS(68), 3,
      sym__string_content,
      anon_sym_DQUOTE,
      anon_sym_BSLASH,
  [350] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      sym_comment,
  [363] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(24), 1,
      sym_comment,
    ACTIONS(64), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [374] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(25), 1,
      sym_comment,
    ACTIONS(74), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [385] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(26), 1,
      sym_comment,
    ACTIONS(57), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [396] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(27), 1,
      sym_comment,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [407] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(28), 1,
      sym_comment,
  [420] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    STATE(29), 1,
      sym_comment,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [431] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(80), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      sym_comment,
  [441] = 3,
    ACTIONS(45), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(82), 1,
      aux_sym_comment_token1,
    STATE(31), 1,
      sym_comment,
  [451] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(32), 1,
      sym_comment,
  [461] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_comment,
  [471] = 3,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(86), 1,
      anon_sym_LBRACK,
    STATE(34), 1,
      sym_comment,
  [481] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 200,
  [SMALL_STATE(13)] = 213,
  [SMALL_STATE(14)] = 226,
  [SMALL_STATE(15)] = 239,
  [SMALL_STATE(16)] = 252,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 282,
  [SMALL_STATE(19)] = 296,
  [SMALL_STATE(20)] = 308,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 338,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 407,
  [SMALL_STATE(29)] = 420,
  [SMALL_STATE(30)] = 431,
  [SMALL_STATE(31)] = 441,
  [SMALL_STATE(32)] = 451,
  [SMALL_STATE(33)] = 461,
  [SMALL_STATE(34)] = 471,
  [SMALL_STATE(35)] = 481,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(22),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__root, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__escape_sequence, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_root, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_rome_ir_external_scanner_create(void);
void tree_sitter_rome_ir_external_scanner_destroy(void *);
bool tree_sitter_rome_ir_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_rome_ir_external_scanner_serialize(void *, char *);
void tree_sitter_rome_ir_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_rome_ir(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_rome_ir_external_scanner_create,
      tree_sitter_rome_ir_external_scanner_destroy,
      tree_sitter_rome_ir_external_scanner_scan,
      tree_sitter_rome_ir_external_scanner_serialize,
      tree_sitter_rome_ir_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
