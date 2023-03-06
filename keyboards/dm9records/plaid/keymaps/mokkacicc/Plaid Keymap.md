# MokkaCicc's Plaid Keymap

This keymap is heavily designed for programming, the main keys feature are:
- [COLEMAK layout](https://colemak.com/)
- shift, control, atl and os keys on the home rows (holding)
- navigation layer (see `_NAVIGATION` layer)
- more accessible brackets on the `_SYMBOLS` layer
- numbers and symbols on the home rows (see `_NUMBERS` and `_SYMBOLS` layers)
- [Caps Word](https://docs.qmk.fm/#/feature_caps_word)
- `_CONFIG` layer to quickly switch to QWERTY without any weird mods (useful for gaming)

This layout was designed for the [Plaid keyboard](https://github.com/hsgw/plaid) but can be used in all ortholinear keyboard.

# Installation

First, [install QMK](https://docs.qmk.fm/#/newbs_getting_started).

Configure the keyboard type and keymap name:
```bash
$ qmk config user.keyboard=dm9records/plaid
$ qmk config user.keymap=MokkaCicc
```

Create your keymap:
```bash
$ qmk new-keymap
```

Copy the `rules.mk`, `config.h` and `keymap.c` files to the newly created folder.

Compile the project with `qmk compile -c` and finally flash the generated hex file with qmk toolbox or with the `qmk flash` command.
