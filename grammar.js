module.exports = grammar({

    name: 'beancount',

    rules: {

        file: $ => repeat($._declarations),

        /*
         * From beancount lexar
        */
        _indent: $ => /[\t]/,
        _eol: $ => choice(
            /[\n]/,
            $.comment,
        ),
        comment: $     => /;+.*/,
        _pipe: $       => '|',
        _atat: $       => '@@',
        _at: $         => '@',
        _lcurllcurl: $ => '{{',
        _rcurlrcurl: $ => '}}',
        _lcurl: $      => '{',
        _rcurl: $      => '}',
        _equal: $      => '=',
        _comma: $      => ',',
        _tilde: $      => '~',
        _hash: $       => '#',
        _asterisk: $   => '*',
        _slash: $      => '/',
        _colon: $      => ':',
        _plus: $       => '+',
        _minus: $      => '-',
        _lparen: $     => '(',
        _rparen: $     => ')',
        flag: $        => /[!]/,
        _bool: $       => choice('TRUE','FALSE'),
        _none: $       => 'NULL',
        date: $        => /([12]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[12]\d|3[01]))/,

        _account_type: $ => choice(
            'Assets',
            'Liabilities',
            'Equity',
            'Income',
            'Expenses',
        ),
        _account_name: $ => seq(
            choice(
                /[A-Z0-9]/,
                $._UTF_8_ONLY,
            ),
            repeat(
                choice(
                    /[A-Za-z0-9\-]/,
                    $._UTF_8_ONLY,
                ),
            ),
        ),
        account: $ => seq(
            $._account_type,
            repeat(
                seq(
                    ':',
                    $._account_name
                ),
            ),
            seq(
                ':',
                $._account_name,
                /\s/
            ),
        ),
        currency: $ => /[A-Z][A-Z0-9'._-]{0,22}[A-Z0-9]/,
        _string: $ => seq(
            '"',
            repeat(
                choice(
                    /[^\\"\n]/,
                    /\\(.|\n)/
                ),
            ),
            '"',
        ),
        _number: $ => /([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/,
        tag: $ => /#[A-Za-z0-9\-_/.]+/,
        link: $ => /\^[A-Za-z0-9\-_/.]+/,
        key: $ => /[a-z][a-zA-Z0-9\-_]+:/,

        /*
         * From beancount grammar
        */
        txn: $ => choice(
            'txn',
            $.flag,
            $._asterisk,
            $._hash,
        ),

        number_expr: $ => choice(
            $._number,
            prec.right(2,
                seq(
                    $._number,
                    $._plus,
                    $._number,
                ),
            ),
            prec.right(2,
                seq(
                    $._number,
                    $._minus,
                    $._number,
                ),
            ),
            prec.right(2,
                seq(
                    $._number,
                    $._asterisk,
                    $._number,
                ),
            ),
            prec.right(1,
                seq(
                    $._number,
                    $._slash,
                    $._number,
                ),
            ),
            prec.left(1,
                seq(
                    $._minus,
                    $._number,
                ),
            ),
            prec.left(1,
                seq(
                    $._plus,
                    $._number,
                ),
            ),
            seq(
                $._lparen,
                $._number,
                $._rparen,
            ),
        ),

        txn_strings: $ => seq(
            $._string,
            optional(
                $._string
            ),
        ),

        tags_links: $ => choice(
            $.link,
            $.tag,
        ),

        transaction: $ => seq(
            $.date,
            $.txn,
            $.txn_strings,
            optional(
                $.tags_links
            ),
            $._eol,
            prec.left(2,
                repeat1(
                    $._posting_or_kv_list,
                ),
            ),
        ),

        optflag: $ => choice(
            $._asterisk,
            $._hash,
            $.flag,
        ),

        posting: $ => choice(
            seq(
                optional($.optflag),
                $.account,
                $.number_expr,
                $.currency,
                optional($.cost_spec),
            ),
            seq(
                optional($.optflag),
                $.account,
                optional($.number_expr),
                optional($.currency),
                optional($.cost_spec),
                $._at,
                optional($.number_expr),
                optional($.currency),
            ),
            seq(
                optional($.optflag),
                $.account,
                optional($.number_expr),
                optional($.currency),
                optional($.cost_spec),
                $._atat,
                optional($.number_expr),
                optional($.currency),
            ),
            seq(
                $.account
            ),
        ),

        key_value_line: $ => seq(
            $.key,
            $._colon,
            $.key_value_value
        ),

        key_value_value: $ => choice(
            $._string,
            $.account,
            $.date,
            $.currency,
            $.tag,
            $._bool,
            $.number_expr,
            $.amount
        ),

        _posting_or_kv_list: $ => choice(
            $.comment,
            $.tags_links,
            $.key_value_line,
            $.posting,
        ),

        _currency_list: $ => seq(
            $.currency,
            optional($._comma),
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

        open: $ => choice(
            prec(1,
                seq(
                    $.date,
                    'open',
                    $.account,
                    repeat($._currency_list),
                    optional($.opt_booking),
                    $._eol,
                    repeat($.key_value_line),
                )
            ),
            seq(
                $.date,
                'open',
                $.account,
            ),
        ),


        opt_booking: $ => $._string,

        close: $ => choice(
            prec(1,
                seq(
                    $.date,
                    'close',
                    $.account,
                    $._eol,
                    repeat($.key_value_line),
                ),
            ),
            seq(
                $.date,
                'close',
                $.account,
            ),
        ),

        commodity: $ => seq(
            $.date,
            'commodity',
            $.currency,
            $._eol,
            repeat($.key_value_line),
        ),

        pad: $ => choice(
            prec(1,
                seq(
                    $.date,
                    'pad',
                    $.account,
                    $.account,
                    $._eol,
                    repeat($.key_value_line),
                ),
            ),
            seq(
                $.date,
                'pad',
                $.account,
                $.account,
            ),
        ),

        balance: $ => seq(
            $.date,
            'balance',
            $.account,
            $.amount_tolerance,
            $._eol,
            repeat($.key_value_line),
        ),

        amount: $ => seq(
            $.number_expr,
            $.currency
        ),

        amount_tolerance: $ => choice(
            seq(
                $.number_expr,
                $.currency,
            ),
            seq(
                $.number_expr,
                $._tilde,
                $.number_expr,
                $.currency
            ),
        ),

        compound_amout: $ => choice(
            seq(
                optional($.number_expr),
                $.currency
            ),
            seq(
                $.number_expr,
                optional($.currency)
            ),
            seq(
                optional($.number_expr),
                $._hash,
                optional($.number_expr),
                $.currency
            ),
        ),

        cost_spec: $ => choice(
            seq(
                $._lcurl,
                $.cost_comp_list,
                $._rcurl
            ),
            seq(
                $._lcurllcurl,
                $.cost_comp_list,
                $._rcurlrcurl
            ),
        ),

        cost_comp_list: $ => choice(
            $.cost_comp,
            seq(
                $.cost_comp_list,
                $._comma,
                $.cost_comp
            ),
        ),

        cost_comp: $ => choice(
            $.compound_amout,
            $.date,
            $._string,
            $._asterisk,
        ),

        price: $ => seq(
            $.date,
            'price',
            $.currency,
            $.amount,
            $._eol,
            repeat($.key_value_line),
        ),

        event: $ => seq(
            $.date,
            'event',
            $._string,
            $._string,
            $._eol,
            repeat($.key_value_line),
        ),

        query: $ => seq(
            $.date,
            'query',
            $._string,
            $._string,
            $._eol,
            repeat($.key_value_line),
        ),

        note: $ => seq(
            $.date,
            'note',
            $.account,
            $._string,
            $._eol,
            repeat($.key_value_line),
        ),

        filename: $ => $._string,

        document: $=> seq(
            $.date,
            'document',
            $.account,
            $.filename,
            optional($.tags_links),
            $._eol,
            repeat($.key_value_line),
        ),

        custom_value: $ => prec(5,
            choice(
                $._string,
                $.date,
                $._bool,
                $.amount,
                $.number_expr,
                $.account
            ),
        ),

        custom: $ => seq(
            $.date,
            'custom',
            $._string,
            repeat($.custom_value),
            $._eol,
            repeat($.key_value_line),
        ),

        entry: $ => choice(
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
            $._string,
            $._string,
            $._eol,
        ),

        include: $ => seq(
            'include',
            $._string,
            $._eol,
        ),

        plugin: $ => seq(
            'plugin',
            $._string,
            $._eol,
        ),

        directive: $ => choice(
            $.pushtag,
            $.poptag,
            $.pushmeta,
            $.popmeta,
            $.option,
            $.include,
            $.plugin
        ),

        _declarations: $ => choice(
            $.directive,
            $.entry,
            $.comment
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
