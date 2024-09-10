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

        // tmux shortcuts
        TMUX_SHORTCUT(TMUX_PREV_SESSION, "(");
        TMUX_SHORTCUT(TMUX_NEXT_SESSION, ")");
        TMUX_SHORTCUT(TMUX_LIST_SESSIONS, "s");
        TMUX_SHORTCUT(TMUX_RENAME_SESSION, "$");
        TMUX_SHORTCUT(TMUX_NEW_SESSION, ":new\n");

        TMUX_SHORTCUT(TMUX_TAB_LEFT, "p");
        TMUX_SHORTCUT(TMUX_TAB_RIGHT, "n");
        TMUX_SHORTCUT(TMUX_LIST_WIN, "w");
        TMUX_SHORTCUT(TMUX_NEW_WIN,  "c");
        TMUX_SHORTCUT(TMUX_RENAME_WIN, ",");
        TMUX_SHORTCUT(TMUX_KILL_WIN, "&");
        TMUX_SHORTCUT(TMUX_MOVE_WIN_LEFT, ":swap-window -t -1\n");
        TMUX_SHORTCUT(TMUX_MOVE_WIN_RIGHT, ":swap-window -t +1\n");

        TMUX_SHORTCUT(TMUX_WIN_1, "1");
        TMUX_SHORTCUT(TMUX_WIN_2, "2");
        TMUX_SHORTCUT(TMUX_WIN_3, "3");
        TMUX_SHORTCUT(TMUX_WIN_4, "4");
        TMUX_SHORTCUT(TMUX_WIN_5, "5");

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

