#include QMK_KEYBOARD_H
#include <config.h>
#include <unicode.c>

enum layers {
	_COLEMAK,
	_NUMBERS,
	_SYMBOLS,
	_FUNCTIONS,
	_NAVIGATION,
	_ACCENTS,
	_CONFIG,
	_BUTTONS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │ Q  │ W  │ F  │ P  │ G  │              │ J  │ L  │ U  │ Y  │ ;  │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ A  │ R  │ S  │ T  │ D  │              │ H  │ N  │ E  │ I  │ O  │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ Z  │ X  │ C  │ V  │ B  ├────┐    ┌────┤ K  │ M  │ ,  │ .  │ /  │
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │ESC │SPC │TAB │    │ENT │BSPC│DEL │
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_COLEMAK] = LAYOUT_ortho_4x12(
		KC_Q,    KC_W,    KC_F,    KC_P,     KC_G,     _______,  _______,  KC_J,      KC_L,     KC_U,    KC_Y,    KC_SCLN,
		_HOME_A, _HOME_R, _HOME_S, _HOME_T,  KC_D,     _______,  _______,  KC_H,      _HOME_N,  _HOME_E, _HOME_I, _HOME_O,
		_Z_BUT,  KC_X,    KC_C,    KC_V,     KC_B,     _______,  _______,  KC_K,      KC_M,     KC_COMM, KC_DOT,  KC_SLSH,
		_______, _______, _______, _ESC_CFG, _SPC_NAV, _TAB_ACC, _ENT_SYM, _BSPC_NUM, _DEL_FUN, _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │ ~  │ 7  │ 8  │ 9  │ `  │              │    │    │    │    │    │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ +  │ 4  │ 5  │ 6  │ =  │              │    │LSFT│LCTL│LALT│LGUI│
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ |  │ 1  │ 2  │ 3  │ \  ├────┐    ┌────┤    │    │    │    │    │
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │ESC │ 0  │ _  │    │    │____│    │
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_NUMBERS] = LAYOUT_ortho_4x12(
		KC_TILD, KC_7,    KC_8,    KC_9,   KC_GRV,  _______, _______, _______, _______, _______, _______, _______,
		KC_PLUS, KC_4,    KC_5,    KC_6,   KC_EQL,  _______, _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
		KC_PIPE, KC_1,    KC_2,    KC_3,   KC_BSLS, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, KC_ESC, KC_0,    KC_UNDS, _______, _______, _______, _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │ {  │ &  │ *  │    │ }  │              │    │    │    │    │    │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ (  │ $  │ %  │ ^  │ )  │              │    │LSFT│LCTL│LALT│LGUI│
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ [  │ !  │ @  │ #  │ ]  ├────┐    ┌────┤    │    │    │    │    │
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │ESC │SPC │ -  │    │____│    │    │
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_SYMBOLS] = LAYOUT_ortho_4x12(
		KC_LCBR, KC_AMPR, KC_ASTR, _______, KC_RCBR, _______, _______, _______, _______, _______, _______, _______,
		KC_LPRN, KC_DLR,  KC_PERC, KC_CIRC, KC_RPRN, _______, _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
		KC_LBRC, KC_EXLM, KC_AT,   KC_HASH, KC_RBRC, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, KC_ESC,  KC_SPC,  KC_MINS, _______, _______, _______, _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │ F1 │ F2 │ F3 │ F4 │    │              │    │    │    │    │    │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ F5 │ F6 │ F7 │ F8 │    │              │    │LSFT│LCTL│LALT│LGUI│
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │ F9 │F10 │F11 │F12 │    ├────┐    ┌────┤    │    │    │    │    │
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │ESC │SPC │TAB │    │    │    │____│
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_FUNCTIONS] = LAYOUT_ortho_4x12(
		KC_F1,   KC_F2,   KC_F3,   KC_F4,  _______, _______, _______, _______, _______, _______, _______, _______,
		KC_F5,   KC_F6,   KC_F7,   KC_F8,  _______, _______, _______, _______, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI,
		KC_F9,   KC_F10,  KC_F11,  KC_F12, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, KC_ESC, KC_SPC,  KC_MINS, _______, _______, _______, _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │    │    │    │    │    │              │UNDO│PSTE│COPY│CUT │REDO│
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │LGUI│LALT│LCTL│LSFT│    │              │CAPS│LEFT│DOWN│ UP │RGHT│
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │    │    │    │    │    ├────┐    ┌────┤ CW │HOME│PGDN│PGUP│END │
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │    │____│    │    │ENT │BSPC│DEL │
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_NAVIGATION] = LAYOUT_ortho_4x12(
		_______, _______, _______, _______, _______, _______, _______, _UNDO,   _PSTE,   _COPY,   _CUT,    _REDO,
		KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______, _______, KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT,
		_______, _______, _______, _______, _______, _______, _______, CW_TOGG, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
		_______, _______, _______, _______, _______, _______, KC_ENT,  KC_BSPC, KC_DEL,  _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │    │    │    │    │    │              │ æ  │ ç  │ è  │    │ ù  │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │LGUI│LALT│LCTL│LSFT│    │              │ €  │ à  │ é  │ ï  │ ô  │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │    │    │    │    │    ├────┐    ┌────┤ œ  │ â  │ ê  │ î  │ û  │
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │    │    │____│    │ENT │BSPC│DEL │
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_ACCENTS] = LAYOUT_ortho_4x12(
		_______, _______, _______, _______, _______, _______, _______, AE,      CCED,   EGRV,    _______, UGRV,
		KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______, _______, EURO,    AGRV,   EACU,    IDIA,    OCIR,
		_______, _______, _______, _______, _______, _______, _______, OE,      ACIR,   ECIR,    ICIR,    UCIR,
		_______, _______, _______, _______, _______, _______, KC_ENT,  KC_BSPC, KC_DEL, _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │    │    │    │    │    │              │    │WINC│LINX│MAC │BOOT│
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │LGUI│LALT│LCTL│LSFT│    │              │    │MPRV│VOLD│VOLU│MNXT│
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │    │    │    │    │    ├────┐    ┌────┤    │PSCR│BRID│BRIU│SLEP│
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │____│    │    │    │MSTP│MPLY│MUTE│
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_CONFIG] = LAYOUT_ortho_4x12(
		_______, _______, _______, _______, _______, _______, _______, _______, UC_WINC,  UC_LINX, UC_MAC,  QK_BOOT,
		KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, _______, _______, _______, _______, KC_MPRV,  KC_VOLD, KC_VOLU, KC_MNXT,
		_______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR,  KC_BRID, KC_BRIU, KC_SLEP,
		_______, _______, _______, _______, _______, _______, KC_MSTP, KC_MPLY, KC_MUTE,  _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┐              ┌────┬────┬────┬────┬────┐
	* │    │    │    │    │    │              │    │    │    │    │    │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │    │UNDO│SAVE│REDO│    │              │    │    │    │    │    │
	* ├────┼────┼────┼────┼────┤              ├────┼────┼────┼────┼────┤
	* │____│CUT │COPY│PSTE│    ├────┐    ┌────┤    │    │    │    │    │
	* └────┴────┴────┼────┼────┤    │    │    ├────┼────┼────┴────┴────┘
	*                │    │    │    │    │    │    │    │
	*                └────┴────┴────┘    └────┴────┴────┘
	*/
	[_BUTTONS] = LAYOUT_ortho_4x12(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _UNDO,   _SAVE,   _REDO,   _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _CUT,    _COPY,   _PSTE,   _______, _______, _______, _______, _______, _______, _______, _______,
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	)
};
