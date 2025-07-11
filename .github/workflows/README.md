# GitHub Actions Workflows

This directory contains GitHub Actions workflows following best practices for tree-sitter grammar repositories in 2024.

## Workflows Overview

### 🔧 CI (`ci.yml`)

**Main continuous integration pipeline using official tree-sitter actions**

- **Triggers**: Push to master/devel, PRs affecting grammar/tests/bindings/queries
- **Cross-platform testing**: Ubuntu, Windows, macOS
- **Language bindings**: Tests Rust, Node.js, Python, Go, Swift
- **Query validation**: Tests all query files (highlights, locals, folds, textobjects, indents)
- **Example parsing**: Clones and parses real Beancount files
- **Performance monitoring**: Ensures parsing speed > 5000 bytes/ms
- **Security checks**: Basic file scanning and dependency auditing
- **Metadata validation**: Validates package.json and Cargo.toml

### 🚀 Release (`release.yml`)

**Automated release and publishing pipeline**

- **Triggers**: Push to master, manual dispatch
- **Release creation**: Uses release-please with conventional commits
- **Artifact building**: WebAssembly binaries and source tarballs
- **Multi-registry publishing**:
  - 📦 **Crates.io** - Rust packages
  - 📦 **npm** - Node.js packages
  - 📦 **PyPI** - Python packages (auto-generated setup.py)
- **Security**: Build attestations and artifact verification
- **Status reporting**: Comprehensive release summary

### 🔄 Regenerate (`regenerate.yml`)

**Automated parser regeneration and maintenance**

- **Scheduled checks**: Weekly tree-sitter version monitoring
- **Dependency updates**: Auto-regenerates parser on dependency PRs
- **Issue creation**: Creates update issues for new tree-sitter versions
- **Query validation**: Validates all query files on schedule
- **Performance testing**: Monitors query performance

### 🔒 Security (`security.yml`)

**Comprehensive security scanning**

- **Daily scans**: Automated security checks
- **Multi-layer scanning**:
  - 🦀 **Cargo audit** - Rust vulnerability scanning
  - 📦 **NPM audit** - Node.js vulnerability scanning
  - 🔍 **CodeQL** - Static analysis for C++ and JavaScript
  - 🕵️ **TruffleHog** - Secret detection in git history

## Best Practices Implemented

### 🎯 Tree-sitter Specific

- Uses official `tree-sitter/setup-action/cli@v1`
- Uses `tree-sitter/parser-test-action@v2` for comprehensive testing
- Tests multiple language bindings appropriately per platform
- Includes fuzz testing for scanner changes
- Validates all query files with actual test corpus

### 🔧 Modern GitHub Actions

- **Concurrency control**: Cancels redundant workflow runs
- **Path-based triggers**: Only runs when relevant files change
- **Matrix strategies**: Tests across multiple OS and language versions
- **Caching**: Aggressive caching for dependencies and build artifacts
- **Security**: Proper permissions, secret handling, attestations
- **Performance**: Lightweight operations, parallel jobs

### 📋 Maintenance Automation

- **Dependabot integration**: Automated dependency updates
- **Parser regeneration**: Auto-updates parser on dependency changes
- **Version monitoring**: Tracks tree-sitter CLI updates
- **Query validation**: Ensures query files remain functional

### 🛡️ Security Focus

- **Vulnerability scanning**: Multiple tools and languages
- **Secret detection**: Historical and current codebase scanning
- **File security**: Permission and sensitive file checks
- **Supply chain**: Package integrity and typosquatting detection
- **Attestations**: Build provenance for releases

## Configuration

### Required Secrets

- `CARGO_API_KEY` - Crates.io publishing
- `NPM_TOKEN` - npm publishing
- `PYPI_API_TOKEN` - PyPI publishing

### Required Permissions

Workflows use minimal required permissions:

- `contents: read/write` - Repository access
- `security-events: write` - Security scan results
- `packages: write` - Package publishing
- `attestations: write` - Build attestations
- `id-token: write` - OIDC token for attestations

### Customization

- Update `polarmutex` references to your GitHub username
- Modify reviewer assignments in dependabot.yml
- Adjust security scan schedules as needed
- Configure additional language bindings if required

## Monitoring

### Workflow Status

- All workflows report status to GitHub Actions dashboard
- Security scans create comprehensive summaries
- Performance regressions fail CI builds
- Release workflows show multi-registry publishing status

### Notifications

- Dependabot creates PRs for updates
- Security issues create GitHub Issues automatically
- Failed workflows trigger GitHub notifications
- Release summaries provide deployment status

## Usage

These workflows automatically:

1. **Test** all changes across platforms and language bindings
2. **Validate** query files and performance
3. **Scan** for security vulnerabilities daily
4. **Update** dependencies weekly
5. **Regenerate** parser when needed
6. **Release** to multiple package registries
7. **Monitor** for tree-sitter updates

No manual intervention required for routine maintenance!
