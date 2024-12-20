// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later


#include QMK_KEYBOARD_H
#include <stdio.h>
#include "dvorak_42_key.h"
#include "keymap_all.h"

#define LAYOUT_WRAPPER_CRKBD(...) LAYOUT_split_3x6_3_ex2(__VA_ARGS__)

// to build: qmk compile -kb crkbd/rev1 -km dvorak_42_key

static bool g_oneshot_shift = false;
static bool g_oneshot_ctrl = false;
static bool g_oneshot_alt = false;
static bool g_oneshot_gui = false;
static bool g_capsword = false;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_WRAPPER_CRKBD(
        __BASE_L1_EXT__,      __BASE_R1_EXT__ ,
        __BASE_L2_EXT__,      __BASE_R2_EXT__ ,
        __BASE_L3__,          __BASE_R3__     ,
        __BASE_L_3THUMB__,    __BASE_R_3THUMB__),
[KEYNAV] = LAYOUT_WRAPPER_CRKBD(
        __KEYNAV_L1_EXT__   , __KEYNAV_R1_EXT__ ,
        __KEYNAV_L2_EXT__   , __KEYNAV_R2_EXT__ ,
        __KEYNAV_L3__       , __KEYNAV_R3__     ,
        __KEYNAV_L_3THUMB__ , __KEYNAV_R_3THUMB__),
[KEYSEL] = LAYOUT_WRAPPER_CRKBD(
        __KEYSEL_L1_EXT__ ,   __KEYSEL_R1_EXT__ ,
        __KEYSEL_L2_EXT__ ,   __KEYSEL_R2_EXT__ ,
        __KEYSEL_L3__ ,       __KEYSEL_R3__ ,
        __KEYSEL_L_3THUMB__ , __KEYSEL_R_3THUMB__),
[DESKNAV] = LAYOUT_WRAPPER_CRKBD(
        __DESKNAV_L1_EXT__ ,  __DESKNAV_R1_EXT__ ,
        __DESKNAV_L2_EXT__ ,  __DESKNAV_R2_EXT__ ,
        __DESKNAV_L3__ ,      __DESKNAV_R3__ ,
        __DESKNAV_L_3THUMB__, __DESKNAV_R_3THUMB__),
[BROWSER] = LAYOUT_WRAPPER_CRKBD(
        __BROWSER_L1_EXT__ ,  __BROWSER_R1_EXT__ ,
        __BROWSER_L2_EXT__ ,  __BROWSER_R2_EXT__ ,
        __BROWSER_L3__ ,      __BROWSER_R3__ ,
        __BROWSER_L_3THUMB__ ,__BROWSER_R_3THUMB__),
[SHELL] = LAYOUT_WRAPPER_CRKBD(
        __SHELL_L1_EXT__ ,   __SHELL_R1_EXT__ ,
        __SHELL_L2_EXT__ ,   __SHELL_R2_EXT__ ,
        __SHELL_L3__ ,       __SHELL_R3__ ,
        __SHELL_L_3THUMB__ , __SHELL_R_3THUMB__),
[TMUX] = LAYOUT_WRAPPER_CRKBD(
        __TMUX_L1_EXT__   ,       __TMUX_R1_EXT__ ,
        __TMUX_L2_EXT__   ,       __TMUX_R2_EXT__ ,
        __TMUX_L3__       ,       __TMUX_R3__     ,
        __TMUX_L_3THUMB__ ,       __TMUX_R_3THUMB__),
[VSCODE] = LAYOUT_WRAPPER_CRKBD(
        __VSCODE_L1_EXT__ ,   __VSCODE_R1_EXT__ ,
        __VSCODE_L2_EXT__ ,   __VSCODE_R2_EXT__ ,
        __VSCODE_L3__ ,       __VSCODE_R3__ ,
        __VSCODE_L_3THUMB__ , __VSCODE_R_3THUMB__),
[SYMBOLS] = LAYOUT_WRAPPER_CRKBD(
        __SYMBOLS_L1_EXT__ ,   __SYMBOLS_R1_EXT__ ,
        __SYMBOLS_L2_EXT__ ,   __SYMBOLS_R2_EXT__ ,
        __SYMBOLS_L3__ ,       __SYMBOLS_R3__ ,
        __SYMBOLS_L_3THUMB__ , __SYMBOLS_R_3THUMB__),
[GAME] = LAYOUT_WRAPPER_CRKBD(
        __GAME_L1_EXT__ ,   __GAME_R1_EXT__ ,
        __GAME_L2_EXT__ ,   __GAME_R2_EXT__ ,
        __GAME_L3__ ,       __GAME_R3__ ,
        __GAME_L_3THUMB__ , __GAME_R_3THUMB__),
[GAME_NUMPAD] = LAYOUT_WRAPPER_CRKBD(
        __GAME_NUMPAD_L1_EXT__ ,   __GAME_NUMPAD_R1_EXT__ ,
        __GAME_NUMPAD_L2_EXT__ ,   __GAME_NUMPAD_R2_EXT__ ,
        __GAME_NUMPAD_L3__ ,       __GAME_NUMPAD_R3__ ,
        __GAME_NUMPAD_L_3THUMB__ , __GAME_NUMPAD_R_3THUMB__),



};

// callback when oneshot modifiers are enabled
void oneshot_mods_changed_user(uint8_t mods) {
  if (mods & MOD_MASK_SHIFT) {
    g_oneshot_shift = true;
  }
  if (mods & MOD_MASK_CTRL) {
    g_oneshot_ctrl = true;
  }
  if (mods & MOD_MASK_ALT) {
    g_oneshot_alt = true;
  }
  if (mods & MOD_MASK_GUI) {
    g_oneshot_gui = true;
  }
  if (!mods) {
    g_oneshot_shift = false;
    g_oneshot_ctrl = false;
    g_oneshot_alt = false;
    g_oneshot_gui = false;
  }
  rgblight_set_layer_state(7, g_oneshot_shift || g_oneshot_ctrl || g_oneshot_alt || g_oneshot_gui || g_capsword);
}

  /*
  // RGB key numbers
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,     T:3,  KC_LCTL,    KC_RCTL,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,     D:10,    KC_F,    KC_G, KC_LALT,    KC_RALT,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
       20,       KC_Z,    X: 14,      C:9,     V:6,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                       8,       7,      0,          KC_ENT, TL_UPPR, KC_RGUI
                                  //`--------------------------'  `--------------------------'

  */

const rgblight_segment_t PROGMEM rgb_layer_off[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 0, 0}
);

const rgblight_segment_t PROGMEM rgb_layer_blue[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_BLUE}
);

const rgblight_segment_t PROGMEM rgb_layer_purple[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM rgb_layer_red[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_RED}
);

const rgblight_segment_t PROGMEM rgb_layer_orange[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM rgb_layer_yellow[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_YELLOW}
);

const rgblight_segment_t PROGMEM rgb_layer_green[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_GREEN}
);

const rgblight_segment_t PROGMEM rgb_layer_pink[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_PINK}
);

const rgblight_segment_t PROGMEM rgb_layer_magenta[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLED_NUM, HSV_MAGENTA}
);

const rgblight_segment_t PROGMEM rgb_layer_gaming[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,  1, HSV_RED}, // L rightmost thumb key
    {7,  2, HSV_RED}  // L 2 thumb keys (leftmost)
);


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_off,     // 0
    rgb_layer_blue,    // 1
    rgb_layer_purple,  // 2
    rgb_layer_red,     // 3
    rgb_layer_orange,  // 4
    rgb_layer_yellow,  // 5
    rgb_layer_green,   // 6
    rgb_layer_pink,    // 7
    rgb_layer_gaming,  // 8 
    rgb_layer_magenta  // 9
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t default_layer_state_set_user(layer_state_t state) {
    // just call layer_state_set_user
    layer_state_set_user(layer_state);
    return state;
}

layer_state_t layer_state_set_user(layer_state_t state) {

    // are we coming out of window switching mode ?
    if (wsWindowSwitchingMode &&
        layer_state_cmp(state, BASE))
    {
        // SEND_STRING(SS_UP(X_LALT));
        unregister_code(KC_LALT);
        wsWindowSwitchingMode = false;
    }


    // base layer must be here
    rgblight_set_layer_state(0, 
           layer_state_cmp(state, BASE)
        );

    // keynav - blue
    rgblight_set_layer_state(1, 
           layer_state_cmp(state, KEYNAV));

    // keysel - purple
    rgblight_set_layer_state(2, 
           layer_state_cmp(state, KEYSEL));

    // base shell - red
    // appnav - green
    rgblight_set_layer_state(3, 
      layer_state_cmp(state, SHELL)
    );

    rgblight_set_layer_state(9, 
      layer_state_cmp(state, TMUX)
    );    

    // desknav - orange
    rgblight_set_layer_state(4, 
          layer_state_cmp(state, DESKNAV));

    // appnav - green
    rgblight_set_layer_state(6, 
           layer_state_cmp(state, BROWSER)
        || layer_state_cmp(state, VSCODE)
        );

    // gaming
    rgblight_set_layer_state(8, 
          layer_state_cmp(state, GAME));

    return state;
}

void caps_word_set_user(bool active) {
  g_capsword = active;
  // will enable/disable rgb layer 7 based on whether caps word is active
  // pink - modifier active
  rgblight_set_layer_state(7, g_oneshot_shift || g_oneshot_ctrl || g_oneshot_alt || g_oneshot_gui);
  // yellow - capsword
  rgblight_set_layer_state(5, g_capsword);
}

