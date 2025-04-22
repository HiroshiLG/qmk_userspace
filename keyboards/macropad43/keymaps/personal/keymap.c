#include QMK_KEYBOARD_H
#include <stdio.h>

enum custom_keycodes {
    // Key definition as a matrix (col, row)
    KC_00,
    KC_01,
    KC_02,
    KC_10,
    KC_11,
    KC_12,
    KC_20,
    KC_21,
    KC_22,
    KC_30,
    KC_31,
    KC_32
};

/*/ Tap Dance declarations
enum {
    TD_LCMK,
    TD_RCMK,
    TD_NUM,
    TD_ARS,
};*/

#include "layout.h"
#include "stratagems.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record ->event.pressed){
        switch (keycode) {
            case KC_00:
                eagle_attack(6);
                return false;
            case KC_01:
                send_support(1);
                return false;
            case KC_02:
                weapon_support(1);
                return false;
            case KC_10:
                eagle_attack(7);
                return false;
            case KC_11:
                send_support(9);
                return false;
            case KC_12:
                weapon_support(5);
                return false;
            case KC_20:
                return false;
            case KC_21:
                sentry_attack(2);
                return false;
            case KC_22:
                weapon_support(6);
                return false;
            case KC_30:
                return false;
            case KC_31:
                return false;
            case KC_32:
                return false;
        }
    }
    return true;
};

#include "stratagems.c"

/* COMBOS
const uint16_t PROGMEM CMB_B[] = {KC_O, KC_E, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(CMB_B, KC_B),
    COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};*/
