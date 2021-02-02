#include QMK_KEYBOARD_H

enum combo_events {
    CHD_TAB,
    CHD_GRV,
    CHD_ENT,
    CHD_ESC,
    CHD_RST,
    CHD_NEI,
    CHD_ESCH,
    CHD_ENTH,
};

const uint16_t PROGMEM tab_combo[] = {KC_DOT, KC_COMM, COMBO_END};
const uint16_t PROGMEM grv_combo[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM ent_combo[] = {KC_COMM, KC_M, COMBO_END};
const uint16_t PROGMEM esc_combo[] = {KC_SLSH, KC_M, COMBO_END};
const uint16_t PROGMEM enth_combo[] = {KC_H, KC_COMM, COMBO_END};
const uint16_t PROGMEM esch_combo[] = {KC_SLSH, KC_H, COMBO_END};
const uint16_t PROGMEM nei_combo[] = {KC_N, KC_E, KC_I, COMBO_END}; // one shot shift in same spot both hands, so depending on which letter next you need to shift
const uint16_t PROGMEM rst_combo[] = {KC_R, KC_S, KC_T, COMBO_END}; // left hand mirror here

combo_t key_combos[COMBO_COUNT] = {
    [CHD_TAB] = COMBO(tab_combo, KC_TAB),
    [CHD_GRV] = COMBO(grv_combo, KC_GRV),
    [CHD_ENT] = COMBO(ent_combo, KC_ENT),
    [CHD_ESC] = COMBO(esc_combo, KC_ESC),
    [CHD_ENTH] = COMBO(enth_combo, KC_ENT),
    [CHD_ESCH] = COMBO(esch_combo, KC_ESC),
    [CHD_RST] = COMBO(rst_combo, KC_LPRN),
    [CHD_NEI] = COMBO(nei_combo, KC_RPRN),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┐                                   ┌────────┬────────┬────────┬────────┬────────┐
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                                        KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN,
  //├────────┼────────┼────────┼────────┼────────┤                                   ├────────┼────────┼────────┼────────┼────────┤
      KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                                        KC_H,    KC_N,    KC_E,    KC_I,    KC_O,
  //├────────┼────────┼────────┼────────┼────────┐                                   ├────────┼────────┼────────┼────────┼────────┤
    LSFT_T(Z), KC_X,    KC_C,    KC_V,    KC_B,                                        KC_K,    KC_M,    KC_COMM, KC_DOT,  RSFT_T(SLSH),
  //└────────┴────────┴────────┴───┬────┴───┬────┴                                    ────────┴───┬────┴───┬────┴────────┴────────┘
                                    KC_LALT,   MO(5),  MO(1),                    KC_SPC,   MO(2),  KC_ENT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┐                                   ┌────────┬────────┬────────┬────────┬────────┐
      KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                                        KC_J,    KC_HOME,  KC_UP,   KC_END,  KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┤                                   ├────────┼────────┼────────┼────────┼────────┤
      KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                                        KC_H,    KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┐                                   ├────────┼────────┼────────┼────────┼────────┤
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                        KC_K,    KC_BSPC,  KC_COMM, KC_DOT,  KC_SLSH,
  //└────────┴────────┴────────┴───┬────┴───┬────┴                                    ────────┴───┬────┴───┬────┴────────┴────────┘
                                    KC_LALT,   MO(5), _______,                    KC_ENT,   KC_SPC,  KC_ENT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [2] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PGUP,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RESET,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PGDN,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_DEL,  _______, KC_LEFT, KC_RGHT, KC_UP,   KC_LBRC,                            KC_RBRC, KC_P4,   KC_P5,   KC_P6,   KC_PLUS, KC_HOME,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     BL_STEP, _______, _______, _______, KC_DOWN, KC_LCBR, KC_LPRN,          KC_RPRN, KC_RCBR, KC_P1,   KC_P2,   KC_P3,   KC_MINS, KC_END,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                     TG(6),    _______, _______,                   KC_DEL, _______, KC_P0
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [4] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_F12,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_TOG, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     RGB_MOD, KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS,                            KC_EQL,  KC_HOME, RGB_HUI, RGB_SAI, RGB_VAI, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, KC_LPRN,          _______, KC_PLUS, KC_END,  RGB_HUD, RGB_SAD, RGB_VAD, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [5] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     TG(1),   TG(2),   _______, _______, _______, KC_CAPS,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_ESC,  _______, _______, _______, _______,                            _______, KC_HOME,  KC_UP,   KC_END,  KC_DEL, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_RALT, KC_LSFT, _______, KC_LCTL,        ,                            _______, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, KC_BSPC, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   KC_ENT,  KC_ENT, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
  [6] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    TG(6),
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_GRV,           KC_DEL,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      KC_SPC, KC_LCTL, KC_LALT,                  KC_SPC,  KC_ENT,   KC_RALT
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  )
};
