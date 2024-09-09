// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "dvorak_42_key.h"

bool wsWindowSwitchingMode = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  // shell macros
  if(record->event.pressed) {
    
    switch (keycode) {
        case WS_WIN_SWITCH:
            if (! wsWindowSwitchingMode)
            {
                // press down alt key
                register_code(KC_LALT);
                wsWindowSwitchingMode = true;
            }
            register_code(KC_ESC);
            unregister_code(KC_ESC);
            break;
        case WS_APP_SWITCH:
            if (! wsWindowSwitchingMode)
            {
                // press down alt key
                register_code(KC_LALT);
                wsWindowSwitchingMode = true;
            }
            register_code(KC_TAB);
            unregister_code(KC_TAB);
            break;            
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
        case SHELL_GIT_STATUS:
            SEND_STRING("git status\n");
            break;
        case SHELL_GIT_DIFF:
            SEND_STRING("git diff\n");
            break;                        
        case SHELL_GIT_COMMIT:
            SEND_STRING("git commit -a\n");
            break;                                    

        // linux screen shortcuts

        case SHELL_SCREENRD:
            SEND_STRING("screen -r -d ");
            break;
        case SHELL_SCREEN_NEW:
            SEND_STRING("screen -S ");
            break;
        case SHELL_SCREEN_LIST:
            SEND_STRING("screen -list\n");
            break;

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
        case SCREEN_COPY_MODE:
            SEND_STRING(SS_LCTL("a") "[");
            break;
        case SCREEN_PASTE:
            SEND_STRING(SS_LCTL("a") "]");
            break;
        case SCREEN_KILL:
            SEND_STRING(SS_LCTL("a") "ky");
            break;            

        // tmux shortcuts
        TMUX_SHORTCUT(TMUX_TAB_LEFT, "p");
        TMUX_SHORTCUT(TMUX_TAB_RIGHT, "n");
        TMUX_SHORTCUT(TMUX_COMMANDS, ":");
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

