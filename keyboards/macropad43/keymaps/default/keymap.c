#include QMK_KEYBOARD_H
#include <stdio.h>
#include "layout.h"

enum custom_keycodes {
    KC_SUPPLY,
    KC_GSENTRY,
    KC_GDROVER
};

/*/ Tap Dance declarations
enum {
    TD_LCMK,
    TD_RCMK,
    TD_NUM,
    TD_ARS,
};*/

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_SUPPLY:
            if (record->event.pressed) {
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
                );
            }
            return false;
        case KC_GSENTRY:
            if (record->event.pressed) {
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
				    SS_DOWN(X_LEFT)
                    SS_DELAY(157)
                    SS_UP(X_LEFT)
                    SS_DELAY(127)
                );
            }
            return false;
        case KC_GDROVER:
            if (record->event.pressed) {
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_LEFT)
                    SS_DELAY(157)
                    SS_UP(X_LEFT)
                    SS_DELAY(127)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
                );
            }
            return false;
    }
    return true;
};

/* COMBOS
const uint16_t PROGMEM CMB_B[] = {KC_O, KC_E, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(CMB_B, KC_B),
    COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};*/
