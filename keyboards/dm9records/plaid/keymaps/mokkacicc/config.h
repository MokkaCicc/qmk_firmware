#pragma once

// layers
#define COLEMAK DF(_COLEMAK)
#define QWERTY DF(_QWERTY)
#define NUMBERS MO(_NUMBERS)
#define SYMBOLS MO(_SYMBOLS)
#define SPC_NAV LT(_NAVIGATION, KC_SPC)
#define CONFIG MO(_CONFIG)

// home row mods -> https://precondition.github.io/home-row-mods#tap-hold-configuration-settings
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
// #define RETRO_TAPPING

#define HOME_A LGUI_T(KC_A)
#define HOME_R LALT_T(KC_R)
#define HOME_S LCTL_T(KC_S)
#define HOME_T LSFT_T(KC_T)
#define HOME_N LSFT_T(KC_N)
#define HOME_E LCTL_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O LGUI_T(KC_O)
