{
  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    nixpkgs = {
      url = "github:NixOS/nixpkgs/nixos-unstable";
    };
    pre-commit-hooks = {
      url = "github:cachix/pre-commit-hooks.nix";
      inputs = {
        flake-utils.follows = "flake-utils";
        nixpkgs.follows = "nixpkgs";
      };
    };
  };

  outputs = {
    self,
    nixpkgs,
    flake-utils,
    pre-commit-hooks,
  }:
    {}
    // flake-utils.lib.eachDefaultSystem
    (
      system: let
        pkgs = import nixpkgs {
          inherit system;
          #overlays = [self.overlays.default];
        };
        tree-sitter-env = pkgs.stdenv.mkDerivation {
          name = "tree-sitter-env";
          nativeBuildInputs = with pkgs; [
            makeWrapper
          ];
          dontUnpack = true;
          dontBuild = true;
          installPhase = ''
            mkdir -p $out/bin
            makeWrapper \
              ${pkgs.tree-sitter}/bin/tree-sitter \
              $out/bin/tree-sitter \
              --prefix PATH : "${with pkgs; lib.makeBinPath [stdenv.cc nodejs]}"
          '';
        };
      in rec {
        checks = {
          pre-commit = pre-commit-hooks.lib.${system}.run {
            src = ./.;

            hooks = {
              clang-format = {
                enable = true;
                name = "clang-format";
                entry = "${pkgs.clang-tools}/bin/clang-format -style=file -i";
                types = ["text" "c"];
                # I don't care for generated files' formatting
                excludes = ["src/parser.c" "src/tree_sitter/parser.h"];
                language = "system";
              };

              alejandra.enable = true;

              tree-sitter = {
                enable = true;
                name = "tree-sitter tests";
                entry = "${tree-sitter-env}/bin/tree-sitter test";
                pass_filenames = false;
              };

              tree-sitter-files = {
                enable = true;
                name = "tree-sitter generated files";
                entry = "${tree-sitter-env}/bin/tree-sitter generate";
                pass_filenames = false;
              };
            };
          };
        };

        devShells = {
          default = pkgs.mkShell {
            nativeBuildInputs = with pkgs; [
              nodejs
              nodePackages.node-gyp
              # broken (tree-sitter.override {webUISupport = true;})
              tree-sitter
              cargo
            ];

            inherit (checks.pre-commit) shellHook;
          };
        };

        packages = {
          default = packages.tree-sitter-beancount;

          tree-sitter-beancount = pkgs.callPackage (nixpkgs + "/pkgs/development/tools/parsing/tree-sitter/grammar.nix") {} {
            language = "beancount";
            src = ./.;
            inherit (pkgs.tree-sitter) version;
          };

          inherit (pkgs) tree-sitter;
        };
      }
    )
    // {
      overlays = {
        default = final: prev: {
          tree-sitter = prev.tree-sitter.override {
            extraGrammars = {
              tree-sitter-beancount = {
                src = ./.;
              };
            };
          };
        };
      };
    };
}
