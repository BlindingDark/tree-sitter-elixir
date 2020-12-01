#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 5
#define ALIAS_COUNT 0
#define TOKEN_COUNT 3
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2

enum {
  sym_number = 1,
  sym_atom = 2,
  sym_source_file = 3,
  aux_sym_source_file_repeat1 = 4,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_atom] = "atom",
  [sym_source_file] = "source_file",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_atom] = sym_atom,
  [sym_source_file] = sym_source_file,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(37);
      if (lookahead == '&') ADVANCE(29);
      if (lookahead == '*' ||
          lookahead == '/' ||
          lookahead == '@') ADVANCE(27);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == '>') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '^') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == '|') ADVANCE(40);
      if (lookahead == '~') ADVANCE(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '~') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '\\') ADVANCE(27);
      END_STATE();
    case 6:
      if (lookahead == '^') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '~') ADVANCE(27);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == '<' ||
          lookahead == '~') ADVANCE(27);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(21);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '_') ADVANCE(13);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_atom);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '&') ADVANCE(28);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(27);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '+') ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(27);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-') ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '.') ADVANCE(27);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(3);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '~') ADVANCE(27);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '|') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '^') ADVANCE(6);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '|') ADVANCE(27);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(27);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(27);
      if (lookahead == 't') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '!' ||
          lookahead == '?') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_atom);
      if (lookahead == '-' ||
          lookahead == '=' ||
          lookahead == '>') ADVANCE(27);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '|') ADVANCE(3);
      if (lookahead == '~') ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_atom] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_atom] = ACTIONS(5),
  },
  [2] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [sym_atom] = ACTIONS(9),
  },
  [3] = {
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_atom] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [16] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_elixir(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .field_count = FIELD_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
