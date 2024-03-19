#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym_id = 1,
  sym__space = 2,
  sym__feed = 3,
  sym__indent = 4,
  sym__dedent = 5,
  sym__newline = 6,
  sym_sentinel = 7,
  sym_program = 8,
  sym__expr3 = 9,
  sym__expr2 = 10,
  sym__expr1 = 11,
  sym__exprL = 12,
  sym_apply3 = 13,
  sym_apply2 = 14,
  sym_apply1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [sym__space] = "_space",
  [sym__feed] = "_feed",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_sentinel] = "sentinel",
  [sym_program] = "program",
  [sym__expr3] = "_expr3",
  [sym__expr2] = "_expr2",
  [sym__expr1] = "_expr1",
  [sym__exprL] = "_exprL",
  [sym_apply3] = "apply3",
  [sym_apply2] = "apply2",
  [sym_apply1] = "apply1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [sym__space] = sym__space,
  [sym__feed] = sym__feed,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_sentinel] = sym_sentinel,
  [sym_program] = sym_program,
  [sym__expr3] = sym__expr3,
  [sym__expr2] = sym__expr2,
  [sym__expr1] = sym__expr1,
  [sym__exprL] = sym__exprL,
  [sym_apply3] = sym_apply3,
  [sym_apply2] = sym_apply2,
  [sym_apply1] = sym_apply1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_sentinel] = {
    .visible = true,
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
  [5] = 3,
  [6] = 2,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 12,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 24,
  [25] = 17,
  [26] = 26,
  [27] = 18,
  [28] = 28,
  [29] = 24,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_id);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__feed);
      if (lookahead == '\t') ADVANCE(6);
      if (lookahead == '\n') ADVANCE(6);
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
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0, .external_lex_state = 2},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 3},
  [12] = {.lex_state = 0, .external_lex_state = 4},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0, .external_lex_state = 5},
  [15] = {.lex_state = 0, .external_lex_state = 4},
  [16] = {.lex_state = 0, .external_lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0, .external_lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0, .external_lex_state = 4},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0, .external_lex_state = 6},
  [24] = {.lex_state = 0, .external_lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 6},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__feed] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(28),
    [sym__expr3] = STATE(26),
    [sym__expr2] = STATE(15),
    [sym__expr1] = STATE(17),
    [sym__exprL] = STATE(7),
    [sym_apply3] = STATE(26),
    [sym_apply2] = STATE(15),
    [sym_apply1] = STATE(17),
    [sym_id] = ACTIONS(3),
    [sym__feed] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_id,
    STATE(11), 1,
      sym__exprL,
    STATE(16), 2,
      sym__expr2,
      sym_apply2,
    STATE(25), 2,
      sym__expr1,
      sym_apply1,
    STATE(27), 2,
      sym__expr3,
      sym_apply3,
  [19] = 5,
    ACTIONS(3), 1,
      sym_id,
    STATE(11), 1,
      sym__exprL,
    STATE(16), 2,
      sym__expr2,
      sym_apply2,
    STATE(23), 2,
      sym__expr3,
      sym_apply3,
    STATE(25), 2,
      sym__expr1,
      sym_apply1,
  [38] = 5,
    ACTIONS(3), 1,
      sym_id,
    STATE(7), 1,
      sym__exprL,
    STATE(15), 2,
      sym__expr2,
      sym_apply2,
    STATE(17), 2,
      sym__expr1,
      sym_apply1,
    STATE(21), 2,
      sym__expr3,
      sym_apply3,
  [57] = 5,
    ACTIONS(3), 1,
      sym_id,
    STATE(7), 1,
      sym__exprL,
    STATE(15), 2,
      sym__expr2,
      sym_apply2,
    STATE(17), 2,
      sym__expr1,
      sym_apply1,
    STATE(19), 2,
      sym__expr3,
      sym_apply3,
  [76] = 5,
    ACTIONS(3), 1,
      sym_id,
    STATE(11), 1,
      sym__exprL,
    STATE(16), 2,
      sym__expr2,
      sym_apply2,
    STATE(18), 2,
      sym__expr3,
      sym_apply3,
    STATE(25), 2,
      sym__expr1,
      sym_apply1,
  [95] = 2,
    ACTIONS(9), 1,
      sym__indent,
    ACTIONS(7), 2,
      sym__newline,
      ts_builtin_sym_end,
  [103] = 2,
    ACTIONS(3), 1,
      sym_id,
    STATE(22), 2,
      sym__expr1,
      sym_apply1,
  [111] = 1,
    ACTIONS(11), 3,
      sym__indent,
      sym__newline,
      ts_builtin_sym_end,
  [117] = 1,
    ACTIONS(11), 3,
      sym__indent,
      sym__dedent,
      sym__newline,
  [123] = 2,
    ACTIONS(13), 1,
      sym__indent,
    ACTIONS(7), 2,
      sym__dedent,
      sym__newline,
  [131] = 1,
    ACTIONS(15), 2,
      sym__newline,
      ts_builtin_sym_end,
  [136] = 2,
    ACTIONS(17), 1,
      sym__space,
    ACTIONS(19), 1,
      sym__feed,
  [143] = 1,
    ACTIONS(15), 2,
      sym__dedent,
      sym__newline,
  [148] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym__newline,
  [155] = 2,
    ACTIONS(21), 1,
      sym__dedent,
    ACTIONS(25), 1,
      sym__newline,
  [162] = 1,
    ACTIONS(27), 1,
      sym__feed,
  [166] = 1,
    ACTIONS(29), 1,
      sym__dedent,
  [170] = 1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
  [174] = 1,
    ACTIONS(33), 1,
      sym__newline,
  [178] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [182] = 1,
    ACTIONS(37), 1,
      sym__feed,
  [186] = 1,
    ACTIONS(31), 1,
      sym__dedent,
  [190] = 1,
    ACTIONS(39), 1,
      sym__newline,
  [194] = 1,
    ACTIONS(41), 1,
      sym__feed,
  [198] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [202] = 1,
    ACTIONS(45), 1,
      sym__dedent,
  [206] = 1,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
  [210] = 1,
    ACTIONS(49), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 103,
  [SMALL_STATE(9)] = 111,
  [SMALL_STATE(10)] = 117,
  [SMALL_STATE(11)] = 123,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 136,
  [SMALL_STATE(14)] = 143,
  [SMALL_STATE(15)] = 148,
  [SMALL_STATE(16)] = 155,
  [SMALL_STATE(17)] = 162,
  [SMALL_STATE(18)] = 166,
  [SMALL_STATE(19)] = 170,
  [SMALL_STATE(20)] = 174,
  [SMALL_STATE(21)] = 178,
  [SMALL_STATE(22)] = 182,
  [SMALL_STATE(23)] = 186,
  [SMALL_STATE(24)] = 190,
  [SMALL_STATE(25)] = 194,
  [SMALL_STATE(26)] = 198,
  [SMALL_STATE(27)] = 202,
  [SMALL_STATE(28)] = 206,
  [SMALL_STATE(29)] = 210,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr2, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exprL, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply2, 5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr1, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr3, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply3, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply1, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_sentinel] = sym_sentinel,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_sentinel] = true,
  },
  [2] = {
    [ts_external_token__indent] = true,
    [ts_external_token__newline] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [4] = {
    [ts_external_token__newline] = true,
  },
  [5] = {
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
  },
  [6] = {
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
