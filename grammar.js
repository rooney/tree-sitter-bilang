/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bilang",
  rules: {
    program: ($) => seq(optional(seq($._linefeed, $._break)), $._expr3),
    _expr3: ($) => choice($.apply3, $._expr2),
    _expr2: ($) => choice($.apply2, $._exprL),
    _expr1: ($) => choice($.apply1, $._e),
    _exprL: ($) => seq($._expr1, $._linefeed),
    apply3: ($) => seq($._expr2, $._break, $._expr3),
    apply2: ($) => seq($._exprL, $._indent, $._break, $._expr3, $._dedent),
    apply1: ($) => seq($._e, $._space, $._expr1),
    _e: ($) => choice($.id, $.string),
    string: ($) =>
      choice(
        seq('"', repeat(choice($.texdquo, $.interpol8, $._linesplit)), '"'),
        seq('"', $.linefeed, $.blockquoted, $._break, '"'),
      ),
    blockquoted: ($) =>
      seq(
        $._indent,
        repeat1(
          choice(
            $.blockquoted,
            seq(
              $._break,
              repeat1(choice($.texline, $.interpol8, $._linesplit)),
              $.linefeed,
            ),
          ),
        ),
        $._dedent,
      ),
    interpol8: ($) =>
      seq(
        "`{",
        choice(
          $._expr1,
          seq($._linefeed, $._indent, $._break, $.program, $._dedent),
        ),
        "}",
      ),
    rawline: () => choice(/[^\r\n]+/),
    texline: () => choice(/[^\r\n`]+/, "`"),
    rawsquo: () => choice(/[^\r\n']+/),
    texdquo: () => choice(/[^\r\n`"]+/, "`"),
    texbrkt: () => choice(/[^\r\n`(){}\[\]]+/, "`"),
    texword: () => choice(/[^\r\n`(){}\[\] ,\t]+/, "`"),
    id: () => /[a-z]+/,
    _space: () => /[ \t]+/,
    _linefeed: () => /([ \t]*\r?\n)+\t*/,
    linefeed: ($) => $._linefeed,
    _linesplit: ($) => seq("`{", $._linefeed, $._break, "}"),
  },
  extras: () => [],
  externals: ($) => [$._indent, $._dedent, $._break, $._sentinel],
});
