#ifndef CONFIG_H
#define CONFIG_H

// mouse
#define MOUSEKEY_MOVE_DELTA 4
#define MMOUSEKEY_MAX_SPEED	0

// encoders
#define NUM_ENCODERS 1
#define ENCODERS_PAD { GP21, GP22 } //vial requirements (but It sees that work with the next definitions too)
// #define ENCODER_A_PINS { GP21 }
// #define ENCODER_B_PINS { GP22 }
#define ENCODER_RESOLUTION 4


// backlight
#define BACKLIGHT_LEVELS 2 
#define BACKLIGHT_LIMIT_VAL 128 //to avoid the maximum level of brightness (too high)
#define BACKLIGHT_PWM_DRIVER PWMD5
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_A
#define BACKLIGHT_ON_STATE 1
// to avoid noisy sound of the led during dimming
#define BACKLIGHT_PWM_COUNTER_FREQUENCY 1000000
#define BACKLIGHT_PWM_PERIOD BACKLIGHT_PWM_COUNTER_FREQUENCY / 16384 
#endif

