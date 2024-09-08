#include QMK_KEYBOARD_H
#include "combos.c"

#define CTRL_ESC LCTL_T(KC_ESC) // Define caps lock as MT(CTRL,ESC)
#define MEH_BSLS MEH_T(KC_BSLS) // Backslash or MEH on hold
#define L3_TAB LT(L3, KC_TAB) // TAB or Layer L3 on hold

#define BB 0
#define BJ 1
#define FN 2
#define L3 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BB] = KEYMAP(KC_ESC,     KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_F11,   KC_F12,
                  KC_GRV,     KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_MINS,  KC_EQL,
                  KC_TAB,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,     KC_LBRC,  KC_RBRC,
                  KC_CAPS,    KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,  KC_QUOT,  KC_BSLS,
                  KC_LSFT,    KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,  KC_RSFT,  KC_ENT,
                  KC_LCTL,    KC_LGUI,  KC_LALT,  KC_SPC,   KC_RALT,  MO(FN),   KC_APP,   DF(BJ),   KC_LEFT,  KC_DOWN,   KC_UP,    KC_RGHT,  KC_BSPC,
                  KC_NO,      KC_PSCR,  KC_SLCK,  DF(BJ),   KC_INS,   KC_HOME,  KC_PGUP,  KC_DEL,   KC_END,   KC_PGDN),

     [BJ] = KEYMAP(KC_ESC,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_F11,   KC_F12,
                   KC_GRV,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_MINS,  KC_EQL,
                   L3_TAB,    KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,     KC_LBRC,  KC_RBRC,
                   CTRL_ESC,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,  KC_QUOT,  MEH_BSLS,
                   KC_LSFT,   KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,  KC_RSFT,  KC_ENT,
                   KC_CAPS,   KC_LGUI,  KC_LALT,  KC_SPC,   KC_RALT,  MO(FN),   KC_APP,   DF(BB),   KC_LEFT,  KC_DOWN,   KC_UP,    KC_RGHT,  KC_BSPC,
                   KC_NUBS,   KC_PSCR,  KC_SLCK,  DF(BB),   KC_INS,   KC_HOME,  KC_PGUP,  KC_DEL,   KC_END,   KC_PGDN),

    [FN] = KEYMAP(RESET,      KC_MYCM,  KC_WSCH,  KC_CALC,  KC_MSEL,  KC_MPRV,  KC_MNXT,  KC_MPLY,  KC_MSTP,  KC_MUTE,   KC_VOLD,  KC_VOLU,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  RGB_MOD,  RGB_RMOD,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  RGB_TOG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_HUD,  RGB_VAD,   RGB_VAI,  RGB_HUI,  KC_PSCR,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_TOG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_MOD,  RGB_RMOD),

    [L3] = KEYMAP(KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,    KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_TRNS,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,  KC_TRNS,  KC_DEL,
                  KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

/* Combos should only run on BJ*/
// bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
//     return layer_state_is(BJ);
// }

