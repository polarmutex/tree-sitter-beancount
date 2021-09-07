let
  pkgs = import <nixpkgs> {};
in
pkgs.mkShell rec {
  name = "tree-sitter";

  buildInputs = with pkgs; [
    nodejs-14_x
    python38Full
    tree-sitter
  ];

}
