#include QMK_KEYBOARD_H
#include "split_util.h"

#include "baobaozi.h"

/* Re-pass though to allow templates to be used */
#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_COLEMAK] = LAYOUT_wrapper(
KC_ESC   ,_________________ROW_NUMBERS_L___________________,                       _________________ROW_NUMBERS_R___________________,KC_MPLY  ,
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
  KC_TAB,_________________ROW_TOP_COLMK_L_________________,          _________________ROW_TOP_COLMK_R_________________,KC_BSLS,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
  KC_LCTL,_________________ROW_MID_COLMK_L_________________,          _________________ROW_MID_COLMK_R_________________,KC_RCTL,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
  KC_LSFT,_________________ROW_BOT_COLMK_L_________________,KC_DEL,   KC_COMM,_________________ROW_BOT_COLMK_R_________________,KC_LSFT,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                __T_L2___,__T_L1___,__T_L3___,          __T_R3___,__T_R1___,__T_R2___
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────
    ),

    [_EXT] = LAYOUT_wrapper(
  _______  ,_________________ROW_5_NOTHING___________________,          _________________ROW_5_NOTHING___________________,_______  ,
        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
    _______,_________________ROW_TOP_EXT_L___________________,          _________________ROW_TOP_EXT_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_MID_EXT_L___________________,          _________________ROW_MID_EXT_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_BOT_EXT_L___________________,_______,  _______,_________________ROW_BOT_EXT_R___________________,_______,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,KC_ENT   ,KC_ENT
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_SEC] = LAYOUT_wrapper(
    _______,_________________ROW_5_NOTHING___________________,                       _________________ROW_5_NOTHING___________________,_______  ,

        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
    _______,_________________ROW_TOP_SEC_L___________________,          _________________ROW_TOP_SEC_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_MID_SEC_L___________________,          _________________ROW_MID_SEC_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_BOT_SEC_L___________________,_______, _______,_________________ROW_BOT_SEC_R___________________,_______,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,_______  ,_______
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_TER] = LAYOUT_wrapper(
  _______  ,_________________ROW_5_NOTHING___________________,                       _________________ROW_5_NOTHING___________________,_______  ,

        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
    _______,_________________ROW_TOP_TER_L___________________,          _________________ROW_TOP_TER_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_MID_TER_L___________________,          _________________ROW_MID_TER_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_BOT_TER_L___________________,_______, _______,_________________ROW_BOT_TER_R___________________,_______,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,KC_0     ,KC_DOT
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_QUA] = LAYOUT_wrapper(
  _______  ,_________________ROW_5_NOTHING___________________,                       _________________ROW_5_NOTHING___________________,_______  ,

        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
    _______,_________________ROW_TOP_QUA_L___________________,          _________________ROW_TOP_QUA_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_MID_QUA_L___________________,          _________________ROW_MID_QUA_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_BOT_QUA_L___________________,_______,  _______,_________________ROW_BOT_QUA_R___________________,_______,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,_______  ,_______
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),

    [_PEN] = LAYOUT_wrapper(
    _______  ,_________________ROW_5_NOTHING___________________,                       _________________ROW_5_NOTHING___________________,_______  ,

        // ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐         ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
    _______,_________________ROW_TOP_PEN_L___________________,          _________________ROW_TOP_PEN_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_MID_PEN_L___________________,          _________________ROW_MID_PEN_R___________________,_______,
        // ├─────────┼─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┼─────────┤
    _______,_________________ROW_BOT_PEN_L___________________,_______,  _______,_________________ROW_BOT_PEN_R___________________,_______,
        // └─────────┴─────────┼─────────┼─────────┼─────────┤         ├─────────┼─────────┼─────────┼─────────┴─────────┘
                                _______  ,_______  ,_______  ,          _______  ,_______  ,_______
                            // └─────────┴─────────┴─────────┘         └─────────┴─────────┴─────────┘
    ),
};

#ifdef OLED_DRIVER_ENABLE
// static uint32_t oled_timer = 0;

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_master())
        return OLED_ROTATION_180;
    return rotation;
}

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,
        0
    };
    oled_write_P(PSTR(" \n"), false);
    oled_write_P(qmk_logo, false);
}

void render_mod_status(uint8_t modifiers) {
    oled_write_P(PSTR("cap sft ctl opt cmd\n"), false);

    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.caps_lock ? PSTR(" ^  ") : PSTR("    "), false);

    if(modifiers & MOD_MASK_SHIFT) {
        oled_write_P(PSTR(" ^  "), false);
    } else {
        oled_write_P(PSTR("    "), false);
    }

    if(modifiers & MOD_MASK_CTRL) {
        oled_write_P(PSTR(" ^  "), false);
    } else {
        oled_write_P(PSTR("    "), false);
    }

    if(modifiers & MOD_MASK_ALT) {
        oled_write_P(PSTR(" ^  "), false);
    } else {
        oled_write_P(PSTR("    "), false);
    }

    if(modifiers & MOD_MASK_GUI) {
        oled_write_P(PSTR(" ^  "), false);
    } else {
        oled_write_P(PSTR("    "), false);
    }
}

static void render_status(void) {
    oled_write_P(PSTR("CMK PR SE TE QU PE\n"), false);
    switch (get_highest_layer(layer_state)) {
        // oled_write_P(PSTR("CMK PRI SEC TER QUA1\n"), false); // you get a max of 20 chars on these small OLEDs. 4 lines actually fits though!
        // oled_write_P(PSTR("CM PR SE TE QU PE\n"), false); // you get a max of 20 chars on these small OLEDs. 4 lines actually fits though!
        // You also have access to a `default_layer_state` for when you DF … so you can tell difference between which default layer you’re on
        case _EXT:
            oled_write_P(PSTR("    ^\n"), false);
            break;
        case _SEC:
            oled_write_P(PSTR("       ^\n"), false);
            break;
        case _TER:
            oled_write_P(PSTR("          ^\n"), false);
            break;
        case _QUA:
            oled_write_P(PSTR("             ^\n"), false);
            break;
        case _PEN:
            oled_write_P(PSTR("                ^\n"), false);
            break;
        default:
            oled_write_P(PSTR(" ^\n"), false);
    }
}

// void keyboard_post_init_user(void) {
//     // set initial animation type (in that I don’t want it)
//     rgblight_mode(RGBLIGHT_MODE_KNIGHT);
// }

// bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
//     if (record->event.pressed) {
//         oled_timer = timer_read32(); // when you type again, reset the timer to let you know inactivity
//     }

//     return true;
// }

void oled_task_user(void) {
    // if (timer_elapsed32(oled_timer) > 60000) {
    //     oled_off();
    //     rgblight_disable_noeeprom();

    //     return;
    // } else {
        oled_on();
        // rgblight_disable_noeeprom();
        // rgblight_enable_noeeprom();

        if (is_keyboard_master()) {
            render_status();
            render_mod_status(get_mods()|get_oneshot_mods());
        } else {
            render_logo();
            oled_scroll_left();
        }
    // }
}
#endif
