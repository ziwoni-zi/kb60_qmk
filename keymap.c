 #include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _FNC,
    _NUM,
    _EXTRA,
    _RE_SET,
    _RE_SETF
};

enum custom_keycodes {
    QWERTY = SAFE_RANGE,
    ZZZ, FLIP, ZTZ, ZGZ,
    LANG, SPOTLIGHT, ALFRED, EMOJI,
    SCRS, SCRS_PT, SCRS_SLT,
    COPY, PASTE, CUT, SLCT_A
};

#define QWERTY DF(_QWERTY)
#define FNC MO(_FNC)
#define NUM MO(_NUM)
#define EXTRA MO(_EXTRA)
#define RE_SET MO(_RE_SET)
#define RE_SETF MO(_RE_SETF)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = {
    {
    ZZZ,  ZTZ, ZGZ, FLIP
    }
},

[1] = {
    {
    LANG, EMOJI
    }
},
    
[2] = {
    {
    SCRS, SCRS_PT, SCRS_SLT
    }
},
    
[3] = {
    {
    COPY, PASTE, CUT, SLCT_A
    }
},

[_QWERTY] = LAYOUT(
    KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSLS, KC_GRV,
    KC_TAB,           KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSPC,
    KC_LCMD,          KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, NUM,     KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, FNC,
    KC_LCTL, LANG,    KC_LOPT,                   KC_SPC,  KC_SPC,  KC_SPC,                    KC_RCMD, KC_ROPT, _______, KC_RCTL, EXTRA
),
    
[_FNC] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, SCRS_PT, SCRS_SLT, SCRS,    _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, KC_HOME, KC_PGUP, KC_UP,    _______, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, KC_END,  KC_PGDN, KC_LEFT, KC_RIGHT, _______,
    _______, _______, ZZZ,     ZGZ,     ZTZ,     _______, _______, _______, KC_MPLY, KC_VOLD, KC_VOLU, KC_DOWN,           _______, _______,
    _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______,  _______, _______
),
    
[_NUM] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_LPRN, KC_RPRN, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, KC_CIRC, KC_P7,   KC_P8,   KC_P9,   KC_ASTR, _______, _______, _______,
    _______,          _______, EMOJI,   LANG,    _______, _______, KC_MINS, KC_P4,   KC_P5,   KC_P6,   KC_PLUS, _______, _______,
    _______, _______, _______, _______, _______, _______, KC_EXLM, KC_P0,   KC_P1,   KC_P2,   KC_P3,   KC_DOT,           _______, _______,
    _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______, _______
),
    
[_EXTRA] = LAYOUT(
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______,
    _______,          _______, _______, _______, RE_SET,  _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, KC_SLEP, CUT,     SLCT_A,  _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, COPY,    PASTE,            _______, _______,
    _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______, _______
),

[_RE_SET] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, RE_SETF, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______, _______
),
    
[_RE_SETF] = LAYOUT(
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______,
    _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______,
    _______, _______, _______,                   _______, _______, _______,                   _______, _______, _______, _______, _______
)
    
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case ZZZ:
            if (record->event.pressed) {
                SEND_STRING("000000000000");
                break;
            }
            
        case ZGZ:
            if (record->event.pressed) {
                SEND_STRING("0m0m0m0m0m0m");
                break;
            }
            
        case ZTZ:
            if (record->event.pressed) {
                SEND_STRING("0n0n0n0n0n0n");
                break;
            }
            
            break;
        case FLIP:
            if (record->event.pressed) {
                //send_unicode_string("(ノಠ痊ಠ)ノ彡┻━┻");
            }
            
            break;
        case LANG:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_SPC));
            } else {
                SEND_STRING(SS_UP(X_SPC));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LSFT));
            }
            
            break;
        case EMOJI:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_SPC));
            } else {
                SEND_STRING(SS_UP(X_SPC));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LCTL));
            }
            
            break;
        case COPY:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_C));
            } else {
                SEND_STRING(SS_UP(X_C));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case PASTE:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_V));
            } else {
                SEND_STRING(SS_UP(X_V));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case CUT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_X));
            } else {
                SEND_STRING(SS_UP(X_X));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case SLCT_A:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_A));
            } else {
                SEND_STRING(SS_UP(X_A));
                SEND_STRING(SS_UP(X_LCMD));
            }
            
            break;
        case SCRS:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_3));
            } else {
                SEND_STRING(SS_UP(X_3));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LSFT));
            }
            
            break;
        case SCRS_PT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_5));
            } else {
                SEND_STRING(SS_UP(X_5));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LSFT));
            }
            
            break;
        case SCRS_SLT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LSFT));
                SEND_STRING(SS_DOWN(X_LCMD));
                SEND_STRING(SS_DOWN(X_4));
            } else {
                SEND_STRING(SS_UP(X_4));
                SEND_STRING(SS_UP(X_LCMD));
                SEND_STRING(SS_UP(X_LSFT));
            }
            
            break;
        default:
            break;
    }
    
    return true;
}
