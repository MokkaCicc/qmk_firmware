# Wildcard to allow APM32 MCU
DFU_SUFFIX_ARGS = -p FFFF -v FFFF

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes      # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = yes           # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
RGBLIGHT_ENABLE = yes       # Enable keyboard RGB underglow
RGBLIGHT_DRIVER = WS2812    # RGB driver support
WS2812_DRIVER = pwm         # WS2812 RGB Driver
AUDIO_ENABLE = no           # Audio output
