# Justfile for tree-sitter-beancount
# Run `just --list` to see all available commands

# Default recipe - show help
default:
    @just --list

# ========================================
# Build & Test
# ========================================

# Generate parser from grammar.js
build:
    tree-sitter generate

# Run tree-sitter test suite
test:
    tree-sitter test

# Build and test
all: build test
    @echo "✅ Build and test completed successfully!"

# Run tests in watch mode
test-watch:
    #!/usr/bin/env bash
    while true; do
        tree-sitter test
        inotifywait -e modify grammar.js test/corpus/*.txt 2>/dev/null || sleep 2
    done

# Parse a specific beancount file for testing
parse FILE:
    tree-sitter parse {{FILE}}

# ========================================
# Language Bindings
# ========================================

# Build Rust bindings
build-rust:
    cargo build --release

# Test Rust bindings
test-rust:
    cargo test

# Build Node.js bindings
build-node:
    npm run build
    npm install

# Build Python bindings
build-python:
    python setup.py build

# Install Python bindings locally
install-python:
    pip install -e .

# ========================================
# Code Quality
# ========================================

# Format code
fmt:
    cargo fmt --all
    clang-format -i src/scanner.c

# Check formatting without modifying files
fmt-check:
    cargo fmt --all -- --check
    clang-format --dry-run --Werror src/scanner.c

# Run Rust clippy lints
clippy:
    cargo clippy --all-targets --all-features -- -D warnings

# Run clippy and automatically fix issues
clippy-fix:
    cargo clippy --all-targets --all-features --fix --allow-dirty --allow-staged

# Run all checks (format, clippy, test, build)
check: fmt-check clippy test build
    @echo "✅ All checks passed!"

# CI checks for continuous integration
ci: fmt-check clippy test build build-rust
    @echo "✅ All CI checks passed!"

# ========================================
# Documentation
# ========================================

# Generate Rust documentation
doc:
    cargo doc --all-features --no-deps

# Generate and open documentation
doc-open:
    cargo doc --all-features --no-deps --open

# ========================================
# Maintenance
# ========================================

# Clean build artifacts
clean:
    cargo clean
    rm -rf build/
    rm -rf dist/
    rm -f libtree-sitter-beancount.so
    rm -f libtree-sitter-beancount.a
    rm -f tree-sitter-beancount.pc
    @echo "✅ Cleaned build artifacts"

# Update dependencies
update:
    cargo update
    npm update

# Check for outdated dependencies
outdated:
    cargo outdated
    npm outdated

# Check for security vulnerabilities
audit:
    cargo audit

# ========================================
# Release Management
# ========================================

# Update CHANGELOG using git-cliff
changelog:
    git cliff --output CHANGELOG.md

# Update CHANGELOG for unreleased changes
changelog-unreleased:
    git cliff --unreleased --output CHANGELOG.md

# Bump version and update changelog (requires cargo-edit)
# Usage: just release-bump [patch|minor|major]
release-bump LEVEL:
    #!/usr/bin/env bash
    set -euo pipefail

    # Verify clean working directory
    if [[ -n $(git status --porcelain) ]]; then
        echo "❌ Error: Working directory is not clean. Commit or stash changes first."
        exit 1
    fi

    # Get current version from Cargo.toml
    CURRENT_VERSION=$(grep '^version =' Cargo.toml | head -n1 | sed 's/version = "\(.*\)"/\1/')
    echo "📦 Current version: $CURRENT_VERSION"

    # Bump Rust version
    echo "⬆️  Bumping {{LEVEL}} version in Cargo.toml..."
    cargo set-version --bump {{LEVEL}}

    # Get new version
    NEW_VERSION=$(grep '^version =' Cargo.toml | head -n1 | sed 's/version = "\(.*\)"/\1/')
    echo "📦 New version: $NEW_VERSION"

    # Update package.json version
    echo "📝 Updating package.json version to $NEW_VERSION..."
    jq --arg version "$NEW_VERSION" '.version = $version' package.json > package.json.tmp
    mv package.json.tmp package.json

    # Update tree-sitter.json version
    echo "📝 Updating tree-sitter.json version to $NEW_VERSION..."
    jq --arg version "$NEW_VERSION" '.metadata.version = $version' tree-sitter.json > tree-sitter.json.tmp
    mv tree-sitter.json.tmp tree-sitter.json

    # Update CHANGELOG (prepend new release, keep existing)
    echo "📝 Updating CHANGELOG..."
    git cliff --unreleased --tag "$NEW_VERSION" --prepend CHANGELOG.md

    # Stage changes
    git add Cargo.toml package.json tree-sitter.json CHANGELOG.md

    # Commit
    echo "💾 Creating release commit..."
    git commit -m "chore(release): prepare for v$NEW_VERSION"

    echo ""
    echo "✅ Release v$NEW_VERSION prepared!"
    echo "📋 Next steps:"
    echo "   1. Review the changes: git show HEAD"
    echo "   2. Create and push tag: git tag v$NEW_VERSION && git push origin v$NEW_VERSION"

# Auto-detect version bump from conventional commits and prepare release
release-auto:
    #!/usr/bin/env bash
    set -euo pipefail

    # Verify clean working directory
    if [[ -n $(git status --porcelain) ]]; then
        echo "❌ Error: Working directory is not clean. Commit or stash changes first."
        exit 1
    fi

    # Get current version
    CURRENT_VERSION=$(grep '^version =' Cargo.toml | head -n1 | sed 's/version = "\(.*\)"/\1/')
    echo "📦 Current version: $CURRENT_VERSION"

    # Auto-detect next version using git-cliff
    echo "🔍 Analyzing conventional commits to determine version bump..."
    BUMPED_VERSION=$(git cliff --unreleased --bumped-version 2>/dev/null | tail -1 | sed 's/^v//')

    if [[ -z "$BUMPED_VERSION" ]]; then
        echo "❌ Error: Could not determine version bump from commits."
        echo "💡 Hint: Use conventional commits (feat:, fix:, BREAKING CHANGE:)"
        echo "   - feat: → minor version bump"
        echo "   - fix: → patch version bump"
        echo "   - BREAKING CHANGE: → major version bump"
        exit 1
    fi

    echo "⬆️  Detected version bump: $CURRENT_VERSION → $BUMPED_VERSION"

    # Set Rust version directly
    echo "📝 Updating Cargo.toml version to $BUMPED_VERSION..."
    cargo set-version "$BUMPED_VERSION"

    # Update package.json version
    echo "📝 Updating package.json version to $BUMPED_VERSION..."
    jq --arg version "$BUMPED_VERSION" '.version = $version' package.json > package.json.tmp
    mv package.json.tmp package.json

    # Update tree-sitter.json version
    echo "📝 Updating tree-sitter.json version to $BUMPED_VERSION..."
    jq --arg version "$BUMPED_VERSION" '.metadata.version = $version' tree-sitter.json > tree-sitter.json.tmp
    mv tree-sitter.json.tmp tree-sitter.json

    # Update CHANGELOG (prepend new release, keep existing)
    echo "📝 Updating CHANGELOG..."
    git cliff --unreleased --tag "$BUMPED_VERSION" --prepend CHANGELOG.md

    # Stage changes
    git add Cargo.toml package.json tree-sitter.json CHANGELOG.md

    # Commit
    echo "💾 Creating release commit..."
    git commit -m "chore(release): prepare for v$BUMPED_VERSION"

    echo ""
    echo "✅ Release v$BUMPED_VERSION prepared!"
    echo "📋 Next steps:"
    echo "   1. Review the changes: git show HEAD"
    echo "   2. Create and push tag: git tag v$BUMPED_VERSION && git push origin v$BUMPED_VERSION"

# Prepare patch release (x.y.Z)
release-patch:
    just release-bump patch

# Prepare minor release (x.Y.0)
release-minor:
    just release-bump minor

# Prepare major release (X.0.0)
release-major:
    just release-bump major

# Create a release tag from current version
tag-release:
    #!/usr/bin/env bash
    set -euo pipefail
    VERSION=$(grep '^version =' Cargo.toml | head -n1 | sed 's/version = "\(.*\)"/\1/')
    git tag -a "v$VERSION" -m "chore(release): v$VERSION"
    echo "✅ Created tag: v$VERSION"
    echo "📋 Next step: git push origin v$VERSION"

# ========================================
# Nix Support
# ========================================

# Run nix flake checks
nix-check:
    nix flake check

# Build with nix
nix-build:
    nix build

# Enter nix development shell
nix-shell:
    nix develop
