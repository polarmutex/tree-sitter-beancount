{
  "targets": [
    {
      "target_name": "tree_sitter_beancount_binding",
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "src"
      ],
      "sources": [
        "bindings/node/binding.cc",
        # If your language uses an external scanner, add it here.
        "src/parser.c",
      ],
      "cflags_c": [
        "-std=c99",
      ]
    }
  ]
}
