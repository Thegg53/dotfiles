#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  =   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 *LCtl Esc|   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |LSh \ |   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  | / | RShft Enter |
 * `-----------------------------------------/ To(0) /     \ TO(1)\-----------------------------------------'
 *                   | Del  | LGUI |LAlt  | /BSpace /       \space \  |      | To(1)| Enter |
 *                   |      |      |      |/       /         \      \ |      |      |       |
 *                   `----------------------------'           '------''---------------------'
 */

[0] = LAYOUT(
    KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_EQL,
    LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
    LSFT_T(KC_BSLS), KC_Z, KC_X, KC_C, KC_V, KC_B, KC_LBRC, KC_RBRC, KC_N, KC_M, KC_COMM,KC_DOT, KC_SLSH, SC_SENT,
    KC_DEL, KC_LGUI, KC_LALT, LT(0,KC_BSPC), LT(1,KC_SPC), KC_NO,TO(1), KC_ENT
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |TRANSP|      | MUTE | VOL -| VOL +| PLAY |                    | HOME | PgDn | PgUp | END  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |TRANSP|      |      |      |      |      |-------.    ,-------| LEFT | DOWN |  UP  | Right|      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |TRANSP|      |      |      |      |      |-------|    |-------|      |      |      |      |      |TRANSP|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |TRANSP|TRANSP|TRANSP| /TRANSP /       \TRANSP\  | to(0) |     | TRANSP|
 *                   |      |      |      |/       /         \      \ |       |     |       |
 *                   `----------------------------'           '------''---------------------'
 */

[1] = LAYOUT(
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
    KC_TRNS, KC_NO, KC_MUTE, KC_KB_VOLUME_DOWN, KC_KB_VOLUME_UP, KC_MPLY, KC_HOME, KC_PGDN, KC_PGUP, KC_END, KC_NO, KC_NO,
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_NO,
    KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,      KC_NO, KC_NO,      KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, TO(0), KC_NO, KC_TRNS
)
};
