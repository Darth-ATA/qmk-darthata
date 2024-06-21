/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_spanish.h"
#include "split_util.h"

enum layers {
    _BASE,
    _FN,    // Function and Navigation
    _SY,    // Symbols and Numbers
    _CFG    // Configuration
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

   /*
   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          TAB,       Q,       W,       E,       R,       T,                            Y,       U,       I,       O,      P,     BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         LSFT,       A,       S,       D,       F,       G,                            H,       J,       K,       L,      Ñ,    QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         CTRL,       Z,       X,       C,       V,       B,                            N,       M,    ,/; ,    ./: ,    -/_,  KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          WIN/CMD,  MO(_FA),     SPC,     KC_ENT,MO(_SY),    LALT
                                      //`--------------------------'  `--------------------------'

    */

    [_BASE] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    ES_Q,    ES_W,    ES_E,    ES_R,    ES_T,                         ES_Y,    ES_U,    ES_I,    ES_O,   ES_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    ES_A,    ES_S,    ES_D,    ES_F,    ES_G,                         ES_H,    ES_J,    ES_K,    ES_L, ES_NTIL, ES_ACUT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    ES_Z,    ES_X,    ES_C,    ES_V,    ES_B,                         ES_N,    ES_M, ES_COMM,  ES_DOT, ES_MINS, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, MO(_FN),  KC_SPC,     KC_ENT, MO(_SY), KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

     /*
   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           F1,        ,      UP,        ,        ,        ,                            7,       8,       9,       -      ,      DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
           F7,    LEFT,    DOWN,   RIGHT,      F4,      F5,                            4,       5,       6,       -,     '/?,    `/^,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         CTRL,      F6,      F7,      F8,      F9, KC_PSCR,                            1,       2,       3,         ,       ,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          WIN/CMD,   MO(1),     SPC,     KC_ENT,MO(_CFG),    RALT
                                      //`--------------------------'  `--------------------------'

    */

    [_FN] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_APP,                       KC_INS, KC_HOME,   KC_UP,  KC_END, KC_PGUP, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, KC_PSCR,                       KC_DEL, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, ES_DIAE,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_PAUS,                      XXXXXXX, XXXXXXX, ES_SCLN, ES_COLN, ES_UNDS, KC_RSFT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_LALT
                                        //`--------------------------'  `--------------------------'
    ),

     /*
   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_ESC,      !,       @,       #,       ~,       €,                            ¬,       / ,       (,       ),       =,     DEL,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         LSFT,      º,        <,      >,       ¿,        ?,                            +,      * ,       [,       ],       ",       !,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
         CTRL,      ª ,      \ ,      /,       ¡,        !,                            -,       \,       {,       },       ^,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          WIN/CMD,   MO(1),     SPC,     KC_ENT,   MO(2),    RALT
                                      //`--------------------------'  `--------------------------'

    */

    [_SY] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         KC_ESC, ES_EXLM, ES_DQUO, ES_HASH, ES_CIRC, ES_QUES,                      ES_ASTR,    ES_7,    ES_8,    ES_9, ES_MINS, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, ES_LCBR, ES_RCBR, ES_LPRN, ES_RPRN, LALT(KC_NUBS),                      ES_SLSH,    ES_4,    ES_5,    ES_6, ES_PLUS, ES_QUOT,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, ES_LBRC, ES_RBRC, ES_MORD, ES_FORD,  ES_EQL,                         ES_0,    ES_1,    ES_2,    ES_3,  ES_DOT, KC_RSFT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_LALT
                                        //`--------------------------'  `--------------------------'
    ),
     /*
   //,-----------------------------------------------------.                    ,-----------------------------------------------------.
         BOOT,        ,        ,        ,        ,        ,                           F6,      F7,      F8,      F9,     F10,    SUPR,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI,        ,        ,                          INS,   START,    REPG,    IMPR,        ,       ç,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD,        ,        ,                         SUPR,     END,    AVPG,        ,       ,   KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          WIN/CMD,   MO(1),     SPC,     KC_ENT,   MO(2),    RALT
                                      //`--------------------------'  `--------------------------'

    */

    [_CFG] = LAYOUT_split_3x6_3(
    //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        _______, ES_IEXL,   ES_AT, ES_EURO,  ES_DLR, ES_IQUE,                      XXXXXXX, XXXXXXX, XXXXXXX, ES_RABK, XXXXXXX, KC_BSPC,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, ES_LABK, ES_AMPR, ES_PIPE, ES_BSLS, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, ES_TILD,  ES_GRV,
    //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
        _______, XXXXXXX,  ES_NOT, ES_CCED, ES_PERC, XXXXXXX,                      RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, KC_RSFT,
    //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_LALT
                                        //`--------------------------'  `--------------------------'
    )
};

layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _FN, _SY, _CFG);
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    } else {
        return OLED_ROTATION_270;    // flips the display 240 degrees if mainhand
    }
    return rotation;
}

#define L_BASE _BASE
#define L_FUNCTION_NAV _FN
#define L_SYMBOLS _SY
#define L_CONFIG_AND_F_CFG _CFG

bool oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case L_BASE:
            oled_write_P(PSTR("Base\n"), false);
            break;
        case L_FUNCTION_NAV:
            oled_write_ln_P(PSTR("F&Nav\n"), false);
            break;
        case L_SYMBOLS:
            oled_write_ln_P(PSTR("Symb&Num\n"), false);
            break;
        case L_CONFIG_AND_F_CFG:
            oled_write_ln_P(PSTR("Conf\n"), false);
            break;
        default:
            oled_write_ln_P(PSTR("Unk\n"), false);
            break;
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR(""), false);
    oled_write_ln_P(led_state.caps_lock ? PSTR("CAPS LOCK") : PSTR("         "), false);

    return false;
}

void oled_render_logo(void) {
    /*
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    */
    static const char PROGMEM solaire_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };
    oled_write_P(solaire_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
    } else {
        oled_render_logo();
    }

    return false;
}

void oled_render_boot(bool bootloader) {
    oled_clear();
    for (int i = 0; i < 16; i++) {
        oled_set_cursor(0, i);
        if (bootloader) {
            oled_write_P(PSTR("Awaiting New Firmware "), false);
        } else {
            oled_write_P(PSTR("Rebooting "), false);
        }
    }

    oled_render_dirty(true);
}

bool shutdown_user(bool jump_to_bootloader) {
    oled_render_boot(jump_to_bootloader);
    return false;
}
#endif // OLED_ENABLE
