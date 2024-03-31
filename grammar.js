/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bilang",
  rules: {
    program: ($) => seq(optional(seq($._linefeed, $._break)), $._expr3),
    _expr3: ($) => choice($.apply3, $._expr2),
    _expr2: ($) => choice($.apply2, $._expr1),
    _expr1: ($) => choice($.apply1, seq($._e, $._linefeed)),
    _expri: ($) => choice($.applyi, $._e),
    apply3: ($) => seq($._expr2, $._break, $._expr3),
    apply2: ($) =>
      choice(
        seq($._e, $._linefeed, $._indent, $._break, $._expr3, $._dedent),
        seq($._e, $._space, $.apply2),
      ),
    apply1: ($) => seq($._e, $._space, $._expr1),
    applyi: ($) => seq($._e, $._space, $._expri),
    _e: ($) => choice($.id, $.string),
    string: ($) =>
      choice(
        seq('"', repeat(choice($.stx_dquo, $.interpol8, $._linesplit)), '"'),
        seq('"', $.linefeed, $.blockquoted, $._break, '"'),
        seq("`", choice($._stx_words, $._stx_group)),
        seq("` ", repeat1(choice($.stx_line, $.interpol8, $._linesplit))),
      ),
    _stx_words: ($) =>
      seq($.stx_word, repeat1(choice($.stx_word, $.interpol8, $._linesplit))),
    _stx_group: ($) => {
      let blocs = repeat(
        choice($._stx_group, $.stx_bloc, $.interpol8, $._linesplit),
      );
      return choice(
        seq($.lparen, blocs, $.rparen),
        seq($.lbrace, blocs, $.rbrace),
        seq($.lbracket, blocs, $.rbracket),
      );
    },
    blockquoted: ($) =>
      seq(
        $._indent,
        repeat1(
          choice(
            $.blockquoted,
            seq(
              $._break,
              repeat1(choice($.stx_line, $.interpol8, $._linesplit)),
              $.linefeed,
            ),
          ),
        ),
        $._dedent,
      ),
    interpol8: ($) => seq("`{", choice($._codeblock, $._expri), "}"),
    interpolB: ($) => seq(" `", $._codeblock),

    _codeblock: ($) =>
      seq($._linefeed, $._indent, $._break, $.program, $._dedent),

    // str: raw; stx: expandable (interpolation)
    str_line: () => choice(/[^\r\n]+/),
    stx_line: () => choice(/[^\r\n`]+/, "`"),
    str_squo: () => choice(/[^\r\n']+/),
    stx_dquo: () => choice(/[^\r\n`"]+/, "`"),
    stx_bloc: () => choice(/[^\r\n`(){}\[\]]+/, "`"),
    stx_word: () => choice(/[^\r\n`(){}\[\] ,\t]+/, "`"),
    id: () => /[a-z]+/,
    _space: () => /[ \t]+/,
    _linefeed: () => /([ \t]*\r?\n)+\t*/,
    linefeed: ($) => $._linefeed,
    _linesplit: ($) => seq("`{", $._linefeed, $._break, "}"),

    lparen: () => "(",
    rparen: () => ")",
    lbrace: () => "{",
    rbrace: () => "}",
    lbracket: () => "[",
    rbracket: () => "]",
  },
  extras: () => [],
  inline: () => [
    // $._expri,
    // $._expr1,
    // $._expr2,
    // $._expr3,
    // $._e,
    // $._codeblock,
    // $._stx_words,
    // $._stx_group,
  ],
  externals: ($) => [$._indent, $._dedent, $._break, $._sentinel],
});
