#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_132_255_255,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
  DANCE_15,
  DANCE_16,
  DANCE_17,
  DANCE_18,
  DANCE_19,
  DANCE_20,
  DANCE_21,
  DANCE_22,
  DANCE_23,
  DANCE_24,
  DANCE_25,
  DANCE_26,
  DANCE_27,
  DANCE_28,
  DANCE_29,
  DANCE_30,
  DANCE_31,
  DANCE_32,
  DANCE_33,
  DANCE_34,
  DANCE_35,
  DANCE_36,
  DANCE_37,
  DANCE_38,
  DANCE_39,
  DANCE_40,
  DANCE_41,
  DANCE_42,
  DANCE_43,
  DANCE_44,
  DANCE_45,
  DANCE_46,
  DANCE_47,
  DANCE_48,
  DANCE_49,
  DANCE_50,
  DANCE_51,
  DANCE_52,
  DANCE_53,
  DANCE_54,
  DANCE_55,
  DANCE_56,
  DANCE_57,
  DANCE_58,
  DANCE_59,
  DANCE_60,
  DANCE_61,
  DANCE_62,
  DANCE_63,
  DANCE_64,
  DANCE_65,
  DANCE_66,
  DANCE_67,
  DANCE_68,
  DANCE_69,
  DANCE_70,
  DANCE_71,
  DANCE_72,
  DANCE_73,
  DANCE_74,
  DANCE_75,
  DANCE_76,
  DANCE_77,
  DANCE_78,
  DANCE_79,
  DANCE_80,
  DANCE_81,
  DANCE_82,
  DANCE_83,
  DANCE_84,
  DANCE_85,
  DANCE_86,
  DANCE_87,
  DANCE_88,
  DANCE_89,
  DANCE_90,
  DANCE_91,
  DANCE_92,
  DANCE_93,
  DANCE_94,
  DANCE_95,
  DANCE_96,
  DANCE_97,
  DANCE_98,
  DANCE_99,
  DANCE_100,
  DANCE_101,
  DANCE_102,
  DANCE_103,
  DANCE_104,
  DANCE_105,
  DANCE_106,
  DANCE_107,
  DANCE_108,
  DANCE_109,
  DANCE_110,
  DANCE_111,
  DANCE_112,
  DANCE_113,
  DANCE_114,
  DANCE_115,
  DANCE_116,
  DANCE_117,
  DANCE_118,
  DANCE_119,
  DANCE_120,
  DANCE_121,
  DANCE_122,
  DANCE_123,
  DANCE_124,
  DANCE_125,
  DANCE_126,
  DANCE_127,
  DANCE_128,
  DANCE_129,
  DANCE_130,
  DANCE_131,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    TD(DANCE_0),    TD(DANCE_1),    TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),    TD(DANCE_6),                                    TD(DANCE_30),   TD(DANCE_31),   TD(DANCE_32),   TD(DANCE_33),   TD(DANCE_34),   TD(DANCE_35),   TD(DANCE_36),   
    KC_TAB,         TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   TD(DANCE_11),   TD(DANCE_12),                                   TD(DANCE_37),   TD(DANCE_38),   TD(DANCE_39),   TD(DANCE_40),   TD(DANCE_41),   TD(DANCE_42),   TD(DANCE_43),   
    TD(DANCE_13),   TD(DANCE_14),   TD(DANCE_15),   TD(DANCE_16),   TD(DANCE_17),   TD(DANCE_18),   TD(DANCE_19),                                                                   TD(DANCE_44),   TD(DANCE_45),   TD(DANCE_46),   TD(DANCE_47),   TD(DANCE_48),   TD(DANCE_49),   TD(DANCE_50),   
    KC_LEFT_SHIFT,  TD(DANCE_20),   TD(DANCE_21),   TD(DANCE_22),   TD(DANCE_23),   TD(DANCE_24),                                   TD(DANCE_51),   TD(DANCE_52),   TD(DANCE_53),   TD(DANCE_54),   TD(DANCE_55),   TD(DANCE_56),   
    KC_LEFT_CTRL,   KC_LEFT_ALT,    TD(DANCE_25),   TD(DANCE_26),   TD(DANCE_27),   TD(DANCE_28),                                                                                                   KC_UP,          TD(DANCE_57),   TD(DANCE_58),   TO(1),          TT(7),          TT(2),          
    KC_SPACE,       KC_ENTER,       TD(DANCE_29),                   KC_LEFT,        KC_DOWN,        KC_RIGHT
  ),
  [1] = LAYOUT_moonlander(
    TD(DANCE_59),   TD(DANCE_60),   TD(DANCE_61),   TD(DANCE_62),   TD(DANCE_63),   TD(DANCE_64),   TD(DANCE_65),                                   TD(DANCE_70),   TD(DANCE_71),   TD(DANCE_72),   KC_F20,         KC_F22,         KC_MINUS,       KC_EQUAL,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           TD(DANCE_66),                                   TD(DANCE_73),   KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_BSPC,        KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TD(DANCE_67),                                                                   TD(DANCE_74),   KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_SHIFT,  KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_QUOTE,       TD(DANCE_75),   TD(DANCE_76),   KC_SLASH,       
    KC_LEFT_CTRL,   KC_LEFT_ALT,    TD(DANCE_68),   TD(DANCE_69),   KC_SPACE,       OSL(8),                                                                                                         KC_UP,          KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_ENTER,       KC_NO,          KC_DELETE,      
    KC_I,           KC_U,           KC_M,                           KC_LEFT,        KC_DOWN,        KC_RIGHT
  ),
  [2] = LAYOUT_moonlander(
    TD(DANCE_77),   TD(DANCE_78),   KC_F2,          TD(DANCE_79),   TD(DANCE_80),   TD(DANCE_81),   TD(DANCE_82),                                   KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         KC_F12,         KC_NO,          
    KC_TAB,         KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_NO,                                          KC_NO,          KC_NO,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_NO,          
    TD(DANCE_83),   KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_DQUO,                                                                        TO(0),          KC_NO,          KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_PERC,        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_TILD,                                        KC_NO,          KC_1,           KC_2,           KC_3,           KC_BSLS,        KC_NO,          
    KC_NO,          KC_AMPR,        KC_NO,          KC_SLASH,       KC_BSLS,        RGB_MODE_FORWARD,                                                                                                RGB_TOG,        KC_NO,          KC_0,           KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_VAD,        RGB_VAI,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [3] = LAYOUT_moonlander(
    TD(DANCE_84),   AS_TOGG,        AS_ON,          AS_OFF,         RGB_HUD,        RGB_HUI,        TOGGLE_LAYER_COLOR,                                RGB_TOG,        RGB_VAI,        RGB_SPI,        RGB_SLD,        AU_TOGG,        QK_AUDIO_ON,    MAGIC_TOGGLE_NKRO,
    QK_DYNAMIC_TAPPING_TERM_UP,AS_UP,          KC_NO,          KC_NO,          RGB_SAD,        RGB_SAI,        RGB_TOG,                                        RGB_MODE_FORWARD,RGB_VAD,        RGB_SPD,        HSV_132_255_255,MU_TOGG,        QK_AUDIO_OFF,   KC_NO,          
    QK_DYNAMIC_TAPPING_TERM_DOWN,AS_DOWN,        KC_NO,          KC_NO,          RGB_SPD,        RGB_SPI,        RGB_MODE_FORWARD,                                                                MOON_LED_LEVEL, RGB_SAI,        RGB_HUI,        TOGGLE_LAYER_COLOR,MU_NEXT,        QK_MUSIC_ON,    QK_BOOT,        
    QK_DYNAMIC_TAPPING_TERM_PRINT,AS_RPT,         KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,RGB_VAD,        RGB_VAI,                                        RGB_SAD,        RGB_HUD,        KC_MS_WH_UP,    TD(DANCE_85),   QK_MUSIC_OFF,   KC_NO,          
    KC_CALCULATOR,  KC_WWW_FAVORITES,KC_MY_COMPUTER, KC_WWW_SEARCH,  KC_APPLICATION, KC_MS_UP,                                                                                                       KC_UP,          KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_NO,          
    KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,                    KC_LEFT,        KC_DOWN,        KC_RIGHT
  ),
  [4] = LAYOUT_moonlander(
    TD(DANCE_86),   KC_NO,          KC_NO,          LCTL(KC_END),   KC_NO,          KC_NO,          TD(DANCE_87),                                   KC_FIND,        KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TD(DANCE_88),                                   LCTL(KC_H),     KC_NO,          KC_NO,          KC_PC_CUT,      KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          TD(DANCE_89),                                                                   LCTL(KC_A),     KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MS_WH_UP,                                                                                                    KC_UP,          KC_PC_COPY,     KC_PC_PASTE,    KC_NO,          KC_NO,          KC_NO,          
    KC_MS_WH_LEFT,  KC_MS_WH_DOWN,  KC_MS_WH_RIGHT,                 KC_LEFT,        KC_DOWN,        KC_RIGHT
  ),
  [5] = LAYOUT_moonlander(
    TD(DANCE_90),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [6] = LAYOUT_moonlander(
    TD(DANCE_91),   TD(DANCE_92),   TD(DANCE_93),   TD(DANCE_94),   TD(DANCE_95),   TD(DANCE_96),   TD(DANCE_97),                                   KC_TRANSPARENT, TD(DANCE_109),  TD(DANCE_110),  TD(DANCE_111),  TD(DANCE_112),  TD(DANCE_113),  KC_TRANSPARENT, 
    KC_TAB,         LSFT(KC_LBRC),  LSFT(KC_RBRC),  KC_B,           KC_F,           KC_G,           KC_TRANSPARENT,                                 KC_SCLN,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TD(DANCE_98),   LCTL(LSFT(KC_LBRC)),LCTL(LSFT(KC_RBRC)),TD(DANCE_99),   KC_D,           KC_T,           LGUI(KC_TAB),                                                                   KC_QUOTE,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_114),  
    KC_LEFT_SHIFT,  TD(DANCE_100),  TD(DANCE_101),  TD(DANCE_102),  TD(DANCE_103),  TD(DANCE_104),                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_TRANSPARENT, TD(DANCE_105),  TD(DANCE_106),  TD(DANCE_107),                                                                                                  KC_UP,          TD(DANCE_115),  TD(DANCE_116),  KC_TRANSPARENT, KC_NO,          KC_NO,          
    KC_SPACE,       KC_ENTER,       TD(DANCE_108),                  KC_LEFT,        KC_DOWN,        KC_RIGHT
  ),
  [7] = LAYOUT_moonlander(
    KC_ESCAPE,      TD(DANCE_117),  TD(DANCE_118),  TD(DANCE_119),  TD(DANCE_120),  TD(DANCE_121),  TD(DANCE_122),                                  KC_PSCR,        KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_NO,          
    KC_TAB,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_HOME,                                        KC_AUDIO_VOL_UP,KC_NO,          LCTL(KC_L),     KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_DELETE,      KC_NO,          KC_NO,          KC_NO,          KC_NO,          LALT(KC_G),     TD(DANCE_123),                                                                  KC_AUDIO_VOL_DOWN,KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_SHIFT,  LCTL(LSFT(KC_TAB)),LCTL(KC_TAB),   KC_NO,          TD(DANCE_124),  KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_LEFT_GUI,    LALT(LSFT(KC_A)),LCTL(KC_C),     KC_NO,                                                                                                          LCTL(LSFT(KC_TAB)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_ENTER,       LCTL(KC_V),                     KC_TRANSPARENT, LCTL(KC_TAB),   KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    TD(DANCE_125),  TD(DANCE_126),  TD(DANCE_127),  TD(DANCE_128),  TD(DANCE_129),  KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_TAB,         KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_DELETE,      KC_H,           KC_J,           KC_K,           KC_L,           KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_SHIFT,  KC_N,           KC_M,           KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_LEFT_CTRL,   KC_LEFT_ALT,    KC_NO,          KC_NO,          KC_ENTER,       KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [9] = LAYOUT_moonlander(
    TD(DANCE_130),  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
  [10] = LAYOUT_moonlander(
    TD(DANCE_131),  KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,                          KC_NO,          KC_NO,          KC_NO
  ),
};
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_6):
            return g_tapping_term + 75;
        case TD(DANCE_12):
            return g_tapping_term + 75;
        case TD(DANCE_19):
            return g_tapping_term + 75;
        case KC_SPACE:
            return g_tapping_term + 75;
        case TD(DANCE_36):
            return g_tapping_term + 50;
        case TD(DANCE_42):
            return g_tapping_term + 50;
        case TD(DANCE_43):
            return g_tapping_term + 50;
        case TD(DANCE_50):
            return g_tapping_term + 50;
        case TD(DANCE_53):
            return g_tapping_term + 50;
        case TD(DANCE_54):
            return g_tapping_term + 50;
        case TD(DANCE_55):
            return g_tapping_term + 50;
        case TD(DANCE_56):
            return g_tapping_term + 50;
        case TD(DANCE_57):
            return g_tapping_term + 50;
        case TD(DANCE_59):
            return g_tapping_term + 110;
        case KC_BSPC:
            return g_tapping_term + 50;
        case TD(DANCE_90):
            return g_tapping_term + 50;
        case TD(DANCE_98):
            return g_tapping_term + 50;
        case LGUI(KC_TAB):
            return g_tapping_term + 75;
        case KC_ENTER:
            return g_tapping_term + 75;
        case TD(DANCE_114):
            return g_tapping_term + 50;
        case TD(DANCE_115):
            return g_tapping_term + 50;
        case KC_TRANSPARENT:
            return g_tapping_term + 125;
        case TD(DANCE_118):
            return g_tapping_term + 75;
        case TD(DANCE_121):
            return g_tapping_term + 75;
        case TD(DANCE_122):
            return g_tapping_term + 75;
        case KC_F6:
            return g_tapping_term + 75;
        case TD(DANCE_125):
            return g_tapping_term + 185;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}


const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {132,255,255}, {132,255,255}, {132,255,255}, {16,255,255}, {16,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {0,255,255}, {194,255,255}, {238,255,255}, {238,255,255}, {238,255,255}, {194,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {82,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {132,255,255}, {132,255,255}, {82,255,255}, {194,255,255}, {37,255,188}, {37,255,188}, {37,255,188}, {37,255,188}, {0,0,255}, {168,255,252}, {37,255,188}, {238,255,255}, {37,255,188}, {0,0,255}, {168,255,252}, {238,255,255}, {238,255,255}, {37,255,188}, {0,0,255}, {194,255,255}, {238,255,255}, {238,255,255}, {37,255,188}, {194,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {0,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {170,255,255}, {170,255,255}, {170,255,255}, {170,255,255} },

    [1] = { {0,0,255}, {132,255,255}, {132,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {238,255,255}, {84,255,255}, {238,255,255}, {16,255,255}, {16,255,255}, {84,255,255}, {84,255,255}, {238,255,255}, {52,255,255}, {16,255,255}, {238,255,255}, {84,255,255}, {238,255,255}, {52,255,255}, {16,255,255}, {238,255,255}, {238,255,255}, {238,255,255}, {132,255,255}, {52,255,255}, {238,255,255}, {238,255,255}, {238,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {84,255,255}, {84,255,255}, {84,255,255}, {0,0,255}, {162,174,207}, {162,174,207}, {0,0,0}, {162,174,207}, {0,255,255}, {162,174,207}, {238,255,255}, {162,174,207}, {162,174,207}, {0,0,0}, {132,255,255}, {238,255,255}, {84,255,255}, {162,174,207}, {132,255,255}, {132,255,255}, {84,255,255}, {84,255,255}, {162,174,207}, {52,255,255}, {132,255,255}, {238,255,255}, {84,255,255}, {84,255,255}, {52,255,255}, {52,255,255}, {238,255,255}, {238,255,255}, {238,255,255}, {52,255,255}, {52,255,255}, {52,255,255}, {132,255,255}, {132,255,255}, {132,255,255}, {132,255,255} },

    [2] = { {0,255,255}, {30,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {0,100,183}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {0,100,183}, {53,255,255}, {53,255,255}, {53,255,255}, {0,0,0}, {231,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {0,100,183}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {0,100,183}, {53,255,255}, {53,255,255}, {53,255,255}, {231,255,255}, {53,255,255}, {53,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {231,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {53,255,255}, {0,100,183}, {113,255,255}, {113,255,255}, {113,255,255}, {53,255,255}, {0,100,183}, {113,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {231,255,255}, {113,255,255}, {113,255,255}, {113,255,255}, {0,0,0}, {0,100,183}, {0,0,0}, {0,0,0}, {0,0,0}, {0,100,183}, {0,0,0}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255} },

    [3] = { {0,0,255}, {162,255,255}, {162,255,255}, {162,255,255}, {53,255,107}, {162,255,255}, {162,255,255}, {162,255,255}, {162,255,255}, {53,255,107}, {162,255,255}, {119,255,154}, {119,255,154}, {0,255,255}, {53,255,107}, {132,255,255}, {119,255,154}, {119,255,154}, {0,255,255}, {53,255,107}, {241,250,125}, {241,250,125}, {241,250,125}, {241,250,125}, {53,255,107}, {122,255,255}, {122,255,255}, {122,255,255}, {122,255,255}, {229,255,255}, {229,255,255}, {229,255,255}, {162,255,255}, {162,255,255}, {162,255,255}, {162,255,255}, {0,255,255}, {119,255,154}, {0,255,255}, {119,255,154}, {119,255,154}, {17,119,255}, {86,255,255}, {17,119,255}, {86,255,255}, {0,0,255}, {4,89,255}, {4,89,255}, {4,89,255}, {162,255,255}, {162,255,255}, {229,255,255}, {229,96,255}, {229,255,255}, {162,255,255}, {162,255,255}, {229,255,255}, {229,96,255}, {229,255,255}, {229,96,255}, {162,255,255}, {229,255,255}, {229,96,255}, {229,255,255}, {229,96,255}, {229,255,255}, {229,255,255}, {86,255,255}, {149,255,255}, {149,255,255}, {149,255,255}, {149,255,255} },

    [4] = { {0,0,255}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {89,255,255}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {89,255,255}, {89,255,255}, {15,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {0,255,255}, {12,155,125}, {12,155,125}, {89,255,115}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {89,255,255}, {12,155,125}, {12,155,125}, {12,155,125}, {12,155,125}, {89,255,255}, {15,255,255}, {89,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {159,255,255} },

    [5] = { {132,255,255}, {132,255,255}, {132,255,255}, {16,255,255}, {16,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {82,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {82,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {132,255,255}, {132,255,255}, {82,255,255}, {82,255,255}, {37,255,188}, {37,255,188}, {37,255,188}, {37,255,188}, {0,0,255}, {168,255,252}, {238,255,255}, {37,255,188}, {37,255,188}, {0,0,255}, {168,255,252}, {238,255,255}, {238,255,255}, {37,255,188}, {82,255,255}, {194,255,255}, {194,255,255}, {194,255,255}, {37,255,188}, {82,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {82,255,255}, {168,255,252}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {170,255,255}, {170,255,255}, {170,255,255}, {170,255,255} },

    [6] = { {132,255,255}, {132,255,255}, {132,255,255}, {16,255,255}, {16,255,255}, {168,255,252}, {16,255,255}, {0,255,255}, {194,255,255}, {16,255,255}, {168,255,252}, {16,255,255}, {0,255,255}, {194,255,255}, {16,255,255}, {194,255,255}, {139,49,103}, {183,202,255}, {139,49,103}, {139,49,103}, {168,255,252}, {139,49,103}, {0,255,255}, {139,49,103}, {82,255,255}, {168,255,252}, {139,49,103}, {139,49,103}, {139,49,103}, {194,255,255}, {0,0,0}, {16,255,255}, {132,255,255}, {132,255,255}, {82,255,255}, {194,255,255}, {37,255,188}, {37,255,188}, {37,255,188}, {37,255,188}, {0,0,0}, {168,255,252}, {37,255,188}, {139,49,103}, {37,255,188}, {0,0,0}, {168,255,252}, {139,49,103}, {139,49,103}, {37,255,188}, {0,255,255}, {194,255,255}, {139,49,103}, {139,49,103}, {37,255,188}, {194,255,255}, {168,255,252}, {139,49,103}, {139,49,103}, {139,49,103}, {0,255,255}, {168,255,252}, {139,49,103}, {139,49,103}, {139,49,103}, {0,0,0}, {37,255,188}, {37,255,188}, {170,255,255}, {170,255,255}, {170,255,255}, {170,255,255} },

    [7] = { {123,255,255}, {123,255,255}, {123,255,255}, {0,255,255}, {0,255,255}, {172,255,255}, {237,221,77}, {237,221,77}, {95,255,255}, {0,255,255}, {172,255,255}, {237,221,77}, {237,221,77}, {95,255,255}, {0,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {15,255,255}, {172,255,255}, {237,221,77}, {237,221,77}, {238,255,255}, {95,255,255}, {172,255,255}, {237,221,77}, {238,255,255}, {237,221,77}, {172,255,255}, {15,255,255}, {15,255,255}, {123,255,255}, {123,255,255}, {95,255,255}, {237,221,77}, {237,221,77}, {237,221,77}, {237,221,77}, {0,0,255}, {0,255,255}, {172,255,255}, {237,221,77}, {237,221,77}, {237,221,77}, {0,255,255}, {172,255,255}, {237,221,77}, {237,221,77}, {237,221,77}, {15,255,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {15,255,255}, {172,255,255}, {238,255,255}, {237,221,77}, {237,221,77}, {15,255,255}, {172,255,255}, {237,221,77}, {237,221,77}, {237,221,77}, {15,255,255}, {15,255,255}, {15,255,255}, {237,221,77}, {95,255,255}, {237,221,77}, {95,255,255} },

    [8] = { {0,0,255}, {132,255,255}, {0,255,255}, {16,255,255}, {16,255,255}, {16,255,255}, {238,255,255}, {238,255,255}, {238,255,255}, {16,255,255}, {16,255,255}, {238,255,255}, {84,255,255}, {84,255,255}, {0,0,0}, {16,255,255}, {84,255,255}, {84,255,255}, {0,0,0}, {0,0,0}, {16,255,255}, {238,255,255}, {84,255,255}, {0,0,0}, {132,255,255}, {0,0,0}, {238,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [9] = { {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );   
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case RGB_SLD:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
        }
        return false;
    case HSV_132_255_255:
        if (rawhid_state.rgb_control) {
            return false;
        }
        if (record->event.pressed) {
            rgblight_mode(1);
            rgblight_sethsv(132,255,255);
        }
        return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[132];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_TILD); break;
        case DOUBLE_TAP: register_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_TILD); break;
        case DOUBLE_TAP: unregister_code16(KC_GRAVE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_EXLM); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_EXLM); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_AT); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_AT); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_HASH); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_HASH); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_DLR); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_DLR); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(tap_dance_state_t *state, void *user_data);
void dance_5_finished(tap_dance_state_t *state, void *user_data);
void dance_5_reset(tap_dance_state_t *state, void *user_data);

void on_dance_5(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_5_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_PERC); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_5_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_PERC); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(tap_dance_state_t *state, void *user_data);
void dance_6_finished(tap_dance_state_t *state, void *user_data);
void dance_6_reset(tap_dance_state_t *state, void *user_data);

void on_dance_6(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F2);
        tap_code16(KC_F2);
        tap_code16(KC_F2);
    }
    if(state->count > 3) {
        tap_code16(KC_F2);
    }
}

void dance_6_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_F2); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_F2); register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F2); register_code16(KC_F2);
    }
}

void dance_6_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_F2); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F2); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(tap_dance_state_t *state, void *user_data);
void dance_7_finished(tap_dance_state_t *state, void *user_data);
void dance_7_reset(tap_dance_state_t *state, void *user_data);

void on_dance_7(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Q);
        tap_code16(KC_Q);
        tap_code16(KC_Q);
    }
    if(state->count > 3) {
        tap_code16(KC_Q);
    }
}

void dance_7_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_Q); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_Q)); break;
        case DOUBLE_TAP: register_code16(KC_Q); register_code16(KC_Q); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Q); register_code16(KC_Q);
    }
}

void dance_7_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_Q); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_Q)); break;
        case DOUBLE_TAP: unregister_code16(KC_Q); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Q); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(tap_dance_state_t *state, void *user_data);
void dance_8_finished(tap_dance_state_t *state, void *user_data);
void dance_8_reset(tap_dance_state_t *state, void *user_data);

void on_dance_8(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_W);
        tap_code16(KC_W);
        tap_code16(KC_W);
    }
    if(state->count > 3) {
        tap_code16(KC_W);
    }
}

void dance_8_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_W); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_W)); break;
        case DOUBLE_TAP: register_code16(KC_W); register_code16(KC_W); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_W); register_code16(KC_W);
    }
}

void dance_8_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_W); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_W)); break;
        case DOUBLE_TAP: unregister_code16(KC_W); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_W); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(tap_dance_state_t *state, void *user_data);
void dance_9_finished(tap_dance_state_t *state, void *user_data);
void dance_9_reset(tap_dance_state_t *state, void *user_data);

void on_dance_9(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F);
        tap_code16(KC_F);
        tap_code16(KC_F);
    }
    if(state->count > 3) {
        tap_code16(KC_F);
    }
}

void dance_9_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_F); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F)); break;
        case DOUBLE_TAP: register_code16(KC_F); register_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F); register_code16(KC_F);
    }
}

void dance_9_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_F); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F)); break;
        case DOUBLE_TAP: unregister_code16(KC_F); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(tap_dance_state_t *state, void *user_data);
void dance_10_finished(tap_dance_state_t *state, void *user_data);
void dance_10_reset(tap_dance_state_t *state, void *user_data);

void on_dance_10(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_P);
        tap_code16(KC_P);
        tap_code16(KC_P);
    }
    if(state->count > 3) {
        tap_code16(KC_P);
    }
}

void dance_10_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_P); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_P)); break;
        case DOUBLE_TAP: register_code16(KC_P); register_code16(KC_P); break;
        case DOUBLE_HOLD: register_code16(KC_PAUSE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_P); register_code16(KC_P);
    }
}

void dance_10_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_P); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_P)); break;
        case DOUBLE_TAP: unregister_code16(KC_P); break;
        case DOUBLE_HOLD: unregister_code16(KC_PAUSE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_P); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(tap_dance_state_t *state, void *user_data);
void dance_11_finished(tap_dance_state_t *state, void *user_data);
void dance_11_reset(tap_dance_state_t *state, void *user_data);

void on_dance_11(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_B);
        tap_code16(KC_B);
        tap_code16(KC_B);
    }
    if(state->count > 3) {
        tap_code16(KC_B);
    }
}

void dance_11_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_B); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_B)); break;
        case DOUBLE_TAP: register_code16(KC_B); register_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_B); register_code16(KC_B);
    }
}

void dance_11_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_B); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_B)); break;
        case DOUBLE_TAP: unregister_code16(KC_B); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_B); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(tap_dance_state_t *state, void *user_data);
void dance_12_finished(tap_dance_state_t *state, void *user_data);
void dance_12_reset(tap_dance_state_t *state, void *user_data);

void on_dance_12(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_12_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(KC_WWW_REFRESH); break;
        case DOUBLE_TAP: register_code16(KC_F5); register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_12_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(KC_WWW_REFRESH); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(tap_dance_state_t *state, void *user_data);
void dance_13_finished(tap_dance_state_t *state, void *user_data);
void dance_13_reset(tap_dance_state_t *state, void *user_data);

void on_dance_13(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_13_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(KC_BSPC); register_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_13_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(tap_dance_state_t *state, void *user_data);
void dance_14_finished(tap_dance_state_t *state, void *user_data);
void dance_14_reset(tap_dance_state_t *state, void *user_data);

void on_dance_14(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_14_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_A)); break;
        case DOUBLE_TAP: register_code16(KC_A); register_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_14_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_A)); break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[14].step = 0;
}
void on_dance_15(tap_dance_state_t *state, void *user_data);
void dance_15_finished(tap_dance_state_t *state, void *user_data);
void dance_15_reset(tap_dance_state_t *state, void *user_data);

void on_dance_15(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_R);
        tap_code16(KC_R);
        tap_code16(KC_R);
    }
    if(state->count > 3) {
        tap_code16(KC_R);
    }
}

void dance_15_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[15].step = dance_step(state);
    switch (dance_state[15].step) {
        case SINGLE_TAP: register_code16(KC_R); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_R)); break;
        case DOUBLE_TAP: register_code16(KC_R); register_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_R); register_code16(KC_R);
    }
}

void dance_15_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[15].step) {
        case SINGLE_TAP: unregister_code16(KC_R); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_R)); break;
        case DOUBLE_TAP: unregister_code16(KC_R); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_R); break;
    }
    dance_state[15].step = 0;
}
void on_dance_16(tap_dance_state_t *state, void *user_data);
void dance_16_finished(tap_dance_state_t *state, void *user_data);
void dance_16_reset(tap_dance_state_t *state, void *user_data);

void on_dance_16(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_S);
        tap_code16(KC_S);
        tap_code16(KC_S);
    }
    if(state->count > 3) {
        tap_code16(KC_S);
    }
}

void dance_16_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[16].step = dance_step(state);
    switch (dance_state[16].step) {
        case SINGLE_TAP: register_code16(KC_S); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_S)); break;
        case DOUBLE_TAP: register_code16(KC_S); register_code16(KC_S); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_S); register_code16(KC_S);
    }
}

void dance_16_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[16].step) {
        case SINGLE_TAP: unregister_code16(KC_S); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_S)); break;
        case DOUBLE_TAP: unregister_code16(KC_S); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_S); break;
    }
    dance_state[16].step = 0;
}
void on_dance_17(tap_dance_state_t *state, void *user_data);
void dance_17_finished(tap_dance_state_t *state, void *user_data);
void dance_17_reset(tap_dance_state_t *state, void *user_data);

void on_dance_17(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_T);
        tap_code16(KC_T);
        tap_code16(KC_T);
    }
    if(state->count > 3) {
        tap_code16(KC_T);
    }
}

void dance_17_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[17].step = dance_step(state);
    switch (dance_state[17].step) {
        case SINGLE_TAP: register_code16(KC_T); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_T)); break;
        case DOUBLE_TAP: register_code16(KC_T); register_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_T); register_code16(KC_T);
    }
}

void dance_17_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[17].step) {
        case SINGLE_TAP: unregister_code16(KC_T); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_T)); break;
        case DOUBLE_TAP: unregister_code16(KC_T); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_T); break;
    }
    dance_state[17].step = 0;
}
void on_dance_18(tap_dance_state_t *state, void *user_data);
void dance_18_finished(tap_dance_state_t *state, void *user_data);
void dance_18_reset(tap_dance_state_t *state, void *user_data);

void on_dance_18(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_G);
        tap_code16(KC_G);
        tap_code16(KC_G);
    }
    if(state->count > 3) {
        tap_code16(KC_G);
    }
}

void dance_18_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[18].step = dance_step(state);
    switch (dance_state[18].step) {
        case SINGLE_TAP: register_code16(KC_G); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_G)); break;
        case DOUBLE_TAP: register_code16(KC_G); register_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_G); register_code16(KC_G);
    }
}

void dance_18_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[18].step) {
        case SINGLE_TAP: unregister_code16(KC_G); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_G)); break;
        case DOUBLE_TAP: unregister_code16(KC_G); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_G); break;
    }
    dance_state[18].step = 0;
}
void on_dance_19(tap_dance_state_t *state, void *user_data);
void dance_19_finished(tap_dance_state_t *state, void *user_data);
void dance_19_reset(tap_dance_state_t *state, void *user_data);

void on_dance_19(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F6);
        tap_code16(KC_F6);
        tap_code16(KC_F6);
    }
    if(state->count > 3) {
        tap_code16(KC_F6);
    }
}

void dance_19_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[19].step = dance_step(state);
    switch (dance_state[19].step) {
        case SINGLE_TAP: register_code16(KC_F6); break;
        case SINGLE_HOLD: register_code16(KC_PSCR); break;
        case DOUBLE_TAP: register_code16(KC_F6); register_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F6); register_code16(KC_F6);
    }
}

void dance_19_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[19].step) {
        case SINGLE_TAP: unregister_code16(KC_F6); break;
        case SINGLE_HOLD: unregister_code16(KC_PSCR); break;
        case DOUBLE_TAP: unregister_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F6); break;
    }
    dance_state[19].step = 0;
}
void on_dance_20(tap_dance_state_t *state, void *user_data);
void dance_20_finished(tap_dance_state_t *state, void *user_data);
void dance_20_reset(tap_dance_state_t *state, void *user_data);

void on_dance_20(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Z);
        tap_code16(KC_Z);
        tap_code16(KC_Z);
    }
    if(state->count > 3) {
        tap_code16(KC_Z);
    }
}

void dance_20_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[20].step = dance_step(state);
    switch (dance_state[20].step) {
        case SINGLE_TAP: register_code16(KC_Z); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_Z)); break;
        case DOUBLE_TAP: register_code16(KC_Z); register_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Z); register_code16(KC_Z);
    }
}

void dance_20_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[20].step) {
        case SINGLE_TAP: unregister_code16(KC_Z); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_Z)); break;
        case DOUBLE_TAP: unregister_code16(KC_Z); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Z); break;
    }
    dance_state[20].step = 0;
}
void on_dance_21(tap_dance_state_t *state, void *user_data);
void dance_21_finished(tap_dance_state_t *state, void *user_data);
void dance_21_reset(tap_dance_state_t *state, void *user_data);

void on_dance_21(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_X);
        tap_code16(KC_X);
        tap_code16(KC_X);
    }
    if(state->count > 3) {
        tap_code16(KC_X);
    }
}

void dance_21_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[21].step = dance_step(state);
    switch (dance_state[21].step) {
        case SINGLE_TAP: register_code16(KC_X); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_X)); break;
        case DOUBLE_TAP: register_code16(KC_X); register_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_X); register_code16(KC_X);
    }
}

void dance_21_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[21].step) {
        case SINGLE_TAP: unregister_code16(KC_X); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_X)); break;
        case DOUBLE_TAP: unregister_code16(KC_X); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_X); break;
    }
    dance_state[21].step = 0;
}
void on_dance_22(tap_dance_state_t *state, void *user_data);
void dance_22_finished(tap_dance_state_t *state, void *user_data);
void dance_22_reset(tap_dance_state_t *state, void *user_data);

void on_dance_22(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_C);
        tap_code16(KC_C);
        tap_code16(KC_C);
    }
    if(state->count > 3) {
        tap_code16(KC_C);
    }
}

void dance_22_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[22].step = dance_step(state);
    switch (dance_state[22].step) {
        case SINGLE_TAP: register_code16(KC_C); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_C)); break;
        case DOUBLE_TAP: register_code16(KC_C); register_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_C); register_code16(KC_C);
    }
}

void dance_22_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[22].step) {
        case SINGLE_TAP: unregister_code16(KC_C); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(KC_C); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_C); break;
    }
    dance_state[22].step = 0;
}
void on_dance_23(tap_dance_state_t *state, void *user_data);
void dance_23_finished(tap_dance_state_t *state, void *user_data);
void dance_23_reset(tap_dance_state_t *state, void *user_data);

void on_dance_23(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_D);
        tap_code16(KC_D);
        tap_code16(KC_D);
    }
    if(state->count > 3) {
        tap_code16(KC_D);
    }
}

void dance_23_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[23].step = dance_step(state);
    switch (dance_state[23].step) {
        case SINGLE_TAP: register_code16(KC_D); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_D)); break;
        case DOUBLE_TAP: register_code16(KC_D); register_code16(KC_D); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_D)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_D); register_code16(KC_D);
    }
}

void dance_23_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[23].step) {
        case SINGLE_TAP: unregister_code16(KC_D); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_D)); break;
        case DOUBLE_TAP: unregister_code16(KC_D); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_D)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_D); break;
    }
    dance_state[23].step = 0;
}
void on_dance_24(tap_dance_state_t *state, void *user_data);
void dance_24_finished(tap_dance_state_t *state, void *user_data);
void dance_24_reset(tap_dance_state_t *state, void *user_data);

void on_dance_24(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_24_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[24].step = dance_step(state);
    switch (dance_state[24].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_V); register_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_24_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[24].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[24].step = 0;
}
void on_dance_25(tap_dance_state_t *state, void *user_data);
void dance_25_finished(tap_dance_state_t *state, void *user_data);
void dance_25_reset(tap_dance_state_t *state, void *user_data);

void on_dance_25(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT_GUI);
        tap_code16(KC_LEFT_GUI);
        tap_code16(KC_LEFT_GUI);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT_GUI);
    }
}

void dance_25_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[25].step = dance_step(state);
    switch (dance_state[25].step) {
        case SINGLE_TAP: register_code16(KC_LEFT_GUI); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: register_code16(LGUI(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT_GUI); register_code16(KC_LEFT_GUI);
    }
}

void dance_25_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[25].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT_GUI); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_GUI); break;
        case DOUBLE_TAP: unregister_code16(LGUI(KC_TAB)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT_GUI); break;
    }
    dance_state[25].step = 0;
}
void on_dance_26(tap_dance_state_t *state, void *user_data);
void dance_26_finished(tap_dance_state_t *state, void *user_data);
void dance_26_reset(tap_dance_state_t *state, void *user_data);

void on_dance_26(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F));
    }
}

void dance_26_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[26].step = dance_step(state);
    switch (dance_state[26].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: register_code16(LALT(KC_G)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_F))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F)); register_code16(LCTL(KC_F));
    }
}

void dance_26_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[26].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_G)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_F))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
    }
    dance_state[26].step = 0;
}
void on_dance_27(tap_dance_state_t *state, void *user_data);
void dance_27_finished(tap_dance_state_t *state, void *user_data);
void dance_27_reset(tap_dance_state_t *state, void *user_data);

void on_dance_27(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_27_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[27].step = dance_step(state);
    switch (dance_state[27].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: register_code16(LALT(KC_C)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_C)); register_code16(LCTL(KC_C)); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_27_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[27].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[27].step = 0;
}
void on_dance_28(tap_dance_state_t *state, void *user_data);
void dance_28_finished(tap_dance_state_t *state, void *user_data);
void dance_28_reset(tap_dance_state_t *state, void *user_data);

void on_dance_28(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_A));
        tap_code16(LCTL(KC_A));
        tap_code16(LCTL(KC_A));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_A));
    }
}

void dance_28_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[28].step = dance_step(state);
    switch (dance_state[28].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_A)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: register_code16(KC_MY_COMPUTER); break;
        case DOUBLE_HOLD: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_A)); register_code16(LCTL(KC_A));
    }
}

void dance_28_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[28].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_A)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: unregister_code16(KC_MY_COMPUTER); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_A)); break;
    }
    dance_state[28].step = 0;
}
void on_dance_29(tap_dance_state_t *state, void *user_data);
void dance_29_finished(tap_dance_state_t *state, void *user_data);
void dance_29_reset(tap_dance_state_t *state, void *user_data);

void on_dance_29(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_V));
    }
}

void dance_29_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[29].step = dance_step(state);
    switch (dance_state[29].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: register_code16(LALT(KC_V)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); register_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_V)); register_code16(LCTL(KC_V));
    }
}

void dance_29_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[29].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
    }
    dance_state[29].step = 0;
}
void on_dance_30(tap_dance_state_t *state, void *user_data);
void dance_30_finished(tap_dance_state_t *state, void *user_data);
void dance_30_reset(tap_dance_state_t *state, void *user_data);

void on_dance_30(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(KC_0));
        tap_code16(LALT(KC_0));
        tap_code16(LALT(KC_0));
    }
    if(state->count > 3) {
        tap_code16(LALT(KC_0));
    }
}

void dance_30_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[30].step = dance_step(state);
    switch (dance_state[30].step) {
        case SINGLE_TAP: register_code16(LALT(KC_0)); break;
        case SINGLE_HOLD: register_code16(KC_INSERT); break;
        case DOUBLE_TAP: register_code16(LALT(KC_0)); register_code16(LALT(KC_0)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(KC_0)); register_code16(LALT(KC_0));
    }
}

void dance_30_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[30].step) {
        case SINGLE_TAP: unregister_code16(LALT(KC_0)); break;
        case SINGLE_HOLD: unregister_code16(KC_INSERT); break;
        case DOUBLE_TAP: unregister_code16(LALT(KC_0)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(KC_0)); break;
    }
    dance_state[30].step = 0;
}
void on_dance_31(tap_dance_state_t *state, void *user_data);
void dance_31_finished(tap_dance_state_t *state, void *user_data);
void dance_31_reset(tap_dance_state_t *state, void *user_data);

void on_dance_31(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_31_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[31].step = dance_step(state);
    switch (dance_state[31].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_CIRC); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_31_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[31].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_CIRC); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[31].step = 0;
}
void on_dance_32(tap_dance_state_t *state, void *user_data);
void dance_32_finished(tap_dance_state_t *state, void *user_data);
void dance_32_reset(tap_dance_state_t *state, void *user_data);

void on_dance_32(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_32_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[32].step = dance_step(state);
    switch (dance_state[32].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_AMPR); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_32_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[32].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_AMPR); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[32].step = 0;
}
void on_dance_33(tap_dance_state_t *state, void *user_data);
void dance_33_finished(tap_dance_state_t *state, void *user_data);
void dance_33_reset(tap_dance_state_t *state, void *user_data);

void on_dance_33(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_33_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[33].step = dance_step(state);
    switch (dance_state[33].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_ASTR); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_33_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[33].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_ASTR); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[33].step = 0;
}
void on_dance_34(tap_dance_state_t *state, void *user_data);
void dance_34_finished(tap_dance_state_t *state, void *user_data);
void dance_34_reset(tap_dance_state_t *state, void *user_data);

void on_dance_34(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_34_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[34].step = dance_step(state);
    switch (dance_state[34].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case SINGLE_HOLD: register_code16(KC_LPRN); break;
        case DOUBLE_TAP: register_code16(KC_9); register_code16(KC_9); break;
        case DOUBLE_HOLD: register_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_34_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[34].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case SINGLE_HOLD: unregister_code16(KC_LPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_HOLD: unregister_code16(KC_F9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[34].step = 0;
}
void on_dance_35(tap_dance_state_t *state, void *user_data);
void dance_35_finished(tap_dance_state_t *state, void *user_data);
void dance_35_reset(tap_dance_state_t *state, void *user_data);

void on_dance_35(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_35_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[35].step = dance_step(state);
    switch (dance_state[35].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case SINGLE_HOLD: register_code16(KC_RPRN); break;
        case DOUBLE_TAP: register_code16(KC_0); register_code16(KC_0); break;
        case DOUBLE_HOLD: register_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_35_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[35].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case SINGLE_HOLD: unregister_code16(KC_RPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_HOLD: unregister_code16(KC_F10); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[35].step = 0;
}
void on_dance_36(tap_dance_state_t *state, void *user_data);
void dance_36_finished(tap_dance_state_t *state, void *user_data);
void dance_36_reset(tap_dance_state_t *state, void *user_data);

void on_dance_36(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
        tap_code16(KC_MINUS);
    }
    if(state->count > 3) {
        tap_code16(KC_MINUS);
    }
}

void dance_36_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[36].step = dance_step(state);
    switch (dance_state[36].step) {
        case SINGLE_TAP: register_code16(KC_MINUS); break;
        case SINGLE_HOLD: register_code16(KC_UNDS); break;
        case DOUBLE_TAP: register_code16(KC_MINUS); register_code16(KC_MINUS); break;
        case DOUBLE_HOLD: register_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MINUS); register_code16(KC_MINUS);
    }
}

void dance_36_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[36].step) {
        case SINGLE_TAP: unregister_code16(KC_MINUS); break;
        case SINGLE_HOLD: unregister_code16(KC_UNDS); break;
        case DOUBLE_TAP: unregister_code16(KC_MINUS); break;
        case DOUBLE_HOLD: unregister_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MINUS); break;
    }
    dance_state[36].step = 0;
}
void on_dance_37(tap_dance_state_t *state, void *user_data);
void dance_37_finished(tap_dance_state_t *state, void *user_data);
void dance_37_reset(tap_dance_state_t *state, void *user_data);

void on_dance_37(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
        tap_code16(KC_AUDIO_VOL_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_37_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[37].step = dance_step(state);
    switch (dance_state[37].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_UP); register_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_UP); register_code16(KC_AUDIO_VOL_UP);
    }
}

void dance_37_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[37].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
        case SINGLE_HOLD: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_UP); break;
    }
    dance_state[37].step = 0;
}
void on_dance_38(tap_dance_state_t *state, void *user_data);
void dance_38_finished(tap_dance_state_t *state, void *user_data);
void dance_38_reset(tap_dance_state_t *state, void *user_data);

void on_dance_38(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_J);
        tap_code16(KC_J);
        tap_code16(KC_J);
    }
    if(state->count > 3) {
        tap_code16(KC_J);
    }
}

void dance_38_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[38].step = dance_step(state);
    switch (dance_state[38].step) {
        case SINGLE_TAP: register_code16(KC_J); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_J)); break;
        case DOUBLE_TAP: register_code16(KC_J); register_code16(KC_J); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_J); register_code16(KC_J);
    }
}

void dance_38_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[38].step) {
        case SINGLE_TAP: unregister_code16(KC_J); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_J)); break;
        case DOUBLE_TAP: unregister_code16(KC_J); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_J); break;
    }
    dance_state[38].step = 0;
}
void on_dance_39(tap_dance_state_t *state, void *user_data);
void dance_39_finished(tap_dance_state_t *state, void *user_data);
void dance_39_reset(tap_dance_state_t *state, void *user_data);

void on_dance_39(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_L);
        tap_code16(KC_L);
        tap_code16(KC_L);
    }
    if(state->count > 3) {
        tap_code16(KC_L);
    }
}

void dance_39_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[39].step = dance_step(state);
    switch (dance_state[39].step) {
        case SINGLE_TAP: register_code16(KC_L); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_L)); break;
        case DOUBLE_TAP: register_code16(KC_L); register_code16(KC_L); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_L); register_code16(KC_L);
    }
}

void dance_39_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[39].step) {
        case SINGLE_TAP: unregister_code16(KC_L); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_L)); break;
        case DOUBLE_TAP: unregister_code16(KC_L); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_L); break;
    }
    dance_state[39].step = 0;
}
void on_dance_40(tap_dance_state_t *state, void *user_data);
void dance_40_finished(tap_dance_state_t *state, void *user_data);
void dance_40_reset(tap_dance_state_t *state, void *user_data);

void on_dance_40(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_U);
        tap_code16(KC_U);
        tap_code16(KC_U);
    }
    if(state->count > 3) {
        tap_code16(KC_U);
    }
}

void dance_40_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[40].step = dance_step(state);
    switch (dance_state[40].step) {
        case SINGLE_TAP: register_code16(KC_U); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_U)); break;
        case DOUBLE_TAP: register_code16(KC_U); register_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_U); register_code16(KC_U);
    }
}

void dance_40_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[40].step) {
        case SINGLE_TAP: unregister_code16(KC_U); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_U)); break;
        case DOUBLE_TAP: unregister_code16(KC_U); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_U); break;
    }
    dance_state[40].step = 0;
}
void on_dance_41(tap_dance_state_t *state, void *user_data);
void dance_41_finished(tap_dance_state_t *state, void *user_data);
void dance_41_reset(tap_dance_state_t *state, void *user_data);

void on_dance_41(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Y);
        tap_code16(KC_Y);
        tap_code16(KC_Y);
    }
    if(state->count > 3) {
        tap_code16(KC_Y);
    }
}

void dance_41_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[41].step = dance_step(state);
    switch (dance_state[41].step) {
        case SINGLE_TAP: register_code16(KC_Y); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_Y)); break;
        case DOUBLE_TAP: register_code16(KC_Y); register_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y);
    }
}

void dance_41_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[41].step) {
        case SINGLE_TAP: unregister_code16(KC_Y); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break;
    }
    dance_state[41].step = 0;
}
void on_dance_42(tap_dance_state_t *state, void *user_data);
void dance_42_finished(tap_dance_state_t *state, void *user_data);
void dance_42_reset(tap_dance_state_t *state, void *user_data);

void on_dance_42(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
        tap_code16(KC_SCLN);
    }
    if(state->count > 3) {
        tap_code16(KC_SCLN);
    }
}

void dance_42_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[42].step = dance_step(state);
    switch (dance_state[42].step) {
        case SINGLE_TAP: register_code16(KC_SCLN); break;
        case SINGLE_HOLD: register_code16(KC_COLN); break;
        case DOUBLE_TAP: register_code16(KC_SCLN); register_code16(KC_SCLN); break;
        case DOUBLE_HOLD: register_code16(KC_LBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SCLN); register_code16(KC_SCLN);
    }
}

void dance_42_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[42].step) {
        case SINGLE_TAP: unregister_code16(KC_SCLN); break;
        case SINGLE_HOLD: unregister_code16(KC_COLN); break;
        case DOUBLE_TAP: unregister_code16(KC_SCLN); break;
        case DOUBLE_HOLD: unregister_code16(KC_LBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SCLN); break;
    }
    dance_state[42].step = 0;
}
void on_dance_43(tap_dance_state_t *state, void *user_data);
void dance_43_finished(tap_dance_state_t *state, void *user_data);
void dance_43_reset(tap_dance_state_t *state, void *user_data);

void on_dance_43(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSLS);
        tap_code16(KC_BSLS);
        tap_code16(KC_BSLS);
    }
    if(state->count > 3) {
        tap_code16(KC_BSLS);
    }
}

void dance_43_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[43].step = dance_step(state);
    switch (dance_state[43].step) {
        case SINGLE_TAP: register_code16(KC_BSLS); break;
        case SINGLE_HOLD: register_code16(KC_PIPE); break;
        case DOUBLE_TAP: register_code16(KC_BSLS); register_code16(KC_BSLS); break;
        case DOUBLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSLS); register_code16(KC_BSLS);
    }
}

void dance_43_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[43].step) {
        case SINGLE_TAP: unregister_code16(KC_BSLS); break;
        case SINGLE_HOLD: unregister_code16(KC_PIPE); break;
        case DOUBLE_TAP: unregister_code16(KC_BSLS); break;
        case DOUBLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSLS); break;
    }
    dance_state[43].step = 0;
}
void on_dance_44(tap_dance_state_t *state, void *user_data);
void dance_44_finished(tap_dance_state_t *state, void *user_data);
void dance_44_reset(tap_dance_state_t *state, void *user_data);

void on_dance_44(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_44_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[44].step = dance_step(state);
    switch (dance_state[44].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_44_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[44].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
    }
    dance_state[44].step = 0;
}
void on_dance_45(tap_dance_state_t *state, void *user_data);
void dance_45_finished(tap_dance_state_t *state, void *user_data);
void dance_45_reset(tap_dance_state_t *state, void *user_data);

void on_dance_45(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_M);
        tap_code16(KC_M);
        tap_code16(KC_M);
    }
    if(state->count > 3) {
        tap_code16(KC_M);
    }
}

void dance_45_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[45].step = dance_step(state);
    switch (dance_state[45].step) {
        case SINGLE_TAP: register_code16(KC_M); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_M)); break;
        case DOUBLE_TAP: register_code16(KC_M); register_code16(KC_M); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_M); register_code16(KC_M);
    }
}

void dance_45_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[45].step) {
        case SINGLE_TAP: unregister_code16(KC_M); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_M)); break;
        case DOUBLE_TAP: unregister_code16(KC_M); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_M); break;
    }
    dance_state[45].step = 0;
}
void on_dance_46(tap_dance_state_t *state, void *user_data);
void dance_46_finished(tap_dance_state_t *state, void *user_data);
void dance_46_reset(tap_dance_state_t *state, void *user_data);

void on_dance_46(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_N);
        tap_code16(KC_N);
        tap_code16(KC_N);
    }
    if(state->count > 3) {
        tap_code16(KC_N);
    }
}

void dance_46_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[46].step = dance_step(state);
    switch (dance_state[46].step) {
        case SINGLE_TAP: register_code16(KC_N); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_N)); break;
        case DOUBLE_TAP: register_code16(KC_N); register_code16(KC_N); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_N); register_code16(KC_N);
    }
}

void dance_46_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[46].step) {
        case SINGLE_TAP: unregister_code16(KC_N); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_N)); break;
        case DOUBLE_TAP: unregister_code16(KC_N); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_N); break;
    }
    dance_state[46].step = 0;
}
void on_dance_47(tap_dance_state_t *state, void *user_data);
void dance_47_finished(tap_dance_state_t *state, void *user_data);
void dance_47_reset(tap_dance_state_t *state, void *user_data);

void on_dance_47(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_E);
        tap_code16(KC_E);
        tap_code16(KC_E);
    }
    if(state->count > 3) {
        tap_code16(KC_E);
    }
}

void dance_47_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[47].step = dance_step(state);
    switch (dance_state[47].step) {
        case SINGLE_TAP: register_code16(KC_E); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_E)); break;
        case DOUBLE_TAP: register_code16(KC_E); register_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_E); register_code16(KC_E);
    }
}

void dance_47_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[47].step) {
        case SINGLE_TAP: unregister_code16(KC_E); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_E)); break;
        case DOUBLE_TAP: unregister_code16(KC_E); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_E); break;
    }
    dance_state[47].step = 0;
}
void on_dance_48(tap_dance_state_t *state, void *user_data);
void dance_48_finished(tap_dance_state_t *state, void *user_data);
void dance_48_reset(tap_dance_state_t *state, void *user_data);

void on_dance_48(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_I);
        tap_code16(KC_I);
        tap_code16(KC_I);
    }
    if(state->count > 3) {
        tap_code16(KC_I);
    }
}

void dance_48_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[48].step = dance_step(state);
    switch (dance_state[48].step) {
        case SINGLE_TAP: register_code16(KC_I); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_I)); break;
        case DOUBLE_TAP: register_code16(KC_I); register_code16(KC_I); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_I); register_code16(KC_I);
    }
}

void dance_48_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[48].step) {
        case SINGLE_TAP: unregister_code16(KC_I); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_I)); break;
        case DOUBLE_TAP: unregister_code16(KC_I); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_I); break;
    }
    dance_state[48].step = 0;
}
void on_dance_49(tap_dance_state_t *state, void *user_data);
void dance_49_finished(tap_dance_state_t *state, void *user_data);
void dance_49_reset(tap_dance_state_t *state, void *user_data);

void on_dance_49(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if(state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_49_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[49].step = dance_step(state);
    switch (dance_state[49].step) {
        case SINGLE_TAP: register_code16(KC_O); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_O)); break;
        case DOUBLE_TAP: register_code16(KC_O); register_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_O); register_code16(KC_O);
    }
}

void dance_49_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[49].step) {
        case SINGLE_TAP: unregister_code16(KC_O); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_O)); break;
        case DOUBLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_O); break;
    }
    dance_state[49].step = 0;
}
void on_dance_50(tap_dance_state_t *state, void *user_data);
void dance_50_finished(tap_dance_state_t *state, void *user_data);
void dance_50_reset(tap_dance_state_t *state, void *user_data);

void on_dance_50(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
    }
    if(state->count > 3) {
        tap_code16(KC_QUOTE);
    }
}

void dance_50_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[50].step = dance_step(state);
    switch (dance_state[50].step) {
        case SINGLE_TAP: register_code16(KC_QUOTE); break;
        case SINGLE_HOLD: register_code16(KC_DQUO); break;
        case DOUBLE_TAP: register_code16(KC_QUOTE); register_code16(KC_QUOTE); break;
        case DOUBLE_HOLD: register_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_QUOTE); register_code16(KC_QUOTE);
    }
}

void dance_50_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[50].step) {
        case SINGLE_TAP: unregister_code16(KC_QUOTE); break;
        case SINGLE_HOLD: unregister_code16(KC_DQUO); break;
        case DOUBLE_TAP: unregister_code16(KC_QUOTE); break;
        case DOUBLE_HOLD: unregister_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_QUOTE); break;
    }
    dance_state[50].step = 0;
}
void on_dance_51(tap_dance_state_t *state, void *user_data);
void dance_51_finished(tap_dance_state_t *state, void *user_data);
void dance_51_reset(tap_dance_state_t *state, void *user_data);

void on_dance_51(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_K);
        tap_code16(KC_K);
        tap_code16(KC_K);
    }
    if(state->count > 3) {
        tap_code16(KC_K);
    }
}

void dance_51_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[51].step = dance_step(state);
    switch (dance_state[51].step) {
        case SINGLE_TAP: register_code16(KC_K); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_K)); break;
        case DOUBLE_TAP: register_code16(KC_K); register_code16(KC_K); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_K); register_code16(KC_K);
    }
}

void dance_51_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[51].step) {
        case SINGLE_TAP: unregister_code16(KC_K); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_K)); break;
        case DOUBLE_TAP: unregister_code16(KC_K); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_K); break;
    }
    dance_state[51].step = 0;
}
void on_dance_52(tap_dance_state_t *state, void *user_data);
void dance_52_finished(tap_dance_state_t *state, void *user_data);
void dance_52_reset(tap_dance_state_t *state, void *user_data);

void on_dance_52(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_H);
        tap_code16(KC_H);
        tap_code16(KC_H);
    }
    if(state->count > 3) {
        tap_code16(KC_H);
    }
}

void dance_52_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[52].step = dance_step(state);
    switch (dance_state[52].step) {
        case SINGLE_TAP: register_code16(KC_H); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_H)); break;
        case DOUBLE_TAP: register_code16(KC_H); register_code16(KC_H); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_H); register_code16(KC_H);
    }
}

void dance_52_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[52].step) {
        case SINGLE_TAP: unregister_code16(KC_H); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_H)); break;
        case DOUBLE_TAP: unregister_code16(KC_H); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_H); break;
    }
    dance_state[52].step = 0;
}
void on_dance_53(tap_dance_state_t *state, void *user_data);
void dance_53_finished(tap_dance_state_t *state, void *user_data);
void dance_53_reset(tap_dance_state_t *state, void *user_data);

void on_dance_53(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_53_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[53].step = dance_step(state);
    switch (dance_state[53].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case SINGLE_HOLD: register_code16(KC_LABK); break;
        case DOUBLE_TAP: register_code16(KC_LBRC); break;
        case DOUBLE_HOLD: register_code16(KC_WWW_BACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_53_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[53].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case SINGLE_HOLD: unregister_code16(KC_LABK); break;
        case DOUBLE_TAP: unregister_code16(KC_LBRC); break;
        case DOUBLE_HOLD: unregister_code16(KC_WWW_BACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[53].step = 0;
}
void on_dance_54(tap_dance_state_t *state, void *user_data);
void dance_54_finished(tap_dance_state_t *state, void *user_data);
void dance_54_reset(tap_dance_state_t *state, void *user_data);

void on_dance_54(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_54_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[54].step = dance_step(state);
    switch (dance_state[54].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(KC_RABK); break;
        case DOUBLE_TAP: register_code16(KC_RBRC); break;
        case DOUBLE_HOLD: register_code16(KC_WWW_FORWARD); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_54_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[54].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(KC_RABK); break;
        case DOUBLE_TAP: unregister_code16(KC_RBRC); break;
        case DOUBLE_HOLD: unregister_code16(KC_WWW_FORWARD); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[54].step = 0;
}
void on_dance_55(tap_dance_state_t *state, void *user_data);
void dance_55_finished(tap_dance_state_t *state, void *user_data);
void dance_55_reset(tap_dance_state_t *state, void *user_data);

void on_dance_55(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
        tap_code16(KC_EQUAL);
    }
    if(state->count > 3) {
        tap_code16(KC_EQUAL);
    }
}

void dance_55_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[55].step = dance_step(state);
    switch (dance_state[55].step) {
        case SINGLE_TAP: register_code16(KC_EQUAL); break;
        case SINGLE_HOLD: register_code16(KC_PLUS); break;
        case DOUBLE_TAP: register_code16(KC_EQUAL); register_code16(KC_EQUAL); break;
        case DOUBLE_HOLD: register_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_EQUAL); register_code16(KC_EQUAL);
    }
}

void dance_55_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[55].step) {
        case SINGLE_TAP: unregister_code16(KC_EQUAL); break;
        case SINGLE_HOLD: unregister_code16(KC_PLUS); break;
        case DOUBLE_TAP: unregister_code16(KC_EQUAL); break;
        case DOUBLE_HOLD: unregister_code16(KC_RBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_EQUAL); break;
    }
    dance_state[55].step = 0;
}
void on_dance_56(tap_dance_state_t *state, void *user_data);
void dance_56_finished(tap_dance_state_t *state, void *user_data);
void dance_56_reset(tap_dance_state_t *state, void *user_data);

void on_dance_56(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
        tap_code16(KC_SLASH);
    }
    if(state->count > 3) {
        tap_code16(KC_SLASH);
    }
}

void dance_56_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[56].step = dance_step(state);
    switch (dance_state[56].step) {
        case SINGLE_TAP: register_code16(KC_SLASH); break;
        case SINGLE_HOLD: register_code16(KC_QUES); break;
        case DOUBLE_TAP: register_code16(KC_SLASH); register_code16(KC_SLASH); break;
        case DOUBLE_HOLD: register_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_SLASH); register_code16(KC_SLASH);
    }
}

void dance_56_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[56].step) {
        case SINGLE_TAP: unregister_code16(KC_SLASH); break;
        case SINGLE_HOLD: unregister_code16(KC_QUES); break;
        case DOUBLE_TAP: unregister_code16(KC_SLASH); break;
        case DOUBLE_HOLD: unregister_code16(KC_RCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_SLASH); break;
    }
    dance_state[56].step = 0;
}
void on_dance_57(tap_dance_state_t *state, void *user_data);
void dance_57_finished(tap_dance_state_t *state, void *user_data);
void dance_57_reset(tap_dance_state_t *state, void *user_data);

void on_dance_57(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Z));
    }
}

void dance_57_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[57].step = dance_step(state);
    switch (dance_state[57].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Z)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z));
    }
}

void dance_57_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[57].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
    }
    dance_state[57].step = 0;
}
void on_dance_58(tap_dance_state_t *state, void *user_data);
void dance_58_finished(tap_dance_state_t *state, void *user_data);
void dance_58_reset(tap_dance_state_t *state, void *user_data);

void on_dance_58(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_Z)));
        tap_code16(LCTL(LSFT(KC_Z)));
        tap_code16(LCTL(LSFT(KC_Z)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_Z)));
    }
}

void dance_58_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[58].step = dance_step(state);
    switch (dance_state[58].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_Z))); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_Z))); register_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_Z))); register_code16(LCTL(LSFT(KC_Z)));
    }
}

void dance_58_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[58].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
    }
    dance_state[58].step = 0;
}
void on_dance_59(tap_dance_state_t *state, void *user_data);
void dance_59_finished(tap_dance_state_t *state, void *user_data);
void dance_59_reset(tap_dance_state_t *state, void *user_data);

void on_dance_59(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_59_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[59].step = dance_step(state);
    switch (dance_state[59].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_59_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[59].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[59].step = 0;
}
void on_dance_60(tap_dance_state_t *state, void *user_data);
void dance_60_finished(tap_dance_state_t *state, void *user_data);
void dance_60_reset(tap_dance_state_t *state, void *user_data);

void on_dance_60(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_60_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[60].step = dance_step(state);
    switch (dance_state[60].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_60_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[60].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[60].step = 0;
}
void on_dance_61(tap_dance_state_t *state, void *user_data);
void dance_61_finished(tap_dance_state_t *state, void *user_data);
void dance_61_reset(tap_dance_state_t *state, void *user_data);

void on_dance_61(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_61_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[61].step = dance_step(state);
    switch (dance_state[61].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_61_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[61].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[61].step = 0;
}
void on_dance_62(tap_dance_state_t *state, void *user_data);
void dance_62_finished(tap_dance_state_t *state, void *user_data);
void dance_62_reset(tap_dance_state_t *state, void *user_data);

void on_dance_62(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_62_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[62].step = dance_step(state);
    switch (dance_state[62].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_62_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[62].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[62].step = 0;
}
void on_dance_63(tap_dance_state_t *state, void *user_data);
void dance_63_finished(tap_dance_state_t *state, void *user_data);
void dance_63_reset(tap_dance_state_t *state, void *user_data);

void on_dance_63(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_63_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[63].step = dance_step(state);
    switch (dance_state[63].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_63_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[63].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[63].step = 0;
}
void on_dance_64(tap_dance_state_t *state, void *user_data);
void dance_64_finished(tap_dance_state_t *state, void *user_data);
void dance_64_reset(tap_dance_state_t *state, void *user_data);

void on_dance_64(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_64_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[64].step = dance_step(state);
    switch (dance_state[64].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_64_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[64].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[64].step = 0;
}
void on_dance_65(tap_dance_state_t *state, void *user_data);
void dance_65_finished(tap_dance_state_t *state, void *user_data);
void dance_65_reset(tap_dance_state_t *state, void *user_data);

void on_dance_65(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_65_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[65].step = dance_step(state);
    switch (dance_state[65].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_65_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[65].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[65].step = 0;
}
void on_dance_66(tap_dance_state_t *state, void *user_data);
void dance_66_finished(tap_dance_state_t *state, void *user_data);
void dance_66_reset(tap_dance_state_t *state, void *user_data);

void on_dance_66(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_66_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[66].step = dance_step(state);
    switch (dance_state[66].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_66_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[66].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[66].step = 0;
}
void on_dance_67(tap_dance_state_t *state, void *user_data);
void dance_67_finished(tap_dance_state_t *state, void *user_data);
void dance_67_reset(tap_dance_state_t *state, void *user_data);

void on_dance_67(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_67_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[67].step = dance_step(state);
    switch (dance_state[67].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_67_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[67].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[67].step = 0;
}
void on_dance_68(tap_dance_state_t *state, void *user_data);
void dance_68_finished(tap_dance_state_t *state, void *user_data);
void dance_68_reset(tap_dance_state_t *state, void *user_data);

void on_dance_68(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_68_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[68].step = dance_step(state);
    switch (dance_state[68].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case SINGLE_HOLD: register_code16(KC_F9); break;
        case DOUBLE_TAP: register_code16(KC_9); register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_68_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[68].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case SINGLE_HOLD: unregister_code16(KC_F9); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[68].step = 0;
}
void on_dance_69(tap_dance_state_t *state, void *user_data);
void dance_69_finished(tap_dance_state_t *state, void *user_data);
void dance_69_reset(tap_dance_state_t *state, void *user_data);

void on_dance_69(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_69_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[69].step = dance_step(state);
    switch (dance_state[69].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case SINGLE_HOLD: register_code16(KC_F10); break;
        case DOUBLE_TAP: register_code16(KC_0); register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_69_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[69].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case SINGLE_HOLD: unregister_code16(KC_F10); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[69].step = 0;
}
void on_dance_70(tap_dance_state_t *state, void *user_data);
void dance_70_finished(tap_dance_state_t *state, void *user_data);
void dance_70_reset(tap_dance_state_t *state, void *user_data);

void on_dance_70(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_70_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[70].step = dance_step(state);
    switch (dance_state[70].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_70_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[70].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[70].step = 0;
}
void on_dance_71(tap_dance_state_t *state, void *user_data);
void dance_71_finished(tap_dance_state_t *state, void *user_data);
void dance_71_reset(tap_dance_state_t *state, void *user_data);

void on_dance_71(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_71_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[71].step = dance_step(state);
    switch (dance_state[71].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_71_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[71].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[71].step = 0;
}
void on_dance_72(tap_dance_state_t *state, void *user_data);
void dance_72_finished(tap_dance_state_t *state, void *user_data);
void dance_72_reset(tap_dance_state_t *state, void *user_data);

void on_dance_72(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F11);
        tap_code16(KC_F11);
        tap_code16(KC_F11);
    }
    if(state->count > 3) {
        tap_code16(KC_F11);
    }
}

void dance_72_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[72].step = dance_step(state);
    switch (dance_state[72].step) {
        case SINGLE_TAP: register_code16(KC_F11); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(KC_F11); register_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F11); register_code16(KC_F11);
    }
}

void dance_72_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[72].step) {
        case SINGLE_TAP: unregister_code16(KC_F11); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(KC_F11); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F11); break;
    }
    dance_state[72].step = 0;
}
void on_dance_73(tap_dance_state_t *state, void *user_data);
void dance_73_finished(tap_dance_state_t *state, void *user_data);
void dance_73_reset(tap_dance_state_t *state, void *user_data);

void on_dance_73(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_73_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[73].step = dance_step(state);
    switch (dance_state[73].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_73_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[73].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[73].step = 0;
}
void on_dance_74(tap_dance_state_t *state, void *user_data);
void dance_74_finished(tap_dance_state_t *state, void *user_data);
void dance_74_reset(tap_dance_state_t *state, void *user_data);

void on_dance_74(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_74_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[74].step = dance_step(state);
    switch (dance_state[74].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_74_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[74].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[74].step = 0;
}
void on_dance_75(tap_dance_state_t *state, void *user_data);
void dance_75_finished(tap_dance_state_t *state, void *user_data);
void dance_75_reset(tap_dance_state_t *state, void *user_data);

void on_dance_75(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
        tap_code16(KC_COMMA);
    }
    if(state->count > 3) {
        tap_code16(KC_COMMA);
    }
}

void dance_75_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[75].step = dance_step(state);
    switch (dance_state[75].step) {
        case SINGLE_TAP: register_code16(KC_COMMA); break;
        case SINGLE_HOLD: register_code16(KC_LABK); break;
        case DOUBLE_TAP: register_code16(KC_COMMA); register_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_COMMA); register_code16(KC_COMMA);
    }
}

void dance_75_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[75].step) {
        case SINGLE_TAP: unregister_code16(KC_COMMA); break;
        case SINGLE_HOLD: unregister_code16(KC_LABK); break;
        case DOUBLE_TAP: unregister_code16(KC_COMMA); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_COMMA); break;
    }
    dance_state[75].step = 0;
}
void on_dance_76(tap_dance_state_t *state, void *user_data);
void dance_76_finished(tap_dance_state_t *state, void *user_data);
void dance_76_reset(tap_dance_state_t *state, void *user_data);

void on_dance_76(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
        tap_code16(KC_DOT);
    }
    if(state->count > 3) {
        tap_code16(KC_DOT);
    }
}

void dance_76_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[76].step = dance_step(state);
    switch (dance_state[76].step) {
        case SINGLE_TAP: register_code16(KC_DOT); break;
        case SINGLE_HOLD: register_code16(KC_RABK); break;
        case DOUBLE_TAP: register_code16(KC_DOT); register_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOT); register_code16(KC_DOT);
    }
}

void dance_76_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[76].step) {
        case SINGLE_TAP: unregister_code16(KC_DOT); break;
        case SINGLE_HOLD: unregister_code16(KC_RABK); break;
        case DOUBLE_TAP: unregister_code16(KC_DOT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOT); break;
    }
    dance_state[76].step = 0;
}
void on_dance_77(tap_dance_state_t *state, void *user_data);
void dance_77_finished(tap_dance_state_t *state, void *user_data);
void dance_77_reset(tap_dance_state_t *state, void *user_data);

void on_dance_77(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_77_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[77].step = dance_step(state);
    switch (dance_state[77].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_77_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[77].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[77].step = 0;
}
void on_dance_78(tap_dance_state_t *state, void *user_data);
void dance_78_finished(tap_dance_state_t *state, void *user_data);
void dance_78_reset(tap_dance_state_t *state, void *user_data);

void on_dance_78(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F1);
        tap_code16(KC_F1);
        tap_code16(KC_F1);
    }
    if(state->count > 3) {
        tap_code16(KC_F1);
    }
}

void dance_78_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[78].step = dance_step(state);
    switch (dance_state[78].step) {
        case SINGLE_TAP: register_code16(KC_F1); break;
        case SINGLE_HOLD: layer_move(1); break;
        case DOUBLE_TAP: layer_move(1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F1); register_code16(KC_F1);
    }
}

void dance_78_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[78].step) {
        case SINGLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F1); break;
    }
    dance_state[78].step = 0;
}
void on_dance_79(tap_dance_state_t *state, void *user_data);
void dance_79_finished(tap_dance_state_t *state, void *user_data);
void dance_79_reset(tap_dance_state_t *state, void *user_data);

void on_dance_79(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F3);
        tap_code16(KC_F3);
        tap_code16(KC_F3);
    }
    if(state->count > 3) {
        tap_code16(KC_F3);
    }
}

void dance_79_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[79].step = dance_step(state);
    switch (dance_state[79].step) {
        case SINGLE_TAP: register_code16(KC_F3); break;
        case SINGLE_HOLD: layer_move(3); break;
        case DOUBLE_TAP: layer_move(3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F3); register_code16(KC_F3);
    }
}

void dance_79_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[79].step) {
        case SINGLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F3); break;
    }
    dance_state[79].step = 0;
}
void on_dance_80(tap_dance_state_t *state, void *user_data);
void dance_80_finished(tap_dance_state_t *state, void *user_data);
void dance_80_reset(tap_dance_state_t *state, void *user_data);

void on_dance_80(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_80_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[80].step = dance_step(state);
    switch (dance_state[80].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case SINGLE_HOLD: layer_move(4); break;
        case DOUBLE_TAP: layer_move(4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_80_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[80].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[80].step = 0;
}
void on_dance_81(tap_dance_state_t *state, void *user_data);
void dance_81_finished(tap_dance_state_t *state, void *user_data);
void dance_81_reset(tap_dance_state_t *state, void *user_data);

void on_dance_81(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_81_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[81].step = dance_step(state);
    switch (dance_state[81].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: layer_move(5); break;
        case DOUBLE_TAP: layer_move(5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_81_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[81].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[81].step = 0;
}
void on_dance_82(tap_dance_state_t *state, void *user_data);
void dance_82_finished(tap_dance_state_t *state, void *user_data);
void dance_82_reset(tap_dance_state_t *state, void *user_data);

void on_dance_82(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F6);
        tap_code16(KC_F6);
        tap_code16(KC_F6);
    }
    if(state->count > 3) {
        tap_code16(KC_F6);
    }
}

void dance_82_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[82].step = dance_step(state);
    switch (dance_state[82].step) {
        case SINGLE_TAP: register_code16(KC_F6); break;
        case SINGLE_HOLD: layer_move(6); break;
        case DOUBLE_TAP: register_code16(KC_F6); register_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F6); register_code16(KC_F6);
    }
}

void dance_82_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[82].step) {
        case SINGLE_TAP: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F6); break;
    }
    dance_state[82].step = 0;
}
void on_dance_83(tap_dance_state_t *state, void *user_data);
void dance_83_finished(tap_dance_state_t *state, void *user_data);
void dance_83_reset(tap_dance_state_t *state, void *user_data);

void on_dance_83(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_83_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[83].step = dance_step(state);
    switch (dance_state[83].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(KC_BSPC); register_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_83_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[83].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[83].step = 0;
}
void on_dance_84(tap_dance_state_t *state, void *user_data);
void dance_84_finished(tap_dance_state_t *state, void *user_data);
void dance_84_reset(tap_dance_state_t *state, void *user_data);

void on_dance_84(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_84_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[84].step = dance_step(state);
    switch (dance_state[84].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: layer_move(1); break;
        case DOUBLE_HOLD: layer_move(2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_84_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[84].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[84].step = 0;
}
void on_dance_85(tap_dance_state_t *state, void *user_data);
void dance_85_finished(tap_dance_state_t *state, void *user_data);
void dance_85_reset(tap_dance_state_t *state, void *user_data);

void on_dance_85(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MS_ACCEL0);
        tap_code16(KC_MS_ACCEL0);
        tap_code16(KC_MS_ACCEL0);
    }
    if(state->count > 3) {
        tap_code16(KC_MS_ACCEL0);
    }
}

void dance_85_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[85].step = dance_step(state);
    switch (dance_state[85].step) {
        case SINGLE_TAP: register_code16(KC_MS_ACCEL0); break;
        case SINGLE_HOLD: register_code16(KC_MS_ACCEL1); break;
        case DOUBLE_TAP: register_code16(KC_MS_ACCEL2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MS_ACCEL0); register_code16(KC_MS_ACCEL0);
    }
}

void dance_85_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[85].step) {
        case SINGLE_TAP: unregister_code16(KC_MS_ACCEL0); break;
        case SINGLE_HOLD: unregister_code16(KC_MS_ACCEL1); break;
        case DOUBLE_TAP: unregister_code16(KC_MS_ACCEL2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MS_ACCEL0); break;
    }
    dance_state[85].step = 0;
}
void on_dance_86(tap_dance_state_t *state, void *user_data);
void dance_86_finished(tap_dance_state_t *state, void *user_data);
void dance_86_reset(tap_dance_state_t *state, void *user_data);

void on_dance_86(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_86_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[86].step = dance_step(state);
    switch (dance_state[86].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_86_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[86].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[86].step = 0;
}
void on_dance_87(tap_dance_state_t *state, void *user_data);
void dance_87_finished(tap_dance_state_t *state, void *user_data);
void dance_87_reset(tap_dance_state_t *state, void *user_data);

void on_dance_87(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_SPACE));
        tap_code16(LCTL(KC_SPACE));
        tap_code16(LCTL(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_SPACE));
    }
}

void dance_87_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[87].step = dance_step(state);
    switch (dance_state[87].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_SPACE)); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_SPACE)); register_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_MINUS)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_SPACE)); register_code16(LCTL(KC_SPACE));
    }
}

void dance_87_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[87].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_MINUS)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_SPACE)); break;
    }
    dance_state[87].step = 0;
}
void on_dance_88(tap_dance_state_t *state, void *user_data);
void dance_88_finished(tap_dance_state_t *state, void *user_data);
void dance_88_reset(tap_dance_state_t *state, void *user_data);

void on_dance_88(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LSFT(KC_SPACE));
        tap_code16(LSFT(KC_SPACE));
        tap_code16(LSFT(KC_SPACE));
    }
    if(state->count > 3) {
        tap_code16(LSFT(KC_SPACE));
    }
}

void dance_88_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[88].step = dance_step(state);
    switch (dance_state[88].step) {
        case SINGLE_TAP: register_code16(LSFT(KC_SPACE)); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: register_code16(LSFT(KC_SPACE)); register_code16(LSFT(KC_SPACE)); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_MINUS)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LSFT(KC_SPACE)); register_code16(LSFT(KC_SPACE));
    }
}

void dance_88_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[88].step) {
        case SINGLE_TAP: unregister_code16(LSFT(KC_SPACE)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_EQUAL))); break;
        case DOUBLE_TAP: unregister_code16(LSFT(KC_SPACE)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_MINUS)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LSFT(KC_SPACE)); break;
    }
    dance_state[88].step = 0;
}
void on_dance_89(tap_dance_state_t *state, void *user_data);
void dance_89_finished(tap_dance_state_t *state, void *user_data);
void dance_89_reset(tap_dance_state_t *state, void *user_data);

void on_dance_89(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_EQUAL)));
        tap_code16(LCTL(LSFT(KC_EQUAL)));
        tap_code16(LCTL(LSFT(KC_EQUAL)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_EQUAL)));
    }
}

void dance_89_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[89].step = dance_step(state);
    switch (dance_state[89].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_EQUAL))); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_MINUS)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_EQUAL))); register_code16(LCTL(LSFT(KC_EQUAL))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_EQUAL))); register_code16(LCTL(LSFT(KC_EQUAL)));
    }
}

void dance_89_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[89].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_EQUAL))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_MINUS)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_EQUAL))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_EQUAL))); break;
    }
    dance_state[89].step = 0;
}
void on_dance_90(tap_dance_state_t *state, void *user_data);
void dance_90_finished(tap_dance_state_t *state, void *user_data);
void dance_90_reset(tap_dance_state_t *state, void *user_data);

void on_dance_90(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_90_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[90].step = dance_step(state);
    switch (dance_state[90].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: register_code16(KC_GRAVE); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_HOLD: layer_move(0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_90_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[90].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: unregister_code16(KC_GRAVE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[90].step = 0;
}
void on_dance_91(tap_dance_state_t *state, void *user_data);
void dance_91_finished(tap_dance_state_t *state, void *user_data);
void dance_91_reset(tap_dance_state_t *state, void *user_data);

void on_dance_91(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_91_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[91].step = dance_step(state);
    switch (dance_state[91].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_91_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[91].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[91].step = 0;
}
void on_dance_92(tap_dance_state_t *state, void *user_data);
void dance_92_finished(tap_dance_state_t *state, void *user_data);
void dance_92_reset(tap_dance_state_t *state, void *user_data);

void on_dance_92(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_1);
        tap_code16(KC_1);
        tap_code16(KC_1);
    }
    if(state->count > 3) {
        tap_code16(KC_1);
    }
}

void dance_92_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[92].step = dance_step(state);
    switch (dance_state[92].step) {
        case SINGLE_TAP: register_code16(KC_1); break;
        case SINGLE_HOLD: register_code16(KC_F1); break;
        case DOUBLE_TAP: register_code16(KC_1); register_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_1); register_code16(KC_1);
    }
}

void dance_92_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[92].step) {
        case SINGLE_TAP: unregister_code16(KC_1); break;
        case SINGLE_HOLD: unregister_code16(KC_F1); break;
        case DOUBLE_TAP: unregister_code16(KC_1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_1); break;
    }
    dance_state[92].step = 0;
}
void on_dance_93(tap_dance_state_t *state, void *user_data);
void dance_93_finished(tap_dance_state_t *state, void *user_data);
void dance_93_reset(tap_dance_state_t *state, void *user_data);

void on_dance_93(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_2);
        tap_code16(KC_2);
        tap_code16(KC_2);
    }
    if(state->count > 3) {
        tap_code16(KC_2);
    }
}

void dance_93_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[93].step = dance_step(state);
    switch (dance_state[93].step) {
        case SINGLE_TAP: register_code16(KC_2); break;
        case SINGLE_HOLD: register_code16(KC_F2); break;
        case DOUBLE_TAP: register_code16(KC_2); register_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_2); register_code16(KC_2);
    }
}

void dance_93_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[93].step) {
        case SINGLE_TAP: unregister_code16(KC_2); break;
        case SINGLE_HOLD: unregister_code16(KC_F2); break;
        case DOUBLE_TAP: unregister_code16(KC_2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_2); break;
    }
    dance_state[93].step = 0;
}
void on_dance_94(tap_dance_state_t *state, void *user_data);
void dance_94_finished(tap_dance_state_t *state, void *user_data);
void dance_94_reset(tap_dance_state_t *state, void *user_data);

void on_dance_94(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_3);
        tap_code16(KC_3);
        tap_code16(KC_3);
    }
    if(state->count > 3) {
        tap_code16(KC_3);
    }
}

void dance_94_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[94].step = dance_step(state);
    switch (dance_state[94].step) {
        case SINGLE_TAP: register_code16(KC_3); break;
        case SINGLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_TAP: register_code16(KC_3); register_code16(KC_3); break;
        case DOUBLE_HOLD: register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_3); register_code16(KC_3);
    }
}

void dance_94_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[94].step) {
        case SINGLE_TAP: unregister_code16(KC_3); break;
        case SINGLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_TAP: unregister_code16(KC_3); break;
        case DOUBLE_HOLD: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_3); break;
    }
    dance_state[94].step = 0;
}
void on_dance_95(tap_dance_state_t *state, void *user_data);
void dance_95_finished(tap_dance_state_t *state, void *user_data);
void dance_95_reset(tap_dance_state_t *state, void *user_data);

void on_dance_95(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_4);
        tap_code16(KC_4);
        tap_code16(KC_4);
    }
    if(state->count > 3) {
        tap_code16(KC_4);
    }
}

void dance_95_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[95].step = dance_step(state);
    switch (dance_state[95].step) {
        case SINGLE_TAP: register_code16(KC_4); break;
        case SINGLE_HOLD: register_code16(KC_F4); break;
        case DOUBLE_TAP: register_code16(KC_4); register_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_4); register_code16(KC_4);
    }
}

void dance_95_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[95].step) {
        case SINGLE_TAP: unregister_code16(KC_4); break;
        case SINGLE_HOLD: unregister_code16(KC_F4); break;
        case DOUBLE_TAP: unregister_code16(KC_4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_4); break;
    }
    dance_state[95].step = 0;
}
void on_dance_96(tap_dance_state_t *state, void *user_data);
void dance_96_finished(tap_dance_state_t *state, void *user_data);
void dance_96_reset(tap_dance_state_t *state, void *user_data);

void on_dance_96(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_96_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[96].step = dance_step(state);
    switch (dance_state[96].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_96_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[96].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[96].step = 0;
}
void on_dance_97(tap_dance_state_t *state, void *user_data);
void dance_97_finished(tap_dance_state_t *state, void *user_data);
void dance_97_reset(tap_dance_state_t *state, void *user_data);

void on_dance_97(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
        tap_code16(LCTL(KC_F));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_F));
    }
}

void dance_97_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[97].step = dance_step(state);
    switch (dance_state[97].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_F)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_F)); register_code16(LCTL(KC_F)); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_F)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_F)); register_code16(LCTL(KC_F));
    }
}

void dance_97_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[97].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_F)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F)); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_F)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_F)); break;
    }
    dance_state[97].step = 0;
}
void on_dance_98(tap_dance_state_t *state, void *user_data);
void dance_98_finished(tap_dance_state_t *state, void *user_data);
void dance_98_reset(tap_dance_state_t *state, void *user_data);

void on_dance_98(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
        tap_code16(KC_BSPC);
    }
    if(state->count > 3) {
        tap_code16(KC_BSPC);
    }
}

void dance_98_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[98].step = dance_step(state);
    switch (dance_state[98].step) {
        case SINGLE_TAP: register_code16(KC_BSPC); break;
        case SINGLE_HOLD: register_code16(KC_DELETE); break;
        case DOUBLE_TAP: register_code16(KC_BSPC); register_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_BSPC); register_code16(KC_BSPC);
    }
}

void dance_98_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[98].step) {
        case SINGLE_TAP: unregister_code16(KC_BSPC); break;
        case SINGLE_HOLD: unregister_code16(KC_DELETE); break;
        case DOUBLE_TAP: unregister_code16(KC_BSPC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_BSPC); break;
    }
    dance_state[98].step = 0;
}
void on_dance_99(tap_dance_state_t *state, void *user_data);
void dance_99_finished(tap_dance_state_t *state, void *user_data);
void dance_99_reset(tap_dance_state_t *state, void *user_data);

void on_dance_99(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_R));
        tap_code16(LCTL(KC_R));
        tap_code16(LCTL(KC_R));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_R));
    }
}

void dance_99_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[99].step = dance_step(state);
    switch (dance_state[99].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_R)); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_R))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_R)); register_code16(LCTL(KC_R)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_R)); register_code16(LCTL(KC_R));
    }
}

void dance_99_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[99].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_R)); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_R))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_R)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_R)); break;
    }
    dance_state[99].step = 0;
}
void on_dance_100(tap_dance_state_t *state, void *user_data);
void dance_100_finished(tap_dance_state_t *state, void *user_data);
void dance_100_reset(tap_dance_state_t *state, void *user_data);

void on_dance_100(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_BSLS));
        tap_code16(LCTL(KC_BSLS));
        tap_code16(LCTL(KC_BSLS));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_BSLS));
    }
}

void dance_100_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[100].step = dance_step(state);
    switch (dance_state[100].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_BSLS)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_BSLS)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_BSLS)); register_code16(LCTL(KC_BSLS)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_BSLS)); register_code16(LCTL(KC_BSLS));
    }
}

void dance_100_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[100].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_BSLS)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_BSLS)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_BSLS)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_BSLS)); break;
    }
    dance_state[100].step = 0;
}
void on_dance_101(tap_dance_state_t *state, void *user_data);
void dance_101_finished(tap_dance_state_t *state, void *user_data);
void dance_101_reset(tap_dance_state_t *state, void *user_data);

void on_dance_101(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_B));
        tap_code16(LCTL(KC_B));
        tap_code16(LCTL(KC_B));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_B));
    }
}

void dance_101_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[101].step = dance_step(state);
    switch (dance_state[101].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_B)); break;
        case SINGLE_HOLD: register_code16(LALT(KC_BSLS)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_B)); register_code16(LCTL(KC_B)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_B)); register_code16(LCTL(KC_B));
    }
}

void dance_101_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[101].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_B)); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_BSLS)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_B)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_B)); break;
    }
    dance_state[101].step = 0;
}
void on_dance_102(tap_dance_state_t *state, void *user_data);
void dance_102_finished(tap_dance_state_t *state, void *user_data);
void dance_102_reset(tap_dance_state_t *state, void *user_data);

void on_dance_102(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Y));
        tap_code16(LCTL(KC_Y));
        tap_code16(LCTL(KC_Y));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Y));
    }
}

void dance_102_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[102].step = dance_step(state);
    switch (dance_state[102].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Y)); break;
        case SINGLE_HOLD: register_code16(LALT(LCTL(KC_Y))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Y)); register_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Y)); register_code16(LCTL(KC_Y));
    }
}

void dance_102_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[102].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Y)); break;
        case SINGLE_HOLD: unregister_code16(LALT(LCTL(KC_Y))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Y)); break;
    }
    dance_state[102].step = 0;
}
void on_dance_103(tap_dance_state_t *state, void *user_data);
void dance_103_finished(tap_dance_state_t *state, void *user_data);
void dance_103_reset(tap_dance_state_t *state, void *user_data);

void on_dance_103(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_Y);
        tap_code16(KC_Y);
        tap_code16(KC_Y);
    }
    if(state->count > 3) {
        tap_code16(KC_Y);
    }
}

void dance_103_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[103].step = dance_step(state);
    switch (dance_state[103].step) {
        case SINGLE_TAP: register_code16(KC_Y); break;
        case SINGLE_HOLD: register_code16(LALT(KC_Y)); break;
        case DOUBLE_TAP: register_code16(KC_Y); register_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_Y); register_code16(KC_Y);
    }
}

void dance_103_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[103].step) {
        case SINGLE_TAP: unregister_code16(KC_Y); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(KC_Y); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_Y); break;
    }
    dance_state[103].step = 0;
}
void on_dance_104(tap_dance_state_t *state, void *user_data);
void dance_104_finished(tap_dance_state_t *state, void *user_data);
void dance_104_reset(tap_dance_state_t *state, void *user_data);

void on_dance_104(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_104_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[104].step = dance_step(state);
    switch (dance_state[104].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_V); register_code16(KC_V); break;
        case DOUBLE_HOLD: register_code16(LALT(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_104_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[104].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_HOLD: unregister_code16(LALT(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[104].step = 0;
}
void on_dance_105(tap_dance_state_t *state, void *user_data);
void dance_105_finished(tap_dance_state_t *state, void *user_data);
void dance_105_reset(tap_dance_state_t *state, void *user_data);

void on_dance_105(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_A);
        tap_code16(KC_A);
        tap_code16(KC_A);
    }
    if(state->count > 3) {
        tap_code16(KC_A);
    }
}

void dance_105_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[105].step = dance_step(state);
    switch (dance_state[105].step) {
        case SINGLE_TAP: register_code16(KC_A); break;
        case SINGLE_HOLD: register_code16(KC_HOME); break;
        case DOUBLE_TAP: register_code16(KC_A); register_code16(KC_A); break;
        case DOUBLE_HOLD: register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_A); register_code16(KC_A);
    }
}

void dance_105_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[105].step) {
        case SINGLE_TAP: unregister_code16(KC_A); break;
        case SINGLE_HOLD: unregister_code16(KC_HOME); break;
        case DOUBLE_TAP: unregister_code16(KC_A); break;
        case DOUBLE_HOLD: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_A); break;
    }
    dance_state[105].step = 0;
}
void on_dance_106(tap_dance_state_t *state, void *user_data);
void dance_106_finished(tap_dance_state_t *state, void *user_data);
void dance_106_reset(tap_dance_state_t *state, void *user_data);

void on_dance_106(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
        tap_code16(LCTL(KC_C));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_C));
    }
}

void dance_106_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[106].step = dance_step(state);
    switch (dance_state[106].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_C)); register_code16(LCTL(KC_C)); break;
        case DOUBLE_HOLD: register_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_C)); register_code16(LCTL(KC_C));
    }
}

void dance_106_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[106].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_C)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(KC_X)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_C)); break;
    }
    dance_state[106].step = 0;
}
void on_dance_107(tap_dance_state_t *state, void *user_data);
void dance_107_finished(tap_dance_state_t *state, void *user_data);
void dance_107_reset(tap_dance_state_t *state, void *user_data);

void on_dance_107(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_A));
        tap_code16(LCTL(KC_A));
        tap_code16(LCTL(KC_A));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_A));
    }
}

void dance_107_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[107].step = dance_step(state);
    switch (dance_state[107].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_A)); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_A)); register_code16(LCTL(KC_A)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_A)); register_code16(LCTL(KC_A));
    }
}

void dance_107_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[107].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_A)); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_S)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_A)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_A)); break;
    }
    dance_state[107].step = 0;
}
void on_dance_108(tap_dance_state_t *state, void *user_data);
void dance_108_finished(tap_dance_state_t *state, void *user_data);
void dance_108_reset(tap_dance_state_t *state, void *user_data);

void on_dance_108(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
        tap_code16(LCTL(KC_V));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_V));
    }
}

void dance_108_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[108].step = dance_step(state);
    switch (dance_state[108].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: register_code16(LALT(KC_V)); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_V)); register_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_V)); register_code16(LCTL(KC_V));
    }
}

void dance_108_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[108].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case SINGLE_HOLD: unregister_code16(LALT(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_V)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_V)); break;
    }
    dance_state[108].step = 0;
}
void on_dance_109(tap_dance_state_t *state, void *user_data);
void dance_109_finished(tap_dance_state_t *state, void *user_data);
void dance_109_reset(tap_dance_state_t *state, void *user_data);

void on_dance_109(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_109_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[109].step = dance_step(state);
    switch (dance_state[109].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_109_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[109].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[109].step = 0;
}
void on_dance_110(tap_dance_state_t *state, void *user_data);
void dance_110_finished(tap_dance_state_t *state, void *user_data);
void dance_110_reset(tap_dance_state_t *state, void *user_data);

void on_dance_110(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_110_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[110].step = dance_step(state);
    switch (dance_state[110].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_110_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[110].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[110].step = 0;
}
void on_dance_111(tap_dance_state_t *state, void *user_data);
void dance_111_finished(tap_dance_state_t *state, void *user_data);
void dance_111_reset(tap_dance_state_t *state, void *user_data);

void on_dance_111(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_111_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[111].step = dance_step(state);
    switch (dance_state[111].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_111_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[111].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[111].step = 0;
}
void on_dance_112(tap_dance_state_t *state, void *user_data);
void dance_112_finished(tap_dance_state_t *state, void *user_data);
void dance_112_reset(tap_dance_state_t *state, void *user_data);

void on_dance_112(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_9);
        tap_code16(KC_9);
        tap_code16(KC_9);
    }
    if(state->count > 3) {
        tap_code16(KC_9);
    }
}

void dance_112_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[112].step = dance_step(state);
    switch (dance_state[112].step) {
        case SINGLE_TAP: register_code16(KC_9); break;
        case SINGLE_HOLD: register_code16(KC_F9); break;
        case DOUBLE_TAP: register_code16(KC_9); register_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_9); register_code16(KC_9);
    }
}

void dance_112_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[112].step) {
        case SINGLE_TAP: unregister_code16(KC_9); break;
        case SINGLE_HOLD: unregister_code16(KC_F9); break;
        case DOUBLE_TAP: unregister_code16(KC_9); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_9); break;
    }
    dance_state[112].step = 0;
}
void on_dance_113(tap_dance_state_t *state, void *user_data);
void dance_113_finished(tap_dance_state_t *state, void *user_data);
void dance_113_reset(tap_dance_state_t *state, void *user_data);

void on_dance_113(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_0);
        tap_code16(KC_0);
        tap_code16(KC_0);
    }
    if(state->count > 3) {
        tap_code16(KC_0);
    }
}

void dance_113_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[113].step = dance_step(state);
    switch (dance_state[113].step) {
        case SINGLE_TAP: register_code16(KC_0); break;
        case SINGLE_HOLD: register_code16(KC_F10); break;
        case DOUBLE_TAP: register_code16(KC_0); register_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_0); register_code16(KC_0);
    }
}

void dance_113_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[113].step) {
        case SINGLE_TAP: unregister_code16(KC_0); break;
        case SINGLE_HOLD: unregister_code16(KC_F10); break;
        case DOUBLE_TAP: unregister_code16(KC_0); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_0); break;
    }
    dance_state[113].step = 0;
}
void on_dance_114(tap_dance_state_t *state, void *user_data);
void dance_114_finished(tap_dance_state_t *state, void *user_data);
void dance_114_reset(tap_dance_state_t *state, void *user_data);

void on_dance_114(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
        tap_code16(KC_QUOTE);
    }
    if(state->count > 3) {
        tap_code16(KC_QUOTE);
    }
}

void dance_114_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[114].step = dance_step(state);
    switch (dance_state[114].step) {
        case SINGLE_TAP: register_code16(KC_QUOTE); break;
        case SINGLE_HOLD: register_code16(KC_DQUO); break;
        case DOUBLE_TAP: register_code16(KC_QUOTE); register_code16(KC_QUOTE); break;
        case DOUBLE_HOLD: register_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_QUOTE); register_code16(KC_QUOTE);
    }
}

void dance_114_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[114].step) {
        case SINGLE_TAP: unregister_code16(KC_QUOTE); break;
        case SINGLE_HOLD: unregister_code16(KC_DQUO); break;
        case DOUBLE_TAP: unregister_code16(KC_QUOTE); break;
        case DOUBLE_HOLD: unregister_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_QUOTE); break;
    }
    dance_state[114].step = 0;
}
void on_dance_115(tap_dance_state_t *state, void *user_data);
void dance_115_finished(tap_dance_state_t *state, void *user_data);
void dance_115_reset(tap_dance_state_t *state, void *user_data);

void on_dance_115(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
        tap_code16(LCTL(KC_Z));
    }
    if(state->count > 3) {
        tap_code16(LCTL(KC_Z));
    }
}

void dance_115_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[115].step = dance_step(state);
    switch (dance_state[115].step) {
        case SINGLE_TAP: register_code16(LCTL(KC_Z)); break;
        case SINGLE_HOLD: register_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z)); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(KC_Z)); register_code16(LCTL(KC_Z));
    }
}

void dance_115_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[115].step) {
        case SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case SINGLE_HOLD: unregister_code16(KC_LEFT_ALT); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_Z)); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_T))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(KC_Z)); break;
    }
    dance_state[115].step = 0;
}
void on_dance_116(tap_dance_state_t *state, void *user_data);
void dance_116_finished(tap_dance_state_t *state, void *user_data);
void dance_116_reset(tap_dance_state_t *state, void *user_data);

void on_dance_116(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LCTL(LSFT(KC_Z)));
        tap_code16(LCTL(LSFT(KC_Z)));
        tap_code16(LCTL(LSFT(KC_Z)));
    }
    if(state->count > 3) {
        tap_code16(LCTL(LSFT(KC_Z)));
    }
}

void dance_116_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[116].step = dance_step(state);
    switch (dance_state[116].step) {
        case SINGLE_TAP: register_code16(LCTL(LSFT(KC_Z))); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: register_code16(LCTL(LSFT(KC_Z))); register_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LCTL(LSFT(KC_Z))); register_code16(LCTL(LSFT(KC_Z)));
    }
}

void dance_116_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[116].step) {
        case SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_Y)); break;
        case DOUBLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LCTL(LSFT(KC_Z))); break;
    }
    dance_state[116].step = 0;
}
void on_dance_117(tap_dance_state_t *state, void *user_data);
void dance_117_finished(tap_dance_state_t *state, void *user_data);
void dance_117_reset(tap_dance_state_t *state, void *user_data);

void on_dance_117(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F1);
        tap_code16(KC_F1);
        tap_code16(KC_F1);
    }
    if(state->count > 3) {
        tap_code16(KC_F1);
    }
}

void dance_117_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[117].step = dance_step(state);
    switch (dance_state[117].step) {
        case SINGLE_TAP: register_code16(KC_F1); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_F1); register_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F1); register_code16(KC_F1);
    }
}

void dance_117_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[117].step) {
        case SINGLE_TAP: unregister_code16(KC_F1); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_F1); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F1); break;
    }
    dance_state[117].step = 0;
}
void on_dance_118(tap_dance_state_t *state, void *user_data);
void dance_118_finished(tap_dance_state_t *state, void *user_data);
void dance_118_reset(tap_dance_state_t *state, void *user_data);

void on_dance_118(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F2);
        tap_code16(KC_F2);
        tap_code16(KC_F2);
    }
    if(state->count > 3) {
        tap_code16(KC_F2);
    }
}

void dance_118_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[118].step = dance_step(state);
    switch (dance_state[118].step) {
        case SINGLE_TAP: register_code16(KC_F2); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_F2); register_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F2); register_code16(KC_F2);
    }
}

void dance_118_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[118].step) {
        case SINGLE_TAP: unregister_code16(KC_F2); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_F2); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F2); break;
    }
    dance_state[118].step = 0;
}
void on_dance_119(tap_dance_state_t *state, void *user_data);
void dance_119_finished(tap_dance_state_t *state, void *user_data);
void dance_119_reset(tap_dance_state_t *state, void *user_data);

void on_dance_119(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F3);
        tap_code16(KC_F3);
        tap_code16(KC_F3);
    }
    if(state->count > 3) {
        tap_code16(KC_F3);
    }
}

void dance_119_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[119].step = dance_step(state);
    switch (dance_state[119].step) {
        case SINGLE_TAP: register_code16(KC_F3); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_F3); register_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F3); register_code16(KC_F3);
    }
}

void dance_119_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[119].step) {
        case SINGLE_TAP: unregister_code16(KC_F3); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_F3); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F3); break;
    }
    dance_state[119].step = 0;
}
void on_dance_120(tap_dance_state_t *state, void *user_data);
void dance_120_finished(tap_dance_state_t *state, void *user_data);
void dance_120_reset(tap_dance_state_t *state, void *user_data);

void on_dance_120(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F4);
        tap_code16(KC_F4);
        tap_code16(KC_F4);
    }
    if(state->count > 3) {
        tap_code16(KC_F4);
    }
}

void dance_120_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[120].step = dance_step(state);
    switch (dance_state[120].step) {
        case SINGLE_TAP: register_code16(KC_F4); break;
        case SINGLE_HOLD: register_code16(KC_F9); break;
        case DOUBLE_TAP: register_code16(KC_F4); register_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F4); register_code16(KC_F4);
    }
}

void dance_120_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[120].step) {
        case SINGLE_TAP: unregister_code16(KC_F4); break;
        case SINGLE_HOLD: unregister_code16(KC_F9); break;
        case DOUBLE_TAP: unregister_code16(KC_F4); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F4); break;
    }
    dance_state[120].step = 0;
}
void on_dance_121(tap_dance_state_t *state, void *user_data);
void dance_121_finished(tap_dance_state_t *state, void *user_data);
void dance_121_reset(tap_dance_state_t *state, void *user_data);

void on_dance_121(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_121_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[121].step = dance_step(state);
    switch (dance_state[121].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(KC_F10); break;
        case DOUBLE_TAP: register_code16(KC_F5); register_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_121_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[121].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(KC_F10); break;
        case DOUBLE_TAP: unregister_code16(KC_F5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[121].step = 0;
}
void on_dance_122(tap_dance_state_t *state, void *user_data);
void dance_122_finished(tap_dance_state_t *state, void *user_data);
void dance_122_reset(tap_dance_state_t *state, void *user_data);

void on_dance_122(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F6);
        tap_code16(KC_F6);
        tap_code16(KC_F6);
    }
    if(state->count > 3) {
        tap_code16(KC_F6);
    }
}

void dance_122_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[122].step = dance_step(state);
    switch (dance_state[122].step) {
        case SINGLE_TAP: register_code16(KC_F6); break;
        case SINGLE_HOLD: register_code16(KC_F12); break;
        case DOUBLE_TAP: register_code16(KC_F6); register_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F6); register_code16(KC_F6);
    }
}

void dance_122_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[122].step) {
        case SINGLE_TAP: unregister_code16(KC_F6); break;
        case SINGLE_HOLD: unregister_code16(KC_F12); break;
        case DOUBLE_TAP: unregister_code16(KC_F6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F6); break;
    }
    dance_state[122].step = 0;
}
void on_dance_123(tap_dance_state_t *state, void *user_data);
void dance_123_finished(tap_dance_state_t *state, void *user_data);
void dance_123_reset(tap_dance_state_t *state, void *user_data);

void on_dance_123(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_123_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[123].step = dance_step(state);
    switch (dance_state[123].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case DOUBLE_TAP: register_code16(KC_END); register_code16(KC_END); break;
        case DOUBLE_HOLD: register_code16(KC_INSERT); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_123_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[123].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_HOLD: unregister_code16(KC_INSERT); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[123].step = 0;
}
void on_dance_124(tap_dance_state_t *state, void *user_data);
void dance_124_finished(tap_dance_state_t *state, void *user_data);
void dance_124_reset(tap_dance_state_t *state, void *user_data);

void on_dance_124(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(LALT(LSFT(KC_D)));
        tap_code16(LALT(LSFT(KC_D)));
        tap_code16(LALT(LSFT(KC_D)));
    }
    if(state->count > 3) {
        tap_code16(LALT(LSFT(KC_D)));
    }
}

void dance_124_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[124].step = dance_step(state);
    switch (dance_state[124].step) {
        case SINGLE_TAP: register_code16(LALT(LSFT(KC_D))); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_D)); break;
        case DOUBLE_TAP: register_code16(LALT(LSFT(KC_D))); register_code16(LALT(LSFT(KC_D))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(LALT(LSFT(KC_D))); register_code16(LALT(LSFT(KC_D)));
    }
}

void dance_124_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[124].step) {
        case SINGLE_TAP: unregister_code16(LALT(LSFT(KC_D))); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_D)); break;
        case DOUBLE_TAP: unregister_code16(LALT(LSFT(KC_D))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(LALT(LSFT(KC_D))); break;
    }
    dance_state[124].step = 0;
}
void on_dance_125(tap_dance_state_t *state, void *user_data);
void dance_125_finished(tap_dance_state_t *state, void *user_data);
void dance_125_reset(tap_dance_state_t *state, void *user_data);

void on_dance_125(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_125_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[125].step = dance_step(state);
    switch (dance_state[125].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_125_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[125].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[125].step = 0;
}
void on_dance_126(tap_dance_state_t *state, void *user_data);
void dance_126_finished(tap_dance_state_t *state, void *user_data);
void dance_126_reset(tap_dance_state_t *state, void *user_data);

void on_dance_126(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_5);
        tap_code16(KC_5);
        tap_code16(KC_5);
    }
    if(state->count > 3) {
        tap_code16(KC_5);
    }
}

void dance_126_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[126].step = dance_step(state);
    switch (dance_state[126].step) {
        case SINGLE_TAP: register_code16(KC_5); break;
        case SINGLE_HOLD: register_code16(KC_F5); break;
        case DOUBLE_TAP: register_code16(KC_5); register_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_5); register_code16(KC_5);
    }
}

void dance_126_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[126].step) {
        case SINGLE_TAP: unregister_code16(KC_5); break;
        case SINGLE_HOLD: unregister_code16(KC_F5); break;
        case DOUBLE_TAP: unregister_code16(KC_5); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_5); break;
    }
    dance_state[126].step = 0;
}
void on_dance_127(tap_dance_state_t *state, void *user_data);
void dance_127_finished(tap_dance_state_t *state, void *user_data);
void dance_127_reset(tap_dance_state_t *state, void *user_data);

void on_dance_127(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_6);
        tap_code16(KC_6);
        tap_code16(KC_6);
    }
    if(state->count > 3) {
        tap_code16(KC_6);
    }
}

void dance_127_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[127].step = dance_step(state);
    switch (dance_state[127].step) {
        case SINGLE_TAP: register_code16(KC_6); break;
        case SINGLE_HOLD: register_code16(KC_F6); break;
        case DOUBLE_TAP: register_code16(KC_6); register_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_6); register_code16(KC_6);
    }
}

void dance_127_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[127].step) {
        case SINGLE_TAP: unregister_code16(KC_6); break;
        case SINGLE_HOLD: unregister_code16(KC_F6); break;
        case DOUBLE_TAP: unregister_code16(KC_6); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_6); break;
    }
    dance_state[127].step = 0;
}
void on_dance_128(tap_dance_state_t *state, void *user_data);
void dance_128_finished(tap_dance_state_t *state, void *user_data);
void dance_128_reset(tap_dance_state_t *state, void *user_data);

void on_dance_128(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_7);
        tap_code16(KC_7);
        tap_code16(KC_7);
    }
    if(state->count > 3) {
        tap_code16(KC_7);
    }
}

void dance_128_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[128].step = dance_step(state);
    switch (dance_state[128].step) {
        case SINGLE_TAP: register_code16(KC_7); break;
        case SINGLE_HOLD: register_code16(KC_F7); break;
        case DOUBLE_TAP: register_code16(KC_7); register_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_7); register_code16(KC_7);
    }
}

void dance_128_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[128].step) {
        case SINGLE_TAP: unregister_code16(KC_7); break;
        case SINGLE_HOLD: unregister_code16(KC_F7); break;
        case DOUBLE_TAP: unregister_code16(KC_7); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_7); break;
    }
    dance_state[128].step = 0;
}
void on_dance_129(tap_dance_state_t *state, void *user_data);
void dance_129_finished(tap_dance_state_t *state, void *user_data);
void dance_129_reset(tap_dance_state_t *state, void *user_data);

void on_dance_129(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_8);
        tap_code16(KC_8);
        tap_code16(KC_8);
    }
    if(state->count > 3) {
        tap_code16(KC_8);
    }
}

void dance_129_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[129].step = dance_step(state);
    switch (dance_state[129].step) {
        case SINGLE_TAP: register_code16(KC_8); break;
        case SINGLE_HOLD: register_code16(KC_F8); break;
        case DOUBLE_TAP: register_code16(KC_8); register_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_8); register_code16(KC_8);
    }
}

void dance_129_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[129].step) {
        case SINGLE_TAP: unregister_code16(KC_8); break;
        case SINGLE_HOLD: unregister_code16(KC_F8); break;
        case DOUBLE_TAP: unregister_code16(KC_8); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_8); break;
    }
    dance_state[129].step = 0;
}
void on_dance_130(tap_dance_state_t *state, void *user_data);
void dance_130_finished(tap_dance_state_t *state, void *user_data);
void dance_130_reset(tap_dance_state_t *state, void *user_data);

void on_dance_130(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_130_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[130].step = dance_step(state);
    switch (dance_state[130].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_130_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[130].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[130].step = 0;
}
void on_dance_131(tap_dance_state_t *state, void *user_data);
void dance_131_finished(tap_dance_state_t *state, void *user_data);
void dance_131_reset(tap_dance_state_t *state, void *user_data);

void on_dance_131(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
        tap_code16(KC_ESCAPE);
    }
    if(state->count > 3) {
        tap_code16(KC_ESCAPE);
    }
}

void dance_131_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[131].step = dance_step(state);
    switch (dance_state[131].step) {
        case SINGLE_TAP: register_code16(KC_ESCAPE); break;
        case SINGLE_HOLD: layer_move(0); break;
        case DOUBLE_TAP: register_code16(KC_ESCAPE); register_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_ESCAPE); register_code16(KC_ESCAPE);
    }
}

void dance_131_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[131].step) {
        case SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_TAP: unregister_code16(KC_ESCAPE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_ESCAPE); break;
    }
    dance_state[131].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
        [DANCE_15] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_15, dance_15_finished, dance_15_reset),
        [DANCE_16] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_16, dance_16_finished, dance_16_reset),
        [DANCE_17] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_17, dance_17_finished, dance_17_reset),
        [DANCE_18] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_18, dance_18_finished, dance_18_reset),
        [DANCE_19] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_19, dance_19_finished, dance_19_reset),
        [DANCE_20] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_20, dance_20_finished, dance_20_reset),
        [DANCE_21] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_21, dance_21_finished, dance_21_reset),
        [DANCE_22] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_22, dance_22_finished, dance_22_reset),
        [DANCE_23] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_23, dance_23_finished, dance_23_reset),
        [DANCE_24] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_24, dance_24_finished, dance_24_reset),
        [DANCE_25] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_25, dance_25_finished, dance_25_reset),
        [DANCE_26] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_26, dance_26_finished, dance_26_reset),
        [DANCE_27] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_27, dance_27_finished, dance_27_reset),
        [DANCE_28] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_28, dance_28_finished, dance_28_reset),
        [DANCE_29] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_29, dance_29_finished, dance_29_reset),
        [DANCE_30] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_30, dance_30_finished, dance_30_reset),
        [DANCE_31] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_31, dance_31_finished, dance_31_reset),
        [DANCE_32] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_32, dance_32_finished, dance_32_reset),
        [DANCE_33] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_33, dance_33_finished, dance_33_reset),
        [DANCE_34] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_34, dance_34_finished, dance_34_reset),
        [DANCE_35] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_35, dance_35_finished, dance_35_reset),
        [DANCE_36] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_36, dance_36_finished, dance_36_reset),
        [DANCE_37] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_37, dance_37_finished, dance_37_reset),
        [DANCE_38] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_38, dance_38_finished, dance_38_reset),
        [DANCE_39] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_39, dance_39_finished, dance_39_reset),
        [DANCE_40] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_40, dance_40_finished, dance_40_reset),
        [DANCE_41] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_41, dance_41_finished, dance_41_reset),
        [DANCE_42] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_42, dance_42_finished, dance_42_reset),
        [DANCE_43] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_43, dance_43_finished, dance_43_reset),
        [DANCE_44] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_44, dance_44_finished, dance_44_reset),
        [DANCE_45] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_45, dance_45_finished, dance_45_reset),
        [DANCE_46] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_46, dance_46_finished, dance_46_reset),
        [DANCE_47] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_47, dance_47_finished, dance_47_reset),
        [DANCE_48] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_48, dance_48_finished, dance_48_reset),
        [DANCE_49] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_49, dance_49_finished, dance_49_reset),
        [DANCE_50] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_50, dance_50_finished, dance_50_reset),
        [DANCE_51] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_51, dance_51_finished, dance_51_reset),
        [DANCE_52] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_52, dance_52_finished, dance_52_reset),
        [DANCE_53] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_53, dance_53_finished, dance_53_reset),
        [DANCE_54] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_54, dance_54_finished, dance_54_reset),
        [DANCE_55] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_55, dance_55_finished, dance_55_reset),
        [DANCE_56] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_56, dance_56_finished, dance_56_reset),
        [DANCE_57] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_57, dance_57_finished, dance_57_reset),
        [DANCE_58] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_58, dance_58_finished, dance_58_reset),
        [DANCE_59] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_59, dance_59_finished, dance_59_reset),
        [DANCE_60] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_60, dance_60_finished, dance_60_reset),
        [DANCE_61] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_61, dance_61_finished, dance_61_reset),
        [DANCE_62] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_62, dance_62_finished, dance_62_reset),
        [DANCE_63] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_63, dance_63_finished, dance_63_reset),
        [DANCE_64] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_64, dance_64_finished, dance_64_reset),
        [DANCE_65] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_65, dance_65_finished, dance_65_reset),
        [DANCE_66] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_66, dance_66_finished, dance_66_reset),
        [DANCE_67] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_67, dance_67_finished, dance_67_reset),
        [DANCE_68] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_68, dance_68_finished, dance_68_reset),
        [DANCE_69] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_69, dance_69_finished, dance_69_reset),
        [DANCE_70] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_70, dance_70_finished, dance_70_reset),
        [DANCE_71] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_71, dance_71_finished, dance_71_reset),
        [DANCE_72] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_72, dance_72_finished, dance_72_reset),
        [DANCE_73] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_73, dance_73_finished, dance_73_reset),
        [DANCE_74] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_74, dance_74_finished, dance_74_reset),
        [DANCE_75] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_75, dance_75_finished, dance_75_reset),
        [DANCE_76] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_76, dance_76_finished, dance_76_reset),
        [DANCE_77] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_77, dance_77_finished, dance_77_reset),
        [DANCE_78] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_78, dance_78_finished, dance_78_reset),
        [DANCE_79] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_79, dance_79_finished, dance_79_reset),
        [DANCE_80] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_80, dance_80_finished, dance_80_reset),
        [DANCE_81] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_81, dance_81_finished, dance_81_reset),
        [DANCE_82] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_82, dance_82_finished, dance_82_reset),
        [DANCE_83] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_83, dance_83_finished, dance_83_reset),
        [DANCE_84] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_84, dance_84_finished, dance_84_reset),
        [DANCE_85] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_85, dance_85_finished, dance_85_reset),
        [DANCE_86] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_86, dance_86_finished, dance_86_reset),
        [DANCE_87] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_87, dance_87_finished, dance_87_reset),
        [DANCE_88] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_88, dance_88_finished, dance_88_reset),
        [DANCE_89] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_89, dance_89_finished, dance_89_reset),
        [DANCE_90] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_90, dance_90_finished, dance_90_reset),
        [DANCE_91] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_91, dance_91_finished, dance_91_reset),
        [DANCE_92] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_92, dance_92_finished, dance_92_reset),
        [DANCE_93] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_93, dance_93_finished, dance_93_reset),
        [DANCE_94] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_94, dance_94_finished, dance_94_reset),
        [DANCE_95] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_95, dance_95_finished, dance_95_reset),
        [DANCE_96] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_96, dance_96_finished, dance_96_reset),
        [DANCE_97] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_97, dance_97_finished, dance_97_reset),
        [DANCE_98] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_98, dance_98_finished, dance_98_reset),
        [DANCE_99] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_99, dance_99_finished, dance_99_reset),
        [DANCE_100] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_100, dance_100_finished, dance_100_reset),
        [DANCE_101] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_101, dance_101_finished, dance_101_reset),
        [DANCE_102] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_102, dance_102_finished, dance_102_reset),
        [DANCE_103] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_103, dance_103_finished, dance_103_reset),
        [DANCE_104] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_104, dance_104_finished, dance_104_reset),
        [DANCE_105] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_105, dance_105_finished, dance_105_reset),
        [DANCE_106] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_106, dance_106_finished, dance_106_reset),
        [DANCE_107] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_107, dance_107_finished, dance_107_reset),
        [DANCE_108] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_108, dance_108_finished, dance_108_reset),
        [DANCE_109] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_109, dance_109_finished, dance_109_reset),
        [DANCE_110] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_110, dance_110_finished, dance_110_reset),
        [DANCE_111] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_111, dance_111_finished, dance_111_reset),
        [DANCE_112] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_112, dance_112_finished, dance_112_reset),
        [DANCE_113] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_113, dance_113_finished, dance_113_reset),
        [DANCE_114] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_114, dance_114_finished, dance_114_reset),
        [DANCE_115] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_115, dance_115_finished, dance_115_reset),
        [DANCE_116] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_116, dance_116_finished, dance_116_reset),
        [DANCE_117] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_117, dance_117_finished, dance_117_reset),
        [DANCE_118] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_118, dance_118_finished, dance_118_reset),
        [DANCE_119] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_119, dance_119_finished, dance_119_reset),
        [DANCE_120] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_120, dance_120_finished, dance_120_reset),
        [DANCE_121] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_121, dance_121_finished, dance_121_reset),
        [DANCE_122] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_122, dance_122_finished, dance_122_reset),
        [DANCE_123] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_123, dance_123_finished, dance_123_reset),
        [DANCE_124] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_124, dance_124_finished, dance_124_reset),
        [DANCE_125] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_125, dance_125_finished, dance_125_reset),
        [DANCE_126] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_126, dance_126_finished, dance_126_reset),
        [DANCE_127] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_127, dance_127_finished, dance_127_reset),
        [DANCE_128] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_128, dance_128_finished, dance_128_reset),
        [DANCE_129] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_129, dance_129_finished, dance_129_reset),
        [DANCE_130] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_130, dance_130_finished, dance_130_reset),
        [DANCE_131] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_131, dance_131_finished, dance_131_reset),
};
