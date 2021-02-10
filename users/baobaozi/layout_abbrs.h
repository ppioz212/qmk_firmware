#pragma once

#include "quantum.h"
#include "baobaozi.h"

// Shortcuts to make keymap more readable
// Layer change abbrs
#define TGQ TG(_QWERTY)
#define TGC TG(_COLEMAK)
#define TG1 TG(_EXT)
#define TG4 TG(_QUA)
#define TG5 TG(_PEN)
#define LM1 MO(_EXT)
#define LM2 MO(_SEC)
#define LM3 MO(_TER)
#define LM4 MO(_QUA)

// Layer tap abbrs
#define LT1(kc) LT(_EXT, KC_##kc)
#define LT2(kc) LT(_SEC, KC_##kc)
#define LT3(kc) LT(_TER, KC_##kc)
#define LT4(kc) LT(_QUA, KC_##kc)
#define LT5(kc) LT(_PEN, KC_##kc)

// Mod abbrs
#define AA(kc) A(KC_##kc)
#define AC(kc) C(KC_##kc)
#define AG(kc) G(KC_##kc)
#define AS(kc) S(KC_##kc)
#define AAG(kc) A(G(KC_##kc))
#define AAS(kc) A(S(KC_##kc))
#define ACG(kc) C(G(KC_##kc))
#define ASG(kc) S(G(KC_##kc))
#define ALL(kc) C(S(G(KC_##kc)))

// Mod tap abbrs
#define MG(kc) LGUI_T(KC_##kc)
#define MA(kc) LALT_T(KC_##kc)
#define MC(kc) LCTL_T(KC_##kc)
#define MS(kc) LSFT_T(KC_##kc)

// One shot abbrs
#define OS(mod) OSM(MOD_##mod)

// #if (!defined(LAYOUT) && defined(KEYMAP))
// #    define LAYOUT KEYMAP
// #endif

// Thumb mod keys
// #ifdef ARSTNEIO_ENABLE
// #    define __T_L1___ TD(GUISFT)
// #else
// #    define __T_L1___ MG(QUOT)
// #endif
// Just leave ARSTNEIO with my own thumb key lol, theirs is shit
#define __T_L1___ LM1
// turns out, I keep mispressing one shots on thumbs, so turn it off for now
#define __T_L2___ LM2
#define __T_L3___ KC_LALT
// If there's an extra left thumb key:
#define __T_L4___ LT4(CAPS)
// Right thumbs
#define __T_R1___ KC_SPC
#define __T_R2___ KC_LCTL
#define __T_R3___ LT4(CAPS)
// If there's an extra right thumb key, I prefer it between 2 and 3:
#define __T_R2B__ KC_LCTL


// Row abbrs
#define _________________ROW_5_NOTHING___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
#define _________________ROW_5_TRNSPRNT__________________ _______  ,_______  ,_______  ,_______  ,_______
#define _________________ROW_NUMBERS_L___________________ KC_1     ,KC_2     ,KC_3     ,KC_4     ,KC_5
#define _________________ROW_NUMBERS_R___________________ KC_6     ,KC_7     ,KC_LALT  ,KC_LALT  ,KC_LALT
// Colemak
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_COLMK_L_________________ MG(Q)    ,KC_W     ,KC_F     ,KC_P     ,KC_G
#define _________________ROW_MID_COLMK_L_________________ KC_A     ,KC_R     ,KC_S     ,KC_T     ,KC_D
#define _________________ROW_BOT_COLMK_L_________________ MS(Z)    ,LT3(X)   ,KC_C     ,KC_V     ,KC_B
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘

// #define _________________ROW_MID_COLMK_L_________________ MC(A)    ,MA(R)    ,MG(S)    ,MS(T)    ,KC_D
// #define _________________ROW_MID_COLMK_R_________________ KC_H     ,MS(N)    ,MG(E)    ,MA(I)    ,MC(O)

// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_COLMK_R_________________ KC_J     ,KC_L     ,KC_U     ,KC_Y     ,MG(QUOT)
#define _________________ROW_MID_COLMK_R_________________ KC_H     ,KC_N     ,KC_E     ,KC_I     ,KC_O
#define _________________ROW_BOT_COLMK_R_________________ KC_K     ,KC_M     ,KC_COMM  ,KC_DOT   ,MS(SLSH)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// EXT (My extend like layer. With main navigation and easy access shortcuts)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_EXT_L___________________ AA(TAB)  ,KC_ESC   ,TD(RFSH) ,KC_VOLU  ,AC(C)
#define _________________ROW_MID_EXT_L___________________ ACG(Q)   ,KC_LALT  ,KC_LSFT  ,KC_LCTL  ,KC_MNXT
#define _________________ROW_BOT_EXT_L___________________ AC(Z)    ,AC(X)    ,AC(C)    ,AC(V)    ,ASG(M)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_EXT_R___________________ TD(RFSH) ,KC_HOME  ,KC_UP    ,KC_END   ,KC_DEL
#define _________________ROW_MID_EXT_R___________________ KC_BSPC  ,KC_LEFT  ,KC_DOWN  ,KC_RIGHT ,KC_BSPC
#define _________________ROW_BOT_EXT_R___________________ ASG(K)   ,AC(BSPC) ,AG(UP)   ,AG(DOWN) ,AG(RGHT)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// SEC (my most commonly required coding symbols)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_SEC_L___________________ XXXXXXX  ,_______  ,OS(LSFT) ,XXXXXXX  ,XXXXXXX
#define _________________ROW_MID_SEC_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
#define _________________ROW_BOT_SEC_L___________________ OS(LSFT) ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_SEC_R___________________ KC_BSLS  ,KC_LBRC  ,KC_RBRC  ,KC_QUOT  ,KC_SCLN
#define _________________ROW_MID_SEC_R___________________ KC_BSPC  ,TD(BRCO) ,TD(BRCC) ,KC_MINS  ,KC_EQL
#define _________________ROW_BOT_SEC_R___________________ MJSPL    ,TD(DQUO) ,TD(SQUO) ,TD(ENEM) ,AA(SCLN)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// TER (numpad layer, i kept them as regular numrow keys instead of numpad keys, so i can get the other symbols i use less often)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_TER_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
#define _________________ROW_MID_TER_L___________________ XXXXXXX  ,XXXXXXX  ,KC_EQL   ,KC_SLSH  ,KC_PERC
#define _________________ROW_BOT_TER_L___________________ KC_PENT  ,_______  ,OS(LSFT) ,TD(BRCO) ,TD(BRCC) // ALL(NO) where KC_PENT is, for mod masking numpad as functionkeypad
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_TER_R___________________ KC_PMNS  ,KC_7     ,KC_8     ,KC_9     ,KC_PPLS
#define _________________ROW_MID_TER_R___________________ KC_BSPC  ,KC_4     ,KC_5     ,KC_6     ,KC_0
#define _________________ROW_BOT_TER_R___________________ KC_PAST  ,KC_1     ,KC_2     ,KC_3     ,KC_DOT
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// QUA (keyboard actions and misc)
#define _________________ROW_NUM_QUA_L___________________ KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5
#define _________________ROW_NUM_QUA_R___________________ KC_F6    ,KC_F7    ,KC_F8    ,KC_F9    ,KC_F10
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_QUA_L___________________ TD(SRST) ,RGB_MOD  ,RGB_HUI  ,RGB_SAI  ,RGB_VAI
#define _________________ROW_MID_QUA_L___________________ RGB_M_SW ,RGB_TOG  ,RGB_HUD  ,RGB_SAD  ,RGB_VAD
#define _________________ROW_BOT_QUA_L___________________ ASG(3)   ,ASG(4)   ,ALL(3)   ,ALL(4)   ,DEBUG
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐ // 140 bytes for a layer dedicated to f-row sucks
#define _________________ROW_TOP_QUA_R___________________ KC_F1    ,KC_F2    ,KC_F3    ,KC_F4    ,KC_F5
#define _________________ROW_MID_QUA_R___________________ KC_F11   ,KC_F12   ,KC_PAUS  ,KC_SLCK  ,TD(SEEP)
#define _________________ROW_BOT_QUA_R___________________ TD(F212) ,ASG(Y)   ,ASG(SPC) ,AG(SPC)  ,XXXXXXX
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// PEN (mouse layer)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── F ───┬─── P ───┬─── G ───┐
#define _________________ROW_TOP_PEN_L___________________ TG5      ,KC_ACL2  ,KC_ACL1  ,KC_ACL0  ,XXXXXXX
#define _________________ROW_MID_PEN_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
#define _________________ROW_BOT_PEN_L___________________ XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX  ,XXXXXXX
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── J ───┬─── L ───┬─── U ───┬─── Y ───┬─── ; ───┐
#define _________________ROW_TOP_PEN_R___________________ KC_PGUP  ,KC_BTN1  ,KC_PGUP  ,KC_PGDN  ,KC_BTN2
#define _________________ROW_MID_PEN_R___________________ KC_BSPC  ,KC_MS_L  ,KC_MS_U  ,KC_MS_D  ,KC_MS_R
#define _________________ROW_BOT_PEN_R___________________ KC_PGDN  ,KC_WH_L  ,KC_WH_D  ,KC_WH_U  ,KC_WH_L // reversed Up/Down because of Apple’s Natural style scrolling
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// QWERTY (is pretty shit and i forgot how to use it so i will probably delete it later)
// LEFT                                                  ┌─── Q ───┬─── W ───┬─── E ───┬─── R ───┬─── T ───┐
#define _________________ROW_TOP_QWERT_L_________________ LT1(Q)   ,LT2(W)   ,KC_E     ,KC_R     ,KC_T
#define _________________ROW_MID_QWERT_L_________________ KC_A     ,KC_S     ,KC_D     ,KC_F     ,KC_G
#define _________________ROW_BOT_QWERT_L_________________ MS(Z)    ,LT3(X)   ,KC_C     ,KC_V     ,KC_B
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
// RIGHT                                                 ┌─── Y ───┬─── U ───┬─── I ───┬─── O ───┬─── P ───┐
#define _________________ROW_TOP_QWERT_R_________________ KC_Y     ,KC_U     ,KC_I     ,KC_O     ,KC_P
#define _________________ROW_MID_QWERT_R_________________ KC_H     ,KC_J     ,KC_K     ,KC_L     ,KC_SCLN
#define _________________ROW_BOT_QWERT_R_________________ KC_N     ,KC_M     ,KC_COMM  ,KC_DOT   ,MS(SLSH)
//                                                       └─────────┴─────────┴─────────┴─────────┴─────────┘
