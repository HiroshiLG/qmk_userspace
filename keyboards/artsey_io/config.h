#pragma once

/* Memory saving*/
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_MUSIC_MODE
//#define NO_ACTION_ONESHOT
#define DISABLE_LEADER

#define LAYER_STATE_8BIT // Up to 8 layers
//#define CUSTOM_LAYER_READ // if you remove this it causes issues - needs better guarding

// Tapdancing
//#define TAPPING_TERM 200

// Combos
#define ONESHOT_ENABLE // Enable oneshot keys
#define ONESHOT_TAP_TOGGLE 1
#define ONESHOT_TIMEOUT 5000
// Number of combos used
//#define COMBO_COUNT 3
