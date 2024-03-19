/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bilang",
  rules: {
    program: ($) => seq(optional(seq($._feed, $._newline)), $._expr3),
    _expr3: ($) => choice($.apply3, $._expr2),
    _expr2: ($) => choice($.apply2, $._exprL),
    _expr1: ($) => choice($.apply1, $.id),
    _exprL: ($) => seq($._expr1, $._feed),
    apply3: ($) => seq($._expr2, $._newline, $._expr3),
    apply2: ($) => seq($._exprL, $._indent, $._newline, $._expr3, $._dedent),
    apply1: ($) => seq($.id, $._space, $._expr1),

    id: () => /[a-z]+/,
    _space: () => /[ \t]+/,
    _feed: () => /([ \t]*\r?\n)+\t*/,
  },
  extras: () => [],
  externals: ($) => [$._indent, $._dedent, $._newline, $.sentinel],
});
