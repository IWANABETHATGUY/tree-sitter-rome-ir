use tree_sitter::{Node, Tree};

pub fn generate(tree: Tree, source_code: &str) -> String {
    let node = tree.root_node();
    // get first node of root
    let first_child = node.named_child(0).expect("should have a child");
    let code = match first_child.kind() {
        "list" => generate_list(first_child, source_code),
        "call" => generate_call(first_child, source_code),
        "ident" => generate_ident(get_content_of_node(first_child, source_code)),
        _ => unreachable!("{}", first_child.kind()),
    };
    code
}

fn generate_list(node: Node, source_code: &str) -> String {
    let child_count = node.named_child_count();
    let mut child_content: Vec<String> = vec![];
    for i in 0..child_count {
        let child = node.named_child(i).unwrap();
        let content = match child.kind() {
            "ident" => generate_ident(get_content_of_node(child, source_code)),
            "list" => generate_list(child, source_code),
            "call" => generate_call(child, source_code),
            _ => {
                unreachable!("{}", child.kind())
            }
        };
        child_content.push(content);
    }
    let wrap_string = format!("format_elements![{}]", child_content.join(","));
    wrap_string
}

fn generate_ident(ident: String) -> String {
    match ident.as_ref() {
        "Hard" => "hard_line_break()".to_string(),
        "Space" => "space_token()".to_string(),
        _ => {
            unreachable!("{}", ident)
        }
    }
}

fn generate_call(node: Node, source: &str) -> String {
    // get callExpression name, and the name node must be a ident

    // handle some special case
    let node_content = get_content_of_node(node, source);
    match node_content.as_str() {
        "Line(Soft)" => return "soft_line_break()".to_string(),
        "Line(Hard)" => return "hard_line_break()".to_string(),
        _ => {}
    };

    let name = node.named_child(0).unwrap();
    let name = get_content_of_node(name, source);
    let call_name = generate_call_name(name);

    let argument = node.named_child(1).unwrap();
    let generated_argument = match argument.kind() {
        "list" => generate_list(argument, source),
        "call" => generate_call(argument, source),
        "ident" => generate_ident(get_content_of_node(argument, source)),
        "string_literal" => {
            let raw_string = get_content_of_node(argument, source);
            raw_string
        }
        _ => {
            unreachable!("{}", argument.kind())
        } // $.list, $.call, $.ident, $.string_literal
    };
    format!("{}({})", call_name, generated_argument)
}

fn generate_call_name(name: String) -> String {
    // convert IR CallExpressionName to `rome_formatter` function name
    match name.as_str() {
        "HardGroup" => "hard_group_elements",
        "SyntaxTokenSlice" => "token",
        "Group" => "group_elements",
        "Indent" => "indent",
        _ => unreachable!("can't generate call expression for name: {}", name),
    }
    .to_string()
}

fn get_content_of_node(node: Node, source: &str) -> String {
    node.utf8_text(source.as_bytes()).unwrap().to_string()
}
