#pragma once

// custom keys
#define _DQUOT LSFT(KC_QUOT)

#define _CUT LCTL(KC_X)
#define _COPY LCTL(KC_C)
#define _PSTE LCTL(KC_V)
#define _UNDO LCTL(KC_Z)
#define _REDO LCTL(KC_Y)
#define _SAVE LCTL(KC_S)

// layers
#define _SPC_NAV LT(_NAVIGATION, KC_SPC)
#define _TAB_ACC LT(_ACCENTS, KC_TAB)
#define _ESC_CFG LT(_CONFIG, KC_ESC)

#define _BSPC_NUM LT(_NUMBERS, KC_BSPC)
#define _ENT_SYM LT(_SYMBOLS, KC_ENT)
#define _DEL_FUN LT(_FUNCTIONS, KC_DEL)

#define _Z_BUT LT(_BUTTONS, KC_Z)

// home row mods -> https://precondition.github.io/home-row-mods#tap-hold-configuration-settings
#define TAPPING_TERM 200
#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
// #define RETRO_TAPPING

#define _HOME_A LGUI_T(KC_A)
#define _HOME_R LALT_T(KC_R)
#define _HOME_S LCTL_T(KC_S)
#define _HOME_T LSFT_T(KC_T)

#define _HOME_N LSFT_T(KC_N)
#define _HOME_E LCTL_T(KC_E)
#define _HOME_I LALT_T(KC_I)
#define _HOME_O LGUI_T(KC_O)
