# Changelog

## [2.4.0](https://github.com/polarmutex/tree-sitter-beancount/compare/tree-sitter-beancount-2.3.3...tree-sitter-beancount-2.4.0) (2025-07-20)


### Features

* add named field for narration and payee ([0631b99](https://github.com/polarmutex/tree-sitter-beancount/commit/0631b99d9096e10f4e289efe618e518debe918b4))
* Add support for Markdown style headlines ([53e128c](https://github.com/polarmutex/tree-sitter-beancount/commit/53e128cf73f47d88d70a1f50667d87c00e76fe60))
* Add swift bindings ([0e08ee4](https://github.com/polarmutex/tree-sitter-beancount/commit/0e08ee4212edef5088bb3dd93ab0ba01f94792b0))
* chinese characters in account ([97b46e5](https://github.com/polarmutex/tree-sitter-beancount/commit/97b46e5f37aa9030e9701c816e20760760ab4907))
* support org sections ([1b06224](https://github.com/polarmutex/tree-sitter-beancount/commit/1b06224c446f49586b0952de795e1562c6d76e3b))
* updated grammar to match current beancount grammar v2 on the master branch ([1f98d3e](https://github.com/polarmutex/tree-sitter-beancount/commit/1f98d3ea396e2035cfe53c0f435f2d20e373a3c8))
* upgrade to ABI 15 ([fe48b52](https://github.com/polarmutex/tree-sitter-beancount/commit/fe48b52805b3c6bebc3189c0e290ec4cb75dc5a7))
* upgrade to v0.19 ([560580f](https://github.com/polarmutex/tree-sitter-beancount/commit/560580f2c86f440e7b30a68b997114af506a148c))


### Bug Fixes

* [#61](https://github.com/polarmutex/tree-sitter-beancount/issues/61) re-export tree-sitter for rust bindings ([6108878](https://github.com/polarmutex/tree-sitter-beancount/commit/610887893f4ec5aeeb407b88e0eb10bd7453545c))
* binding and lock files for rust ([0727d62](https://github.com/polarmutex/tree-sitter-beancount/commit/0727d62af0dea0a78bbf132f53876888fc656c19))
* cargo version ([8093434](https://github.com/polarmutex/tree-sitter-beancount/commit/80934340cdd4b005ff15a24de9d99f36701a07e9))
* cargo version ([01cc2ca](https://github.com/polarmutex/tree-sitter-beancount/commit/01cc2ca9073b1dab75e6d7996f48331b0c3f9057))
* changelog for prior versions ([8197699](https://github.com/polarmutex/tree-sitter-beancount/commit/8197699421b9787a3940b097ced363b9a4ba2f13))
* ci release errors ([f3be658](https://github.com/polarmutex/tree-sitter-beancount/commit/f3be658b3097d08bb81a1fd98e8d3b85ef8656bb))
* cleanup grammar upon feedback ([015e228](https://github.com/polarmutex/tree-sitter-beancount/commit/015e228ca684bbba5ee3e457020cf9c5d1d20afc))
* detect in error recovery and exit scan ([f3c05c6](https://github.com/polarmutex/tree-sitter-beancount/commit/f3c05c68aa03631fb4b9f0f7592bfec48376e65a))
* fix other scanner.cc references ([1f19abf](https://github.com/polarmutex/tree-sitter-beancount/commit/1f19abf1e162e1828013cb5434c6cf30f4054e80))
* generate bindings ([384c55e](https://github.com/polarmutex/tree-sitter-beancount/commit/384c55ede2a1f13e83d8e18dbef8f11304c379c2))
* improve parser speed ([e9251c5](https://github.com/polarmutex/tree-sitter-beancount/commit/e9251c51cfc41659cccdb815b48e29a595069f58))
* improve test coverage and fix some missing items in the syntax ([2b609bf](https://github.com/polarmutex/tree-sitter-beancount/commit/2b609bf899c7e40c2ae2e32bd940e237a8efe6d6))
* npm publish ([4cbd1f0](https://github.com/polarmutex/tree-sitter-beancount/commit/4cbd1f09cd07c1f1fabf867c2cf354f9da53cc4c))
* npm publish ([a105058](https://github.com/polarmutex/tree-sitter-beancount/commit/a1050584340a2375b6b480ba9e9691aebb9d33d5))
* remove unneeded excludes ([cd08aef](https://github.com/polarmutex/tree-sitter-beancount/commit/cd08aefa20dc0f3d5984b08b5d468f75bf4fd096))
* rerun generate ([e2984c6](https://github.com/polarmutex/tree-sitter-beancount/commit/e2984c6d96a8532e74c8223976d10aa854d5a772))
* rust binding build error ([bfbfa12](https://github.com/polarmutex/tree-sitter-beancount/commit/bfbfa12da0e1c7e598768c0f46f90bbe179d4be5))
* support comments as part of key value lists ([c25f803](https://github.com/polarmutex/tree-sitter-beancount/commit/c25f8034c977681653a8acd541c8b4877a58f474))
* support embedded escaped quotes in strings ([9f6eb73](https://github.com/polarmutex/tree-sitter-beancount/commit/9f6eb73b2cc06325f6c31f9c58f84ba802a88fd0))


### Documentation

* add claude file ([86a23d3](https://github.com/polarmutex/tree-sitter-beancount/commit/86a23d3cfe9bf95351cbf0ad49833ec2144148e4))
* improve readme ([94ab662](https://github.com/polarmutex/tree-sitter-beancount/commit/94ab662b9a88f6b2d2f240395550802bb6e265d1))
* update readme ([32d6cc6](https://github.com/polarmutex/tree-sitter-beancount/commit/32d6cc65dbc35d74cf5023bb12755f66960b9b59))


### Refactoring

* account names ([ddc17d1](https://github.com/polarmutex/tree-sitter-beancount/commit/ddc17d1e4a098d0c070a1730e818fb0e9d8d4746))
* add supertypes ([5f52209](https://github.com/polarmutex/tree-sitter-beancount/commit/5f52209922b60441307e782bc68ca6b86b9e92d3))
* beancount grammar ([5949b99](https://github.com/polarmutex/tree-sitter-beancount/commit/5949b9999e86e420eca7534459240cb24b0357ef))
* directives ([f06d124](https://github.com/polarmutex/tree-sitter-beancount/commit/f06d124b0fb87b5b3197efe55e80703f648b855e))
* entry and symbols ([88de3be](https://github.com/polarmutex/tree-sitter-beancount/commit/88de3bed89a754ab49bbdf5259f3893e95bdf250))
* identifier ([cd48a8e](https://github.com/polarmutex/tree-sitter-beancount/commit/cd48a8e9d5df16443465e6986f3e6fd97b019fc1))
* improve scanner c code ([3afb245](https://github.com/polarmutex/tree-sitter-beancount/commit/3afb245fc36a62e710d983b42e95b521114b2590))
* key value ([8ee962c](https://github.com/polarmutex/tree-sitter-beancount/commit/8ee962c76db9b6b6f3b72989a492321f60d809cc))
* remove lists ([3993ac4](https://github.com/polarmutex/tree-sitter-beancount/commit/3993ac471c01ee125faa1c77870df785b46fba34))
* rewrite scanner in c ([d005b62](https://github.com/polarmutex/tree-sitter-beancount/commit/d005b62a0ae7cc30dd01b2e409d16386d47d649f))
* txn_strings ([838c068](https://github.com/polarmutex/tree-sitter-beancount/commit/838c0684181af2b044571ab487c67b59caca30ba))

## [2.3.3](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.3.2...v2.3.3) (2024-07-20)


### Bug Fixes

* support comments as part of key value lists ([c25f803](https://github.com/polarmutex/tree-sitter-beancount/commit/c25f8034c977681653a8acd541c8b4877a58f474))
* support embedded escaped quotes in strings ([9f6eb73](https://github.com/polarmutex/tree-sitter-beancount/commit/9f6eb73b2cc06325f6c31f9c58f84ba802a88fd0))

## [2.3.2](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.3.1...v2.3.2) (2024-03-09)


### Bug Fixes

* binding and lock files for rust ([0727d62](https://github.com/polarmutex/tree-sitter-beancount/commit/0727d62af0dea0a78bbf132f53876888fc656c19))
* fix other scanner.cc references ([1f19abf](https://github.com/polarmutex/tree-sitter-beancount/commit/1f19abf1e162e1828013cb5434c6cf30f4054e80))

## [2.3.1](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.3.0...v2.3.1) (2024-02-29)


### Bug Fixes

* cargo version ([01cc2ca](https://github.com/polarmutex/tree-sitter-beancount/commit/01cc2ca9073b1dab75e6d7996f48331b0c3f9057))

## [2.3.0](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.2.0...v2.3.0) (2024-02-29)


### Features

* Add swift bindings ([0e08ee4](https://github.com/polarmutex/tree-sitter-beancount/commit/0e08ee4212edef5088bb3dd93ab0ba01f94792b0))


### Bug Fixes

* remove unneeded excludes ([cd08aef](https://github.com/polarmutex/tree-sitter-beancount/commit/cd08aefa20dc0f3d5984b08b5d468f75bf4fd096))

## [2.2.0](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.1.3...v2.2.0) (2023-10-10)


### Features

* add named field for narration and payee ([0631b99](https://github.com/polarmutex/tree-sitter-beancount/commit/0631b99d9096e10f4e289efe618e518debe918b4))

## [2.1.3](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.1.2...v2.1.3) (2023-07-02)


### Bug Fixes

* detect in error recovery and exit scan ([f3c05c6](https://github.com/polarmutex/tree-sitter-beancount/commit/f3c05c68aa03631fb4b9f0f7592bfec48376e65a))

## [2.1.2](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.1.1...v2.1.2) (2023-01-28)


### Bug Fixes

* cleanup grammar upon feedback ([015e228](https://github.com/polarmutex/tree-sitter-beancount/commit/015e228ca684bbba5ee3e457020cf9c5d1d20afc))
* npm publish ([4cbd1f0](https://github.com/polarmutex/tree-sitter-beancount/commit/4cbd1f09cd07c1f1fabf867c2cf354f9da53cc4c))

## [2.1.1](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.1.0...v2.1.1) (2022-07-02)


### Bug Fixes

* changelog for prior versions ([8197699](https://github.com/polarmutex/tree-sitter-beancount/commit/8197699421b9787a3940b097ced363b9a4ba2f13))
* npm publish ([a105058](https://github.com/polarmutex/tree-sitter-beancount/commit/a1050584340a2375b6b480ba9e9691aebb9d33d5))
* rust binding build error ([bfbfa12](https://github.com/polarmutex/tree-sitter-beancount/commit/bfbfa12da0e1c7e598768c0f46f90bbe179d4be5))

## [2.1.0](https://github.com/polarmutex/tree-sitter-beancount/compare/v2.0.0...v2.1.0) (2022-06-28)


### Features

* support org sections ([1b06224](https://github.com/polarmutex/tree-sitter-beancount/commit/1b06224c446f49586b0952de795e1562c6d76e3b))

## [2.0.0] (2021-11-11)

### Features

* Initial version of grammar
