#include QMK_KEYBOARD_H
#include "features/achordion.h"

enum {
    ESC_CAPS,
};

qk_tap_dance_action_t tap_dance_actions[] = {
    [ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS),
};

// Left-hand home row mods
// #define HM_A LGUI_T(KC_A)
#define HM_A KC_A
#define HM_S LALT_T(KC_S)
#define HM_D LSFT_T(KC_D)
#define HM_F LCTL_T(KC_F)

// Right-hand home row mods
#define HM_J RCTL_T(KC_J)
#define HM_K RSFT_T(KC_K)
#define HM_L LALT_T(KC_L)
// #define HM_SCLN RGUI_T(KC_SCLN)
#define HM_SCLN KC_SCLN

// will later make an exception for same hand rule
#define CTRL_ESC LCTL_T(KC_ESC) // Define caps lock as MT(CTRL,ESC)
#define MEH_SPC MEH_T(KC_SPC)

#define BB 0
#define BJ 1
#define FN 2
#define L3 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BB] = KEYMAP(KC_ESC,          KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_F11,   KC_F12,
                  KC_GRV,          KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_MINS,  KC_EQL,
                  KC_TAB,          KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,     KC_LBRC,  KC_RBRC,
                  KC_CAPS,         KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,      KC_SCLN,  KC_QUOT,  KC_BSLS,
                  KC_LSFT,         KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,  KC_RSFT,  KC_ENT,
                  KC_LCTL,         KC_LGUI,  KC_LALT,  KC_SPC,   KC_RALT,  MO(FN),   KC_APP,   KC_RCTL,  KC_LEFT,  KC_DOWN,   KC_UP,    KC_RGHT,  KC_BSPC,
                  KC_NO,           KC_PSCR,  KC_SLCK,  DF(BJ),   KC_INS,   KC_HOME,  KC_PGUP,  KC_DEL,   KC_END,   KC_PGDN),

    [BJ] = KEYMAP(TD(ESC_CAPS),    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,     KC_F10,   KC_F11,   KC_F12,
                  KC_GRV,          KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,      KC_0,     KC_MINS,  KC_EQL,
                  LT(L3, KC_TAB),  KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,      KC_P,     KC_LBRC,  KC_RBRC,
                  CTRL_ESC,        HM_A,     HM_S,     HM_D,     HM_F,     KC_G,     KC_H,     HM_J,     HM_K,     HM_L,      HM_SCLN,  KC_QUOT,  KC_BSLS,
                  KC_LSPO,         KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,    KC_SLSH,  KC_RSPC,  KC_ENT,
                  CW_TOGG,         KC_LGUI,  KC_LALT,  MEH_SPC,  KC_RALT,  MO(FN),   KC_APP,   KC_CAPS,  KC_LEFT,  KC_DOWN,   KC_UP,    KC_RGHT,  KC_BSPC,
                  KC_NUBS,         KC_PSCR,  KC_SLCK,  DF(BB),   KC_INS,   KC_HOME,  KC_PGUP,  KC_DEL,   KC_END,   KC_PGDN),

    [FN] = KEYMAP(RESET,           KC_MYCM,  KC_WSCH,  KC_CALC,  KC_MSEL,  KC_MPRV,  KC_MNXT,  KC_MPLY,  KC_MSTP,  KC_MUTE,   KC_VOLD,   KC_VOLU,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  RGB_TOG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_HUD,  RGB_VAD,   RGB_VAI,   RGB_HUI,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_TOG,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RGB_MOD,  RGB_RMOD),

    [L3] = KEYMAP(KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_HOME,  KC_PGDN,  KC_PGUP,  KC_END,    KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT,  KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,   KC_TRNS,   KC_TRNS,  KC_TRNS,
                  KC_TRNS,         KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS)
};

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
    achordion_task();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_achordion(keycode, record)) { return false; }
    return true;
}

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t* record) {
  // If you quickly hold a tap-hold key after tapping it, the tap action is
  // repeated. Key repeating is useful e.g. for Vim navigation keys, but can
  // lead to missed triggers in fast typing. Here, returning 0 means we
  // instead want to "force hold" and disable key repeating.
  switch (keycode) {
    // Repeating is useful for Vim navigation keys.
    case KC_H:
    case HM_J:
    case HM_K:
    case HM_L:
      return QUICK_TAP_TERM;  // Enable key repeating.
    default:
      return 0;  // Otherwise, force hold and disable key repeating.
  }
}

bool achordion_eager_mod(uint8_t mod) {
    switch (mod) {
        case MOD_LGUI:
        case MOD_LALT:
        case MOD_LSFT:
        case MOD_LCTL:
        case MOD_RCTL:
        case MOD_RSFT:
        case MOD_RGUI:
        case MOD_MEH:
            return true;

        default:
            return false;
    }
}

bool achordion_chord(uint16_t tap_hold_keycode,
                     keyrecord_t* tap_hold_record,
                     uint16_t other_keycode,
                     keyrecord_t* other_record) {
    // Exceptionally consider the following chords as holds, even though they
    // are on the same hand in Dvorak.
    switch (tap_hold_keycode) {
        case MEH_SPC:
            return true;

        case CTRL_ESC:
            return true;
    }

    // Otherwise, follow the opposite hands rule.
    return achordion_opposite_hands(tap_hold_record, other_record);
}
