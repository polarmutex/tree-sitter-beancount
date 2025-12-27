//! This crate provides beancount language support for the [tree-sitter][] parsing library.
//!
//! Typically, you will use the [language][language func] function to add this language to a
//! tree-sitter [Parser][], and then use the parser to parse some code:
//!
//! ```
//! let code = "";
//! let mut parser = tree_sitter_beancount::tree_sitter::Parser::new();
//! parser.set_language(&tree_sitter_beancount::language()).expect("Error loading beancount grammar");
//! let tree = parser.parse(code, None).unwrap();
//! ```
//!
//! This crate re-exports `tree-sitter` for convenience, so you don't need to add it as a separate dependency.
//!
//! [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
//! [language func]: fn.language.html
//! [Parser]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Parser.html
//! [tree-sitter]: https://tree-sitter.github.io/

use tree_sitter::Language;

// Re-export tree-sitter for user convenience
pub use tree_sitter;

extern "C" {
    fn tree_sitter_beancount() -> Language;
}

/// Get the tree-sitter [Language][] for this grammar.
///
/// [Language]: https://docs.rs/tree-sitter/*/tree_sitter/struct.Language.html
pub fn language() -> Language {
    unsafe { tree_sitter_beancount() }
}

/// The content of the [`node-types.json`][] file for this grammar.
///
/// [`node-types.json`]: https://tree-sitter.github.io/tree-sitter/using-parsers#static-node-types
pub const NODE_TYPES: &'static str = include_str!("../../src/node-types.json");

mod node_kind;
pub use node_kind::NodeKine;

// Uncomment these to include any queries that this grammar contains

// pub const HIGHLIGHTS_QUERY: &'static str = include_str!("../../queries/highlights.scm");
// pub const INJECTIONS_QUERY: &'static str = include_str!("../../queries/injections.scm");
// pub const LOCALS_QUERY: &'static str = include_str!("../../queries/locals.scm");
// pub const TAGS_QUERY: &'static str = include_str!("../../queries/tags.scm");

#[cfg(test)]
mod tests {
    #[test]
    fn test_can_load_grammar() {
        let mut parser = super::tree_sitter::Parser::new();
        parser
            .set_language(&super::language())
            .expect("Error loading beancount language");
    }

    #[test]
    fn test_nodekine_from_name() {
        use super::NodeKine;

        assert_eq!(NodeKine::from_name("account"), Some(NodeKine::Account));
        assert_eq!(NodeKine::from_name("string"), Some(NodeKine::String));
        assert_eq!(NodeKine::from_name("number"), Some(NodeKine::Number));
        assert_eq!(NodeKine::from_name("flag"), Some(NodeKine::Flag));
        assert_eq!(NodeKine::from_name("does_not_exist"), None);
    }
}
