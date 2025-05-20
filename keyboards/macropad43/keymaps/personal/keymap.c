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

#include "layout.h"
#include "global.h"
//#include "stratagems.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record ->event.pressed){
        switch (keycode) {
            // First row, Mission stratagems.
            case KC_00:
                execute_order(padkeys[0].group, padkeys[0].order);
                return false;
            case KC_10:
                execute_order(padkeys[1].group,padkeys[1].order);
                return false;
            case KC_20:
                execute_order(padkeys[2].group,padkeys[2].order);
                return false;
            case KC_30:
                execute_order(padkeys[3].group,padkeys[3].order);
                return false;

            // Second row, Support stratagems.
            case KC_01:
                execute_order(padkeys[4].group,padkeys[4].order);
                return false;
            case KC_11:
                execute_order(padkeys[5].group,padkeys[5].order);
                return false;
            case KC_21:
                execute_order(padkeys[6].group,padkeys[6].order);
                return false;
            case KC_31:
                execute_order(padkeys[7].group,padkeys[7].order);
                return false;

            // Third row, Configuration Keys.
            case KC_02: // Enter config mode/Exit config mode.
                if (config_mode == 0) {
                    idx_group = 0;
                    idx_order = 0;
                    idx_keys = 0;
                    config_mode = 1;
                    level = "Key";
                    SEND_STRING("Config mode ON");
                    SEND_STRING("Key = " idx_keys);
                } else {
                    config_mode = 0;
                     SEND_STRING("Config mode OFF");
                }
                return false;
            case KC_12: // Show Previous item in the current list.
                return false;
            case KC_22: // Show Next item in the current list.
                switch (level) {
                    case "Key":
                        if (idx_keys < 11) {
                            idx_keys++;
                        else {
                            idx_keys = 0;
                        }
                        SEND_STRING("key = " idx_keys);
                        return false;
                    case "Group":
                        if (idx_group < 4) {
                            idx_group++;
                            SEND_STRING(group_names[idx_group].name);
                        }
                        return false;
                    case "Order":
                        if (idx_order < 12) {
                            idx_order++;
                            SEND_STRING(stratagems[idx_group][idx_order].name);
                        }
                        return false;
                }
                return false;
            case KC_32: // Save Item and go to the next level.
                switch (level) {
                    case "Key":
                        level = "Group";
                        break;
                    case "Group":
                        level = "Order";
                        break;
                    case "Order":
                        level = "Key";
                        break;
                }
                SEND_STRING(level);
                return false;
        }
    }
    return true;
};

#include "stratagems.c"
