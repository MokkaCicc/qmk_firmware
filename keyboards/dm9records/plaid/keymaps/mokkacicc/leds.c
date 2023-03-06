#pragma once

#define LED_RED C5
#define LED_GREEN C4

enum led_keycodes {
	LED_ON = SAFE_RANGE,
	LED_OFF
};

typedef union {
	uint32_t raw;
	struct {
		bool is_led_on :1;
	};
} led_config_t;
