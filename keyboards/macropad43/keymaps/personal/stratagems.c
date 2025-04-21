#include "stratagems.h"
//#include "quantum.h"
//static const char cluster_bomb[] =
#define cluster_bomb SS_DOWN(X_LCTL) SS_DELAY(157) SS_UP(X_LCTL) SS_DELAY(427) SS_DOWN(X_UP) SS_DELAY(157) SS_UP(X_UP) SS_DELAY(127) SS_DOWN(X_RIGHT) SS_DELAY(157) SS_UP(X_RIGHT) SS_DELAY(127) SS_DOWN(X_DOWN) SS_DELAY(157) SS_UP(X_DOWN) SS_DELAY(127) SS_DOWN(X_DOWN) SS_DELAY(157) SS_UP(X_DOWN) SS_DELAY(127) SS_DOWN(X_RIGHT) SS_DELAY(157) SS_UP(X_RIGHT) SS_DELAY(127);

void send_eagles(int attack) {
    switch (attack) {
        case 1:
            SEND_STRING(cluster_bomb);
    }
}
