#include <stdio.h> // test
#include <tree_sitter/parser.h>
#include <wctype.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

typedef struct {
    uint32_t length;
    uint32_t capacity;
    int16_t *data;
} vec;

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                  \
    void *tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));           \
    (vec).data = tmp;                                                          \
    (vec).capacity = (_cap);

#define VEC_GROW(vec, _cap)                                                    \
    if ((vec).capacity < (_cap)) {                                             \
        VEC_RESIZE((vec), (_cap));                                             \
    }

#define VEC_PUSH(vec, el)                                                      \
    if ((vec).capacity == (vec).length) {                                      \
        VEC_RESIZE((vec), MAX(16, (vec).length * 2));                          \
    }                                                                          \
    (vec).data[(vec).length++] = (el);

#define VEC_POP(vec) (vec).length--;

#define VEC_NEW                                                                \
    { .len = 0, .capacity = 0, .data = NULL }

#define VEC_BACK(vec) ((vec).data[(vec).length - 1])

#define VEC_FREE(vec)                                                          \
    {                                                                          \
        if ((vec).data != NULL)                                                \
            free((vec).data);                                                  \
    }

#define VEC_CLEAR(vec) (vec).length = 0;

enum TokenType {
    SECTION,
    SECTIONEND,
    END_OF_FILE,
};

typedef struct {
    vec indent_length_stack;
    vec org_section_stack;
} Scanner;

unsigned serialize(Scanner *scanner, char *buffer) {
    size_t i = 0;

    size_t indent_count = scanner->indent_length_stack.length - 1;
    if (indent_count > UINT8_MAX)
        indent_count = UINT8_MAX;
    buffer[i++] = (char)indent_count;

    int iter = 1;
    for (; iter < scanner->indent_length_stack.length
           && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
         ++iter) {
        buffer[i++] = (char)scanner->indent_length_stack.data[iter];
    }

    size_t org_section_count = scanner->org_section_stack.length - 1;
    if (org_section_count > UINT8_MAX)
        org_section_count = UINT8_MAX;
    buffer[i++] = (char)org_section_count;

    iter = 1;
    for (; iter < scanner->org_section_stack.length
           && i < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
         ++iter) {
        buffer[i++] = (char)scanner->org_section_stack.data[iter];
    }

    return i;
}

void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
    VEC_CLEAR(scanner->org_section_stack);
    VEC_PUSH(scanner->org_section_stack, 0);
    VEC_CLEAR(scanner->indent_length_stack);
    VEC_PUSH(scanner->indent_length_stack, 0);

    if (length == 0)
        return;

    size_t i = 0;

    size_t indent_count = (unsigned char)buffer[i++];
    for (; i <= indent_count; i++) {
        VEC_PUSH(scanner->indent_length_stack, (unsigned char)buffer[i]);
    }

    size_t org_section_count = (unsigned char)buffer[i++];
    for (; i < length; i++) {
        VEC_PUSH(scanner->org_section_stack, (unsigned char)buffer[i]);
    }
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

static bool is_headline_marker(char c) {
    return c == '*' || c == '#';
}

bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {

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

    if (indent_length == 0 && is_headline_marker(lexer->lookahead)) {
        lexer->mark_end(lexer);
        int16_t stars = 1;
        skip(lexer);
        while (is_headline_marker(lexer->lookahead)) {
            stars++;
            skip(lexer);
        }

        if (valid_symbols[SECTIONEND] && iswspace(lexer->lookahead) && stars > 0
            && stars <= VEC_BACK(scanner->org_section_stack)) {
            VEC_POP(scanner->org_section_stack);
            lexer->result_symbol = SECTIONEND;
            return true;
        } else if (valid_symbols[SECTION] && iswspace(lexer->lookahead)) {
            VEC_PUSH(scanner->org_section_stack, stars);
            lexer->result_symbol = SECTION;
            return true;
        }
        return false;
    }

    return false; // default
}

void *tree_sitter_beancount_external_scanner_create() {
    Scanner *scanner = (Scanner *)calloc(1, sizeof(Scanner));
    deserialize(scanner, NULL, 0);
    return scanner;
}

bool tree_sitter_beancount_external_scanner_scan(void *payload,
                                                 TSLexer *lexer,
                                                 const bool *valid_symbols) {
    Scanner *scanner = (Scanner *)payload;
    return scan(scanner, lexer, valid_symbols);
}

unsigned tree_sitter_beancount_external_scanner_serialize(void *payload,
                                                          char *buffer) {
    Scanner *scanner = (Scanner *)payload;
    return serialize(scanner, buffer);
}

void tree_sitter_beancount_external_scanner_deserialize(void *payload,
                                                        const char *buffer,
                                                        unsigned length) {
    Scanner *scanner = (Scanner *)payload;
    deserialize(scanner, buffer, length);
}

void tree_sitter_beancount_external_scanner_destroy(void *payload) {
    Scanner *scanner = (Scanner *)payload;
    VEC_FREE(scanner->indent_length_stack);
    VEC_FREE(scanner->org_section_stack);
    free(scanner);
}
