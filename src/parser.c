#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DQUOTE = 1,
  anon_sym_BQUOTE = 2,
  aux_sym_litD_token1 = 3,
  anon_sym_BQUOTE_LBRACE = 4,
  anon_sym_RBRACE = 5,
  sym_id = 6,
  sym__space = 7,
  sym__feed = 8,
  sym__indent = 9,
  sym__dedent = 10,
  sym__newline = 11,
  sym__sentinel = 12,
  sym_program = 13,
  sym__expr3 = 14,
  sym__expr2 = 15,
  sym__expr1 = 16,
  sym__exprL = 17,
  sym_apply3 = 18,
  sym_apply2 = 19,
  sym_apply1 = 20,
  sym__e = 21,
  sym_string = 22,
  sym_litD = 23,
  sym_interp = 24,
  sym__uninterp = 25,
  aux_sym_string_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_BQUOTE] = "`",
  [aux_sym_litD_token1] = "litD_token1",
  [anon_sym_BQUOTE_LBRACE] = "`{",
  [anon_sym_RBRACE] = "}",
  [sym_id] = "id",
  [sym__space] = "_space",
  [sym__feed] = "_feed",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym__sentinel] = "_sentinel",
  [sym_program] = "program",
  [sym__expr3] = "_expr3",
  [sym__expr2] = "_expr2",
  [sym__expr1] = "_expr1",
  [sym__exprL] = "_exprL",
  [sym_apply3] = "apply3",
  [sym_apply2] = "apply2",
  [sym_apply1] = "apply1",
  [sym__e] = "_e",
  [sym_string] = "string",
  [sym_litD] = "litD",
  [sym_interp] = "interp",
  [sym__uninterp] = "_uninterp",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [aux_sym_litD_token1] = aux_sym_litD_token1,
  [anon_sym_BQUOTE_LBRACE] = anon_sym_BQUOTE_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_id] = sym_id,
  [sym__space] = sym__space,
  [sym__feed] = sym__feed,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym__sentinel] = sym__sentinel,
  [sym_program] = sym_program,
  [sym__expr3] = sym__expr3,
  [sym__expr2] = sym__expr2,
  [sym__expr1] = sym__expr1,
  [sym__exprL] = sym__exprL,
  [sym_apply3] = sym_apply3,
  [sym_apply2] = sym_apply2,
  [sym_apply1] = sym_apply1,
  [sym__e] = sym__e,
  [sym_string] = sym_string,
  [sym_litD] = sym_litD,
  [sym_interp] = sym_interp,
  [sym__uninterp] = sym__uninterp,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_litD_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__feed] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__expr3] = {
    .visible = false,
    .named = true,
  },
  [sym__expr2] = {
    .visible = false,
    .named = true,
  },
  [sym__expr1] = {
    .visible = false,
    .named = true,
  },
  [sym__exprL] = {
    .visible = false,
    .named = true,
  },
  [sym_apply3] = {
    .visible = true,
    .named = true,
  },
  [sym_apply2] = {
    .visible = true,
    .named = true,
  },
  [sym_apply1] = {
    .visible = true,
    .named = true,
  },
  [sym__e] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_litD] = {
    .visible = true,
    .named = true,
  },
  [sym_interp] = {
    .visible = true,
    .named = true,
  },
  [sym__uninterp] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_string_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 3,
  [7] = 4,
  [8] = 5,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 18,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 22,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 28,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 31,
  [41] = 37,
  [42] = 42,
  [43] = 39,
  [44] = 44,
  [45] = 36,
  [46] = 32,
  [47] = 42,
  [48] = 48,
  [49] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead == '}') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '`') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\\') ADVANCE(7);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      if (lookahead == '{') ADVANCE(8);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_litD_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\' &&
          lookahead != '`') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_BQUOTE_LBRACE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_id);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__feed);
      if (lookahead == '\t') ADVANCE(12);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0, .external_lex_state = 3},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0, .external_lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0, .external_lex_state = 4},
  [26] = {.lex_state = 0, .external_lex_state = 5},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 4},
  [29] = {.lex_state = 0, .external_lex_state = 6},
  [30] = {.lex_state = 0, .external_lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0, .external_lex_state = 7},
  [33] = {.lex_state = 0, .external_lex_state = 7},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0, .external_lex_state = 7},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0, .external_lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0, .external_lex_state = 7},
  [41] = {.lex_state = 0, .external_lex_state = 7},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0, .external_lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0, .external_lex_state = 7},
  [47] = {.lex_state = 0, .external_lex_state = 5},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0, .external_lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__feed] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(48),
    [sym__expr3] = STATE(45),
    [sym__expr2] = STATE(26),
    [sym__expr1] = STATE(39),
    [sym__exprL] = STATE(22),
    [sym_apply3] = STATE(45),
    [sym_apply2] = STATE(26),
    [sym_apply1] = STATE(39),
    [sym__e] = STATE(21),
    [sym_string] = STATE(21),
    [anon_sym_DQUOTE] = ACTIONS(3),
    [sym_id] = ACTIONS(5),
    [sym__feed] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(9), 1,
      sym__feed,
    STATE(24), 1,
      sym__exprL,
    STATE(33), 1,
      sym_program,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(25), 2,
      sym__expr2,
      sym_apply2,
    STATE(36), 2,
      sym__expr3,
      sym_apply3,
    STATE(43), 2,
      sym__expr1,
      sym_apply1,
  [32] = 7,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    STATE(24), 1,
      sym__exprL,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(25), 2,
      sym__expr2,
      sym_apply2,
    STATE(43), 2,
      sym__expr1,
      sym_apply1,
    STATE(46), 2,
      sym__expr3,
      sym_apply3,
  [58] = 7,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    STATE(24), 1,
      sym__exprL,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(25), 2,
      sym__expr2,
      sym_apply2,
    STATE(41), 2,
      sym__expr3,
      sym_apply3,
    STATE(43), 2,
      sym__expr1,
      sym_apply1,
  [84] = 7,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    STATE(24), 1,
      sym__exprL,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(25), 2,
      sym__expr2,
      sym_apply2,
    STATE(40), 2,
      sym__expr3,
      sym_apply3,
    STATE(43), 2,
      sym__expr1,
      sym_apply1,
  [110] = 7,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    STATE(24), 1,
      sym__exprL,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(25), 2,
      sym__expr2,
      sym_apply2,
    STATE(32), 2,
      sym__expr3,
      sym_apply3,
    STATE(43), 2,
      sym__expr1,
      sym_apply1,
  [136] = 7,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    STATE(22), 1,
      sym__exprL,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(26), 2,
      sym__expr2,
      sym_apply2,
    STATE(37), 2,
      sym__expr3,
      sym_apply3,
    STATE(39), 2,
      sym__expr1,
      sym_apply1,
  [162] = 7,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    STATE(22), 1,
      sym__exprL,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(26), 2,
      sym__expr2,
      sym_apply2,
    STATE(31), 2,
      sym__expr3,
      sym_apply3,
    STATE(39), 2,
      sym__expr1,
      sym_apply1,
  [188] = 5,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(15), 1,
      aux_sym_litD_token1,
    ACTIONS(17), 1,
      anon_sym_BQUOTE_LBRACE,
    STATE(11), 4,
      sym_litD,
      sym_interp,
      sym__uninterp,
      aux_sym_string_repeat1,
  [207] = 5,
    ACTIONS(13), 1,
      anon_sym_BQUOTE,
    ACTIONS(15), 1,
      aux_sym_litD_token1,
    ACTIONS(17), 1,
      anon_sym_BQUOTE_LBRACE,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(9), 4,
      sym_litD,
      sym_interp,
      sym__uninterp,
      aux_sym_string_repeat1,
  [226] = 5,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      anon_sym_BQUOTE,
    ACTIONS(26), 1,
      aux_sym_litD_token1,
    ACTIONS(29), 1,
      anon_sym_BQUOTE_LBRACE,
    STATE(11), 4,
      sym_litD,
      sym_interp,
      sym__uninterp,
      aux_sym_string_repeat1,
  [245] = 5,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    ACTIONS(32), 1,
      sym__feed,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(35), 2,
      sym__expr1,
      sym_apply1,
  [263] = 4,
    ACTIONS(3), 1,
      anon_sym_DQUOTE,
    ACTIONS(5), 1,
      sym_id,
    STATE(21), 2,
      sym__e,
      sym_string,
    STATE(27), 2,
      sym__expr1,
      sym_apply1,
  [278] = 2,
    ACTIONS(36), 1,
      anon_sym_BQUOTE,
    ACTIONS(34), 3,
      anon_sym_DQUOTE,
      aux_sym_litD_token1,
      anon_sym_BQUOTE_LBRACE,
  [287] = 2,
    ACTIONS(40), 1,
      anon_sym_BQUOTE,
    ACTIONS(38), 3,
      anon_sym_DQUOTE,
      aux_sym_litD_token1,
      anon_sym_BQUOTE_LBRACE,
  [296] = 2,
    ACTIONS(44), 1,
      anon_sym_BQUOTE,
    ACTIONS(42), 3,
      anon_sym_DQUOTE,
      aux_sym_litD_token1,
      anon_sym_BQUOTE_LBRACE,
  [305] = 2,
    ACTIONS(48), 1,
      anon_sym_BQUOTE,
    ACTIONS(46), 3,
      anon_sym_DQUOTE,
      aux_sym_litD_token1,
      anon_sym_BQUOTE_LBRACE,
  [314] = 1,
    ACTIONS(50), 3,
      sym__indent,
      sym__dedent,
      sym__newline,
  [320] = 1,
    ACTIONS(50), 3,
      sym__indent,
      sym__newline,
      ts_builtin_sym_end,
  [326] = 2,
    ACTIONS(54), 1,
      sym__space,
    ACTIONS(52), 2,
      anon_sym_RBRACE,
      sym__feed,
  [334] = 2,
    ACTIONS(58), 1,
      sym__space,
    ACTIONS(56), 2,
      anon_sym_RBRACE,
      sym__feed,
  [342] = 2,
    ACTIONS(62), 1,
      sym__indent,
    ACTIONS(60), 2,
      sym__newline,
      ts_builtin_sym_end,
  [350] = 2,
    ACTIONS(66), 1,
      sym__space,
    ACTIONS(64), 2,
      anon_sym_RBRACE,
      sym__feed,
  [358] = 2,
    ACTIONS(68), 1,
      sym__indent,
    ACTIONS(60), 2,
      sym__dedent,
      sym__newline,
  [366] = 2,
    ACTIONS(70), 1,
      sym__dedent,
    ACTIONS(72), 1,
      sym__newline,
  [373] = 2,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym__newline,
  [380] = 1,
    ACTIONS(76), 2,
      anon_sym_RBRACE,
      sym__feed,
  [385] = 1,
    ACTIONS(78), 2,
      sym__dedent,
      sym__newline,
  [390] = 2,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    ACTIONS(82), 1,
      sym__indent,
  [397] = 1,
    ACTIONS(78), 2,
      sym__newline,
      ts_builtin_sym_end,
  [402] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
  [406] = 1,
    ACTIONS(86), 1,
      sym__dedent,
  [410] = 1,
    ACTIONS(88), 1,
      sym__dedent,
  [414] = 1,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
  [418] = 1,
    ACTIONS(92), 1,
      anon_sym_RBRACE,
  [422] = 1,
    ACTIONS(94), 1,
      sym__dedent,
  [426] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [430] = 1,
    ACTIONS(98), 1,
      sym__newline,
  [434] = 1,
    ACTIONS(100), 1,
      sym__feed,
  [438] = 1,
    ACTIONS(84), 1,
      sym__dedent,
  [442] = 1,
    ACTIONS(96), 1,
      sym__dedent,
  [446] = 1,
    ACTIONS(102), 1,
      sym__newline,
  [450] = 1,
    ACTIONS(104), 1,
      sym__feed,
  [454] = 1,
    ACTIONS(106), 1,
      sym__newline,
  [458] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [462] = 1,
    ACTIONS(108), 1,
      sym__dedent,
  [466] = 1,
    ACTIONS(110), 1,
      sym__newline,
  [470] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
  [474] = 1,
    ACTIONS(114), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 162,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 226,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 278,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 305,
  [SMALL_STATE(18)] = 314,
  [SMALL_STATE(19)] = 320,
  [SMALL_STATE(20)] = 326,
  [SMALL_STATE(21)] = 334,
  [SMALL_STATE(22)] = 342,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 358,
  [SMALL_STATE(25)] = 366,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 385,
  [SMALL_STATE(29)] = 390,
  [SMALL_STATE(30)] = 397,
  [SMALL_STATE(31)] = 402,
  [SMALL_STATE(32)] = 406,
  [SMALL_STATE(33)] = 410,
  [SMALL_STATE(34)] = 414,
  [SMALL_STATE(35)] = 418,
  [SMALL_STATE(36)] = 422,
  [SMALL_STATE(37)] = 426,
  [SMALL_STATE(38)] = 430,
  [SMALL_STATE(39)] = 434,
  [SMALL_STATE(40)] = 438,
  [SMALL_STATE(41)] = 442,
  [SMALL_STATE(42)] = 446,
  [SMALL_STATE(43)] = 450,
  [SMALL_STATE(44)] = 454,
  [SMALL_STATE(45)] = 458,
  [SMALL_STATE(46)] = 462,
  [SMALL_STATE(47)] = 466,
  [SMALL_STATE(48)] = 470,
  [SMALL_STATE(49)] = 474,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(14),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(12),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_litD, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_litD, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp, 7),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interp, 7),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interp, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interp, 3),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__uninterp, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__uninterp, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exprL, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr1, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr2, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr3, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply1, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply2, 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply3, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token__sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__sentinel] = sym__sentinel,
};

static const bool ts_external_scanner_states[8][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token__sentinel] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token__indent] = true,
  },
  [7] = {
    [ts_external_token__dedent] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_bilang_external_scanner_create(void);
void tree_sitter_bilang_external_scanner_destroy(void *);
bool tree_sitter_bilang_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_bilang_external_scanner_serialize(void *, char *);
void tree_sitter_bilang_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bilang() {
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
      tree_sitter_bilang_external_scanner_create,
      tree_sitter_bilang_external_scanner_destroy,
      tree_sitter_bilang_external_scanner_scan,
      tree_sitter_bilang_external_scanner_serialize,
      tree_sitter_bilang_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
