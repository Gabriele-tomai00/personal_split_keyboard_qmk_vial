#ifndef CONFIG_H
#define CONFIG_H

// encoders
#define NUM_ENCODERS 1
#define ENCODERS_PAD  {GP21, GP26} // { encoder1a, encoder2a }
#define ENCODER_RESOLUTION 8

#define BACKLIGHT_PWM_DRIVER PWMD3
#define BACKLIGHT_PWM_CHANNEL RP2040_PWM_CHANNEL_A


// #define BACKLIGHT_PWM_DRIVER RP2040_PWM_CHANNEL_A  // Assicurati che questo driver sia supportato
// #define BACKLIGHT_PWM_CHANNEL 0                   // Scegli il canale PWM appropriato
// #define BACKLIGHT_PIN GP23
// #define BACKLIGHT_LEVELS 5
// #define BACKLIGHT_CAPS_LOCK  	
// #define BREATHING_PERIOD 6
// #define BACKLIGHT_ON_STATE 1
// #define BACKLIGHT_LIMIT_VAL 255
// #define BACKLIGHT_DEFAULT_ON true

#endif

// PIN UTILIZZABILI: 26
// PIN PER MATRICE: 20
// PIN FOR ENCODERS: 6