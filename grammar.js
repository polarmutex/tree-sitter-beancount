module.exports = grammar({
    /*
     * From beancount grammar.y
     */

    name: "beancount",

    // Ensure we don't extract keywords from tokens
    word: ($) => $.identifier,

    inline: ($) => [
    ],

    conflicts: ($) => [
    ],

    externals: ($) => [
        $._stars,
        $._sectionend,
        $._eof,  // Basically just '\0', but allows multiple to be matched
    ],

    extras: ($) => [
        /( |\r|\t)+/,
    ],

    supertypes: $ => [
        $._entry,
        $._directive,
    ],

    rules: {
        file: $ => repeat(
            choice(
                $.section,
                $._declarations,
                $._nl,
            )
        ),

        _nl: _ => choice('\n', '\r'),
        _eol: $ => choice('\n', '\r', $._eof),
        _any: $ => /.*/,


        /*
         * Org Header Sections
         */
        section: $ => seq(
            field('headline', $.headline),
            repeat(choice(
                $._declarations,
                $._nl
            )),
            repeat(field('subsection', $.section)),
            $._sectionend
        ),
        _org_stars: $ => seq($._stars, /\*+/),
        headline: $ => seq(
            $._org_stars,
            /[ \t]+/, // so it's not part of (item)
            optional(field('item', $.item)),
            $._nl,
        ),
        item: $ => $._any,


        /* Types for terminal symbols */
        _indent: $ => token(/[ \r\t]+/),
        _eol: $ => token(/\n/),
        atat: $ => token('@@'),
        at: $ => token('@'),
        asterisk: $ => token('*'),
        slash: $ => token('/'),
        plus: $ => token('+'),
        minus: $ => token('-'),
        flag: $ => token(/[!&?%PSTCURM*#]/),
        _none: $ => token('NULL'),
        bool: $ => token(/TRUE|FALSE/),
        date: $ => token(/([12]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[12]\d|3[01]))/),
        //An account name is a colon-separated list of capitalized words which begin with a letter, and whose first word must be one of five account types:
        //Each component of the account names begin with a capital letter or a number and are followed by letters, numbers or dash (-) characters.
        //All other characters are disallowed.
        account: $ =>
            token(
                seq(
                    /Assets|Liabilities|Equity|Income|Expenses/,
                    repeat1(
                        seq(
                            ":",
                            /[\p{Lu}\p{N}][\p{L}\p{N}\-]*/,
                        ),
                    ),
                ),
            ),
        currency: $ => token(/[A-Z][A-Z0-9\'\._\-]{0,22}[A-Z0-9]/),
        string: $ => token(/"([^"]|\\")*"/),
        number: $ => token(/([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/),
        tag: $ => token(/#[A-Za-z0-9\-_/.]+/),
        link: $ => token(/\^[A-Za-z0-9\-_/.]+/),

        /* Operator precedence.
         * This is pulled straight out of the textbook example:
         * https://www.gnu.org/software/bison/manual/html_node/Infix-Calc.html#Infix-Calc
         */
        // %left MINUS PLUS
        // %left ASTERISK SLASH
        // %precedence NEGATIVE /* negation--unary minus */

        // Start symbol: file
        /* We have some number of expected shift/reduce conflicts at 'eol'. */
        //%expect 7

        /*--------------------------------------------------------------------------------*/
        /* Grammar Rules */

        txn: $ => choice(
            "txn",
            $.flag,
            "*",
            "#"
        ),

        _number_expr: $ =>
            choice(
                $.number,
                $._paren__number_expr,
                $.unary_number_expr,
                $.binary_number_expr,
            ),
        _paren__number_expr: $ =>
            seq(
                "(",
                $._number_expr,
                ")",
            ),
        unary_number_expr: $ =>
            prec(3,
                choice(
                    seq(
                        $.minus,
                        $._number_expr,
                    ),
                    seq(
                        $.plus,
                        $._number_expr,
                    ),
                ),
            ),
        binary_number_expr: $ =>
            prec(3,
                choice(
                    prec.left(1,
                        seq($._number_expr, $.plus, $._number_expr),
                    ),
                    prec.left(1,
                        seq($._number_expr, $.minus, $._number_expr),
                    ),
                    prec.left(2,
                        seq($._number_expr, $.asterisk, $._number_expr),
                    ),
                    prec.left(2,
                        seq($._number_expr, $.slash, $._number_expr),
                    ),
                ),
            ),

        // OPTIONAL
        _txn_strings: $ =>
            choice(
                seq(
                    field("payee", alias($.string, $.payee)),
                    field("narration", alias($.string, $.narration)),
                ),
                field("narration", alias($.string, $.narration)),
            ),

        // OPTIONAL
        tags_links: $ =>
            repeat1(
                //seq(
                //   optional($._indent),
                choice(
                    $.link,
                    $.tag,
                ),
                //),
            ),

        transaction: $ =>
            seq(
                field("date", $.date),
                field("txn", $.txn),
                optional($._txn_strings),
                field("tags_links", optional($.tags_links)),
                field("comment", optional($.comment)),
                $._eol,
                optional(
                    repeat1(
                        choice(
                            seq(
                                $._indent,
                                $._eol
                            ),
                            seq(
                                $._indent,
                                $.tags_links,
                                $._eol
                            ),
                            $._key_value_line,
                            $.posting,
                            seq(
                                $._indent,
                                field("comment", $.comment),
                                $._eol
                            )
                        )
                    ),
                ),

            ),

        // OPTIONAL
        optflag: $ =>
            choice(
                "*",
                "#",
                $.flag,
            ),

        price_annotation: $ => $.incomplete_amount,
        //choice(
        //    seq(
        //        $.atat,
        //        $.incomplete_amount
        //    ),
        //    seq(
        //        $.at,
        //        $.incomplete_amount
        //    )
        //),

        posting: $ =>
            choice(
                seq(
                    $._indent,
                    field("optflag", optional($.optflag)),
                    field("account", $.account),
                    field("amount", optional($.incomplete_amount)),
                    field("cost_spec", optional($.cost_spec)),
                    field("comment", optional($.comment)),
                    $._eol
                ),
                seq(
                    $._indent,
                    field("optflag", optional($.optflag)),
                    field("account", $.account),
                    field("amount", optional($.incomplete_amount)),
                    field("cost_spec", optional($.cost_spec)),
                    $.at,
                    field("price_annotation", optional($.price_annotation)),
                    field("comment", optional($.comment)),
                    $._eol
                ),
                seq(
                    $._indent,
                    field("optflag", optional($.optflag)),
                    field("account", $.account),
                    field("amount", optional($.incomplete_amount)),
                    field("cost_spec", optional($.cost_spec)),
                    $.atat,
                    field("price_annotation", optional($.price_annotation)),
                    field("comment", optional($.comment)),
                    $._eol
                ),
                seq(
                    $._indent,
                    field("optflag", optional($.optflag)),
                    field("account", $.account),
                    field("amount", optional($.incomplete_amount)),
                    field("comment", optional($.comment)),
                    $._eol
                )
            ),

        key: $ => token(/[a-z][a-zA-Z0-9\-_]+/),

        value: $ =>
            choice(
                $.string,
                $.account,
                $.date,
                $.currency,
                $.tag,
                $.bool,
                $._none,
                $._number_expr,
                $.amount
            ),

        key_value: $ =>
            prec.left(seq(
                $.key,
                ":",
                $.value,
            )),

        _key_value_line: $ => seq(
            $._indent,
            /*prec.left(seq(
                $.key,
                ":",
                $.value,
            )),*/
            $.key_value,
            $._eol
        ),

        // OPTIONAL
        _key_value_list: $ =>
            repeat1(
                choice(
                    seq(
                        $._indent,
                        $._eol
                    ),
                    seq(
                        $._key_value_line
                    ),
                    seq(
                        $._indent,
                        field("comment", $.comment),
                        $._eol
                    ),
                )
            ),

        // OPTIONAL

        pushtag: $ => seq(
            "pushtag",
            $.tag,
            $._eol
        ),

        poptag: $ => seq(
            "poptag",
            $.tag,
            $._eol
        ),

        pushmeta: $ => seq(
            "pushmeta",
            $.key_value,
            $._eol
        ),

        popmeta: $ => seq(
            "popmeta",
            $.key,
            ":",
            $._eol
        ),

        open: $ =>
            seq(
                field("date", $.date),
                "open",
                field("account", $.account),
                field("currencies", repeat(
                    seq(
                        $.currency,
                        repeat(
                            seq(
                                ",",
                                $.currency
                            )
                        )
                    ),
                )),
                field("opt_booking", optional($.opt_booking)),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        // OPTIONAL
        opt_booking: $ => $.string,

        close: $ =>
            seq(
                field("date", $.date),
                "close",
                field("account", $.account),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        commodity: $ =>
            seq(
                field("date", $.date),
                "commodity",
                field("currency", $.currency),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        pad: $ =>
            seq(
                field("date", $.date),
                "pad",
                field("account", $.account),
                field("from_account", $.account),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        balance: $ =>
            seq(
                field("date", $.date),
                "balance",
                field("account", $.account),
                field("amount",
                    //choice(
                    //    $.amount,
                    $.amount_tolerance,
                    //)
                ),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        amount: $ =>
            seq(
                $._number_expr,
                $.currency
            ),

        amount_tolerance: $ =>
            choice(
                seq(
                    $._number_expr,
                    $.currency
                ),
                seq(
                    $._number_expr,
                    "~",
                    $._number_expr,
                    $.currency
                )
            ),

        // Just Optional number_expr
        //maybe_number:

        // Just Optional currency
        //maybe_currency:

        compound_amount: $ =>
            choice(
                seq(
                    field("per", optional($._number_expr)),
                    field("currency", $.currency)
                ),
                seq(
                    field("per", $._number_expr),
                    field("currency", optional($.currency))
                ),
                seq(
                    field("per", optional($._number_expr)),
                    "#",
                    field("total", optional($._number_expr)),
                    field("currency", $.currency)
                ),
            ),

        // OPTIONAL
        // TODO may need a chice here
        incomplete_amount: $ =>
            seq(
                $._number_expr, // maybe_number
                $.currency      // maybe_currenecy
            ),

        // OPTIONAL
        cost_spec: $ =>
            choice(
                seq(
                    "{",
                    field("cost_comp_list", optional($._cost_comp_list)),
                    "}"
                ),
                seq(
                    "{{",
                    field("cost_comp_list", optional($._cost_comp_list)),
                    "}}"
                ),
            ),

        // OPTIONAL
        _cost_comp_list: $ =>
            seq(
                $.cost_comp,
                repeat(
                    seq(
                        ",",
                        $.cost_comp
                    )
                )
            ),

        cost_comp: $ =>
            choice(
                $.compound_amount,
                $.date,
                $.string,
                "*"
            ),

        price: $ =>
            seq(
                field("date", $.date),
                "price",
                field("currency", $.currency),
                field("amount", $.amount),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        event: $ =>
            seq(
                field("date", $.date),
                "event",
                field("type", $.string),
                field("desc", $.string),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        query: $ =>
            seq(
                field("date", $.date),
                "query",
                field("name", $.string),
                field("query", $.string),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        note: $ =>
            seq(
                field("date", $.date),
                "note",
                field("account", $.account),
                field("note", $.string),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        filename: $ => $.string,

        document: $ =>
            seq(
                field("date", $.date),
                "document",
                field("account", $.account),
                field("filename", $.filename),
                field("tags_links", optional($.tags_links)),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        custom_value: $ =>
            choice(
                $.string,
                $.date,
                $.bool,
                $.amount,
                $._number_expr,
                $.account
            ),


        custom: $ =>
            seq(
                field("date", $.date),
                "custom",
                field("name", $.string),
                field("custom_value_list", optional(
                    repeat1(
                        $.custom_value
                    ),
                )),
                field("comment", optional($.comment)),
                $._eol,
                optional($._key_value_list)
            ),

        _entry: $ =>
            choice(
                $.transaction,
                $.balance,
                $.open,
                $.close,
                $.pad,
                $.document,
                $.note,
                $.event,
                $.price,
                $.commodity,
                $.query,
                $.custom,
            ),

        option: $ => seq(
            "option",
            field("key", $.string),
            field("value", $.string),
            $._eol,
        ),

        include: $ => seq(
            "include",
            $.string,
            $._eol,
        ),

        plugin: $ =>
            choice(
                seq(
                    "plugin",
                    $.string,
                    $._eol
                ),
                seq(
                    "plugin",
                    $.string,
                    $.string,
                    $._eol
                ),
            ),

        _directive: $ =>
            choice(
                $.pushtag,
                $.poptag,
                $.pushmeta,
                $.popmeta,
                $.option,
                $.include,
                $.plugin
            ),

        _declarations: $ => choice(
            $._directive,
            $._entry,
            $._skipped_lines,
        ),

        /* End Grammar Rules */
        /*--------------------------------------------------------------------------------*/

        comment: $ => seq(';', /.*/),

        // NOTE: includes reserved identifiers
        identifier: $ => /[a-z]+/,

        _skipped_lines: $ =>
            choice(
                seq(
                    $.flag,
                    /.*/,
                    $._eol
                ),
                seq(
                    ":",
                    /.*/,
                    $._eol
                ),
                $._eol,
                seq(
                    $.comment,
                    $._eol
                ),
            ),

        _ASCII: $ => /[\x00-\x7f]/,
        _UTF_8_1: $ => /[\x80-\xbf]/,
        _UTF_8_2: $ => seq(
            /[\xc2-\xdf]/,
            $._UTF_8_1,
        ),
        _UTF_8_3: $ => choice(
            seq(
                /\xe0[\xa0-\xbf]/,
                $._UTF_8_1,
            ),
            seq(
                /[\xe1-\xec]/,
                $._UTF_8_1,
                $._UTF_8_1,
            ),
            seq(
                /\xed[\x80-\x9f]/,
                $._UTF_8_1,
            ),
            seq(
                /[\xee-\xef]/,
                $._UTF_8_1,
                $._UTF_8_1,
            ),
        ),
        _UTF_8_4: $ => choice(
            seq(
                /\xf0[\x90-\xbf]/,
                $._UTF_8_1,
                $._UTF_8_1,
            ),
            seq(
                /[\xf1-\xf3]/,
                $._UTF_8_1,
                $._UTF_8_1,
                $._UTF_8_1,
            ),
            seq(
                /\xf4[\x80-\x8f]/,
                $._UTF_8_1,
                $._UTF_8_1,
            ),
        ),
        _UTF_8_ONLY: $ => choice(
            $._UTF_8_2,
            $._UTF_8_3,
            $._UTF_8_4,
        ),
        _UTF_8: $ => choice(
            $._ASCII,
            $._UTF_8_ONLY,
        ),
    }
})
