#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#include "dvorak_42_key.h"
#include "keymap_all.h"


#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum tap_dance_codes {
  DANCE_0,
};

#define LAYOUT_WRAPPER_VOYAGER(...) LAYOUT_voyager(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[BASE] = LAYOUT_WRAPPER_VOYAGER(
        __BASE_L0__ ,       __BASE_R0__ ,
        __BASE_L1__ ,       __BASE_R1__ ,
        __BASE_L2__ ,       __BASE_R2__ ,
        __BASE_L3__ ,       __BASE_R3__ ,
        __BASE_L_2THUMB__ , __BASE_R_2THUMB__),
[KEYNAV_DEFAULT] = LAYOUT_WRAPPER_VOYAGER(
        __KEYNAV_DEFAULT_L0__ ,       __KEYNAV_DEFAULT_R0__ ,
        __KEYNAV_DEFAULT_L1__ ,       __KEYNAV_DEFAULT_R1__ ,
        __KEYNAV_DEFAULT_L2__ ,       __KEYNAV_DEFAULT_R2__ ,
        __KEYNAV_DEFAULT_L3__ ,       __KEYNAV_DEFAULT_R3__ ,
        __KEYNAV_DEFAULT_L_2THUMB__ , __KEYNAV_DEFAULT_R_2THUMB__),
[KEYNAV_SHELL] = LAYOUT_WRAPPER_VOYAGER(
        __KEYNAV_SHELL_L0__ ,       __KEYNAV_SHELL_R0__ ,
        __KEYNAV_SHELL_L1__ ,       __KEYNAV_SHELL_R1__ ,
        __KEYNAV_SHELL_L2__ ,       __KEYNAV_SHELL_R2__ ,
        __KEYNAV_SHELL_L3__ ,       __KEYNAV_SHELL_R3__ ,
        __KEYNAV_SHELL_L_2THUMB__ , __KEYNAV_SHELL_R_2THUMB__),
[KEYSEL_DEFAULT] = LAYOUT_WRAPPER_VOYAGER(
        __KEYSEL_DEFAULT_L0__ ,       __KEYSEL_DEFAULT_R0__ ,
        __KEYSEL_DEFAULT_L1__ ,       __KEYSEL_DEFAULT_R1__ ,
        __KEYSEL_DEFAULT_L2__ ,       __KEYSEL_DEFAULT_R2__ ,
        __KEYSEL_DEFAULT_L3__ ,       __KEYSEL_DEFAULT_R3__ ,
        __KEYSEL_DEFAULT_L_2THUMB__ , __KEYSEL_DEFAULT_R_2THUMB__),
[DESKNAV] = LAYOUT_WRAPPER_VOYAGER(
        __DESKNAV_L0__ ,       __DESKNAV_R0__ ,
        __DESKNAV_L1__ ,       __DESKNAV_R1__ ,
        __DESKNAV_L2__ ,       __DESKNAV_R2__ ,
        __DESKNAV_L3__ ,       __DESKNAV_R3__ ,
        __DESKNAV_L_2THUMB__ , __DESKNAV_R_2THUMB__),
[BROWSER] = LAYOUT_WRAPPER_VOYAGER(
        __BROWSER_L0__ ,       __BROWSER_R0__ ,
        __BROWSER_L1__ ,       __BROWSER_R1__ ,
        __BROWSER_L2__ ,       __BROWSER_R2__ ,
        __BROWSER_L3__ ,       __BROWSER_R3__ ,
        __BROWSER_L_2THUMB__ , __BROWSER_R_2THUMB__),
[SHELL] = LAYOUT_WRAPPER_VOYAGER(
        __SHELL_L0__ ,       __SHELL_R0__ ,
        __SHELL_L1__ ,       __SHELL_R1__ ,
        __SHELL_L2__ ,       __SHELL_R2__ ,
        __SHELL_L3__ ,       __SHELL_R3__ ,
        __SHELL_L_2THUMB__ , __SHELL_R_2THUMB__),
[SCREEN] = LAYOUT_WRAPPER_VOYAGER(
        __SCREEN_L0__ ,       __SCREEN_R0__ ,  
        __SCREEN_L1__ ,       __SCREEN_R1__ ,
        __SCREEN_L2__ ,       __SCREEN_R2__ ,
        __SCREEN_L3__ ,       __SCREEN_R3__ ,
        __SCREEN_L_2THUMB__ , __SCREEN_R_2THUMB__),
[VSCODE] = LAYOUT_WRAPPER_VOYAGER(
        __VSCODE_L0__ ,       __VSCODE_R0__ ,
        __VSCODE_L1__ ,       __VSCODE_R1__ ,
        __VSCODE_L2__ ,       __VSCODE_R2__ ,
        __VSCODE_L3__ ,       __VSCODE_R3__ ,
        __VSCODE_L_2THUMB__ , __VSCODE_R_2THUMB__),
[SYMBOLS] = LAYOUT_WRAPPER_VOYAGER(
        __SYMBOLS_L0__ ,       __SYMBOLS_R0__ ,
        __SYMBOLS_L1__ ,       __SYMBOLS_R1__ ,
        __SYMBOLS_L2__ ,       __SYMBOLS_R2__ ,
        __SYMBOLS_L3__ ,       __SYMBOLS_R3__ ,
        __SYMBOLS_L_2THUMB__ , __SYMBOLS_R_2THUMB__),
[MOUSE] = LAYOUT_WRAPPER_VOYAGER(
        __MOUSE_L0__ ,       __MOUSE_R0__ ,
        __MOUSE_L1__ ,       __MOUSE_R1__ ,
        __MOUSE_L2__ ,       __MOUSE_R2__ ,
        __MOUSE_L3__ ,       __MOUSE_R3__ ,
        __MOUSE_L_2THUMB__ , __MOUSE_R_2THUMB__),        

};

/*
LED_1: red, left top
LED_2: green, left bottom
LED_3: red, right top
LED_4: green, right bottom
*/

void rgb_matrix_indicators_user(void) {
  bool LED_3 = false;
  bool LED_4 = false;

  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case BASE:
      rgb_matrix_set_color_all(RGB_OFF); // no lights
      break;    
    case KEYNAV_DEFAULT:
    case KEYNAV_SHELL:
      rgb_matrix_set_color_all(RGB_BLUE); // blue
      break;
    case KEYSEL_DEFAULT:
      rgb_matrix_set_color_all(RGB_PURPLE); // purple
      break;
    case SHELL:
      rgb_matrix_set_color_all(RGB_RED); 
      break;      
    case SCREEN:
      rgb_matrix_set_color_all(RGB_YELLOW); 
      break;            
    case DESKNAV:
      rgb_matrix_set_color_all(RGB_ORANGE); 
      break;
    case SYMBOLS:
      rgb_matrix_set_color_all(RGB_OFF); // no lights
      break;    
    case MOUSE:
      rgb_matrix_set_color_all(RGB_OFF); // no lights
      break;          
    case VSCODE:
      rgb_matrix_set_color_all(RGB_GREEN); 
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }

  STATUS_LED_3(LED_3);  
  STATUS_LED_4(LED_4);
}

/*
LED_1: red, left top
LED_2: green, left bottom
LED_3: red, right top
LED_4: green, right bottom
*/

// callback when oneshot modifiers are enabled
void oneshot_mods_changed_user(uint8_t mods) {
  bool LED_2 = false;

  if (mods & MOD_MASK_SHIFT) {
    LED_2 = true;
  }
  if (mods & MOD_MASK_CTRL) {
    LED_2 = true;
  }
  if (mods & MOD_MASK_ALT) {
    LED_2 = true;
  }
  if (mods & MOD_MASK_GUI) {
    LED_2 = true;
  }

  STATUS_LED_2(LED_2);
}

void caps_word_set_user(bool active) {
  STATUS_LED_1(active);
}


const uint16_t PROGMEM combo0[] = { MT(MOD_RSFT, KC_QUOTE), MT(MOD_LSFT, KC_BSPACE), COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, KC_CAPSLOCK),
};


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_EQUAL); break;
        case SINGLE_HOLD: register_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: register_code16(KC_EQUAL); register_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EQUAL); register_code16(KC_EQUAL);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_EQUAL); break;
        case SINGLE_HOLD: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_EQUAL); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EQUAL); break;
    }
    dance_state[0].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};
