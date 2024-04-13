/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bilang",
  rules: {
    program: ($) => seq(optional(seq($._linefeed, $._break)), $._expr3),
    _expr3: ($) => choice($.apply3, $._expr2, $.grave3),
    _expr2: ($) => choice($.apply2, $._expr1, $.grave2),
    _expr1: ($) => choice($.apply1, seq($._e, $._linefeed)),
    _expri: ($) => choice($.applyi, $._e),

    apply3: ($) =>
      choice(seq($._e, $._space, $.grave3), seq($._expr2, $._break, $._expr3)),
    apply2: ($) =>
      choice(
        seq($._e, $._linefeed, $._indent, $._break, $._expr3, $._dedent),
        seq($._e, $._space, choice($.apply2, $.grave2)),
      ),
    apply1: ($) => seq($._e, $._space, $._expr1),
    applyi: ($) => seq($._e, $._space, $._expri),

    _e: ($) => choice($.id, $.string),
    string: ($) => {
      let interpolable = (x) => choice(x, $._interpol8);
      return choice(
        seq("` ", $._stxline),
        seq("`", $.stx_group),
        seq("`", repeat1(interpolable($.stx_word))),
        seq('"', repeat(interpolable($.stx_dquo)), '"'),
        seq("'", $.str_squo, "'"),
        seq("'", $.linefeed, $.strblock, $._break, "'"),
        seq('"', $.linefeed, $.stxblock, $._break, '"'),
      );
    },
    _stxline: ($) => repeat1(choice($.stx_line, $._interpol8)),
    stxblock: ($) =>
      seq(
        $._indent,
        repeat1(choice($.stxblock, seq($._break, $._stxline, $.linefeed))),
        $._dedent,
      ),
    strblock: ($) =>
      seq(
        $._indent,
        repeat1(choice($.strblock, seq($._break, $.str_line, $.linefeed))),
        $._dedent,
      ),
    _graving: ($) => choice($._graveline, $.graveblock),
    grave2: ($) => seq("`", $._linefeed, $.graveblock),
    grave3: ($) => seq("`", $._linefeed, $._graveline, repeat($._graving)),
    graveblock: ($) => seq($._indent, repeat1($._graving), $._dedent),
    _graveline: ($) =>
      seq(
        $._break,
        choice(
          seq(optional($._space), $.interpolB),
          seq(
            repeat1(choice($.stx_rune, $._interpol8)),
            choice($.linefeed, seq($._space, $.interpolB)),
          ),
        ),
      ),
    interpolA: ($) => seq("`{", choice($._codeblock, $._expri), "}"),
    interpolB: ($) => seq("`", $._codeblock),
    _interpol8: ($) => choice($.interpolA, $._linesplit),
    _codeblock: ($) =>
      seq($._linefeed, $._indent, $._break, $.program, $._dedent),
    _stx_group: ($) => {
      let group = repeat(choice($._stx_group, $._stx_grp, $._interpol8));
      return choice(
        seq("(", group, ")"),
        seq("{", group, "}"),
        seq("[", group, "]"),
      );
    },
    stx_group: ($) => $._stx_group,
    _stx_grp: () => choice(/[^\r\n`(){}\[\]]+/, "`"),
    str_line: () => choice(/[^\r\n]+/),
    stx_line: () => choice(/[^\r\n`]+/, "`"),
    str_squo: () => choice(/[^\r\n']+/),
    stx_dquo: () => choice(/[^\r\n`"]+/, "`"),
    stx_word: () => choice(/[^\r\n`(){}\[\], ]+/, "`"),
    stx_rune: ($) =>
      choice(
        /[^\r\n ]+/,
        seq("`", /[^{\r\n]/),
        seq($._space, /[^`\r\n]/),
        seq(optional($._space), "`", $._linefeed, $._break),
      ),

    id: () => /[a-z]+/,
    linefeed: ($) => $._linefeed,
    _space: () => / +/,
    _linefeed: () => /([ \t]*\r?\n)+\t*/,
    _linesplit: ($) => seq("`{", $._linefeed, $._break, "}"),
  },
  extras: () => [],
  inline: ($) => [
    $._e,
    $._expri,
    $._expr1,
    $._expr2,
    $._expr3,
    $._codeblock,
    $._interpol8,
    $._graving,
    $._graveline,
    $._linesplit,
    $._stxline,
    $._stx_grp,
  ],
  externals: ($) => [$._indent, $._dedent, $._break, $._sentinel],
});
