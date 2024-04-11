#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"
#include <string.h>

enum TokenType { INDENT, DEDENT, BREAK, SENTINEL };

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

bool tree_sitter_bilang_external_scanner_scan(void *payload, TSLexer *lexer,
                                              const bool *valid_symbols) {
  uint32_t *level = (uint32_t *)payload;
  uint32_t col = lexer->get_column(lexer);

  if (valid_symbols[SENTINEL]) {
    return false;
  } else if (col > *level) {
    (*level)++;
    lexer->result_symbol = INDENT;
  } else if (col < *level) {
    (*level)--;
    lexer->result_symbol = DEDENT;
  } else if (lexer->eof(lexer)) {
    return false;
  } else {
    lexer->result_symbol = BREAK;
  }
  return true;
}
