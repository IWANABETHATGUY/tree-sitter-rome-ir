module.exports = grammar({
  name: "rome_ir",

  externals: $ => [$._string_content],
  extras: $ => [$.comment, /[\s\n\t]/],
  rules: {
    root: $ => choice($.list, $.call, $.ident),
    _root: $ => choice($.list, $.call, $.ident),
    _element: $ => choice($.list, $.call, $.ident, $.string_literal),

    call: $ => seq($.ident, "(", $._element, optional(","), ")"),

    list: $ => seq("List", "[", $._root, repeat(seq(",", $._root)), optional(","), "]"),

    // fill: $ => seq("Fill", $.ident, "=", $.rule),

    // atom_rule: $ => ,
    comment: $ => seq("//", /.*/),
    ident: $ => /[a-zA-Z_]+/,

    string_literal: $ =>
      seq(token.immediate('"'), repeat(choice($._escape_sequence, $._string_content)), token.immediate('"')),
    _escape_sequence: $ =>
      token.immediate(seq("\\", choice(/[^xu]/, /u[0-9a-fA-F]{4}/, /u{[0-9a-fA-F]+}/, /x[0-9a-fA-F]{2}/))),
    // TODO: add the actual grammar rules
  },
});
