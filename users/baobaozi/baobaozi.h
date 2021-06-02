#pragma once
#include QMK_KEYBOARD_H

#include "version.h"
#include "eeprom.h"
#include "quantum.h"
#include "layout_abbrs.h"

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
// #define _COLEMAK 0
// #define _QWERTY 1
// #define _EXT 2
// #define _SYM 3
// #define _TER 4
// #define _MEDIA 5

enum userspace_layers {
    // KC_MAKE = SAFE_RANGE,
    // NEW_SAFE_RANGE,  // use "NEW_SAFE_RANGE" for keymap specific codes
    _COLEMAK = 0,
    _QWERTY,
    _EXT,
    _SYM,
    _TER,
    _MEDIA,
    _PEN
};

#ifdef TAP_DANCE_ENABLE
#    include "tap_dances.h"
#endif  // TAP_DANCE_ENABLE

// Init macro keycodes, define what they do in <name>.c
enum custom_keys {
    MJSPL = SAFE_RANGE,
};
