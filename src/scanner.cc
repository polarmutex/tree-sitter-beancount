#include <cwctype>
#include <tree_sitter/parser.h>
#include <vector>

namespace {

using std::iswspace;
using std::vector;

enum TokenType {
    SECTION,
    SECTIONEND,
    END_OF_FILE,
};

struct Scanner {
    vector<int16_t> indent_length_stack;
    vector<int16_t> org_section_stack;

    Scanner() {
        deserialize(NULL, 0);
    }

    unsigned serialize(char *buffer) {
        size_t i = 0;

        size_t indent_count = indent_length_stack.size() - 1;
        if (indent_count > UINT8_MAX)
            indent_count = UINT8_MAX;
        buffer[i++] = indent_count;

        vector<int16_t>::iterator iter = indent_length_stack.begin() + 1,
                                  end = indent_length_stack.end();

        for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
             ++iter) {
            buffer[i++] = *iter;
        }

        iter = org_section_stack.begin() + 1;
        end = org_section_stack.end();

        for (; iter != end && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
             ++iter) {
            buffer[i++] = *iter;
        }

        return i;
    }

    void deserialize(const char *buffer, unsigned length) {
        org_section_stack.clear();
        org_section_stack.push_back(0);
        indent_length_stack.clear();
        indent_length_stack.push_back(-1);

        if (length == 0)
            return;

        size_t i = 0;

        size_t indent_count = (uint8_t)buffer[i++];

        for (; i <= indent_count; i++)
            indent_length_stack.push_back(buffer[i]);
        for (; i < length; i++)
            org_section_stack.push_back(buffer[i]);
    }

    void advance(TSLexer *lexer) {
        lexer->advance(lexer, false);
    }

    void skip(TSLexer *lexer) {
        lexer->advance(lexer, true);
    }

    static bool in_error_recovery(const bool *valid_symbols) {
        return (valid_symbols[SECTION] && valid_symbols[SECTIONEND]
                && valid_symbols[END_OF_FILE]);
    }

    bool scan(TSLexer *lexer, const bool *valid_symbols) {

        if (in_error_recovery(valid_symbols))
            return false;

        // - Section ends
        int16_t indent_length = 0;
        lexer->mark_end(lexer);
        for (;;) {
            if (lexer->lookahead == ' ') {
                indent_length++;
            } else if (lexer->lookahead == '\t') {
                indent_length += 8;
            } else if (lexer->lookahead == '\0') {

                if (valid_symbols[SECTIONEND]) {
                    lexer->result_symbol = SECTIONEND;
                } else if (valid_symbols[END_OF_FILE]) {
                    lexer->result_symbol = END_OF_FILE;
                } else {
                    return false;
                }

                return true;
            } else {
                break;
            }
            skip(lexer);
        }

        if (indent_length == 0 && lexer->lookahead == '*') {
            lexer->mark_end(lexer);
            int16_t stars = 1;
            skip(lexer);
            while (lexer->lookahead == '*') {
                stars++;
                skip(lexer);
            }

            if (valid_symbols[SECTIONEND] && iswspace(lexer->lookahead)
                && stars > 0 && stars <= org_section_stack.back()) {
                org_section_stack.pop_back();
                lexer->result_symbol = SECTIONEND;
                return true;
            } else if (valid_symbols[SECTION] && iswspace(lexer->lookahead)) {
                org_section_stack.push_back(stars);
                lexer->result_symbol = SECTION;
                return true;
            }
            return false;
        }

        return false; // default
    }
};

} // namespace

extern "C" {

void *tree_sitter_beancount_external_scanner_create() {
    return new Scanner();
}

bool tree_sitter_beancount_external_scanner_scan(void *payload,
                                                 TSLexer *lexer,
                                                 const bool *valid_symbols) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_beancount_external_scanner_serialize(void *payload,
                                                          char *buffer) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    return scanner->serialize(buffer);
}

void tree_sitter_beancount_external_scanner_deserialize(void *payload,
                                                        const char *buffer,
                                                        unsigned length) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    scanner->deserialize(buffer, length);
}

void tree_sitter_beancount_external_scanner_destroy(void *payload) {
    Scanner *scanner = static_cast<Scanner *>(payload);
    delete scanner;
}
}
