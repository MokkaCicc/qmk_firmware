#include QMK_KEYBOARD_H
#include <config.h>
#include <unicode.c>

enum layers {
	_COLEMAK,
	_QWERTY,
	_NUMBERS,
	_SYMBOLS,
	_NAVIGATION,
	_CONFIG
};

enum keycodes {
	LED_ON = SAFE_RANGE,
	LED_OFF
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	/*
	* ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
	* │ESC │ Q  │ W  │ F  │ P  │ G  │ J  │ L  │ U  │ Y  │ ;  │BSPC│
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │TAB │ A  │ R  │ S  │ T  │ D  │ H  │ N  │ E  │ I  │ O  │ENT │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │LSFT│ Z  │ X  │ C  │ V  │ B  │ K  │ M  │ ,  │ .  │ /  │ '  │
	* ├────┼────┼────┼────┼────┼────┴────┼────┼────┼────┼────┼────┤
	* │LCTL│LALT│RALT│LGUI│NUMB│ SPC_NAV │SYMB│LEFT│DOWN│ UP │RGHT│
	* └────┴────┴────┴────┴────┴─────────┴────┴────┴────┴────┴────┘
	*/
	[_COLEMAK] = LAYOUT_planck_mit(
		KC_ESC,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J, KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_BSPC,
		KC_TAB,  HOME_A,  HOME_R,  HOME_S,  HOME_T,  KC_D,    KC_H, HOME_N,  HOME_E,  HOME_I,  HOME_O,  KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
		KC_LCTL, KC_LALT, KC_RALT, KC_LGUI, NUMBERS, SPC_NAV,       SYMBOLS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
	),

	/*
	* ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
	* │ESC │ Q  │ W  │ E  │ R  │ T  │ Y  │ U  │ I  │ O  │ P  │BSPC│
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │TAB │ A  │ S  │ D  │ F  │ G  │ H  │ J  │ K  │ L  │ ;  │ENT │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │LSFT│ Z  │ X  │ C  │ V  │ B  │ N  │ M  │ ,  │ .  │ /  │ '  │
	* ├────┼────┼────┼────┼────┼────┴────┼────┼────┼────┼────┼────┤
	* │LCTL│LALT│RALT│LGUI│NUMB│ SPC_NAV │SYMB│LEFT│DOWN│ UP │RGHT│
	* └────┴────┴────┴────┴────┴─────────┴────┴────┴────┴────┴────┘
	*/
	[_QWERTY] = LAYOUT_planck_mit(
		KC_ESC,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y, KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
		KC_TAB,  KC_A,    KC_S,    KC_D,    KC_F,    KC_D,   KC_G, KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
		KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_N, KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
		KC_LCTL, KC_LALT, KC_RALT, KC_LGUI, NUMBERS, KC_SPC,       SYMBOLS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
	),

	/*
	* ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
	* │    │ F1 │ F2 │ F3 │ -  │    │    │ =  │ F4 │ F5 │ F6 │DEL │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │ `  │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │ 0  │    │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │    │ F7 │ F8 │ F9 │ _  │    │    │ +  │F10 │F11 │F12 │ \  │
	* ├────┼────┼────┼────┼────┼────┴────┼────┼────┼────┼────┼────┤
	* │    │    │    │    │    │         │    │MPLY│VOLD│VOLU│MNXT│
	* └────┴────┴────┴────┴────┴─────────┴────┴────┴────┴────┴────┘
	*/
	[_NUMBERS] = LAYOUT_planck_mit(
		_______, KC_F1,   KC_F2,   KC_F3,   KC_MINS, _______, _______, KC_EQL,  KC_F4,   KC_F5,   KC_F6,   KC_DEL,
		KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
		_______, KC_F7,   KC_F8,   KC_F9,   KC_UNDS, _______, _______, KC_PLUS, KC_F10,  KC_F11,  KC_F12,  KC_BSLS,
		_______, _______, _______, _______, _______, _______,          _______, KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT
	),
	
	/*
	* ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
	* │    │ à  │    │ é  │ {  │ æ  │ œ  │ }  │ è  │ ù  │    │DEL │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │ ~  │ !  │ @  │ #  │ $  │ [  │ ]  │ %  │ ^  │ &  │ *  │    │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │    │ â  │    │ ç  │ (  │ €  │ î  │ )  │ ê  │ û  │ ô  │ |  │
	* ├────┼────┼────┼────┼────┼────┴────┼────┼────┼────┼────┼────┤
	* │    │    │    │    │    │         │    │MPLY│VOLD│VOLU│MNXT│
	* └────┴────┴────┴────┴────┴─────────┴────┴────┴────┴────┴────┘
	*/
	[_SYMBOLS] = LAYOUT_planck_mit(
		_______, AGRV,    _______, EACU,    KC_LCBR, AE,      OE,      KC_RCBR, EGRV,    UGRV,    _______, KC_DEL,
		KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_LBRC, KC_RBRC, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, _______,
		_______, ACIR,    _______, CCED,    KC_LPRN, EURO,    ICIR,    KC_RPRN, ECIR,    UCIR,    OCIR,    KC_PIPE,
		_______, _______, _______, _______, _______, _______,          _______, KC_MPLY, KC_VOLD, KC_VOLU, KC_MNXT
	),

	/*
	* ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
	* │    │    │    │    │    │    │    │BSPC│DEL │    │ CW │    │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │    │    │    │    │    │    │    │ ←  │ ↓  │ ↑  │ →  │    │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* |    │    │    │    │    │    │    │HOME│PGDN│PGUP│END │    │
	* ├────┼────┼────┼────┼────┼────┴────┼────┼────┼────┼────┼────┤
	* │    │    │    │    │    │         │    │    │    │    │    │
	* └────┴────┴────┴────┴────┴─────────┴────┴────┴────┴────┴────┘
	*/
	[_NAVIGATION] = LAYOUT_planck_mit(
		_______, _______, _______, _______, _______, _______, _______, KC_BSPC, KC_DEL,  _______, CW_TOGG, _______,
		_______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______,
		_______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,  _______,
		_______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______
	),

	/*
	* ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
	* │    │    │    │QWER│COLE│    |    │MAIL│APP │BRIU│LEON│    |
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* │    │    │MAC │LNX │WINC│    │    │WSCH│PSCR|SLEP│BOOT│    │
	* ├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
	* |    │    │    │    │WIN │    │    │CALC│INS │BRID│LEOF│    │
	* ├────┼────┼────┼────┼────┼────┴────┼────┼────┼────┼────┼────┤
	* │    │    │    │    │    │         │    │    │    │    │    │
	* └────┴────┴────┴────┴────┴─────────┴────┴────┴────┴────┴────┘
	*/
	[_CONFIG] = LAYOUT_planck_mit(
		_______, _______, _______,  QWERTY, COLEMAK, _______, _______, KC_MAIL, KC_APP,  KC_BRIU, LED_ON,  _______,
		_______, _______, UC_MAC,  UC_LINX, UC_WINC, _______, _______, KC_WHOM, KC_PSCR, KC_SLEP, QK_BOOT, _______,
		_______, _______, _______, _______, UC_WIN,  _______, _______, KC_CALC, KC_INS,  KC_BRID, LED_OFF, _______,
		_______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______
	)
};

// EEPROM led config
typedef union {
	uint32_t raw;
	struct {
		bool is_led_on :1;
	};
} led_config_t;
led_config_t led_config;

// EEPROM is reset
void eeconfig_init_user(void) {
	led_config.raw = 0;
	led_config.is_led_on = true;
	eeconfig_update_user(led_config.raw);
}

void keyboard_post_init_user() {
	setPinOutput(LED_RED);
	setPinOutput(LED_GREEN);
	led_config.raw = eeconfig_read_user();
}

layer_state_t layer_state_set_user(layer_state_t state) {
	// active layer -> red led
	int active_layer = get_highest_layer(state);
	bool activate = active_layer != _COLEMAK && active_layer != _QWERTY;
	handle_led(activate, LED_RED);

	// config layer activation
	return update_tri_layer_state(state, _NUMBERS, _SYMBOLS, _CONFIG);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	// modifiers -> green led
	switch (keycode) {
		// normal modifiers
		case KC_LSFT:
		case KC_LCTL:
		case KC_LALT:
		case KC_LGUI:
		case KC_RSFT:
		case KC_RCTL:
		case KC_RALT:
		case KC_RGUI:
			handle_led(record->event.pressed, LED_GREEN);
			break;

		// tap hold modifiers
		case HOME_A:
		case HOME_R:
		case HOME_S:
		case HOME_T:
		case HOME_N:
		case HOME_E:
		case HOME_I:
		case HOME_O:
			if (!record->tap.count) {
				handle_led(record->event.pressed, LED_GREEN);
			}
			break;

		case LED_ON:
			led_config.is_led_on = true;
			eeconfig_update_user(led_config.raw);
			return false;
		case LED_OFF:
			led_config.is_led_on = false;
			writePinLow(LED_RED);
			writePinLow(LED_GREEN);
			eeconfig_update_user(led_config.raw);
			return false;
	}

	return true;
}

void caps_word_set_user(bool active) {
	// caps word -> green led
	handle_led(active, LED_GREEN);
}

void handle_led(bool activate, int LED) {
	if (led_config.is_led_on == true) {
		if (activate) {
			writePinHigh(LED);
		} else {
			writePinLow(LED);
		}
	}
}
