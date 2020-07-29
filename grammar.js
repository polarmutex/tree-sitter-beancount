module.exports = grammar({

    name: 'beancount',

    extras: $ => [/[ \t\r ]/],

    conflicts: $ => [[$.posting], [$.metadata], [$.tags_and_links]],

    rules: {

        file: $ => repeat($._declarations),

        /*
         * From beancount lexar
        */
        _indent:     $ => /\n[ \r\t]+/,
        _eol:        $ => /[\n]/,
        _pipe:       $ => '|',
        _atat:       $ => '@@',
        _at:         $ => '@',
        _lcurllcurl: $ => '{{',
        _rcurlrcurl: $ => '}}',
        _lcurl:      $ => '{',
        _rcurl:      $ => '}',
        _equal:      $ => '=',
        _comma:      $ => ',',
        _tilde:      $ => '~',
        _hash:       $ => '#',
        _asterisk:   $ => '*',
        _slash:      $ => '/',
        _colon:      $ => ':',
        _plus:       $ => '+',
        _minus:      $ => '-',
        _lparen:     $ => '(',
        _rparen:     $ => ')',
        _none:       $ => 'NULL',
        _comment:    $ => /;.*/,

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
                    $._comment,
                    $._eol
                )
            ),

        date:     $ => token(/([12]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[12]\d|3[01]))/),
        flag:     $ => token(/[!&?%PSTCURM*#]|txn/),
        bool:     $ => token(/TRUE|FALSE/),
        currency: $ => token(/[A-Z][A-Z0-9\'\._\-]{0,22}[A-Z0-9]/),
        tag:      $ => token(/#[A-Za-z0-9\-_/.]+/),
        link:     $ => token(/\^[A-Za-z0-9\-_/.]+/),
        key:      $ => token(/[a-z][a-zA-Z0-9\-_]+:/),
        number:   $ => token(/([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/),
        string:   $ => token(/"[^"]*"/),

        account: $ =>
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
                $.number,
                $._rparen,
            ),
        unary_number_expr: $ =>
            prec(3,
                choice(
                    seq(
                        $._minus,
                        $.number,
                    ),
                    seq(
                        $._plus,
                        $.number,
                    ),
                ),
            ),
        binary_number_expr: $ =>
            prec(3,
                choice(
                    prec.left(1,
                        seq( $.number, $._plus, $.number ),
                    ),
                    prec.left(1,
                        seq( $.number, $._minus, $.number ),
                    ),
                    prec.left(2,
                        seq( $.number, $._asterisk, $.number ),
                    ),
                    prec.left(2,
                        seq( $.number, $._slash, $.number ),
                    ),
                ),
            ),

        /*
         * POSTING
        */
        cost_spec: $ =>
            choice(
                seq(
                    $._lcurl,
                    field("cost_comp_list",  optional($.cost_comp_list)),
                    $._rcurl
                ),
                seq(
                    $._lcurllcurl,
                    field("cost_comp_list",  optional($.cost_comp_list)),
                    $._rcurlrcurl
                ),
            ),
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
                $.compound_amout,
                $.date,
                $.string,
                $._asterisk
            ),
        compound_amout: $ =>
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
        incomplete_amount: $ =>
            seq(
                $._number_expr,
                $.currency
            ),
        price_annotation: $ =>
            choice(
                seq(
                    $._atat,
                    $.incomplete_amount
                ),
                seq(
                    $._at,
                    $.incomplete_amount
                )
            ),
        posting: $ =>
            seq(
                $._indent,
                field("flag", optional($.flag)),
                field("account", $.account),
                field("amount", optional($.incomplete_amount)),
                field("cost_spec", optional($.cost_spec)),
                field("price_annotation", optional($.price_annotation)),
                optional($._comment),
                field("metadata", optional($.metadata))
            ),
        postings: $ =>
            repeat1(
                choice(
                    $.posting,
                    seq(
                        $._indent,
                        $._comment
                    )
                )
            ),

        /*
         * Metadata
        */
        _key_value_value: $ =>
            choice(
                $.string,
                $.account,
                $.date,
                $.currency,
                $.tag,
                $.bool,
                $._number_expr,
                $.amount
            ),
        key_value: $ =>
            prec.left(seq(
                $.key,
                optional($._key_value_value),
            )),
        metadata: $ =>
            repeat1(
                seq(
                    $._indent,
                    $.key_value
                )
            ),

        txn_strings: $ =>
            seq(
                $.string,
                optional($.string),
            ),

        tags_and_links: $ =>
            repeat1(
                seq(
                    optional($._indent),
                    choice(
                        $.link,
                        $.tag,
                    ),
                ),
            ),

        transaction: $ =>
            seq(
                field("date", $.date),
                field("flag", $.flag),
                field("txn_strings", optional($.txn_strings)),
                field("tags_and_links", optional($.tags_and_links)),
                field("metadata", optional($.metadata)),
                field("postings", $.postings),
                $._eol
            ),

        /*
         * Directives
         */
        balance: $ =>
            seq(
                field("date", $.date),
                'balance',
                field("account", $.account),
                field("amount",
                    choice(
                        $.amount,
                        $.amount_with_tolerance,
                    )
                ),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        close: $ =>
            seq(
                field("date", $.date),
                'close',
                field("account", $.account),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        commodity: $ =>
            seq(
                field("date", $.date),
                'commodity',
                field("currency", $.currency),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        custom: $ =>
            seq(
                field("date", $.date),
                'custom',
                field("name", $.string),
                repeat(
                    choice(
                        $.string, $.date, $.bool, $.amount, $._number_expr, $.account
                    ),
                ),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        document: $=>
            seq(
                field("date", $.date),
                'document',
                field("account", $.account),
                field("filename", $.filename),
                field("tags_and_links", optional($.tags_and_links)),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        event: $ =>
            seq(
                field("date", $.date),
                'event',
                field("type", $.string),
                field("desc", $.string),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        note: $ =>
            seq(
                field("date", $.date),
                'note',
                field("account", $.account),
                field("note", $.string),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        open: $ =>
            seq(
                field("date", $.date),
                'open',
                field("account", $.account),
                field("currencies", repeat($.currency_list)),
                field("booking", optional($.opt_booking)),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        pad: $ =>
            seq(
                field("date", $.date),
                'pad',
                field("account", $.account),
                field("from_account", $.account),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        price: $ =>
            seq(
                field("date", $.date),
                'price',
                field("currency", $.currency),
                field("amount", $.amount),
                field("metadata", optional($.metadata)),
                $._eol,
            ),
        query: $ =>
            seq(
                field("date", $.date),
                'query',
                field("name", $.string),
                field("query", $.string),
                field("metadata", optional($.metadata)),
                $._eol,
            ),

        optflag: $ => choice(
            $._asterisk,
            $._hash,
            $.flag,
        ),

        key_value_line: $ => seq(
            $.key,
            $._colon,
            $.key_value_value
        ),

        key_value_value: $ => choice(
            $.string,
            $.account,
            $.date,
            $.currency,
            $.tag,
            $.bool,
            $._number_expr,
            $.amount
        ),

        _posting_or_kv_list: $ => repeat1(
            choice(
                $._comment,
                $.tags_and_links,
                $.key_value_line,
                $.posting,
            ),
        ),

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
            'pushtag',
            $.tag,
            $._eol
        ),

        poptag: $ => seq(
            'poptag',
            $.tag,
            $._eol
        ),

        pushmeta: $ => seq(
            'pushmeta',
            $.key_value_line,
            $._eol
        ),

        popmeta: $ => seq(
            'popmeta',
            $.key_value_line,
            $._eol
        ),



        opt_booking: $ => $.string,

        amount: $ =>
            seq(
                $._number_expr,
                $.currency
            ),

        amount_with_tolerance: $ =>
            seq(
                $._number_expr,
                $._tilde,
                $._number_expr,
                $.currency
            ),

        filename: $ => $.string,

        _entry: $ => choice(
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
            'option',
            $.string,
            $.string,
            $._eol,
        ),

        include: $ => seq(
            'include',
            $.string,
            $._eol,
        ),

        plugin: $ => seq(
            'plugin',
            $.string,
            $._eol,
        ),

        _directive: $ => choice(
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
            // $.error TODO look into
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
