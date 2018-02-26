/*
Copyright 2017 Balz Guenat <balz.guenat@gmail.com>

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

#include "usb_usb.h"

enum custom_keycodes {
  M_D_U = 0, // can always be here
  M_D_I,
  M_D_V,
};
enum fitaly_keycodes {
  Layer_0 = SAFE_RANGE,
  Layer_1,
  Layer_2,
  Layer_3,
};
enum fitaly_layers {
  Layer0 = 0,
  Layer1,
  Layer2,
  Layer3,
};
enum {
  D_4 = 0,
  E_5,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
    /* 0: plain Qwerty without layer switching
     *         ,---------------. ,---------------. ,---------------.
     *         |F13|F14|F15|F16| |F17|F18|F19|F20| |F21|F22|F23|F24|
     * ,---.   |---------------| |---------------| |---------------| ,-----------. ,---------------. ,-------.
     * |Esc|   |F1 |F2 |F3 |F4 | |F5 |F6 |F7 |F8 | |F9 |F10|F11|F12| |PrS|ScL|Pau| |VDn|VUp|Mut|Pwr| | Help  |
     * `---'   `---------------' `---------------' `---------------' `-----------' `---------------' `-------'
     * ,-----------------------------------------------------------. ,-----------. ,---------------. ,-------.
     * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -| |Stp|Agn|
     * |-----------------------------------------------------------| |-----------| |---------------| |-------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +| |Mnu|Und|
     * |-----------------------------------------------------------| `-----------' |---------------| |-------|
     * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  :|  #|Retn|               |  4|  5|  6|KP,| |Sel|Cpy|
     * |-----------------------------------------------------------|     ,---.     |---------------| |-------|
     * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO|Shift |     |Up |     |  1|  2|  3|KP=| |Exe|Pst|
     * |-----------------------------------------------------------| ,-----------. |---------------| |-------|
     * |Ctl|Gui|Alt|MHEN|HNJ| Space  |H/E|HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  0    |  .|Ent| |Fnd|Cut|
     * `-----------------------------------------------------------' `-----------' `---------------' `-------'
     */

        // [0] = KEYMAP_FIT( 
        //     KC_Z,   M(M_D_V),   KC_C,   KC_H,   KC_W,   KC_K,   
        //     KC_F,   M(M_D_I),   KC_T,   KC_A,   KC_L,   KC_Y,   
        //     KC_LSFT,KC_SPC, KC_N,   KC_E,   KC_BSPC,KC_ENT, 
        //     KC_G,   KC_D,   KC_O,   KC_R,   KC_S,   KC_B,   
        //     KC_Q,   KC_J,   M(M_D_U),   KC_M,   KC_P,   KC_X,   
        //     KC_ESC, KC_LGUI,KC_UP,  KC_DOWN,KC_LEFT,KC_RGHT 
        // ),
        [0] = KEYMAP_FIT( 
            KC_Z,   M(M_D_V),   KC_C,   KC_H,   KC_W,   KC_K,   
            KC_F,   M(M_D_I),   KC_T,   KC_A,   KC_L,   KC_Y,   
            KC_LSFT,KC_SPC, KC_N,   KC_E,   KC_BSPC,KC_ENT, 
            KC_G,   KC_D,   KC_O,   KC_R,   KC_0,   KC_B,   
            LT(1,KC_Q),   KC_J,   M(M_D_U),   KC_M,   KC_P,   KC_X,   
            Layer_0, Layer_1,Layer_2,  Layer_3,KC_MS_L,KC_MS_R 
        ),
        [1] = KEYMAP_FIT( 
         KC_V,   KC_Z,      KC_C,   KC_H,   KC_W,   KC_K,   
            KC_F,   KC_I,   KC_T,   KC_ASTR,   KC_L,   KC_Y,   
            KC_LSFT,KC_SPC, KC_N,   KC_E,   KC_BSPC,KC_ENT, 
            KC_G,   KC_D,   KC_O,   KC_R,   KC_1,   KC_B,   
            ______,   KC_J,   KC_U,   KC_M,   KC_P,   KC_X,   
            ______, ______,______,  ______,KC_LEFT,KC_RGHT 
        ),
        [2] = KEYMAP_FIT( 
         KC_V,   KC_Z,      KC_C,   KC_H,   KC_W,   KC_K,   
            KC_F,   KC_I,   KC_T,   KC_2,   KC_L,   KC_Y,   
            KC_LSFT,KC_SPC, KC_N,   KC_E,   KC_BSPC,KC_ENT, 
            KC_G,   KC_D,   KC_O,   KC_R,   KC_S,   KC_B,   
            ______,   KC_J,   KC_U,   KC_M,   KC_P,   KC_X,   
            ______, ______,______,  ______,KC_LEFT,KC_RGHT 
        ),
        [3] = KEYMAP_FIT( 
         KC_V,   KC_Z,      KC_C,   KC_H,   KC_W,   KC_K,   
            KC_F,   KC_I,   KC_T,   KC_3,   KC_L,   KC_Y,   
            KC_LSFT,KC_SPC, KC_N,   KC_E,   KC_BSPC,KC_ENT, 
            KC_G,   KC_D,   KC_O,   KC_R,   KC_S,   KC_B,   
            ______,   KC_J,   KC_U,   KC_M,   KC_P,   KC_X,   
            ______, ______,______,  ______,KC_LEFT,KC_RGHT 
        ),

//     [0] = KEYMAP_FIT( 
//     KC_Z,       KC_V    KC_C,       KC_H,       KC_W,       KC_K,  
//     KC_F,       KC_I    KC_T,       KC_A,       KC_L,       KC_Y,  
//     KC_LSFT,    KC_SPC,     KC_N,       KC_E,       KC_BSPC,    KC_ENT,
//     KC_G,       KC_D,       KC_O,       KC_R,       KC_S,       KC_B,  
//     KC_Q,       KC_J,       KC_V,   KC_M,       KC_P,       KC_X,  
//     TG(1),      KC_LGUI,    KC_UP,      KC_DOWN,    KC_LEFT,    KC_RGHT
// ),
//     [1] = KEYMAP_FIT( 
//            KC_V,       KC_C,       KC_H,       KC_W,       KC_K,  
//     KC_F,       KC_I,       KC_T,       KC_A,       KC_L,       KC_Y,  
//     KC_LSFT,    KC_SPC,     KC_N,       KC_E,       KC_BSPC,    KC_ENT,
//     KC_G,       KC_D,       KC_O,       KC_R,       KC_S,       KC_B,  
//     KC_Q,       KC_J,       KC_U,       KC_M,       KC_P,       KC_X,  KC_Z,
//     ______,     KC_LGUI,    KC_UP,      KC_DOWN,    KC_LEFT,    KC_RGHT
// )
    // [0] = KEYMAP_LOGIC(
    //                   KC_ESC,                 
    // LT(1,KC_BSPC),     
    // KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    
    // SFT_T(KC_A),    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,   KC_K,    KC_L,   KC_ENT,   
    // KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,   KC_M,               KC_UP,              
    // KC_LGUI,        KC_SPC,              KC_LEFT, KC_DOWN, KC_RGHT    
    // ),
    // [1] = KEYMAP_LOGIC(
                       
    // TG(1),     
    // KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    
    // KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,   KC_K,    KC_L,   KC_ENT,   
    // KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,   KC_M,               KC_UP,              
    // KC_LGUI,        KC_SPC,              KC_LEFT, KC_DOWN, KC_RGHT,KC_ESC      
    //     ),
    // [2] = KEYMAP_LOGIC(
    //      ______,                 
    // ______,     
    // ______,    ______,    ______,    ______,    ______,   ______,   ______,   ______,    ______,    ______,    
    // ______,    ______,    ______,    ______,    ______,   ______,   ______,   ______,    ______,   ______,   
    // ______,  ______,    ______,    ______,    ______,   ______,   ______,   ______,               ______,              
    // ______,        ______,              ______, ______, ______    

    // ),
};

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_FUNCTION(SHIFT_ESC),
};

// qk_tap_dance_action_t tap_dance_actions[] = {
//   [0] = ACTION_TAP_DANCE_DOUBLE(KC_D, KC_4),
//   [1] = ACTION_TAP_DANCE_DOUBLE(KC_E, KC_5)
// };

// const uint16_t PROGMEM fn_actions[] = {

// };

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch(id) {
    // case 0:
    //   if (record->event.pressed) {
    //     SEND_STRING ("MMM");
    //   }
    //   return false;
    //   // break;
    case M_D_U:
      if (record->event.pressed) {
        SEND_STRING ("sh");

      }
      return false;
    case M_D_I:
      if (record->event.pressed) {
        SEND_STRING ("ch");
      }
      return false;
    case M_D_V:
      if (record->event.pressed) {
        SEND_STRING ("zh");
      }
      return false;
    default:
      return MACRO_NONE;
  }
  // return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case Layer_0:
      if (record->event.pressed) {
        layer_off(Layer1);
        layer_off(Layer2);
        layer_off(Layer3);
        layer_on(Layer0);
        // if (record->event.time > 300 )
        // {
        //     layer_on(Layer3);
        // }
      }//else if( record->event.pressed && record->event.time > 1000){
      //   // layer_off(Layer1);
      //   // layer_off(Layer2);
      //   // layer_off(Layer3);
      //   // layer_on(Layer0);
      //   layer_on(Layer3);
      //   // if (record->event.time > 300 )
      //   // {
      //   //     layer_on(Layer3);
      //   // }
      // }
      return false;
      break;
    case Layer_1:
      if (record->event.pressed) {
        layer_off(Layer2);
        layer_off(Layer3);
        layer_on(Layer1);
      }
      return false;
      break;
    case Layer_2:
      if (record->event.pressed) {
        layer_off(Layer3);
        layer_on(Layer2);
      }
      return false;
      break;
    case Layer_3:
      if (record->event.pressed) {
        layer_on(Layer3);
      }
      return false;
      break;
  }

  return true;
}

void led_set_user(uint8_t usb_led) {

}
