module.exports = grammar({
    /*
     * From beancount grammar.y
     */

    name: 'beancount',

    extras: $ => [/[ \t\r ]/],

    // TODO look at this to speed up
    word: $ => $.identifier,

    //conflicts: $ => [[$.posting], [$.tags_links]],

    rules: {

        file: $ => repeat($._declarations),

        /* Types for terminal symbols */
        _indent:    $ => token(/[ \r\t]+/),
        _eol:       $ => token(/\n/),
        _pipe:      $ => token('|'),
        atat:       $ => token('@@'),
        at:         $ => token('@'),
        lcurllcurl: $ => token('{{'),
        rcurlrcurl: $ => token('}}'),
        lcurl:      $ => token('{'),
        rcurl:      $ => token('}'),
        _equal:     $ => token('='),
        _comma:     $ => token(','),
        _tilde:     $ => token('~'),
        _hash:      $ => token('#'),
        asterisk:   $ => token('*'),
        slash:      $ => token('/'),
        _colon:     $ => token(':'),
        plus:       $ => token('+'),
        minus:      $ => token('-'),
        _lparen:    $ => token('('),
        _rparen:    $ => token(')'),
        flag:       $ => token(/[!&?%PSTCURM*#]/),
        TXN:        $ => token('txn'),
        BALANCE:    $ => token('balance'),
        OPEN:       $ => token('open'),
        CLOSE:      $ => token('close'),
        COMMODITY:  $ => token('commodity'),
        PAD:        $ => token('pad'),
        EVENT:      $ => token('event'),
        PRICE:      $ => token('price'),
        NOTE:       $ => token('note'),
        DOCUMENT:   $ => token('document'),
        QUERY:      $ => token('query'),
        CUSTOM:     $ => token('custom'),
        PUSHTAG:    $ => token('pushtag'),
        POPTAG:     $ => token('poptag'),
        PUSHMETA:   $ => token('pushmeta'),
        POPMETA:    $ => token('popmeta'),
        OPTION:     $ => token('option'),
        INCLUDE:    $ => token('include'),
        PLUGIN:     $ => token('plugin'),
        _none:      $ => token('NULL'),
        bool:       $ => token(/TRUE|FALSE/),
        date:       $ => token(/([12]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[12]\d|3[01]))/),
        account:    $ =>
            token(
                seq(
                    /[A-Z]|[^\x00-\x7F]/,
                    repeat(/[A-Za-z0-9\-]|[^\x00-\x7F]/),
                    repeat1(
                        seq(
                            ":",
                            /[A-Z0-9]|[^\x00-\x7F]/,
                            repeat(/[A-Za-z0-9\-]|[^\x00-\x7F]/),
                        ),
                    ),
                ),
            ),
        currency:   $ => token(/[A-Z][A-Z0-9\'\._\-]{0,22}[A-Z0-9]/),
        string:     $ => token(/"[^"]*"/),
        number:     $ => token(/([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/),
        tag:        $ => token(/#[A-Za-z0-9\-_/.]+/),
        link:       $ => token(/\^[A-Za-z0-9\-_/.]+/),
        key:        $ => token(/[a-z][a-zA-Z0-9\-_]+/),

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
            $.TXN,
            $.flag,
            $.asterisk,
            $._hash
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
                $._lparen,
                $._number_expr,
                $._rparen,
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
                        seq( $._number_expr, $.plus, $._number_expr ),
                    ),
                    prec.left(1,
                        seq( $._number_expr, $.minus, $._number_expr ),
                    ),
                    prec.left(2,
                        seq( $._number_expr, $.asterisk, $._number_expr ),
                    ),
                    prec.left(2,
                        seq( $._number_expr, $.slash, $._number_expr ),
                    ),
                ),
            ),

        // OPTIONAL
        txn_strings: $ =>
            seq(
                $.string,
                optional($.string),
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
                field("txn_strings", optional($.txn_strings)),
                field("tags_links", optional($.tags_links)),
                field("comment", optional($.comment)),
                $._eol,
                field("posting_or_kv_list", optional($.posting_or_kv_list)),
            ),

        // OPTIONAL
        optflag: $ =>
            choice(
                $.asterisk,
                $._hash,
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

        //account: $ => $.ACCOUNT,

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

        key_value: $ =>
            prec.left(seq(
                $.key,
                $._colon,
                optional($._key_value_value),
            )),

        key_value_line: $ => seq(
            $._indent,
            $.key_value,
            $._eol
        ),

        // OPTIONAL
        _key_value_value: $ =>
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

        // OPTIONAL
        posting_or_kv_list: $ =>
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
                    $.key_value_line,
                    $.posting,
                    seq(
                        $._indent,
                        $.comment,
                        $._eol
                    )
                )
            ),

        // OPTIONAL
        key_value_list: $ =>
            repeat1(
                choice(
                    seq(
                        $._indent,
                        $._eol
                    ),
                    seq(
                        $.key_value_line
                    )
                )
            ),

        // OPTIONAL
        currency_list: $ =>
            seq(
                $.currency,
                repeat(
                    seq(
                        $._comma,
                        $.currency
                    )
                )
            ),

        pushtag: $ => seq(
            alias($.PUSHTAG, "pushtag"),
            $.tag,
            $._eol
        ),

        poptag: $ => seq(
            alias($.POPTAG, "poptag"),
            $.tag,
            $._eol
        ),

        pushmeta: $ => seq(
            alias($.PUSHMETA,"pushmeta"),
            $.key_value,
            $._eol
        ),

        popmeta: $ => seq(
            alias($.POPMETA, "popmeta"),
            $.key,
            $._colon,
            $._eol
        ),

        open: $ =>
            seq(
                field("date", $.date),
                alias($.OPEN, "open"),
                field("account", $.account),
                field("currencies", repeat($.currency_list)),
                field("opt_booking", optional($.opt_booking)),
                field("comment", optional($.comment)),
                $._eol,
                optional($.key_value_list)
            ),

        // OPTIONAL
        opt_booking: $ => $.string,

        close: $ =>
            seq(
                field("date", $.date),
                alias($.CLOSE, "close"),
                field("account", $.account),
                field("comment", optional($.comment)),
                $._eol,
                optional($.key_value_list)
            ),

        commodity: $ =>
            seq(
                field("date", $.date),
                alias($.COMMODITY, "commodity"),
                field("currency", $.currency),
                field("comment", optional($.comment)),
                $._eol,
                optional($.key_value_list)
            ),

        pad: $ =>
            seq(
                field("date", $.date),
                alias($.PAD, "pad"),
                field("account", $.account),
                field("from_account", $.account),
                field("comment", optional($.comment)),
                $._eol,
                optional($.key_value_list)
            ),

        balance: $ =>
            seq(
                field("date", $.date),
                alias($.BALANCE, "balance"),
                field("account", $.account),
                field("amount",
                    //choice(
                    //    $.amount,
                        $.amount_tolerance,
                    //)
                ),
                field("comment", optional($.comment)),
                $._eol,
                optional($.key_value_list)
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
                    $._tilde,
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
                    $._hash,
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
                    $.lcurl,
                    field("cost_comp_list",  optional($.cost_comp_list)),
                    $.rcurl
                ),
                seq(
                    $.lcurllcurl,
                    field("cost_comp_list",  optional($.cost_comp_list)),
                    $.rcurlrcurl
                ),
            ),

        // OPTIONAL
        cost_comp_list: $ =>
            seq(
                $.cost_comp,
                repeat(
                    seq(
                        $._comma,
                        $.cost_comp
                    )
                )
            ),

        cost_comp: $ =>
            choice(
                $.compound_amount,
                $.date,
                $.string,
                $.asterisk
            ),

        price: $ =>
            seq(
                field("date", $.date),
                alias($.PRICE, "price"),
                field("currency", $.currency),
                field("amount", $.amount),
                $._eol,
                optional($.key_value_list)
            ),

        event: $ =>
            seq(
                field("date", $.date),
                alias($.EVENT, "event"),
                field("type", $.string),
                field("desc", $.string),
                $._eol,
                optional($.key_value_list)
            ),

        query: $ =>
            seq(
                field("date", $.date),
                alias($.QUERY, "query"),
                field("name", $.string),
                field("query", $.string),
                $._eol,
                optional($.key_value_list)
            ),

        note: $ =>
            seq(
                field("date", $.date),
                alias($.NOTE, "note"),
                field("account", $.account),
                field("note", $.string),
                $._eol,
                optional($.key_value_list)
            ),

        filename: $ => $.string,

        document: $=>
            seq(
                field("date", $.date),
                alias($.DOCUMENT, "document"),
                field("account", $.account),
                field("filename", $.filename),
                field("tags_links", optional($.tags_links)),
                $._eol,
                optional($.key_value_list)
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

        custom_value_list: $ =>
            repeat1(
                $.custom_value
            ),

        custom: $ =>
            seq(
                field("date", $.date),
                alias($.CUSTOM, "custom"),
                field("name", $.string),
                field("custom_value_list", optional($.custom_value_list)),
                $._eol,
                optional($.key_value_list)
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
            alias($.OPTION, "option"),
            field("key", $.string),
            field("value",$.string),
            $._eol,
        ),

        include: $ => seq(
            alias($.INCLUDE, "include"),
            $.string,
            $._eol,
        ),

        plugin: $ =>
            choice(
                seq(
                    alias($.PLUGIN, "plugin"),
                    $.string,
                    $._eol
                ),
                seq(
                    alias($.PLUGIN, "plugin"),
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

        identifier: $ => /[a-z]+/,

        comment:    $ => /;.*/,

        _skipped_lines: $ =>
            choice(
                seq(
                    $.flag,
                    /.*/,
                    $._eol
                ),
                seq(
                    $._colon,
                    /.*/,
                    $._eol
                ),
                $._eol,
                seq(
                    $.comment,
                    $._eol
                )
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
        _UTF_8: $ =>  choice(
            $._ASCII,
            $._UTF_8_ONLY,
        ),

    }
});
