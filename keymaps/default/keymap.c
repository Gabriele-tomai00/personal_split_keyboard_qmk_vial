enum layers {
    _BASE,
    _FIRST,
    _SECOND
};

#include QMK_KEYBOARD_H
#define ENCODER1_BUTTON_PIN ENCODER_BUTTONS[0]
#define ENCODER2_BUTTON_PIN ENCODER_BUTTONS[1]


// WHAT I WANT:
// 15 cols and 5 rows

/*                                   MY TARGET

    GPIO: 0     1    2   3     4    5    6    7   8     9   10   11  12 (13)  14
         ┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬────┬─────────┐
    16   │Esc │ 1  │  2 │  3 │  4 │  5 │  6 │  7 │  8 │  9 │  0 │  - │  + │  Backsp │
         ├────┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬──────┤
    17   │ Tab   │ Q  │  W │  E │  R │  T │  Y │ U  │  I │ O  │ P  │ [  │ ]  │Enter │
         ├───────┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┐     │
    18   │ Caps   │ A  │ S  │ D  │ F  │ G  │ H  │ J  │  K │  L │ ;  │ '  │ #  │     │
         ├────┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬────┤
    19   │Shf │ <  │  Z │  X │  C │  V │  B │  N │  M │ ,  │  . │  -      │ ^  │ Shf│
         ├────┴─┬──┴──┬─┴───┬┴────┼────┴────┼────┴────┼────┼────┼────┼────┼────┼────┤
    20   │ Crtl │ WIN │ Alt │ FN  │  Space  │  Space  │ FN │ Alt│Ctr │ <  │ |  │ >  │
         └──────┴─────┴─────┴─────┴─────────┴─────────┴────┴────┴────┴────┴────┴────┘
*/
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_g(
//  ┌─────────┬──────────┬──────────┬──────────┬──────────┬──────────┬──────────┬    ┌─────────┬──────────┬────────────┬──────────┬──────────┬──────────┬──────────────────┐
      KC_ESC,     KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,          KC_7,      KC_8,      KC_9,      KC_0,    KC_MINS,    KC_EQL,         KC_BSPC,
//  ├─────────┴────┬─────┴────┬─────┴────┬─────┴────┬─────┴────┬─────┴────┬─────┴ ┌──├───┬─────┴── ──┬─────┴─────┬─────┴────┬─────┴────┬─────┴────┬─────┴────┬─────────────┤
         KC_TAB,       KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,          KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,    KC_LBRC,   KC_RBRC,    
//  ├──────────────┴─┬────────┴─┬────────┴┬─────────┴┬─────────┴┬─────────┴─     ├───────┴─┬─────────┴┬──────────┴┬─────────┴┬─────────┴┬─── ─────┴┬─────────┴───┬         ┤
         KC_CAPS,        KC_A,     KC_S,      KC_D,      KC_F,      KC_G,           KC_H,      KC_J,      KC_K,      KC_L,       KC_SCLN,   KC_QUOT,    KC_BSLS,    KC_ENT,
//  ├─────────────┬──┴────────┬──┴────────┬─┴─────────┬┴─────────┬┴─────────┬┴───┬    ├─────┴────┬──────┴───┬───────┴──┬───────┴──┬───────┴──┬───────┴─────────┬─┴─────────┤
      KC_LSFT,       KC_NUBS,      KC_Z,      KC_X,      KC_C,      KC_V,   KC_B,          KC_N,      KC_M,    KC_COMM,   KC_DOT,   KC_RSFT,      KC_UP,           KC_SLSH,
//  ├─────────────┼───────────┴─┬─────────┴───┬───────┴───┼──────┴──────────┼         ├──────────┴──────────┴┬─────────┴───┬──────┴──────┬───┴──────┬──────────┬───────────┤
      KC_LCTL,        KC_LGUI,      KC_LALT,      MO(1),         KC_TAB,                 KC_SPC,               MO(1),          KC_RALT,     KC_LEFT,   KC_DOWN,   KC_RGHT
//  └─────────────┴─────────────┴─────────────┴───────────┴─────────────────────┴    └─────────────────────┴────────────────┴─────────────┴──────────┴──────────┴──────────┘
    ),

// Layer 1: _FIRST - Fn Layer (tasti funzione)
    [_FIRST] = LAYOUT_g(
//  ┌─────────┬──────────┬──────────┬──────────┬──────────┬──────────┬──────────┬    ┌─────────┬──────────┬────────────┬──────────┬──────────┬──────────┬──────────────────┐
      KC_GRV,     KC_F1,    KC_F2,     KC_F3,      KC_F4,     KC_F5,    KC_F6,          KC_F7,     KC_F8,      KC_F9,     KC_F10,    KC_F11,    KC_F12,         KC_DEL,
//  ├─────────┴────┬─────┴────┬─────┴────┬─────┴────┬─────┴────┬─────┴────┬─────┴    ├───┬─────┴── ──┬─────┴─────┬─────┴────┬─────┴────┬─────┴────┬─────┴────┬─────────────┤
        _______,      _______,    KC_UP,    _______,   _______,   _______,         _______,  _______,   KC_UP,      _______,   _______,   _______,   _______,
//  ├──────────────┴─┬────────┴─┬────────┴┬─────────┴┬─────────┴┬─────────┴─     ├───────┴─┬─────────┴┬──────────┴┬─────────┴┬─────────┴┬─── ─────┴┬─────────┴───┬         ┤
        _______,       KC_LEFT,   KC_DOWN,   KC_RGHT,   _______,   _______,        _______,   KC_LEFT,   KC_DOWN,    KC_RGHT, _______,    _______,     _______,    _______,
//  ├─────────┬──────┴───┬──────┴───┬──────┴───┬──────┴───┬──────┴───┬──────┴───┬    ├─────┴───┬──────┴───┬───────┴──┬───────┴──┬───────┴──┬───────┴──┬──────────┴┬────────┤
      _______,  _______,    _______,   _______,  _______,   _______,    _______,       _______,  _______,   _______,   _______,   _______,         KC_PGUP,        _______,
//  ├─────────┴───┬──────┴──────┬───┴─────────┬┴──────────┼──────────┴──────────┼    ├─────────┴──────────┼──────────┼──────────┼──────────┼──────────┼───────────┼────────┤
        _______,    _______,       _______,      _______,         _______,                   _______,             _______,      _______,    KC_HOME,    KC_PGDN,   KC_END
//  └─────────────┴─────────────┴─────────────┴───────────┴─────────────────────┴    └─────────────────────┴────────────────┴─────────────┴──────────┴──────────┴──────────┘
    ),

};


#ifdef OLED_ENABLE
// DEFAULT LOGO
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

//////////////
// oled_rotation_t oled_init_user(oled_rotation_t rotation) {
//     if (!is_keyboard_master()) {
//         return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
//     }
//     return rotation;
// }

bool oled_task_user(void) {
    render_logo();


    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _FIRST:
            oled_write_P(PSTR("FN\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif


// Funzione per aggiornare lo stato degli encoder
bool encoder_update_user(uint8_t index, bool clockwise) {
    switch (index) {
        case 0:  // First encoder: audio
            if (clockwise) {
                tap_code(KC_VOLU);  // Ruota in senso orario: Aumenta il volume
            } else {
                tap_code(KC_VOLD);  // Ruota in senso antiorario: Diminuisci il volume
            }
            break;
        case 1:  // Secondo encoder: dispaly light
            if (clockwise) {
                tap_code(KC_BRIU);  // Ruota in senso orario: Aumenta la luminosità
            } else {
                tap_code(KC_BRID);  // Ruota in senso antiorario: Diminuisci la luminosità
            }
            break;
    }
    return true;
}

