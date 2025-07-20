{
  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    nixpkgs = {
      url = "github:NixOS/nixpkgs/nixos-unstable";
    };
    pre-commit-hooks = {
      url = "github:cachix/pre-commit-hooks.nix";
      inputs = {
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
    {
      overlays.default = final: prev: {
        tree-sitter =
          (prev.rustPlatform.buildRustPackage rec {
            pname = "tree-sitter";
            version = "0.25.8";

            src = prev.fetchFromGitHub {
              owner = "tree-sitter";
              repo = "tree-sitter";
              rev = "v${version}";
              hash = "sha256-q465DMTiFHoOZy6cMvrSywwO1qJVXPmQ0OVIPmwib6c=";
            };

            cargoHash = "sha256-5xtsNE94J5Hg8rGkyzx8P6c8vl1x17zgpSulcGNVKmI=";

            # Skip tests for now as some are failing
            doCheck = false;

            buildInputs = prev.lib.optionals prev.stdenv.isDarwin [
              prev.darwin.apple_sdk.frameworks.Security
            ];

            # Skip shell completions generation for now
            # The generate-completions subcommand may not be available in this version
            postInstall = ''
              # Future: Add shell completions generation when available
            '';

            meta = with prev.lib; {
              description = "A parser generator tool and an incremental parsing library";
              homepage = "https://tree-sitter.github.io/";
              changelog = "https://github.com/tree-sitter/tree-sitter/releases/tag/v${version}";
              license = licenses.mit;
              maintainers = with maintainers; [siraben];
              mainProgram = "tree-sitter";
            };
          })
          // {
            # Add the buildGrammar function from the original tree-sitter package
            buildGrammar = prev.tree-sitter.buildGrammar;
          };
      };
    }
    // flake-utils.lib.eachDefaultSystem
    (
      system: let
        pkgs = import nixpkgs {
          inherit system;
          overlays = [self.overlays.default];
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
              # clang-format = {
              #   enable = true;
              #   name = "clang-format";
              #   entry = "${pkgs.clang-tools}/bin/clang-format -style=file -i";
              #   types = ["text" "c"];
              #   # I don't care for generated files' formatting
              #   excludes = ["src/parser.c" "src/tree_sitter/parser.h"];
              #   language = "system";
              # };

              alejandra.enable = true;

              tree-sitter = {
                enable = true;
                name = "tree-sitter tests";
                entry = "${tree-sitter-env}/bin/tree-sitter test";
                pass_filenames = false;
              };

              # tree-sitter-files = {
              #   enable = true;
              #   name = "tree-sitter generated files";
              #   entry = "${tree-sitter-env}/bin/tree-sitter generate --no-bindings";
              #   pass_filenames = false;
              # };
            };
          };
        };

        devShells = {
          default = pkgs.mkShell {
            nativeBuildInputs = with pkgs; [
              nodejs_22
              nodePackages.node-gyp
              # broken (tree-sitter.override {webUISupport = true;})
              tree-sitter
              cargo
              python3
              packages.sync-versions
            ];

            inherit (checks.pre-commit) shellHook;
          };
        };

        packages = {
          default = packages.tree-sitter-beancount;

          tree-sitter-beancount = pkgs.tree-sitter.buildGrammar {
            language = "beancount";
            generate = true;
            src = ./.;
            version = "n/a";
          };

          inherit (pkgs) tree-sitter;

          sync-versions = pkgs.writeShellScriptBin "sync-versions" ''
            set -euo pipefail

            # Get versions from Nix packages
            NODE_VERSION=$(${pkgs.nodejs_22}/bin/node --version | sed 's/v//')
            TREE_SITTER_VERSION=$(${pkgs.tree-sitter}/bin/tree-sitter --version | cut -d' ' -f2)

            echo "Syncing versions:"
            echo "  Node.js: $NODE_VERSION"
            echo "  tree-sitter: $TREE_SITTER_VERSION"

            # Update package.json with extracted versions (use compatible ranges)
            ${pkgs.jq}/bin/jq \
              --arg node_version ">=''${NODE_VERSION%.*}.0" \
              --arg ts_version "^''${TREE_SITTER_VERSION%.*}.0" \
              '.engines.node = $node_version |
               .devDependencies."tree-sitter-cli" = $ts_version |
               .peerDependencies."tree-sitter" = $ts_version' \
              package.json > package.json.tmp && mv package.json.tmp package.json

            echo "Updated package.json versions"
            echo "Run 'npm install' to update package-lock.json"
          '';
        };
      }
    );
}
