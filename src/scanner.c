#include <assert.h>
#include <signal.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <tree_sitter/parser.h>
#include <wctype.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define VEC_RESIZE(vec, _cap)                                                  \
    void *tmp = realloc((vec).data, (_cap) * sizeof((vec).data[0]));           \
    assert(tmp != NULL);                                                       \
    (vec).data = tmp;                                                          \
    (vec).cap = (_cap);

#define VEC_GROW(vec, _cap)                                                    \
    if ((vec).cap < (_cap)) {                                                  \
        VEC_RESIZE((vec), (_cap));                                             \
    }

#define VEC_PUSH(vec, el)                                                      \
    if ((vec).cap == (vec).len) {                                              \
        VEC_RESIZE((vec), MAX(16, (vec).len * 2));                             \
    }                                                                          \
    (vec).data[(vec).len++] = (el);

#define VEC_POP(vec) (vec).len--;

#define VEC_NEW                                                                \
    { .len = 0, .cap = 0, .data = NULL }

#define VEC_BACK(vec) ((vec).data[(vec).len - 1])

#define VEC_FREE(vec)                                                          \
    {                                                                          \
        if ((vec).data != NULL)                                                \
            free((vec).data);                                                  \
    }

#define VEC_CLEAR(vec) (vec).len = 0;

enum TokenType {
    SECTION,
    SECTIONEND,
    END_OF_FILE,
    ERROR,
};

typedef struct {
    uint32_t len;
    uint32_t cap;
    int16_t *data;
} vec;

vec vec_new() {
    vec vec = VEC_NEW;
    vec.data = calloc(1, sizeof(uint16_t));
    vec.cap = 1;
    return vec;
}

typedef struct {
    vec indent_length_stack;
    vec org_section_stack;
} Scanner;

static void advance(TSLexer *lexer) {
    lexer->advance(lexer, false);
}

static void skip(TSLexer *lexer) {
    lexer->advance(lexer, true);
}

unsigned serialize(Scanner *scanner, char *buffer) {
    size_t size = 0;

    size_t indent_count = scanner->indent_length_stack.len - 1;
    if (indent_count > UINT8_MAX) {
        indent_count = UINT8_MAX;
    }
    buffer[size++] = (char)indent_count;

    int iter = 1;
    for (; iter < scanner->indent_length_stack.len
           && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
         ++iter) {
        /* printf("writing %d\n",
         * (char)scanner->indent_length_stack.data[iter]); */
        buffer[size++] = (char)scanner->indent_length_stack.data[iter];
    }

    size_t org_section_count = scanner->org_section_stack.len - 1;
    if (org_section_count > UINT8_MAX) {
        org_section_count = UINT8_MAX;
    }
    buffer[size++] = (char)org_section_count;

    iter = 1;
    for (; iter < scanner->org_section_stack.len
           && size < TREE_SITTER_SERIALIZATION_BUFFER_SIZE;
         ++iter) {
        /* printf("writing %d\n", (char)scanner->org_section_stack.data[iter]);
         */
        buffer[size++] = (char)scanner->org_section_stack.data[iter];
    }

    /* printf("wrote %zu bytes\n\n", size); */
    return size;
}

void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
    VEC_CLEAR(scanner->org_section_stack);
    VEC_PUSH(scanner->org_section_stack, 0);
    VEC_CLEAR(scanner->indent_length_stack);
    VEC_PUSH(scanner->indent_length_stack, 0);

    if (length == 0) {
        return;
    }

    size_t size = 0;

    size_t indent_count = (unsigned char)buffer[size++];

    for (; size <= indent_count; size++) {
        /* printf("reading %d\n", (unsigned char)buffer[size]); */
        VEC_PUSH(scanner->indent_length_stack, (unsigned char)buffer[size]);
    }

    size_t org_section_count = (unsigned char)buffer[size++];

    for (; size < length; size++) {
        /* printf("reading %d\n", (unsigned char)buffer[size]); */
        VEC_PUSH(scanner->org_section_stack, (unsigned char)buffer[size]);
    }

    /* printf("read %zu bytes\n\n", size); */
    /* int n = rand(); */
    /* if (n != 0 && n % 10 == 0) { */
    /*     raise(SIGSEGV); */
    /* } */

    assert(size == length);
}

bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
    bool error_recovery_mode = valid_symbols[SECTION]
                            && valid_symbols[SECTIONEND]
                            && valid_symbols[END_OF_FILE];

    // - Section ends
    int16_t indent_length = 0;
    lexer->mark_end(lexer);
    for (;;) {
        if (lexer->lookahead == ' ') {
            indent_length++;
        } else if (lexer->lookahead == '\t') {
            indent_length += 8;
        } else if (lexer->eof(lexer)) {

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

        if (valid_symbols[SECTIONEND] && iswspace(lexer->lookahead) && stars > 0
            && stars <= VEC_BACK(scanner->org_section_stack)) {
            VEC_POP(scanner->org_section_stack);
            lexer->result_symbol = SECTIONEND;
            return true;
        }
        if (valid_symbols[SECTION] && !error_recovery_mode
            && iswspace(lexer->lookahead)) {
            VEC_PUSH(scanner->org_section_stack, stars);
            lexer->result_symbol = SECTION;
            return true;
        }
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
