// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "dvorak_42_key.h"

char current_os_shortcut_mode = OS_MODE_WIN10;

#define OS_SHORTCUT(KEYCODE, WIN10_CODE, LINUX_CODE, CHROMEOS_CODE) \
case KEYCODE:\
    switch (current_os_shortcut_mode) {\
        case OS_MODE_WIN10:\
            tap_code16(WIN10_CODE);\
            break;\
        case OS_MODE_LINUX:\
            tap_code16(LINUX_CODE);\
            break;\
        case OS_MODE_CHROMEOS:\
            tap_code16(CHROMEOS_CODE);\
            break;\
        default:\
            break;\
    }\
    break;

#define OS_SHORTCUT_SW_DEFAULT_LAYER(KEYCODE, WIN10_CODE, LINUX_CODE, CHROMEOS_CODE, DEFAULT_LAYER) \
case KEYCODE:\
    switch (current_os_shortcut_mode) {\
        case OS_MODE_WIN10:\
            tap_code16(WIN10_CODE);\
            default_layer_set(DEFAULT_LAYER);\
            layer_move(DEFAULT_LAYER);\
            break;\
        case OS_MODE_LINUX:\
            tap_code16(LINUX_CODE);\
            default_layer_set(DEFAULT_LAYER);\
            layer_move(DEFAULT_LAYER);\
            break;\
        case OS_MODE_CHROMEOS:\
            tap_code16(CHROMEOS_CODE);\
            default_layer_set(DEFAULT_LAYER);\
            layer_move(DEFAULT_LAYER);\
            break;\
        default:\
            break;\
    }\
    break;    

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // shell macros
  if(record->event.pressed) {
    switch (keycode) {
        // generic desktop shortcut keycodes
        case KC_OS_MODE_WIN10:
            current_os_shortcut_mode = OS_MODE_WIN10;
            break;
        case KC_OS_MODE_LINUX:
            current_os_shortcut_mode = OS_MODE_LINUX;
            break;
        case KC_OS_MODE_CHROMEOS:
            current_os_shortcut_mode = OS_MODE_CHROMEOS;
            break;

        //          KEYCODE      WINDOW 10       LINUX             CHROME OS 
        OS_SHORTCUT(OS_WS_LEFT,  C(G(KC_LEFT)),  G(KC_PGUP),       G(KC_LBRC) );
        OS_SHORTCUT(OS_WS_RIGHT, C(G(KC_RIGHT)), G(KC_PGDN),       G(KC_RBRC) );
        OS_SHORTCUT(OS_WS_SHOW,  G(KC_TAB),      KC_LGUI,          A(KC_TAB) );
        //                           KEYCODE      WINDOW 10       LINUX             CHROME OS          DEFAULT LAYER
        OS_SHORTCUT_SW_DEFAULT_LAYER(OS_WS_1,     MEH(KC_F8),     LALT(LCTL(KC_1)), RGUI(LSFT(KC_1)),  BASE_BROWSER );
        OS_SHORTCUT_SW_DEFAULT_LAYER(OS_WS_2,     MEH(KC_F9),     LALT(LCTL(KC_2)), RGUI(LSFT(KC_2)),  BASE_VSCODE);
        OS_SHORTCUT_SW_DEFAULT_LAYER(OS_WS_3,     MEH(KC_F10),    LALT(LCTL(KC_3)), RGUI(LSFT(KC_3)),  BASE_SHELL);
        OS_SHORTCUT_SW_DEFAULT_LAYER(OS_WS_4,     MEH(KC_F12),    LALT(LCTL(KC_4)), RGUI(LSFT(KC_4)),  BASE_BROWSER );


        case SHELL_LS:
            SEND_STRING("ls\n");
            break;
        case SHELL_LSLTR:
            SEND_STRING("ls -ltr\n");
            break;
        case SHELL_LSLA:
            SEND_STRING("ls -la\n");
            break;
        case SHELL_CDPRE:
            SEND_STRING("cd ..\n");
            break;
        case SHELL_LESS:
            SEND_STRING("less ");
            break;
        case SHELL_PLESS:
            SEND_STRING(" | less");
            break;
        case SHELL_PGREP:
            SEND_STRING(" | grep ");
            return true;
            break;
        case SHELL_TAILF:
            SEND_STRING("tail -f ");
            break;
        case SHELL_SCREENRD:
            SEND_STRING("screen -r -d ");
            break;
        case SHELL_SCREEN_NEW:
            SEND_STRING("screen -S ");
            break;
        case SHELL_SCREEN_LIST:
            SEND_STRING("screen -list\n");
            break;

        // linux screen shortcuts
        case SCREEN_TAB_LEFT:
            SEND_STRING(SS_LCTL("a") "p");
            break;
        case SCREEN_TAB_RIGHT:
            SEND_STRING(SS_LCTL("a") "n");
            break;

        case SCREEN_MOVE_LEFT:
            SEND_STRING(SS_LCTL("a") ":number -1\n");
            break;            
        case SCREEN_MOVE_RIGHT:
            SEND_STRING(SS_LCTL("a") ":number +1\n");
            break;                        
            
        case SCREEN_NEW_TAB:
            SEND_STRING(SS_LCTL("a") "c");
            break;
        case SCREEN_DETACH:
            SEND_STRING(SS_LCTL("a") "d");
            break;
        case SCREEN_RENAME:
            SEND_STRING(SS_LCTL("a") "A");
            break;
        case SCREEN_NUMBER:
            SEND_STRING(SS_LCTL("a") ":number ");
            break;
        case SCREEN_WINDOWS:
            SEND_STRING(SS_LCTL("a") "\"");
            break;            
        case SCREEN_0:
            SEND_STRING(SS_LCTL("a") "0");
            break;
        case SCREEN_1:
            SEND_STRING(SS_LCTL("a") "1");
            break;
        case SCREEN_2:
            SEND_STRING(SS_LCTL("a") "2");
            break;
        case SCREEN_3:
            SEND_STRING(SS_LCTL("a") "3");
            break;
        case SCREEN_4:
            SEND_STRING(SS_LCTL("a") "4");
            break;
        case SCREEN_5:
            SEND_STRING(SS_LCTL("a") "5");
            break;
        case SCREEN_6:
            SEND_STRING(SS_LCTL("a") "6");
            break;
        case SCREEN_7:
            SEND_STRING(SS_LCTL("a") "7");
            break;
        case SCREEN_8:
            SEND_STRING(SS_LCTL("a") "8");
            break;
        case SCREEN_9:
            SEND_STRING(SS_LCTL("a") "9");
            break;
        case SCREEN_COPY_MODE:
            SEND_STRING(SS_LCTL("a") "[");
            break;
        case SCREEN_PASTE:
            SEND_STRING(SS_LCTL("a") "]");
            break;
        case SCREEN_KILL:
            SEND_STRING(SS_LCTL("a") "ky");
            break;            
    }
  }

  return true;
}


bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.        
            return true;
        // Keycodes that continue Caps Word, without shifting.
        case KC_UNDS:
            return true;            

        default:
            return false;  // Deactivate Caps Word.
    }
}

