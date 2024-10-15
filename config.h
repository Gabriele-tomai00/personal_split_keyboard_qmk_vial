#ifndef CONFIG_H
#define CONFIG_H

// mouse
#define MK_3_SPEED // velocità costante

// encoders
#define NUM_ENCODERS 1




#define ENCODER_RESOLUTION 1
// #define MEDIA_KEY_DELAY 10


// backlight
#define BACKLIGHT_PWM_DRIVER PWMD5
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_A
// #define BACKLIGHT_PIN GP26
#define BACKLIGHT_ON_STATE 1 // to do: provare 1 per vedere se si accende di default

#define BACKLIGHT_LIMIT_VAL 255 // no limit for the light level



#endif
