// Copyright 2022 LucW (@luc-languagetools)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "quantum.h"

// LAYERS
// ======

enum layer_names {
    BASE,            // base dvorak layer
    KEYNAV,          // arrow navigation (right hand)
    KEYSEL,          // arrow navigation + shift (allow text selection)
    SHELL_NAV,       // bash shortcuts
    SHELL_SCREEN,    // linux screen shortcuts
    BROWSER_CONTROL, // control browser and mouse
    COMBINED,        // combined numbers and symbols layer
    ANDROID_STUDIO,  // android studio specific layer
    VSCODE,          // visual studio code specific layer
    SHORTCUTS,       // shortcuts to be intercepted by autohotkey
};

enum custom_keycodes {
  PLACEHOLDER = SAFE_RANGE, // can always be here
  
  // shell nav macros
  SHELL_LS,
  SHELL_LSLTR,
  SHELL_LSLA,
  SHELL_CDPRE,
  SHELL_LESS,
  SHELL_PLESS,
  SHELL_PGREP,
  SHELL_TAILF,

  SHELL_SCREENRD,
  SHELL_SCREEN_NEW,
  SHELL_SCREEN_LIST,

  SHELL_GIT_DIFF,
  SHELL_GIT_STATUS,

  // linux screen macros
  SCREEN_TAB_LEFT,
  SCREEN_TAB_RIGHT,

  SCREEN_NEW_TAB,
  SCREEN_DETACH,
  SCREEN_RENAME,
  SCREEN_NUMBER,
  SCREEN_KILL,

  SCREEN_MOVE_LEFT,
  SCREEN_MOVE_RIGHT,

  SCREEN_0,
  SCREEN_1,
  SCREEN_2,
  SCREEN_3,
  SCREEN_4,
  SCREEN_5,
  SCREEN_6,
  SCREEN_7,
  SCREEN_8,
  SCREEN_9,

  SCREEN_COPY_MODE,
  SCREEN_PASTE,

  SCREEN_READREG_1,
  SCREEN_READREG_2,
  SCREEN_READREG_3,
  SCREEN_PASTEREG_1,
  SCREEN_PASTEREG_2,
  SCREEN_PASTEREG_3,

  // Windows 10 macros
  WINDOWS10_WORKSPACE_LEFT,
  WINDOWS10_WORKSPACE_RIGHT,
  WINDOWS10_TASK_VIEW,

  // TWS shortcuts
  TWS_OIMODE_O,
  TWS_OIMODE_A

};



// shell shortcuts
// ===============

#define SH_DEL_WORD RCTL(KC_W)
#define SH_DEL_PATH LALT(KC_BSPC)
#define SH_WORD_LEFT LALT(KC_B)
#define SH_WORD_RIGHT LALT(KC_F)

#define SH_DEL_TO_START RCTL(KC_U)
#define SH_DEL_TO_END RCTL(KC_K)

#define SH_RECALL LALT(KC_DOT)
#define SH_SEARCH RCTL(KC_R)
#define SH_PASTE KC_BTN2

#define SH_EXIT RCTL(KC_X)
#define SH_CLOSE RCTL(KC_D)
#define SH_CLEARSCR RCTL(KC_L)
#define SH_STOP RCTL(KC_C)

// Obsidian shortcuts
// ==================

#define OBS_READMODE RCTL(KC_E)
#define OBS_CMD RCTL(KC_P)
#define OBS_QUICKSW RCTL(KC_O)
#define OBS_CHECKBOX RCTL(KC_L)


// Notepad++ shortcuts
// ===================
#define NP_DUPE_LINE LCTL(KC_D)

// ChromeOS shortcuts
// ==================
#define CO_WS_LEFT RGUI(KC_LBRC)
#define CO_WS_RIGHT RGUI(KC_RBRC)

// Microsoft Teams shortcuts
// =========================
#define TM_ITEM_UP LALT(KC_UP)
#define TM_ITEM_DN LALT(KC_DOWN)

// Android Studio shortcuts
#define AS_TABLEFT LALT(KC_LEFT)
#define AS_TABRIGHT LALT(KC_RIGHT)
#define AS_SYMBOL LCTL(LALT(KC_N))
#define AS_CLASS LCTL(KC_N)
#define AS_FINDUSAGE LALT(KC_F7)
#define AS_BACK LCTL(LALT(KC_LEFT))
#define AS_BRACKET LCTL(LSFT(KC_M))
#define AS_GO_DECLARATION LCTL(KC_B)
#define AS_GO_IMPLEMENTATION LCTL(LALT(KC_B))
#define AS_CLOSETAB LCTL(KC_F4)
#define AS_CLOSETOOLWINDOW LCTL(LSFT(KC_F4))
#define AS_COPYLINEDOWN LCTL(KC_D)
#define AS_DEL_LINE LCTL(KC_Y)
#define AS_LINE LCTL(KC_G)
#define AS_CMT_BLOCK LCTL(LSFT(KC_SLSH))
#define AS_CMT_LINE LCTL(KC_SLSH)
#define AS_BM_PREV LALT(KC_P)
#define AS_BM_NEXT LALT(KC_N)
#define AS_BM_TOGGLE KC_F11
#define AS_BM_LIST LSFT(KC_F11)

// visual studio code shortcuts
// ============================

#include "vscode_macros.h"

// tap-dance configuration
// =======================

enum {
    TD_DEL_WORD_DEL
};

typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }
