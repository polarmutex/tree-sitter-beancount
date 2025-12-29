import XCTest
import SwiftTreeSitter
import TreeSitterBeancount

final class TreeSitterBeancountTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_beancount())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Beancount grammar")
    }
}
