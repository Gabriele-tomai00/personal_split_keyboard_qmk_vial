#ifndef CONFIG_H
#define CONFIG_H

// display
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN GP23
#define I2C1_SCL_PIN GP28

// encoders
#define ENCODER_A_PINS  {GP21, GP26} // { encoder1a, encoder2a }
#define ENCODER_B_PINS  {GP22, GP27} // { encoder1b, encoder2b }

#define ENCODER_RESOLUTION 8

#endif


// PIN UTILIZZABILI: 26
// PIN PER MATRICE: 20
// PIN FOR ENCODERS: 6
// PIN FOR I2C DISPLAY: 2