use tree_sitter_rome_ir::generate::generate;
fn main() {
    let mut parser = tree_sitter::Parser::new();
    parser
        .set_language(tree_sitter_rome_ir::language())
        .unwrap();
    let source = r#"
    List [
    HardGroup(
        List [
            SyntaxTokenSlice("switch"),
            Space,
            Group(
                List [
                    SyntaxTokenSlice("("),
                    Indent(
                        List [
                            Line(Soft),
                            SyntaxTokenSlice("\"test\""),
                        ],
                    ),
                    Line(Soft),
                    SyntaxTokenSlice(")"),
                ],
            ),
            Space,
            Group(
                List [
                    SyntaxTokenSlice("{"),
                    Indent(
                        List [
                            Line(Hard),
                            SyntaxTokenSlice("case"),
                            Space,
                            SyntaxTokenSlice("\"test\""),
                            SyntaxTokenSlice(":"),
                            Space,
                            SyntaxTokenSlice("{"),
                            Line(Hard),
                            SyntaxTokenSlice("}"),
                        ],
                    ),
                    Line(Hard),
                    SyntaxTokenSlice("}"),
                ],
            ),
        ],
    ),
]

    
    "#;
    let tree = parser.parse(source, None).unwrap();
    println!("{}", generate(tree, source));

}
