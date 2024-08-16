#pragma once

//#define USE_MATRIX_I2C

/* Select hand configuration */

// #define MASTER_LEFT
#define MASTER_RIGHT
// #define EE_HANDS


// MOUSE SETTINGS
// ==============

#define MOUSEKEY_TIME_TO_MAX 200

#define RGBLIGHT_LAYERS

#ifdef RGBLIGHT_ENABLE
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
#endif


// we don't want any colors by default
#define RGBLIGHT_DEFAULT_HUE 	0
#define RGBLIGHT_DEFAULT_SAT 	0
#define RGBLIGHT_DEFAULT_VAL    0

