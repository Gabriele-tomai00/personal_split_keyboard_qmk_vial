#ifndef CONFIG_H
#define CONFIG_H

// display
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP23
#define I2C1_SCL_PIN GP28

// encoders
#define NUM_ENCODERS 1

#define ENCODERS_PAD  {GP21, GP26} // { encoder1a, encoder2a }

#define ENCODER_RESOLUTION 8

#endif

// PIN UTILIZZABILI: 26
// PIN PER MATRICE: 20
// PIN FOR ENCODERS: 6
// PIN FOR I2C DISPLAY: 2