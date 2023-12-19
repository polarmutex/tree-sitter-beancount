// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterBeancount",
    products: [
        .library(name: "TreeSitterBeancount", targets: ["TreeSitterBeancount"]),
    ],
    dependencies: [],
    targets: [
        .target(name: "TreeSitterBeancount",
                path: ".",
                exclude: [
                    "binding.gyp",
                    "bindings",
                    "Cargo.toml",
                    "grammar.js",
                    "LICENSE",
                    "package.json",
                    "README.md",
                    "src/grammar.json",
                    "src/node-types.json",
                ],
                sources: [
                    "src/parser.c",
                    "src/scanner.cc",
                ],
                publicHeadersPath: "bindings/swift",
                cSettings: [.headerSearchPath("src")])
    ]
)
