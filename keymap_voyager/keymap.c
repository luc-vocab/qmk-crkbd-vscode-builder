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
#include "dvorak_42_keymap_common.h"


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

#define LAYOUT_wrapper(...) LAYOUT_voyager(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_wrapper(
    __BASE_L0__, __BASE_R0__,
    __BASE_L1__, __BASE_R1__,
    __BASE_L2__, __BASE_R2__,
    __BASE_L3__, __BASE_R3__,
 __BASE_L_2THUMB__, __BASE_R_2THUMB__
  ),

  [KEYNAV] = LAYOUT_wrapper(
    __KEYNAV_L0__, __KEYNAV_R0__,
    __KEYNAV_L1__, __KEYNAV_R1__,
    __KEYNAV_L2__, __KEYNAV_R2__,
    __KEYNAV_L3__, __KEYNAV_R3__,
    __EMPTY_2__,   __EMPTY_2__
  ),

  [KEYSEL] = LAYOUT_wrapper(
    __EMPTY_6__, __EMPTY_6__,
    __KEYSEL_L1__, __KEYSEL_R1__,
    __KEYSEL_L2__, __KEYSEL_R2__,
    __KEYSEL_L3__, __KEYSEL_R3__,
    __EMPTY_2__,   __EMPTY_2__
  ),

  [SHELL_NAV] = LAYOUT_wrapper(
    __SHELL_NAV_L0__, __SHELL_NAV_R0__,
    __SHELL_NAV_L1__, __SHELL_NAV_R1__,
    __SHELL_NAV_L2__, __SHELL_NAV_R2__,
    __SHELL_NAV_L3__, __SHELL_NAV_R3__,
    __EMPTY_2__,   __EMPTY_2__
  ),

  [SHELL_SCREEN] = LAYOUT_wrapper(
    __EMPTY_6__, __EMPTY_6__,
    __SHELL_SCREEN_L1__, __SHELL_SCREEN_R1__,
    __SHELL_SCREEN_L2__, __SHELL_SCREEN_R2__,
    __SHELL_SCREEN_L3__, __SHELL_SCREEN_R3__,
    __EMPTY_2__,   __EMPTY_2__
  ),

  [VSCODE] = LAYOUT_wrapper(
    __EMPTY_6__, __EMPTY_6__,
    __VSCODE_L1__, __VSCODE_R1__,
    __VSCODE_L2__, __VSCODE_R2__,
    __VSCODE_L3__, __VSCODE_R3__,
    __EMPTY_2__,   __VSCODE_R4_2__
  ),
  
  [COMBINED] = LAYOUT_wrapper(
    __EMPTY_6__, __EMPTY_6__,
    __COMBINED_L1__, __COMBINED_R1__,
    __COMBINED_L2__, __COMBINED_R2__,
    __COMBINED_L3__, __COMBINED_R3__,
    __EMPTY_2__,  KC_TRNS, KC_0
  ),

  [FKEYS] = LAYOUT_wrapper(
    __EMPTY_6__, __EMPTY_6__,
    __FKEYS_L1__, __FKEYS_R1__,
    __FKEYS_L2__, __FKEYS_R2__,
    __FKEYS_L3__, __FKEYS_R3__,
    __EMPTY_2__,  __EMPTY_2__
  ),  

};


void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case BASE:
      rgb_matrix_set_color_all(RGB_OFF); // no lights
      break;
    case KEYNAV:
      rgb_matrix_set_color_all(RGB_BLUE); // blue
      break;
    case KEYSEL:
      rgb_matrix_set_color_all(RGB_PURPLE); // purple
      break;
    case SHELL_NAV:
      rgb_matrix_set_color_all(RGB_RED); 
      break;      
    case SHELL_SCREEN:
      rgb_matrix_set_color_all(RGB_ORANGE); 
      break;
    case COMBINED:
      rgb_matrix_set_color_all(RGB_OFF); // no lights
      break;    
    case VSCODE:
      rgb_matrix_set_color_all(RGB_GREEN); 
      break;
    case FKEYS:
      rgb_matrix_set_color_all(RGB_YELLOW); 
      break;      
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
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
