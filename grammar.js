module.exports = grammar({

    name: 'beancount',

    rules: {
        source_file: $ => $._statement,

        _statement: $ => $.transaction,

        transaction: $ => seq(
            $.date,
            $.txn,
            $.txn_strings,
            repeat(
                $.posting,
            ),
        ),

        date: $ => /([12]\d{3}-(0[1-9]|1[0-2])-(0[1-9]|[12]\d|3[01]))/,

        txn: $ => choice(
            'txn',
            '!',
            '*'
        ),

        txn_strings: $ => seq(
            $._string,
            optional(
                $._string
            ),
        ),

        tags_links: $ => choice(
                $._tag,
                $._link,
        ),

        posting: $ => choice(
            seq(
                $.account,
                $.amount,
                $.currency,
            ),
            seq(
                $.account
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
        ),

        amount: $ => /-?(([1-9]\d{0,2}(,\d{3})*)|(([1-9]\d*)?\d))(\.\d\d)?/,

        currency: $ => /[A-Z][A-Z0-9'._-]{0,22}[A-Z0-9]/, // TODO add others

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

        _account_type: $ => choice(
            'Assets',
            'Liabilities',
            'Equity',
            'Income',
            'Expenses',
        ),

        _number: $ => /([0-9]+|[0-9][0-9,]+[0-9])(\.[0-9]*)?/,

        _tag: $ => /#[A-Za-z0-9\-_/.]+/,

        _link: $ => /\^[A-Za-z0-9\-_/.]+/,

        _key: $ => /[a-z][a-zA-Z0-9\-_]+:/,

    }
});
