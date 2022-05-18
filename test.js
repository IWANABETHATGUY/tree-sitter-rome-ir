const Parser = require("web-tree-sitter");

const source = `
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
    SyntaxTokenSlice(""),
    Line(Hard),
]

`;
(async () => {
  await Parser.init();
  const parser = new Parser();
  const Lang = await Parser.Language.load("./tree-sitter-rome_ir.wasm");
  parser.setLanguage(Lang);
  const tree = parser.parse(source, null);
  // console.log(tree.rootNode.namedChild(0).namedChild(0).text);
  console.log(generate(tree, source))
})();

/**
 *
 * @param {Parser.Tree} tree
 * @param {string} source
 */
function generate(tree, source) {
  let node = tree.rootNode;
  // get first node of root
  let firstChild = node.namedChild(0);
  let kind = firstChild.type;
  if (kind === "list") {
    return generateList(firstChild, source);
  } else if (kind === "call") {
    
  } else if (kind === "ident") {
    return;
  } else {
    throw new Error(kind);
  }
}
/**
 * @param{Parser.SyntaxNode} node
 * @param {string} source
 */
function generateList(node, source) {
  let childCount = node.namedChildCount;
  let childContent = [];
  for (let i = 0; i < childCount; i++) {
    let child = node.namedChild(i);
    let content = "";
    let type = child.type;
    if (type === "ident") {
      content = generateIdent(child.text);
    } else if (type === "list") {
      content = generateList(child, source);
    } else if (type === "call") {
      content = generateCall(child, source);
    } else {
      throw new Error(type);
    }
    childContent.push(content);
  }
  // let wrap_string = format!("format_elements![{}]", child_content.join(","));
  return `format_elements![${childContent.join(",")}]`;
}

/**
 *
 * @param {string} ident
 */
function generateIdent(ident) {
  switch (ident) {
    case "Hard":
      return "hard_line_break()";
    case "Space":
      return "space_token()";
    default:
      throw new Error(ident);
  }
}
/**
 *
 * @param {Parser.SyntaxNode} node
 * @param {string} source
 */
function generateCall(node, source) {
  let nodeContent = node.text;
  if (nodeContent === `Line(Soft)`) {
    return "soft_line_break()";
  } else if (nodeContent === `Line(Hard)`) {
    return "hard_line_break()";
  }

  let nameNode = node.namedChild(0);
  let name = nameNode.text;
  let callName = generateCallName(name);

  let arg = node.namedChild(1);
  let generatedArgument = "";
  switch (arg.type) {
    case "list": {
      generatedArgument = generateList(arg, source);
      break;
    }
    case "call": {
      generatedArgument = generateCall(arg, source);
      break;
    }
    case "ident": {
      generatedArgument = generateIdent(arg, source);
      break;
    }
    case "string_literal": {
      generatedArgument = arg.text;
      break;
    }
    default:
      throw new Error(`unknown arg kind: ${arg.type}`);
  }
  return `${callName}(${generatedArgument})`;
}

// fn generate_call(node: Node, source: &str) -> String {
//     // get callExpression name, and the name node must be a ident

//     // handle some special case
//     let node_content = get_content_of_node(node, source);
//     match node_content.as_str() {
//         "Line(Soft)" => return "soft_line_break()".to_string(),
//         "Line(Hard)" => return "hard_line_break()".to_string(),
//         _ => {}
//     };

//     let name = node.named_child(0).unwrap();
//     let name = get_content_of_node(name, source);
//     let call_name = generate_call_name(name);

//     let argument = node.named_child(1).unwrap();
//     let generated_argument = match argument.kind() {
//         "list" => generate_list(argument, source),
//         "call" => generate_call(argument, source),
//         "ident" => generate_ident(get_content_of_node(argument, source)),
//         "string_literal" => {
//             let raw_string = get_content_of_node(argument, source);
//             raw_string
//         }
//         _ => {
//             unreachable!("{}", argument.kind())
//         } // $.list, $.call, $.ident, $.string_literal
//     };
//     format!("{}({})", call_name, generated_argument)
// }

/**
 *
 * @param {string} name
 */
function generateCallName(name) {
  switch (name) {
    case "HardGroup":
      return "hard_group_elements";
    case "SyntaxTokenSlice":
      return "token";
    case "Group":
      return "group_elements";
    case "Indent":
      return "indent";
    default:
      throw new Error(`can't generate call expression for name: ${name}"`);
  }
}

// fn get_content_of_node(node: Node, source: &str) -> String {
//     node.utf8_text(source.as_bytes()).unwrap().to_string()
// }
