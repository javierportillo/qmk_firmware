enum combos {
    L_1_2H_CTRL,
    R_1_2H_CTRL,
    L_1_2U_SHIFT,
    R_1_2U_SHIFT,
    L_1_3H_ALT,
    R_1_3H_ALT,
    L_1_3U_WIN,
    R_1_3U_WIN,
    // L_2H_3H_CTRL_SHIFT,
    // R_2H_3H_CTRL_SHIFT,
    // L_2H_3U_CTRL_ALT,
    // R_2H_3U_CTRL_ALT,
    // L_2U_3H_CTRL_WIN,
    // R_2U_3H_CTRL_WIN,
    // L_2U_3U_SHIFT_ALT,
    // R_2U_3U_SHIFT_ALT,
    // L_1_2H_3H_SHIFT_WIN,
    // R_1_2H_3H_SHIFT_WIN,
    // L_1_2H_3U_ALT_WIN,
    // R_1_2H_3U_ALT_WIN,
    // L_Z_CTRL_SHIFT_ALT,
    // R_Z_CTRL_SHIFT_ALT,
    // L_1_2U_3H_CTRL_SHIFT_WIN,
    // R_1_2U_3H_CTRL_SHIFT_WIN,
    // L_1_2U_3U_CTRL_ALT_WIN,
    // R_1_2U_3U_CTRL_ALT_WIN,
    // L_1U_2U_3U_SHIFT_ALT_WIN,
    // R_1U_2U_3U_SHIFT_ALT_WIN,
    // L_Z_O_CTRL_SHIFT_ALT_WIN,
    // R_Z_O_CTRL_SHIFT_ALT_WIN,
    COMBO_LENGTH // nifty trick to avoid manually specifying how many combos you have
};

uint16_t COMBO_LEN = COMBO_LENGTH; // nifty trick continued

// define keys that make up combos
const uint16_t PROGMEM l_1_2h_ctrl[] = {KC_F, KC_D, COMBO_END};
const uint16_t PROGMEM r_1_2h_ctrl[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM l_1_2u_shift[] = {KC_F, KC_E, COMBO_END};
const uint16_t PROGMEM r_1_2u_shift[] = {KC_J, KC_I, COMBO_END};
const uint16_t PROGMEM l_1_3h_alt[] = {KC_F, KC_S, COMBO_END};
const uint16_t PROGMEM r_1_3h_alt[] = {KC_J, KC_L, COMBO_END};
const uint16_t PROGMEM l_1_3u_win[] = {KC_F, KC_W, COMBO_END};
const uint16_t PROGMEM r_1_3u_win[] = {KC_J, KC_O, COMBO_END};
const uint16_t PROGMEM l_2h_3h_ctrl_shift[] = {KC_D, KC_S, COMBO_END};
const uint16_t PROGMEM r_2h_3h_ctrl_shift[] = {KC_K, KC_L, COMBO_END};
// const uint16_t PROGMEM l_2h_3u_ctrl_alt[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_2h_3u_ctrl_alt[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_2u_3h_ctrl_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_2u_3h_ctrl_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_2u_3u_shift_alt[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_2u_3u_shift_alt[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_1_2h_3h_shift_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_1_2h_3h_shift_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_1_2h_3u_alt_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_1_2h_3u_alt_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_z_ctrl_shift_alt[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_z_ctrl_shift_alt[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_1_2u_3h_ctrl_shift_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_1_2u_3h_ctrl_shift_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_1_2u_3u_ctrl_alt_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_1_2u_3u_ctrl_alt_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_1u_2u_3u_shift_alt_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_1u_2u_3u_shift_alt_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM l_z_o_ctrl_shift_alt_win[] = {KC_, KC_, COMBO_END};
// const uint16_t PROGMEM r_z_o_ctrl_shift_alt_win[] = {KC_, KC_, COMBO_END};

// map combo names to their keys and the key they trigger
combo_t key_combos[] = {
    [L_1_2H_CTRL] = COMBO(l_1_2h_ctrl, KC_LCTL),
    [R_1_2H_CTRL] = COMBO(r_1_2h_ctrl, KC_RCTL),
    [L_1_2U_SHIFT] = COMBO(l_1_2u_shift, KC_LSFT),
    [R_1_2U_SHIFT] = COMBO(r_1_2u_shift, KC_RSFT),
    [L_1_3H_ALT] = COMBO(l_1_3h_alt, KC_LALT),
    [R_1_3H_ALT] = COMBO(r_1_3h_alt, KC_RALT),
    [L_1_3U_WIN] = COMBO(l_1_3u_win, KC_LGUI),
    [R_1_3U_WIN] = COMBO(r_1_3u_win, KC_RGUI),
    // [L_2H_3H_CTRL_SHIFT] = COMBO(l_2h_3h_ctrl_shift, KC_),
    // [R_2H_3H_CTRL_SHIFT] = COMBO(r_2h_3h_ctrl_shift, KC_),
    // [L_2H_3U_CTRL_ALT] = COMBO(l_2h_3u_ctrl_alt, KC_),
    // [R_2H_3U_CTRL_ALT] = COMBO(r_2h_3u_ctrl_alt, KC_),
    // [L_2U_3H_CTRL_WIN] = COMBO(l_2u_3h_ctrl_win, KC_),
    // [R_2U_3H_CTRL_WIN] = COMBO(r_2u_3h_ctrl_win, KC_),
    // [L_2U_3U_SHIFT_ALT] = COMBO(l_2u_3u_shift_alt, KC_),
    // [R_2U_3U_SHIFT_ALT] = COMBO(r_2u_3u_shift_alt, KC_),
    // [L_1_2H_3H_SHIFT_WIN] = COMBO(l_1_2h_3h_shift_win, KC_),
    // [R_1_2H_3H_SHIFT_WIN] = COMBO(r_1_2h_3h_shift_win, KC_),
    // [L_1_2H_3U_ALT_WIN] = COMBO(l_1_2h_3u_alt_win, KC_),
    // [R_1_2H_3U_ALT_WIN] = COMBO(r_1_2h_3u_alt_win, KC_),
    // [L_Z_CTRL_SHIFT_ALT] = COMBO(l_z_ctrl_shift_alt, KC_),
    // [R_Z_CTRL_SHIFT_ALT] = COMBO(r_z_ctrl_shift_alt, KC_),
    // [L_1_2U_3H_CTRL_SHIFT_WIN] = COMBO(l_1_2u_3h_ctrl_shift_win, KC_),
    // [R_1_2U_3H_CTRL_SHIFT_WIN] = COMBO(r_1_2u_3h_ctrl_shift_win, KC_),
    // [L_1_2U_3U_CTRL_ALT_WIN] = COMBO(l_1_2u_3u_ctrl_alt_win, KC_),
    // [R_1_2U_3U_CTRL_ALT_WIN] = COMBO(r_1_2u_3u_ctrl_alt_win, KC_),
    // [L_1U_2U_3U_SHIFT_ALT_WIN] = COMBO(l_1u_2u_3u_shift_alt_win, KC_),
    // [R_1U_2U_3U_SHIFT_ALT_WIN] = COMBO(r_1u_2u_3u_shift_alt_win, KC_),
    // [L_Z_O_CTRL_SHIFT_ALT_WIN] = COMBO(l_z_o_ctrl_shift_alt_win, KC_),
    // [R_Z_O_CTRL_SHIFT_ALT_WIN] = COMBO(r_z_o_ctrl_shift_alt_win, KC_),
};

