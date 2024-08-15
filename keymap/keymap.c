// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later


#include QMK_KEYBOARD_H
#include <stdio.h>
#include "dvorak_42_key.h"
// #include "dvorak_42_keymap_common.h"
#include "keymap_all.h"

#define LAYOUT_WRAPPER_CRKBD(...) LAYOUT_split_3x6_3(__VA_ARGS__)

// to build: qmk compile -kb crkbd/rev1 -km dvorak_42_key

static bool g_oneshot_shift = false;
static bool g_oneshot_ctrl = false;
static bool g_oneshot_alt = false;
static bool g_oneshot_gui = false;
static bool g_capsword = false;

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_WRAPPER_CRKBD(
        __BASE_L1__ ,       __BASE_R1__ ,
        __BASE_L2__ ,       __BASE_R2__ ,
        __BASE_L3__ ,       __BASE_R3__ ,
        __BASE_L_3THUMB__ , __BASE_R_3THUMB__),
[KEYNAV] = LAYOUT_WRAPPER_CRKBD(
        __KEYNAV_L1__ ,       __KEYNAV_R1__ ,
        __KEYNAV_L2__ ,       __KEYNAV_R2__ ,
        __KEYNAV_L3__ ,       __KEYNAV_R3__ ,
        __KEYNAV_L_3THUMB__ , __KEYNAV_R_3THUMB__),
[KEYSEL] = LAYOUT_WRAPPER_CRKBD(
        __KEYSEL_L1__ ,       __KEYSEL_R1__ ,
        __KEYSEL_L2__ ,       __KEYSEL_R2__ ,
        __KEYSEL_L3__ ,       __KEYSEL_R3__ ,
        __KEYSEL_L_3THUMB__ , __KEYSEL_R_3THUMB__),
[DESKNAV] = LAYOUT_WRAPPER_CRKBD(
        __DESKNAV_L1__ ,       __DESKNAV_R1__ ,
        __DESKNAV_L2__ ,       __DESKNAV_R2__ ,
        __DESKNAV_L3__ ,       __DESKNAV_R3__ ,
        __DESKNAV_L_3THUMB__ , __DESKNAV_R_3THUMB__),
[BROWSER] = LAYOUT_WRAPPER_CRKBD(
        __BROWSER_L1__ ,       __BROWSER_R1__ ,
        __BROWSER_L2__ ,       __BROWSER_R2__ ,
        __BROWSER_L3__ ,       __BROWSER_R3__ ,
        __BROWSER_L_3THUMB__ , __BROWSER_R_3THUMB__),
[SHELL] = LAYOUT_WRAPPER_CRKBD(
        __SHELL_L1__ ,       __SHELL_R1__ ,
        __SHELL_L2__ ,       __SHELL_R2__ ,
        __SHELL_L3__ ,       __SHELL_R3__ ,
        __SHELL_L_3THUMB__ , __SHELL_R_3THUMB__),
[VSCODE] = LAYOUT_WRAPPER_CRKBD(
        __VSCODE_L1__ ,       __VSCODE_R1__ ,
        __VSCODE_L2__ ,       __VSCODE_R2__ ,
        __VSCODE_L3__ ,       __VSCODE_R3__ ,
        __VSCODE_L_3THUMB__ , __VSCODE_R_3THUMB__),
[SYMBOLS] = LAYOUT_WRAPPER_CRKBD(
        __SYMBOLS_L1__ ,       __SYMBOLS_R1__ ,
        __SYMBOLS_L2__ ,       __SYMBOLS_R2__ ,
        __SYMBOLS_L3__ ,       __SYMBOLS_R3__ ,
        __SYMBOLS_L_3THUMB__ , __SYMBOLS_R_3THUMB__),
[GAME] = LAYOUT_WRAPPER_CRKBD(
        __GAME_L1__ ,       __GAME_R1__ ,
        __GAME_L2__ ,       __GAME_R2__ ,
        __GAME_L3__ ,       __GAME_R3__ ,
        __GAME_L_3THUMB__ , __GAME_R_3THUMB__),



};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  // return rotation;
  return OLED_ROTATION_180;
}
  

#define DISPLAY_LAYER_NAME(LAYER_NAME, LAYER_STRING) \
  if(get_highest_layer(layer_state) == LAYER_NAME) { \
      oled_write_ln_P(PSTR(LAYER_STRING), false); \
      return;\
  }\


void display_current_layer_name(void){
  DISPLAY_LAYER_NAME(GAME, "GAME");
  DISPLAY_LAYER_NAME(SYMBOLS, "SYMBOLS");
  // keysel
  DISPLAY_LAYER_NAME(KEYSEL, "KEYSEL");
  // keynav
  DISPLAY_LAYER_NAME(KEYNAV, "KEYNAV");
  // desknav
  DISPLAY_LAYER_NAME(DESKNAV, "DESKNAV");
  // appnav
  DISPLAY_LAYER_NAME(BROWSER, "BROWSER");
  DISPLAY_LAYER_NAME(SHELL, "SHELL");
  DISPLAY_LAYER_NAME(VSCODE, "VSCODE");
  // base
  DISPLAY_LAYER_NAME(BASE, "BASE");
}

void display_oneshot_mods(void) {
  // if caps word is enabled, show
  if(is_caps_word_on()) {
      oled_write_ln_P(PSTR("MOD: CAPS WORD"), false);
      return;
  }
  if(g_oneshot_shift) {
      oled_write_ln_P(PSTR("MOD: SHIFT"), false);
      return;
  }  
  if(g_oneshot_ctrl) {
      oled_write_ln_P(PSTR("MOD: CTRL"), false);
      return;
  }    
  if(g_oneshot_alt) {
      oled_write_ln_P(PSTR("MOD: ALT"), false);
      return;
  }      
  if(g_oneshot_gui) {
      oled_write_ln_P(PSTR("MOD: GUI"), false);
      return;
  }        
  if (wsWindowSwitchingMode)
  {
      oled_write_ln_P(PSTR("WIN SWITCH"), false);
      return;    
  }

  oled_write_ln_P(PSTR(""), false);
}

void oled_render_layer_state(void) {
  // first line: display layer name
  display_current_layer_name();
  // display mods
  display_oneshot_mods();

}

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

const rgblight_segment_t PROGMEM rgb_layer_off[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 0, 0}
);

const rgblight_segment_t PROGMEM rgb_layer_blue[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLIGHT_LED_COUNT, HSV_BLUE}
);

const rgblight_segment_t PROGMEM rgb_layer_purple[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLIGHT_LED_COUNT, HSV_PURPLE}
);

const rgblight_segment_t PROGMEM rgb_layer_red[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLIGHT_LED_COUNT, HSV_RED}
);

const rgblight_segment_t PROGMEM rgb_layer_orange[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLIGHT_LED_COUNT, HSV_ORANGE}
);

const rgblight_segment_t PROGMEM rgb_layer_yellow[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLIGHT_LED_COUNT, HSV_YELLOW}
);

const rgblight_segment_t PROGMEM rgb_layer_green[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLIGHT_LED_COUNT, HSV_GREEN}
);

const rgblight_segment_t PROGMEM rgb_layer_pink[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, RGBLIGHT_LED_COUNT, HSV_PINK}
);


// Now define the array of layers. Later layers take precedence
const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_off,
    rgb_layer_blue,
    rgb_layer_purple,
    rgb_layer_red,
    rgb_layer_orange,
    rgb_layer_yellow,
    rgb_layer_green,
    rgb_layer_pink
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


    // desknav - orange
    rgblight_set_layer_state(4, 
          layer_state_cmp(state, DESKNAV));

    // appnav - green
    rgblight_set_layer_state(6, 
           layer_state_cmp(state, BROWSER)
        || layer_state_cmp(state, VSCODE)
        );

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

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master( )) {
        oled_render_layer_state();
    } else {
        oled_render_logo();
     }
    return false;
}





#endif // OLED_ENABLE
