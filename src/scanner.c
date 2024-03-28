#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"
#include <stdint.h>
#include <string.h>

enum TokenType { INDENT, DEDENT, NEWLINE, SENTINEL };
const char *token_names[3] = {"INDENT", "DEDENT", "NEWLINE"};

void *tree_sitter_bilang_external_scanner_create() {
  return ts_calloc(1, sizeof(uint32_t));
}

void tree_sitter_bilang_external_scanner_destroy(void *payload) {
  ts_free((uint32_t *)payload);
}

unsigned tree_sitter_bilang_external_scanner_serialize(void *payload,
                                                       char *buffer) {
  memcpy(buffer, payload, sizeof(uint32_t));
  return sizeof(uint32_t);
}

void tree_sitter_bilang_external_scanner_deserialize(void *payload,
                                                     const char *buffer,
                                                     unsigned length) {
  memcpy(payload, buffer, length);
}

#define LOG(...) lexer->log(lexer, __VA_ARGS__)
static inline bool result_symbol(TSLexer *lexer, enum TokenType tt) {
  LOG(token_names[tt]);
  lexer->result_symbol = tt;
  return true;
}

static inline bool decline(TSLexer *lexer, char *reason) {
  LOG(reason);
  return false;
}

bool tree_sitter_bilang_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  uint32_t *level = (uint32_t *)payload;
  uint32_t col = lexer->get_column(lexer);
  uint32_t lookahead = lexer->lookahead;

  LOG("scan %d level:%d col:%d expecting indent:%d dedent:%d newline:%d "
      "sentinel:%d",
      lexer->lookahead, *level, col, valid_symbols[INDENT],
      valid_symbols[DEDENT], valid_symbols[NEWLINE], valid_symbols[SENTINEL]);

  if (valid_symbols[SENTINEL]) {
    return decline(lexer, "(recovery mode)");
  }
  if (*level > col && valid_symbols[DEDENT]) {
    (*level)--;
    return result_symbol(lexer, DEDENT);
  }
  if (lexer->eof(lexer)) {
    return decline(lexer, "(eof)");
  }
  if (*level < col && valid_symbols[INDENT]) {
    (*level)++;
    return result_symbol(lexer, INDENT);
  }
  if (*level == col && valid_symbols[NEWLINE]) {
    return result_symbol(lexer, NEWLINE);
  }
  return decline(lexer, "(other)");
}
#undef LOG
