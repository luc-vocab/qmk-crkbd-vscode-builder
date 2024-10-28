// GAME
// ============

#define __GAME_L0__  KC_ESC,        KC_1,       KC_2,     KC_3,    KC_4,     KC_5
#define __GAME_L1__  KC_TAB,        KC_T,       KC_Q,     KC_W,    KC_E,     KC_R
#define __GAME_L2__  KC_ENTER,      KC_LSFT,    KC_A,     KC_S,    KC_D,     KC_F
#define __GAME_L3__  KC_G,          KC_Z,       KC_X,     KC_C,    KC_V,     KC_B

#define __GAME_R0__  KC_TRNS,       KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  TO(BASE)
#define __GAME_R1__  KC_Y,          KC_U,       KC_I,     KC_O,    KC_P,     KC_ESC
#define __GAME_R2__  KC_H,          KC_J,       KC_K,     KC_L,    KC_SCLN,  KC_QUOT
#define __GAME_R3__  KC_N,          KC_M,       KC_COMM,  KC_DOT,  KC_SLSH,  KC_ESC

#define __GAME_L_2THUMB__  KC_LCTL,  KC_SPACE
#define __GAME_R_2THUMB__  KC_TRNS,  KC_TRNS
#define __GAME_L_3THUMB__  MO(GAME_NUMPAD), KC_LCTL, KC_SPACE
#define __GAME_R_3THUMB__  KC_TRNS,         KC_TRNS, TO(BASE)

#define __GAME_L1_EXT__ __GAME_L1__, KC_ESC
#define __GAME_L2_EXT__ __GAME_L2__, KC_LALT
#define __GAME_R1_EXT__ KC_TRNS, __GAME_R1__
#define __GAME_R2_EXT__ KC_TRNS, __GAME_R2__

// GAME NUMPAD
// ===========

#define __GAME_NUMPAD_L0__  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_L1__  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_L2__  KC_TRNS, KC_1,       KC_2,     KC_3,    KC_4,     KC_5
#define __GAME_NUMPAD_L3__  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS

#define __GAME_NUMPAD_R0__  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_R1__  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_R2__  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_R3__  KC_TRNS, KC_TRNS,    KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS

#define __GAME_NUMPAD_L_2THUMB__  KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_R_2THUMB__  KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_L_3THUMB__  KC_TRNS, KC_TRNS,  KC_TRNS
#define __GAME_NUMPAD_R_3THUMB__  KC_TRNS, KC_TRNS,  KC_TRNS

#define __GAME_NUMPAD_L1_EXT__ __GAME_NUMPAD_L1__, KC_TRNS
#define __GAME_NUMPAD_L2_EXT__ __GAME_NUMPAD_L2__, KC_TRNS
#define __GAME_NUMPAD_R1_EXT__ KC_TRNS, __GAME_NUMPAD_R1__
#define __GAME_NUMPAD_R2_EXT__ KC_TRNS, __GAME_NUMPAD_R2__