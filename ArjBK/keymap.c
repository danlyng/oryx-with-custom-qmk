#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
};

#define DUAL_FUNC_0 LT(3, KC_M)
#define DUAL_FUNC_1 LT(7, KC_F24)
#define DUAL_FUNC_2 LT(13, KC_F20)
#define DUAL_FUNC_3 LT(8, KC_B)
#define DUAL_FUNC_4 LT(13, KC_F13)
#define DUAL_FUNC_5 LT(11, KC_F9)
#define DUAL_FUNC_6 LT(5, KC_3)
#define DUAL_FUNC_7 LT(1, KC_F1)
#define DUAL_FUNC_8 LT(14, KC_E)
#define DUAL_FUNC_9 LT(4, KC_R)
#define DUAL_FUNC_10 LT(3, KC_X)
#define DUAL_FUNC_11 LT(14, KC_I)
#define DUAL_FUNC_12 LT(8, KC_D)
#define DUAL_FUNC_13 LT(4, KC_U)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_MINUS,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_LCBR,                                        KC_RCBR,        KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_PLUS,        
    KC_GRAVE,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_LPRN,                                        KC_RPRN,        KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_QUOTE,       
    KC_ESCAPE,      KC_A,           KC_R,           KC_S,           KC_T,           KC_G,           KC_LBRC,                                                                        KC_RBRC,        KC_M,           KC_N,           KC_E,           KC_I,           KC_O,           KC_DELETE,      
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_D,           LT(3, KC_V),                                    LT(2, KC_K),    KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    TD(DANCE_0),    KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   MO(4),          KC_TRANSPARENT,                                                                                                 ST_MACRO_0,     MO(1),          KC_RIGHT_CTRL,  KC_RIGHT_ALT,   KC_RIGHT_GUI,   TD(DANCE_1),    
    KC_SPACE,       KC_BSPC,        KC_CAPS,                        KC_MS_JIGGLER_TOGGLE,KC_TAB,         KC_ENTER
  ),
  [1] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_QUES,        KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_SLASH,                                       KC_NO,          KC_NO,          KC_NO,          KC_COLN,        KC_SCLN,        KC_NO,          KC_NO,          
    KC_PLUS,        KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_UNDS,        KC_BSLS,                                                                        KC_NO,          KC_NO,          KC_GRAVE,       KC_QUOTE,       KC_DQUO,        KC_NO,          KC_NO,          
    KC_MINUS,       KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_NO,          KC_NO,          KC_COMMA,       KC_DOT,         KC_NO,          KC_NO,          
    KC_EQUAL,       KC_AMPR,        KC_ASTR,        KC_LABK,        KC_RABK,        KC_NO,                                                                                                          KC_NO,          KC_TRANSPARENT, KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_BRIGHTNESS_UP,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_BRIGHTNESS_DOWN,KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_UP,    KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_NO,                                          KC_NO,          KC_NO,          KC_MS_WH_DOWN,  KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_AUDIO_VOL_UP,KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [3] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_PGDN,        KC_NO,          KC_PAGE_UP,     KC_NO,          KC_NO,          
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,          KC_NO,                                                                          KC_NO,          KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_END,         KC_PSCR,        KC_HOME,        KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          DUAL_FUNC_2,    DUAL_FUNC_3,    DUAL_FUNC_4,    KC_NO,          KC_NO,          
    KC_SLASH,       DUAL_FUNC_0,    MT(MOD_LALT, KC_MINUS),DUAL_FUNC_1,    MT(MOD_LSFT, KC_EQUAL),KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          DUAL_FUNC_5,    DUAL_FUNC_6,    DUAL_FUNC_7,    KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          DUAL_FUNC_8,    DUAL_FUNC_9,    DUAL_FUNC_10,   KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT, KC_NO,                                                                                                          KC_NO,          DUAL_FUNC_11,   DUAL_FUNC_12,   DUAL_FUNC_13,   KC_NO,          KC_NO,          
    KC_TRANSPARENT, KC_TRANSPARENT, KC_NO,                          KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          
    KC_NO,          KC_LEFT_GUI,    KC_LEFT_ALT,    KC_LEFT_CTRL,   KC_LEFT_SHIFT,  KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_F5,          KC_F6,          KC_F7,          KC_F8,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_TRANSPARENT,                                                                                                 KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [6] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          QK_BOOT,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          QK_DYNAMIC_TAPPING_TERM_DOWN,                                                                                                QK_DYNAMIC_TAPPING_TERM_UP,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_SYSTEM_SLEEP,KC_SYSTEM_WAKE, KC_SYSTEM_POWER,                EE_CLR,         MAGIC_TOGGLE_NKRO,MU_TOGG
  ),
  [7] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,                                     KC_NO,          ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    ST_MACRO_24,    KC_NO,          
    KC_NO,          ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,                                                                    KC_NO,          ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,    ST_MACRO_28,    ST_MACRO_29,    KC_NO,          
    KC_NO,          ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    KC_NO,                                          ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    ST_MACRO_33,    ST_MACRO_34,    KC_NO,          
    KC_TRANSPARENT, KC_NO,          ST_MACRO_17,    ST_MACRO_18,    ST_MACRO_19,    KC_NO,                                                                                                          KC_NO,          ST_MACRO_35,    ST_MACRO_36,    ST_MACRO_37,    ST_MACRO_38,    KC_TRANSPARENT, 
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};


const uint16_t PROGMEM combo0[] = { KC_PLUS, KC_MINUS, COMBO_END};
const uint16_t PROGMEM combo1[] = { KC_ESCAPE, KC_DELETE, COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_RIGHT_SHIFT, KC_SLASH, COMBO_END};
const uint16_t PROGMEM combo3[] = { KC_Z, KC_LEFT_SHIFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, OSL(6)),
    COMBO(combo1, ST_MACRO_39),
    COMBO(combo2, CW_TOGG),
    COMBO(combo3, CW_TOGG),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_T:
            return g_tapping_term -50;
        case KC_QUOTE:
            return g_tapping_term + 100;
        case KC_N:
            return g_tapping_term -50;
        case KC_O:
            return g_tapping_term + 200;
        case KC_GRAVE:
            return g_tapping_term -20;
        case KC_DQUO:
            return g_tapping_term + 100;
        case MT(MOD_LALT, KC_MINUS):
            return g_tapping_term + 100;
        case MT(MOD_LSFT, KC_EQUAL):
            return g_tapping_term -20;
        case DUAL_FUNC_5:
            return g_tapping_term -20;
        case DUAL_FUNC_7:
            return g_tapping_term + 100;
        default:
            return g_tapping_term;
    }
}

bool capslock_active = false;

bool led_update_user(led_t led_state) {
  capslock_active = led_state.caps_lock;
  return true;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {187,255,255}, {0,0,255}, {0,255,255}, {149,231,255}, {158,255,254}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {149,231,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {149,231,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {149,231,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {121,255,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {254,138,255}, {254,138,255}, {254,138,255}, {0,0,255}, {0,0,255}, {0,0,255}, {60,255,255}, {187,255,255}, {0,0,255}, {0,255,255}, {149,231,255}, {158,255,254}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {149,231,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {149,231,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {149,231,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {237,255,255}, {187,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {254,138,255}, {254,138,255}, {254,138,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {0,0,0}, {158,255,255}, {158,255,255}, {158,255,255}, {158,255,255}, {0,0,0}, {187,255,255}, {187,255,255}, {187,255,255}, {187,255,255}, {0,0,0}, {237,255,255}, {237,255,255}, {237,255,255}, {237,255,255}, {0,0,0}, {250,178,197}, {250,178,197}, {250,178,197}, {250,178,197}, {0,0,0}, {254,138,255}, {254,138,255}, {254,138,255}, {254,138,255}, {0,0,0}, {134,163,181}, {134,163,181}, {134,163,181}, {0,0,0}, {121,160,214}, {121,160,214}, {237,255,255}, {237,255,255}, {237,255,255}, {237,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {250,178,197}, {250,178,197}, {250,178,197}, {0,0,0}, {0,0,0}, {60,255,255}, {60,255,255}, {60,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {158,255,255}, {0,0,0}, {237,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {237,255,255}, {237,255,255}, {237,255,255}, {237,255,255} },

    [2] = { {187,255,255}, {187,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {121,255,255}, {187,255,255}, {187,255,255}, {0,0,0}, {121,255,255}, {121,255,255}, {187,255,255}, {187,255,255}, {0,0,0}, {0,0,0}, {121,255,255}, {187,255,255}, {187,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {41,255,255} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {187,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {187,255,255}, {187,255,255}, {187,255,255}, {187,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {121,255,255}, {237,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {237,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {121,255,255}, {237,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {237,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {187,255,255}, {187,255,255}, {187,255,255}, {187,255,255} },

    [4] = { {163,96,66}, {163,96,66}, {121,255,255}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {149,231,255}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {149,231,255}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {149,231,255}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {149,231,255}, {163,96,66}, {121,255,255}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {121,255,255}, {121,255,255}, {121,255,255}, {121,255,255}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {237,255,255}, {121,255,255}, {237,255,255}, {121,255,255}, {163,96,66}, {121,255,255}, {237,255,255}, {121,255,255}, {237,255,255}, {163,96,66}, {237,255,255}, {121,255,255}, {237,255,255}, {121,255,255}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {163,96,66}, {121,255,255}, {121,255,255}, {121,255,255}, {121,255,255} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {149,231,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {60,255,255}, {60,255,255}, {60,255,255}, {60,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {237,255,255}, {237,255,255}, {237,255,255}, {0,0,0}, {0,0,0}, {121,255,255}, {121,255,255}, {121,255,255}, {0,0,0}, {0,0,0}, {237,255,255}, {237,255,255}, {237,255,255}, {0,0,0}, {0,0,0}, {121,255,255}, {121,255,255}, {121,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {60,255,255}, {60,255,255}, {60,255,255}, {60,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {250,178,197}, {250,178,197}, {250,178,197}, {250,178,197}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {250,178,197}, {0,0,0}, {0,0,0}, {250,178,197}, {250,178,197}, {250,178,197}, {250,178,197} },

    [7] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {158,255,254}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {0,0,0}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {187,108,216}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {187,108,216}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {187,108,216}, {0,0,0}, {60,100,232}, {121,160,214}, {0,0,0}, {0,0,0}, {60,100,232}, {121,160,214}, {158,255,254}, {158,255,254}, {158,255,254}, {158,255,254}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {158,255,254}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {187,108,216}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {187,108,216}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {187,108,216}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {187,108,216}, {0,0,0}, {60,100,232}, {121,160,214}, {158,129,247}, {0,0,0}, {0,0,0}, {0,0,0}, {158,255,254}, {158,255,254}, {158,255,254}, {158,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 3:
        set_layer_color(3);
        break;
      case 4:
        set_layer_color(4);
        break;
      case 5:
        set_layer_color(5);
        break;
      case 6:
        set_layer_color(6);
        break;
      case 7:
        set_layer_color(7);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  if (capslock_active && biton32(layer_state) == 0) {
    RGB rgb = hsv_to_rgb_with_value((HSV) { 0, 255, 255 });
    rgb_matrix_set_color( 34, rgb.r, rgb.g, rgb.b );
  } 
  return true;
}


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

static tap dance_state[2];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
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


void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_HOLD: layer_on(5); break;
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_HOLD:
          layer_off(7);
        break;
              case DOUBLE_HOLD:
                layer_off(5);
                break;
    }
    dance_state[0].step = 0;
}
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_HOLD: layer_on(7); break;
        case DOUBLE_HOLD: layer_on(5); break;
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_HOLD:
          layer_off(7);
        break;
              case DOUBLE_HOLD:
                layer_off(5);
                break;
    }
    dance_state[1].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, dance_1_finished, dance_1_reset),
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_SPACE)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_7)));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_1)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_BSLS))SS_DELAY(100)  SS_LSFT(SS_TAP(X_BSLS)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_7))SS_DELAY(100)  SS_RSFT(SS_TAP(X_7)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_5))SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_1))SS_DELAY(100)  SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_1))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_DOT))SS_DELAY(100)  SS_TAP(X_EQUAL));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_TAP(X_MINUS));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(100)  SS_RSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_EQUAL)SS_DELAY(100)  SS_RSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_BSLS))SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA))SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_COMMA)));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_RSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_F));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_H));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_F));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_E)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_R));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_O)SS_DELAY(100)  SS_TAP(X_T));
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_I)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_LEFT_CTRL)SS_DELAY(100)  SS_TAP(X_LEFT_ALT)SS_DELAY(100)  SS_TAP(X_DELETE));
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_ASTR);
        } else {
          unregister_code16(KC_ASTR);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_GUI);
        } else {
          unregister_code16(KC_LEFT_GUI);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_PLUS);
        } else {
          unregister_code16(KC_PLUS);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LEFT_CTRL);
        } else {
          unregister_code16(KC_LEFT_CTRL);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_7);
        } else {
          unregister_code16(KC_7);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_8);
        } else {
          unregister_code16(KC_8);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_9);
        } else {
          unregister_code16(KC_9);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_4);
        } else {
          unregister_code16(KC_4);
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_5);
        } else {
          unregister_code16(KC_5);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_6);
        } else {
          unregister_code16(KC_6);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_1);
        } else {
          unregister_code16(KC_1);
        }  
      }  
      return false;
    case DUAL_FUNC_9:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_2);
        } else {
          unregister_code16(KC_2);
        }  
      }  
      return false;
    case DUAL_FUNC_10:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_3);
        } else {
          unregister_code16(KC_3);
        }  
      }  
      return false;
    case DUAL_FUNC_11:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_0);
        } else {
          unregister_code16(KC_0);
        }  
      }  
      return false;
    case DUAL_FUNC_12:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }  
      }  
      return false;
    case DUAL_FUNC_13:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DOT);
        } else {
          unregister_code16(KC_DOT);
        }  
      }  
      return false;
    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
  }
  return true;
}

