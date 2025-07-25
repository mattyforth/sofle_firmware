#include QMK_KEYBOARD_H

#if __has_include("keymap.h")
#    include "keymap.h"
#endif

#include "keymap_us.h"

enum layers {
    BASE,
    NUMBERS,
    SYMBOLS,
    EXTEND,
    FUNCTION,
    GAMING,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT(
        KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS,
        ALT_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        LCTL_T(KC_ESC),  KC_A,  KC_S , KC_D,  KC_F , KC_G, KC_H, KC_J,  KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MPLY, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_NO, KC_NO, KC_LGUI, HYPR_T(KC_ENT), LT(NUMBERS, KC_TAB),      LT(EXTEND, KC_BSPC), KC_SPC, LT(SYMBOLS, KC_DEL), KC_NO, KC_NO
    ),

    // [BASE] = LAYOUT(
    //     KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSLS,
    //     ALT_T(KC_TAB), KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    //     LCTL_T(KC_ESC), LALT_T(KC_A), LGUI_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), KC_G, KC_H, LSFT_T(KC_J), LCTL_T(KC_K), LGUI_T(KC_L), LALT_T(KC_SCLN), KC_QUOT,
    //     KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MPLY, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    //     KC_NO, KC_NO, KC_LGUI, LT(SYMBOLS, KC_ENT), HYPR_T(KC_TAB),      LT(EXTEND, KC_BSPC), KC_SPC, MO(NUMBERS), KC_NO, KC_NO
    // ),

    [SYMBOLS] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, KC_GRV, KC_UNDS, KC_LT, KC_LCBR,                       KC_RCBR, KC_GT, KC_QUES, KC_EXLM, XXXXXXX, _______,
        XXXXXXX, XXXXXXX, KC_PLUS, KC_MINS, KC_DLR, KC_LPRN,                       KC_RPRN, KC_AMPR, KC_PIPE, KC_ASTR, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_BSLS, KC_PERC, KC_TILD, KC_EQL, KC_LBRC, XXXXXXX,      XXXXXXX, KC_RBRC, KC_HASH, KC_AT, KC_CIRC, KC_SLSH, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX,                                 XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [NUMBERS] = LAYOUT(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, KC_0, KC_7, KC_8, KC_9, LSFT(KC_EQL),                       KC_PAST, KC_P7, KC_P8, KC_P9, KC_PMNS, _______,
        XXXXXXX, KC_0, KC_4, KC_5, KC_6, KC_EQL,                        KC_PEQL, KC_P4, KC_P5, KC_P6, KC_PPLS, XXXXXXX,
        XXXXXXX, KC_0, KC_1, KC_2, KC_3, KC_MINUS, XXXXXXX,      XXXXXXX, KC_P0, KC_P1, KC_P2, KC_P3, KC_PSLS, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,                                 MO(FUNCTION), KC_P0, _______, XXXXXXX, XXXXXXX
    ),

    [EXTEND] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, XXXXXXX, KC_NO, LSG(KC_4), LGUI(KC_C), KC_NO, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO,
        _______, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LCTL), OSM(MOD_LSFT), OSM(MOD_HYPR), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, LGUI(KC_C), LGUI(KC_V), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, _______, _______, MO(FUNCTION), _______, _______, _______, KC_NO, KC_NO
    ),

    [FUNCTION] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, TG(GAMING),
        XXXXXXX, KC_SLEP, KC_NO, KC_NO, KC_VOLU, KC_MNXT, KC_NO, KC_F7, KC_F8, KC_F9, KC_F12, KC_NO,
        _______, OSM(MOD_LALT), OSM(MOD_LGUI), OSM(MOD_LCTL), OSM(MOD_LSFT),  KC_MEDIA_PLAY_PAUSE, KC_NO, KC_F4, KC_F5, KC_F6, KC_F11, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_VOLD, KC_MPRV, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F10, KC_NO,
        KC_NO, KC_NO, _______, KC_TRNS, KC_TRNS, KC_TRNS, _______, KC_TRNS, KC_NO, KC_NO
    ),

    [GAMING] = LAYOUT(
        KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, TG(GAMING),
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
        KC_GRV,  KC_A,  KC_S , KC_D,  KC_F , KC_G, KC_H, KC_J,  KC_K, KC_L, KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_MUTE, KC_MPLY, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
        KC_NO, KC_NO, KC_LALT, KC_ENT, KC_SPC,      KC_BSPC, KC_SPC, KC_DEL, KC_NO, KC_NO
    ),
};

// bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
//     switch (keycode) {
//         case LT(SYMBOLS, KC_ENT):
//         case LT(NUMBERS, KC_ENT):
//         case HYPR_T(KC_TAB):
//         case HYPR_T(KC_DEL):
//         case LCTL_T(KC_ESC):
//             // Immediately select the hold action when another key is pressed.
//             return true;
//         default:
//             // Do not select the hold action when another key is pressed.
//             return false;
//     }
// }
//
