#include QMK_KEYBOARD_H
#include <stdio.h>

enum custom_keycodes {
    // Aereal Attacks
    KC_SENDEAGLES,
    KC_CLUSTBOMB,
    KC_500KBOMB,
    // Support
    KC_SUPPLY,
    KC_GUARDDOG,
    KC_GSENTRY,
    // Weapons
    KC_GRLAUNCH,
    KC_RAILGUN,
    KC_ANTIMAT,
    // Unassigned
    KC_NOTAKEY
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
            /******************************
               AEREAL ATTACKS STRATAGEMS
            ******************************/
            case KC_SENDEAGLES:
                send_eagles(1);
                return false;
            case KC_CLUSTBOMB:
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
                );
                return false;
            case KC_500KBOMB:
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
                );
                return false;
            /*********************
              SUPPORT STRATAGEMS
            *********************/
            case KC_SUPPLY:
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
                return false;
            case KC_GUARDDOG:
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
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
                );
                return false;
            case KC_GSENTRY:
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
                return false;
            /********************
              WEAPON STRATAGEMS
            ********************/
            case KC_GRLAUNCH:
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_LEFT)
                    SS_DELAY(157)
                    SS_UP(X_LEFT)
                    SS_DELAY(127)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_LEFT)
                    SS_DELAY(157)
                    SS_UP(X_LEFT)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
                );
                return false;
            case KC_RAILGUN:
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
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
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
                );
                return false;
            case KC_ANTIMAT:
                SEND_STRING(
                    SS_DOWN(X_LCTL)
                    SS_DELAY(157)
                    SS_UP(X_LCTL)
                    SS_DELAY(427)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
				    SS_DOWN(X_LEFT)
                    SS_DELAY(157)
                    SS_UP(X_LEFT)
                    SS_DELAY(127)
				    SS_DOWN(X_RIGHT)
                    SS_DELAY(157)
                    SS_UP(X_RIGHT)
                    SS_DELAY(127)
				    SS_DOWN(X_UP)
                    SS_DELAY(157)
                    SS_UP(X_UP)
                    SS_DELAY(127)
				    SS_DOWN(X_DOWN)
                    SS_DELAY(157)
                    SS_UP(X_DOWN)
                    SS_DELAY(127)
                );
                return false;
            case KC_NOTAKEY:
                // DO NOTHING
                return false;
        }
    }
    return true;
};

/* COMBOS
const uint16_t PROGMEM CMB_B[] = {KC_O, KC_E, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(CMB_B, KC_B),
    COMBO(test_combo2, LCTL(KC_Z)), // keycodes with modifiers are possible too!
};*/
#include "stratagems.c"
