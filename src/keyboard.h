
#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_
// HID Keyboard Definitions
// tinyusb/src/class/hid/hid.h
// hid.h starts from here

//--------------------------------------------------------------------+
// HID KEYCODE
//--------------------------------------------------------------------+
#define HID_KEY_NONE               0x00
#define HID_KEY_A                  0x04
#define HID_KEY_B                  0x05
#define HID_KEY_C                  0x06
#define HID_KEY_D                  0x07
#define HID_KEY_E                  0x08
#define HID_KEY_F                  0x09
#define HID_KEY_G                  0x0A
#define HID_KEY_H                  0x0B
#define HID_KEY_I                  0x0C
#define HID_KEY_J                  0x0D
#define HID_KEY_K                  0x0E
#define HID_KEY_L                  0x0F
#define HID_KEY_M                  0x10
#define HID_KEY_N                  0x11
#define HID_KEY_O                  0x12
#define HID_KEY_P                  0x13
#define HID_KEY_Q                  0x14
#define HID_KEY_R                  0x15
#define HID_KEY_S                  0x16
#define HID_KEY_T                  0x17
#define HID_KEY_U                  0x18
#define HID_KEY_V                  0x19
#define HID_KEY_W                  0x1A
#define HID_KEY_X                  0x1B
#define HID_KEY_Y                  0x1C
#define HID_KEY_Z                  0x1D
#define HID_KEY_1                  0x1E
#define HID_KEY_2                  0x1F
#define HID_KEY_3                  0x20
#define HID_KEY_4                  0x21
#define HID_KEY_5                  0x22
#define HID_KEY_6                  0x23
#define HID_KEY_7                  0x24
#define HID_KEY_8                  0x25
#define HID_KEY_9                  0x26
#define HID_KEY_0                  0x27
#define HID_KEY_ENTER              0x28
#define HID_KEY_ESCAPE             0x29
#define HID_KEY_BACKSPACE          0x2A
#define HID_KEY_TAB                0x2B
#define HID_KEY_SPACE              0x2C
#define HID_KEY_MINUS              0x2D
#define HID_KEY_EQUAL              0x2E
#define HID_KEY_BRACKET_LEFT       0x2F
#define HID_KEY_BRACKET_RIGHT      0x30
#define HID_KEY_BACKSLASH          0x31
#define HID_KEY_EUROPE_1           0x32
#define HID_KEY_SEMICOLON          0x33
#define HID_KEY_APOSTROPHE         0x34
#define HID_KEY_GRAVE              0x35
#define HID_KEY_COMMA              0x36
#define HID_KEY_PERIOD             0x37
#define HID_KEY_SLASH              0x38
#define HID_KEY_CAPS_LOCK          0x39
#define HID_KEY_F1                 0x3A
#define HID_KEY_F2                 0x3B
#define HID_KEY_F3                 0x3C
#define HID_KEY_F4                 0x3D
#define HID_KEY_F5                 0x3E
#define HID_KEY_F6                 0x3F
#define HID_KEY_F7                 0x40
#define HID_KEY_F8                 0x41
#define HID_KEY_F9                 0x42
#define HID_KEY_F10                0x43
#define HID_KEY_F11                0x44
#define HID_KEY_F12                0x45
#define HID_KEY_PRINT_SCREEN       0x46
#define HID_KEY_SCROLL_LOCK        0x47
#define HID_KEY_PAUSE              0x48
#define HID_KEY_INSERT             0x49
#define HID_KEY_HOME               0x4A
#define HID_KEY_PAGE_UP            0x4B
#define HID_KEY_DELETE             0x4C
#define HID_KEY_END                0x4D
#define HID_KEY_PAGE_DOWN          0x4E
#define HID_KEY_ARROW_RIGHT        0x4F
#define HID_KEY_ARROW_LEFT         0x50
#define HID_KEY_ARROW_DOWN         0x51
#define HID_KEY_ARROW_UP           0x52
#define HID_KEY_NUM_LOCK           0x53
#define HID_KEY_KEYPAD_DIVIDE      0x54
#define HID_KEY_KEYPAD_MULTIPLY    0x55
#define HID_KEY_KEYPAD_SUBTRACT    0x56
#define HID_KEY_KEYPAD_ADD         0x57
#define HID_KEY_KEYPAD_ENTER       0x58
#define HID_KEY_KEYPAD_1           0x59
#define HID_KEY_KEYPAD_2           0x5A
#define HID_KEY_KEYPAD_3           0x5B
#define HID_KEY_KEYPAD_4           0x5C
#define HID_KEY_KEYPAD_5           0x5D
#define HID_KEY_KEYPAD_6           0x5E
#define HID_KEY_KEYPAD_7           0x5F
#define HID_KEY_KEYPAD_8           0x60
#define HID_KEY_KEYPAD_9           0x61
#define HID_KEY_KEYPAD_0           0x62
#define HID_KEY_KEYPAD_DECIMAL     0x63
#define HID_KEY_EUROPE_2           0x64
#define HID_KEY_APPLICATION        0x65
#define HID_KEY_POWER              0x66
#define HID_KEY_KEYPAD_EQUAL       0x67
#define HID_KEY_F13                0x68
#define HID_KEY_F14                0x69
#define HID_KEY_F15                0x6A
#define HID_KEY_F16                0x6B
#define HID_KEY_F17                0x6C
#define HID_KEY_F18                0x6D
#define HID_KEY_F19                0x6E
#define HID_KEY_F20                0x6F
#define HID_KEY_F21                0x70
#define HID_KEY_F22                0x71
#define HID_KEY_F23                0x72
#define HID_KEY_F24                0x73

/* multimedia, browse ... keys */

#define HID_KEY_EXECUTE            0x74
#define HID_KEY_HELP               0x75
#define HID_KEY_MENU               0x76
#define HID_KEY_SELECT             0x77
#define HID_KEY_STOP               0x78
#define HID_KEY_AGAIN              0x79
#define HID_KEY_UNDO               0x7A
#define HID_KEY_CUT                0x7B
#define HID_KEY_COPY               0x7C
#define HID_KEY_PASTE              0x7D
#define HID_KEY_FIND               0x7E
#define HID_KEY_MUTE               0x7F
#define HID_KEY_VOLUME_UP          0x80
#define HID_KEY_VOLUME_DOWN        0x81

#define HID_KEY_LOCKING_CAPS_LOCK  0x82
#define HID_KEY_LOCKING_NUM_LOCK   0x83
#define HID_KEY_LOCKING_SCROLL_LOCK 0x84
#define HID_KEY_KEYPAD_COMMA       0x85
#define HID_KEY_KEYPAD_EQUAL_SIGN  0x86
#define HID_KEY_KANJI1             0x87
#define HID_KEY_KANJI2             0x88
#define HID_KEY_KANJI3             0x89
#define HID_KEY_KANJI4             0x8A
#define HID_KEY_KANJI5             0x8B
#define HID_KEY_KANJI6             0x8C
#define HID_KEY_KANJI7             0x8D
#define HID_KEY_KANJI8             0x8E
#define HID_KEY_KANJI9             0x8F
#define HID_KEY_LANG1              0x90
#define HID_KEY_LANG2              0x91
#define HID_KEY_LANG3              0x92
#define HID_KEY_LANG4              0x93
#define HID_KEY_LANG5              0x94
#define HID_KEY_LANG6              0x95
#define HID_KEY_LANG7              0x96
#define HID_KEY_LANG8              0x97
#define HID_KEY_LANG9              0x98
#define HID_KEY_ALTERNATE_ERASE    0x99
#define HID_KEY_SYSREQ_ATTENTION   0x9A
#define HID_KEY_CANCEL             0x9B
#define HID_KEY_CLEAR              0x9C
#define HID_KEY_PRIOR              0x9D
#define HID_KEY_RETURN             0x9E
#define HID_KEY_SEPARATOR          0x9F
#define HID_KEY_OUT                0xA0
#define HID_KEY_OPER               0xA1
#define HID_KEY_CLEAR_AGAIN        0xA2
#define HID_KEY_CRSEL_PROPS        0xA3
#define HID_KEY_EXSEL              0xA4

// RESERVED	  0xA5-AF

#define HID_KEY_KEYPAD_00          0xB0
#define HID_KEY_KEYPAD_000         0xB1
#define HID_KEY_THOUSANDS_SEPARATOR 0xB2
#define HID_KEY_DECIMAL_SEPARATOR  0xB3
#define HID_KEY_CURRENCY_UNIT      0xB4
#define HID_KEY_CURRENCY_SUBUNIT   0xB5
#define HID_KEY_KEYPAD_LEFT_PARENTHESIS  0xB6
#define HID_KEY_KEYPAD_RIGHT_PARENTHESIS 0xB7
#define HID_KEY_KEYPAD_LEFT_BRACE  0xB8
#define HID_KEY_KEYPAD_RIGHT_BRACE 0xB9
#define HID_KEY_KEYPAD_TAB         0xBA
#define HID_KEY_KEYPAD_BACKSPACE   0xBB
#define HID_KEY_KEYPAD_A           0xBC
#define HID_KEY_KEYPAD_B           0xBD
#define HID_KEY_KEYPAD_C           0xBE
#define HID_KEY_KEYPAD_D           0xBF
#define HID_KEY_KEYPAD_E           0xC0
#define HID_KEY_KEYPAD_F           0xC1
#define HID_KEY_KEYPAD_XOR         0xC2
#define HID_KEY_KEYPAD_CARET       0xC3
#define HID_KEY_KEYPAD_PERCENT     0xC4
#define HID_KEY_KEYPAD_LESS_THAN   0xC5
#define HID_KEY_KEYPAD_GREATER_THAN  0xC6
#define HID_KEY_KEYPAD_AMPERSAND   0xC7
#define HID_KEY_KEYPAD_DOUBLE_AMPERSAND 0xC8
#define HID_KEY_KEYPAD_VERTICAL_BAR  0xC9
#define HID_KEY_KEYPAD_DOUBLE_VERTICAL_BAR 0xCA
#define HID_KEY_KEYPAD_COLON       0xCB
#define HID_KEY_KEYPAD_HASH        0xCC
#define HID_KEY_KEYPAD_SPACE       0xCD
#define HID_KEY_KEYPAD_AT          0xCE
#define HID_KEY_KEYPAD_EXCLAMATION 0xCF
#define HID_KEY_KEYPAD_MEMORY_STORE  0xD0
#define HID_KEY_KEYPAD_MEMORY_RECALL 0xD1
#define HID_KEY_KEYPAD_MEMORY_CLEAR  0xD2
#define HID_KEY_KEYPAD_MEMORY_ADD  0xD3
#define HID_KEY_KEYPAD_MEMORY_SUBTRACT 0xD4
#define HID_KEY_KEYPAD_MEMORY_MULTIPLY 0xD5
#define HID_KEY_KEYPAD_MEMORY_DIVIDE   0xD6
#define HID_KEY_KEYPAD_PLUS_MINUS  0xD7
#define HID_KEY_KEYPAD_CLEAR       0xD8
#define HID_KEY_KEYPAD_CLEAR_ENTRY 0xD9
#define HID_KEY_KEYPAD_BINARY      0xDA
#define HID_KEY_KEYPAD_OCTAL       0xDB
#define HID_KEY_KEYPAD_DECIMAL_2   0xDC
#define HID_KEY_KEYPAD_HEXADECIMAL 0xDD

// RESERVED	  0xDE-DF

#define HID_KEY_CONTROL_LEFT       0xE0
#define HID_KEY_SHIFT_LEFT         0xE1
#define HID_KEY_ALT_LEFT           0xE2
#define HID_KEY_GUI_LEFT           0xE3
#define HID_KEY_CONTROL_RIGHT      0xE4
#define HID_KEY_SHIFT_RIGHT        0xE5
#define HID_KEY_ALT_RIGHT          0xE6
#define HID_KEY_GUI_RIGHT          0xE7


/*--------------------------------------------------------------------
 * ASCII to KEYCODE Conversion
 *  Expand to array of [128][2] (shift, keycode)
 *
 * Usage: example to convert input chr into keyboard report (modifier + keycode)
 *
 *  uint8_t const conv_table[128][2] =  { HID_ASCII_TO_KEYCODE };
 *
 *  uint8_t keycode[6] = { 0 };
 *  uint8_t modifier   = 0;
 *
 *  if ( conv_table[chr][0] ) modifier = KEYBOARD_MODIFIER_LEFTSHIFT;
 *  keycode[0] = conv_table[chr][1];
 *  tud_hid_keyboard_report(report_id, modifier, keycode);
 *
 *--------------------------------------------------------------------*/
#define HID_ASCII_TO_KEYCODE \
    {0, 0                     }, /* 0x00 Null      */ \
    {0, 0                     }, /* 0x01           */ \
    {0, 0                     }, /* 0x02           */ \
    {0, 0                     }, /* 0x03           */ \
    {0, 0                     }, /* 0x04           */ \
    {0, 0                     }, /* 0x05           */ \
    {0, 0                     }, /* 0x06           */ \
    {0, 0                     }, /* 0x07           */ \
    {0, HID_KEY_BACKSPACE     }, /* 0x08 Backspace */ \
    {0, HID_KEY_TAB           }, /* 0x09 Tab       */ \
    {0, HID_KEY_ENTER         }, /* 0x0A Line Feed */ \
    {0, 0                     }, /* 0x0B           */ \
    {0, 0                     }, /* 0x0C           */ \
    {0, HID_KEY_ENTER         }, /* 0x0D CR        */ \
    {0, 0                     }, /* 0x0E           */ \
    {0, 0                     }, /* 0x0F           */ \
    {0, 0                     }, /* 0x10           */ \
    {0, 0                     }, /* 0x11           */ \
    {0, 0                     }, /* 0x12           */ \
    {0, 0                     }, /* 0x13           */ \
    {0, 0                     }, /* 0x14           */ \
    {0, 0                     }, /* 0x15           */ \
    {0, 0                     }, /* 0x16           */ \
    {0, 0                     }, /* 0x17           */ \
    {0, 0                     }, /* 0x18           */ \
    {0, 0                     }, /* 0x19           */ \
    {0, 0                     }, /* 0x1A           */ \
    {0, HID_KEY_ESCAPE        }, /* 0x1B Escape    */ \
    {0, 0                     }, /* 0x1C           */ \
    {0, 0                     }, /* 0x1D           */ \
    {0, 0                     }, /* 0x1E           */ \
    {0, 0                     }, /* 0x1F           */ \
                                                      \
    {0, HID_KEY_SPACE         }, /* 0x20           */ \
    {1, HID_KEY_1             }, /* 0x21 !         */ \
    {1, HID_KEY_APOSTROPHE    }, /* 0x22 "         */ \
    {1, HID_KEY_3             }, /* 0x23 #         */ \
    {1, HID_KEY_4             }, /* 0x24 $         */ \
    {1, HID_KEY_5             }, /* 0x25 %         */ \
    {1, HID_KEY_7             }, /* 0x26 &         */ \
    {0, HID_KEY_APOSTROPHE    }, /* 0x27 '         */ \
    {1, HID_KEY_9             }, /* 0x28 (         */ \
    {1, HID_KEY_0             }, /* 0x29 )         */ \
    {1, HID_KEY_8             }, /* 0x2A *         */ \
    {1, HID_KEY_EQUAL         }, /* 0x2B +         */ \
    {0, HID_KEY_COMMA         }, /* 0x2C ,         */ \
    {0, HID_KEY_MINUS         }, /* 0x2D -         */ \
    {0, HID_KEY_PERIOD        }, /* 0x2E .         */ \
    {0, HID_KEY_SLASH         }, /* 0x2F /         */ \
    {0, HID_KEY_0             }, /* 0x30 0         */ \
    {0, HID_KEY_1             }, /* 0x31 1         */ \
    {0, HID_KEY_2             }, /* 0x32 2         */ \
    {0, HID_KEY_3             }, /* 0x33 3         */ \
    {0, HID_KEY_4             }, /* 0x34 4         */ \
    {0, HID_KEY_5             }, /* 0x35 5         */ \
    {0, HID_KEY_6             }, /* 0x36 6         */ \
    {0, HID_KEY_7             }, /* 0x37 7         */ \
    {0, HID_KEY_8             }, /* 0x38 8         */ \
    {0, HID_KEY_9             }, /* 0x39 9         */ \
    {1, HID_KEY_SEMICOLON     }, /* 0x3A :         */ \
    {0, HID_KEY_SEMICOLON     }, /* 0x3B ;         */ \
    {1, HID_KEY_COMMA         }, /* 0x3C <         */ \
    {0, HID_KEY_EQUAL         }, /* 0x3D =         */ \
    {1, HID_KEY_PERIOD        }, /* 0x3E >         */ \
    {1, HID_KEY_SLASH         }, /* 0x3F ?         */ \
                                                      \
    {1, HID_KEY_2             }, /* 0x40 @         */ \
    {1, HID_KEY_A             }, /* 0x41 A         */ \
    {1, HID_KEY_B             }, /* 0x42 B         */ \
    {1, HID_KEY_C             }, /* 0x43 C         */ \
    {1, HID_KEY_D             }, /* 0x44 D         */ \
    {1, HID_KEY_E             }, /* 0x45 E         */ \
    {1, HID_KEY_F             }, /* 0x46 F         */ \
    {1, HID_KEY_G             }, /* 0x47 G         */ \
    {1, HID_KEY_H             }, /* 0x48 H         */ \
    {1, HID_KEY_I             }, /* 0x49 I         */ \
    {1, HID_KEY_J             }, /* 0x4A J         */ \
    {1, HID_KEY_K             }, /* 0x4B K         */ \
    {1, HID_KEY_L             }, /* 0x4C L         */ \
    {1, HID_KEY_M             }, /* 0x4D M         */ \
    {1, HID_KEY_N             }, /* 0x4E N         */ \
    {1, HID_KEY_O             }, /* 0x4F O         */ \
    {1, HID_KEY_P             }, /* 0x50 P         */ \
    {1, HID_KEY_Q             }, /* 0x51 Q         */ \
    {1, HID_KEY_R             }, /* 0x52 R         */ \
    {1, HID_KEY_S             }, /* 0x53 S         */ \
    {1, HID_KEY_T             }, /* 0x55 T         */ \
    {1, HID_KEY_U             }, /* 0x55 U         */ \
    {1, HID_KEY_V             }, /* 0x56 V         */ \
    {1, HID_KEY_W             }, /* 0x57 W         */ \
    {1, HID_KEY_X             }, /* 0x58 X         */ \
    {1, HID_KEY_Y             }, /* 0x59 Y         */ \
    {1, HID_KEY_Z             }, /* 0x5A Z         */ \
    {0, HID_KEY_BRACKET_LEFT  }, /* 0x5B [         */ \
    {0, HID_KEY_BACKSLASH     }, /* 0x5C '\'       */ \
    {0, HID_KEY_BRACKET_RIGHT }, /* 0x5D ]         */ \
    {1, HID_KEY_6             }, /* 0x5E ^         */ \
    {1, HID_KEY_MINUS         }, /* 0x5F _         */ \
                                                      \
    {0, HID_KEY_GRAVE         }, /* 0x60 `         */ \
    {0, HID_KEY_A             }, /* 0x61 a         */ \
    {0, HID_KEY_B             }, /* 0x62 b         */ \
    {0, HID_KEY_C             }, /* 0x63 c         */ \
    {0, HID_KEY_D             }, /* 0x66 d         */ \
    {0, HID_KEY_E             }, /* 0x65 e         */ \
    {0, HID_KEY_F             }, /* 0x66 f         */ \
    {0, HID_KEY_G             }, /* 0x67 g         */ \
    {0, HID_KEY_H             }, /* 0x68 h         */ \
    {0, HID_KEY_I             }, /* 0x69 i         */ \
    {0, HID_KEY_J             }, /* 0x6A j         */ \
    {0, HID_KEY_K             }, /* 0x6B k         */ \
    {0, HID_KEY_L             }, /* 0x6C l         */ \
    {0, HID_KEY_M             }, /* 0x6D m         */ \
    {0, HID_KEY_N             }, /* 0x6E n         */ \
    {0, HID_KEY_O             }, /* 0x6F o         */ \
    {0, HID_KEY_P             }, /* 0x70 p         */ \
    {0, HID_KEY_Q             }, /* 0x71 q         */ \
    {0, HID_KEY_R             }, /* 0x72 r         */ \
    {0, HID_KEY_S             }, /* 0x73 s         */ \
    {0, HID_KEY_T             }, /* 0x75 t         */ \
    {0, HID_KEY_U             }, /* 0x75 u         */ \
    {0, HID_KEY_V             }, /* 0x76 v         */ \
    {0, HID_KEY_W             }, /* 0x77 w         */ \
    {0, HID_KEY_X             }, /* 0x78 x         */ \
    {0, HID_KEY_Y             }, /* 0x79 y         */ \
    {0, HID_KEY_Z             }, /* 0x7A z         */ \
    {1, HID_KEY_BRACKET_LEFT  }, /* 0x7B {         */ \
    {1, HID_KEY_BACKSLASH     }, /* 0x7C |         */ \
    {1, HID_KEY_BRACKET_RIGHT }, /* 0x7D }         */ \
    {1, HID_KEY_GRAVE         }, /* 0x7E ~         */ \
    {0, HID_KEY_DELETE        }  /* 0x7F Delete    */ \

/*--------------------------------------------------------------------
 * KEYCODE to Ascii Conversion
 *  Expand to array of [128][2] (ascii without shift, ascii with shift)
 *
 * Usage: example to convert ascii from keycode (key) and shift modifier (shift).
 * Here we assume key < 128 ( printable )
 *
 *  uint8_t const conv_table[128][2] =  { HID_KEYCODE_TO_ASCII };
 *  char ch = shift ? conv_table[chr][1] : conv_table[chr][0];
 *
 *--------------------------------------------------------------------*/
#define HID_KEYCODE_TO_ASCII    \
    {0     , 0      }, /* 0x00 */ \
    {0     , 0      }, /* 0x01 */ \
    {0     , 0      }, /* 0x02 */ \
    {0     , 0      }, /* 0x03 */ \
    {'a'   , 'A'    }, /* 0x04 */ \
    {'b'   , 'B'    }, /* 0x05 */ \
    {'c'   , 'C'    }, /* 0x06 */ \
    {'d'   , 'D'    }, /* 0x07 */ \
    {'e'   , 'E'    }, /* 0x08 */ \
    {'f'   , 'F'    }, /* 0x09 */ \
    {'g'   , 'G'    }, /* 0x0a */ \
    {'h'   , 'H'    }, /* 0x0b */ \
    {'i'   , 'I'    }, /* 0x0c */ \
    {'j'   , 'J'    }, /* 0x0d */ \
    {'k'   , 'K'    }, /* 0x0e */ \
    {'l'   , 'L'    }, /* 0x0f */ \
    {'m'   , 'M'    }, /* 0x10 */ \
    {'n'   , 'N'    }, /* 0x11 */ \
    {'o'   , 'O'    }, /* 0x12 */ \
    {'p'   , 'P'    }, /* 0x13 */ \
    {'q'   , 'Q'    }, /* 0x14 */ \
    {'r'   , 'R'    }, /* 0x15 */ \
    {'s'   , 'S'    }, /* 0x16 */ \
    {'t'   , 'T'    }, /* 0x17 */ \
    {'u'   , 'U'    }, /* 0x18 */ \
    {'v'   , 'V'    }, /* 0x19 */ \
    {'w'   , 'W'    }, /* 0x1a */ \
    {'x'   , 'X'    }, /* 0x1b */ \
    {'y'   , 'Y'    }, /* 0x1c */ \
    {'z'   , 'Z'    }, /* 0x1d */ \
    {'1'   , '!'    }, /* 0x1e */ \
    {'2'   , '@'    }, /* 0x1f */ \
    {'3'   , '#'    }, /* 0x20 */ \
    {'4'   , '$'    }, /* 0x21 */ \
    {'5'   , '%'    }, /* 0x22 */ \
    {'6'   , '^'    }, /* 0x23 */ \
    {'7'   , '&'    }, /* 0x24 */ \
    {'8'   , '*'    }, /* 0x25 */ \
    {'9'   , '('    }, /* 0x26 */ \
    {'0'   , ')'    }, /* 0x27 */ \
    {'\r'  , '\r'   }, /* 0x28 */ \
    {'\x1b', '\x1b' }, /* 0x29 */ \
    {'\b'  , '\b'   }, /* 0x2a */ \
    {'\t'  , '\t'   }, /* 0x2b */ \
    {' '   , ' '    }, /* 0x2c */ \
    {'-'   , '_'    }, /* 0x2d */ \
    {'='   , '+'    }, /* 0x2e */ \
    {'['   , '{'    }, /* 0x2f */ \
    {']'   , '}'    }, /* 0x30 */ \
    {'\\'  , '|'    }, /* 0x31 */ \
    {'#'   , '~'    }, /* 0x32 */ \
    {';'   , ':'    }, /* 0x33 */ \
    {'\''  , '\"'   }, /* 0x34 */ \
    {'`'   , '~'    }, /* 0x35 */ \
    {','   , '<'    }, /* 0x36 */ \
    {'.'   , '>'    }, /* 0x37 */ \
    {'/'   , '?'    }, /* 0x38 */ \
                                  \
    {0     , 0      }, /* 0x39 */ \
    {0     , 0      }, /* 0x3a */ \
    {0     , 0      }, /* 0x3b */ \
    {0     , 0      }, /* 0x3c */ \
    {0     , 0      }, /* 0x3d */ \
    {0     , 0      }, /* 0x3e */ \
    {0     , 0      }, /* 0x3f */ \
    {0     , 0      }, /* 0x40 */ \
    {0     , 0      }, /* 0x41 */ \
    {0     , 0      }, /* 0x42 */ \
    {0     , 0      }, /* 0x43 */ \
    {0     , 0      }, /* 0x44 */ \
    {0     , 0      }, /* 0x45 */ \
    {0     , 0      }, /* 0x46 */ \
    {0     , 0      }, /* 0x47 */ \
    {0     , 0      }, /* 0x48 */ \
    {0     , 0      }, /* 0x49 */ \
    {0     , 0      }, /* 0x4a */ \
    {0     , 0      }, /* 0x4b */ \
    {0     , 0      }, /* 0x4c */ \
    {0     , 0      }, /* 0x4d */ \
    {0     , 0      }, /* 0x4e */ \
    {0     , 0      }, /* 0x4f */ \
    {0     , 0      }, /* 0x50 */ \
    {0     , 0      }, /* 0x51 */ \
    {0     , 0      }, /* 0x52 */ \
    {0     , 0      }, /* 0x53 */ \
                                  \
    {'/'   , '/'    }, /* 0x54 */ \
    {'*'   , '*'    }, /* 0x55 */ \
    {'-'   , '-'    }, /* 0x56 */ \
    {'+'   , '+'    }, /* 0x57 */ \
    {'\r'  , '\r'   }, /* 0x58 */ \
    {'1'   , 0      }, /* 0x59 */ \
    {'2'   , 0      }, /* 0x5a */ \
    {'3'   , 0      }, /* 0x5b */ \
    {'4'   , 0      }, /* 0x5c */ \
    {'5'   , '5'    }, /* 0x5d */ \
    {'6'   , 0      }, /* 0x5e */ \
    {'7'   , 0      }, /* 0x5f */ \
    {'8'   , 0      }, /* 0x60 */ \
    {'9'   , 0      }, /* 0x61 */ \
    {'0'   , 0      }, /* 0x62 */ \
    {'0'   , 0      }, /* 0x63 */ \
    {'='   , '='    }, /* 0x67 */ \

// hid.h ends here

// FN Keys
#define KEY_FN            0xFC
#define KEY_FN_L          0xFC
#define KEY_FN_R          0xFC

int
k375s_matrix[13][10] =
{
	/* 23, 22, 21, 20, 19, 18, 17, 16, 15, 14 */
	/* 1 */
	{HID_KEY_NONE, HID_KEY_PAGE_DOWN, HID_KEY_KEYPAD_DECIMAL, HID_KEY_KEYPAD_7, HID_KEY_KEYPAD_ADD, HID_KEY_NONE, HID_KEY_KEYPAD_0, HID_KEY_KEYPAD_ENTER, HID_KEY_A, HID_KEY_KEYPAD_5},
	/* 2 */
	{HID_KEY_HOME, HID_KEY_PAGE_UP, HID_KEY_KEYPAD_MULTIPLY, HID_KEY_KEYPAD_SUBTRACT, HID_KEY_KEYPAD_DIVIDE, HID_KEY_BACKSLASH, HID_KEY_KEYPAD_1, HID_KEY_F7, HID_KEY_F, HID_KEY_KEYPAD_8},
	/* 3 */
	{HID_KEY_Q, HID_KEY_6, HID_KEY_S, HID_KEY_O, HID_KEY_ENTER, HID_KEY_V, HID_KEY_BACKSPACE, HID_KEY_F10, HID_KEY_BRACKET_LEFT, HID_KEY_F6},
	/* 4 */
	{HID_KEY_B, HID_KEY_TAB, HID_KEY_DELETE, HID_KEY_8, HID_KEY_D, HID_KEY_Y, HID_KEY_COMMA, HID_KEY_T, HID_KEY_CAPS_LOCK, HID_KEY_3},
	/* 5 */
	{HID_KEY_X, HID_KEY_M, HID_KEY_H, HID_KEY_NONE, HID_KEY_L, HID_KEY_SLASH, HID_KEY_F2, HID_KEY_F1, HID_KEY_R, HID_KEY_F8},
	/* 6 */
	{HID_KEY_F11, HID_KEY_9, HID_KEY_J, HID_KEY_0, HID_KEY_BRACKET_RIGHT, HID_KEY_INSERT, HID_KEY_E, HID_KEY_1, HID_KEY_PERIOD, HID_KEY_F4},
	/* 7 */
	{HID_KEY_5, HID_KEY_ESCAPE, HID_KEY_K, HID_KEY_MINUS, HID_KEY_APOSTROPHE, HID_KEY_F12, HID_KEY_W, HID_KEY_2, HID_KEY_SEMICOLON, HID_KEY_EQUAL},
	/* 8 */
	{HID_KEY_GRAVE, HID_KEY_ARROW_UP, HID_KEY_4, HID_KEY_ARROW_DOWN, HID_KEY_U, HID_KEY_ARROW_LEFT, HID_KEY_N, HID_KEY_ARROW_RIGHT, HID_KEY_7, HID_KEY_F9},
	/* 9 */
	{HID_KEY_END, HID_KEY_KEYPAD_2, HID_KEY_KEYPAD_3, HID_KEY_KEYPAD_6, HID_KEY_KEYPAD_9, HID_KEY_NONE, HID_KEY_NONE, KEY_FN, HID_KEY_I,  HID_KEY_NUM_LOCK},
	/* 10 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_GUI_LEFT, HID_KEY_PAUSE, HID_KEY_Z, HID_KEY_G},
	/* 11 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_CONTROL_LEFT, HID_KEY_CONTROL_RIGHT, HID_KEY_NONE, HID_KEY_SCROLL_LOCK, HID_KEY_F3, HID_KEY_C},
	/* 12 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ALT_LEFT, HID_KEY_ALT_RIGHT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_PRINT_SCREEN, HID_KEY_P, HID_KEY_F5},
	/* 13 */
	{HID_KEY_SHIFT_LEFT, HID_KEY_SHIFT_RIGHT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_KEYPAD_4, HID_KEY_SPACE}
};

int
minila_matrix[16][8] =
{
	/*  R0,  R1, R2, R3, R4, R5, R6, R7 */
	/* C0 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_CONTROL_LEFT, HID_KEY_NONE},
	/* C1 */
	{HID_KEY_Q, HID_KEY_TAB, HID_KEY_A, HID_KEY_ESCAPE, HID_KEY_Z, HID_KEY_NONE, HID_KEY_GRAVE, HID_KEY_1},
	/* C2 */
	{HID_KEY_W, HID_KEY_CAPS_LOCK, HID_KEY_S, HID_KEY_NONE, HID_KEY_X, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_2},
	/* C3 */
	{HID_KEY_E, HID_KEY_NONE, HID_KEY_D, HID_KEY_NONE, HID_KEY_C, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_3},
	/* C4 */
	{HID_KEY_R, HID_KEY_T, HID_KEY_F, HID_KEY_G, HID_KEY_V, HID_KEY_B, HID_KEY_5, HID_KEY_4},
	/* C5 */
	{HID_KEY_U, HID_KEY_Y, HID_KEY_J, HID_KEY_H, HID_KEY_M, HID_KEY_N, HID_KEY_6, HID_KEY_7},
	/* C6 */
	{HID_KEY_I, HID_KEY_BRACKET_RIGHT, HID_KEY_K, HID_KEY_NONE, HID_KEY_COMMA, HID_KEY_NONE, HID_KEY_EQUAL, HID_KEY_8},
	/* C7 */
	{HID_KEY_O, HID_KEY_NONE, HID_KEY_L, HID_KEY_NONE, HID_KEY_PERIOD, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_9},
	/* C8 */
	{HID_KEY_P, HID_KEY_BRACKET_LEFT, HID_KEY_SEMICOLON, HID_KEY_APOSTROPHE, HID_KEY_NONE, HID_KEY_SLASH, HID_KEY_MINUS/*-*/, HID_KEY_0},
	/* C9 */
	{KEY_FN_R, HID_KEY_NONE, KEY_FN_L, HID_KEY_ALT_LEFT, HID_KEY_NONE, HID_KEY_ALT_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
	/* C10 */
	{HID_KEY_NONE, HID_KEY_BACKSPACE, HID_KEY_BACKSLASH, HID_KEY_NONE, HID_KEY_ENTER, HID_KEY_NONE, HID_KEY_DELETE, HID_KEY_NONE},
	/* C11 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_SPACE, HID_KEY_NONE, HID_KEY_ARROW_DOWN, HID_KEY_NONE, HID_KEY_NONE},
	/* C12 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
	/* C13 + OC13 */
	{HID_KEY_GUI_LEFT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_GUI_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
	/* C14 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_UP, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_LEFT, HID_KEY_NONE, HID_KEY_NONE},
	/* C15 */
	{HID_KEY_NONE, HID_KEY_SHIFT_LEFT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_SHIFT_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
};

int
r_minila_matrix[13][8] =
{ /* reduced minila matrix */
	/*  R0, R1, R2, R3, R4, R5, R6, R7 */
	/* C0 + C14 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_LEFT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_RIGHT, HID_KEY_CONTROL_LEFT, HID_KEY_NONE},
	/* C1 */
	{HID_KEY_Q, HID_KEY_TAB, HID_KEY_A, HID_KEY_ESCAPE, HID_KEY_Z, HID_KEY_NONE, HID_KEY_GRAVE, HID_KEY_1},
	/* C2 */
	{HID_KEY_W, HID_KEY_CAPS_LOCK, HID_KEY_S, HID_KEY_NONE, HID_KEY_X, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_2},
	/* C3 */
	{HID_KEY_E, HID_KEY_NONE, HID_KEY_D, HID_KEY_NONE, HID_KEY_C, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_3},
	/* C4 */
	{HID_KEY_R, HID_KEY_T, HID_KEY_F, HID_KEY_G, HID_KEY_V, HID_KEY_B, HID_KEY_5, HID_KEY_4},
	/* C5 */
	{HID_KEY_U, HID_KEY_Y, HID_KEY_J, HID_KEY_H, HID_KEY_M, HID_KEY_N, HID_KEY_6, HID_KEY_7},
	/* C6 */
	{HID_KEY_I, HID_KEY_BRACKET_RIGHT, HID_KEY_K, HID_KEY_NONE, HID_KEY_COMMA, HID_KEY_NONE, HID_KEY_EQUAL, HID_KEY_8},
	/* C7 + C15 */
	{HID_KEY_O, HID_KEY_SHIFT_LEFT, HID_KEY_L, HID_KEY_NONE, HID_KEY_PERIOD, HID_KEY_SHIFT_RIGHT, HID_KEY_NONE, HID_KEY_9},
	/* C8 */
	{HID_KEY_P, HID_KEY_BRACKET_LEFT, HID_KEY_SEMICOLON, HID_KEY_APOSTROPHE, HID_KEY_NONE, HID_KEY_SLASH, HID_KEY_MINUS/*-*/, HID_KEY_0},
	/* C9 */
	{KEY_FN_R, HID_KEY_NONE, KEY_FN_L, HID_KEY_ALT_LEFT, HID_KEY_NONE, HID_KEY_ALT_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
	/* C10 + C13 + OC13 */
	{HID_KEY_GUI_LEFT, HID_KEY_BACKSPACE, HID_KEY_BACKSLASH, HID_KEY_NONE, HID_KEY_ENTER, HID_KEY_GUI_RIGHT, HID_KEY_DELETE, HID_KEY_NONE},
	/* C11 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_SPACE, HID_KEY_NONE, HID_KEY_ARROW_DOWN, HID_KEY_NONE, HID_KEY_NONE},
	/* C12 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
};

int
r_fn_minila_matrix[13][8] =
{ /* reduced FN minila matrix */
	/*  R0, R1, R2, R3, R4, R5, R6, R7 */
	/* C0 + C14 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_LEFT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_RIGHT, HID_KEY_CONTROL_LEFT, HID_KEY_NONE},
	/* C1 */
	{HID_KEY_Q, HID_KEY_TAB, HID_KEY_A, HID_KEY_ESCAPE, HID_KEY_Z, HID_KEY_NONE, HID_KEY_GRAVE, HID_KEY_F1},
	/* C2 */
	{HID_KEY_W, HID_KEY_CAPS_LOCK, HID_KEY_ARROW_LEFT, HID_KEY_NONE, HID_KEY_X, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_F2},
	/* C3 */
	{HID_KEY_ARROW_UP, HID_KEY_NONE, HID_KEY_ARROW_DOWN, HID_KEY_NONE, HID_KEY_C, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_F3},
	/* C4 */
	{HID_KEY_R, HID_KEY_T, HID_KEY_ARROW_RIGHT, HID_KEY_G, HID_KEY_V, HID_KEY_B, HID_KEY_F5, HID_KEY_F4},
	/* C5 */
	{HID_KEY_U, HID_KEY_Y, HID_KEY_INSERT, HID_KEY_H, HID_KEY_DELETE, HID_KEY_N, HID_KEY_F6, HID_KEY_F7},
	/* C6 */
	{HID_KEY_PRINT_SCREEN, HID_KEY_BRACKET_RIGHT, HID_KEY_HOME, HID_KEY_NONE, HID_KEY_END, HID_KEY_NONE, HID_KEY_F12, HID_KEY_F8},
	/* C7 + C15 */
	{HID_KEY_SCROLL_LOCK, HID_KEY_SHIFT_LEFT, HID_KEY_PAGE_UP, HID_KEY_NONE, HID_KEY_PAGE_DOWN, HID_KEY_SHIFT_RIGHT, HID_KEY_NONE, HID_KEY_F9},
	/* C8 */
	{HID_KEY_PAUSE, HID_KEY_BRACKET_LEFT, HID_KEY_BACKSPACE, HID_KEY_APOSTROPHE, HID_KEY_NONE, HID_KEY_SLASH, HID_KEY_F11/*-*/, HID_KEY_F10},
	/* C9 */
	{KEY_FN_R, HID_KEY_NONE, KEY_FN_L, HID_KEY_ALT_LEFT, HID_KEY_NONE, HID_KEY_ALT_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
	/* C10 + C13 + OC13 */
	{HID_KEY_GUI_LEFT, HID_KEY_BACKSPACE, HID_KEY_BACKSLASH, HID_KEY_NONE, HID_KEY_ENTER, HID_KEY_GUI_RIGHT, HID_KEY_DELETE, HID_KEY_NONE},
	/* C11 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_SPACE, HID_KEY_NONE, HID_KEY_ARROW_DOWN, HID_KEY_NONE, HID_KEY_NONE},
	/* C12 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
};

int
mr_minila_matrix[11][8] =
{ /* more reduced minila matrix */
	/*  R0, R1, R2, R3, R4, R5, R6, R7 */
	/* C0 + C14 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_LEFT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_RIGHT, HID_KEY_CONTROL_LEFT, HID_KEY_NONE},
	/* C1 + C12 */
	{HID_KEY_Q, HID_KEY_TAB, HID_KEY_A, HID_KEY_ESCAPE, HID_KEY_Z, HID_KEY_ARROW_RIGHT, HID_KEY_GRAVE, HID_KEY_1},
	/* C2 */
	{HID_KEY_W, HID_KEY_CAPS_LOCK, HID_KEY_S, HID_KEY_NONE, HID_KEY_X, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_2},
	/* C3 */
	{HID_KEY_E, HID_KEY_NONE, HID_KEY_D, HID_KEY_NONE, HID_KEY_C, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_3},
	/* C4 */
	{HID_KEY_R, HID_KEY_T, HID_KEY_F, HID_KEY_G, HID_KEY_V, HID_KEY_B, HID_KEY_5, HID_KEY_4},
	/* C5 */
	{HID_KEY_U, HID_KEY_Y, HID_KEY_J, HID_KEY_H, HID_KEY_M, HID_KEY_N, HID_KEY_6, HID_KEY_7},
	/* C6 + C11 */
	{HID_KEY_I, HID_KEY_BRACKET_RIGHT, HID_KEY_K, HID_KEY_SPACE, HID_KEY_COMMA, HID_KEY_ARROW_DOWN, HID_KEY_EQUAL, HID_KEY_8},
	/* C7 + C15 */
	{HID_KEY_O, HID_KEY_SHIFT_LEFT, HID_KEY_L, HID_KEY_NONE, HID_KEY_PERIOD, HID_KEY_SHIFT_RIGHT, HID_KEY_NONE, HID_KEY_9},
	/* C8 */
	{HID_KEY_P, HID_KEY_BRACKET_LEFT, HID_KEY_SEMICOLON, HID_KEY_APOSTROPHE, HID_KEY_NONE, HID_KEY_SLASH, HID_KEY_MINUS/*-*/, HID_KEY_0},
	/* C9 */
	{KEY_FN_R, HID_KEY_NONE, KEY_FN_L, HID_KEY_ALT_LEFT, HID_KEY_NONE, HID_KEY_ALT_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
	/* C10 + C13 + OC13 */
	{HID_KEY_GUI_LEFT, HID_KEY_BACKSPACE, HID_KEY_BACKSLASH, HID_KEY_NONE, HID_KEY_ENTER, HID_KEY_GUI_RIGHT, HID_KEY_DELETE, HID_KEY_NONE},
};

int
mr_fn_minila_matrix[11][8] =
{ /* more reduced FN minila matrix */
	/*  R0, R1, R2, R3, R4, R5, R6, R7 */
	/* C0 + C14 */
	{HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_LEFT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_ARROW_RIGHT, HID_KEY_CONTROL_LEFT, HID_KEY_NONE},
	/* C1 + C12 */
	{HID_KEY_Q, HID_KEY_TAB, HID_KEY_A, HID_KEY_ESCAPE, HID_KEY_Z, HID_KEY_ARROW_RIGHT, HID_KEY_GRAVE, HID_KEY_F1},
	/* C2 */
	{HID_KEY_W, HID_KEY_CAPS_LOCK, HID_KEY_ARROW_LEFT, HID_KEY_NONE, HID_KEY_X, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_F2},
	/* C3 */
	{HID_KEY_ARROW_UP, HID_KEY_NONE, HID_KEY_ARROW_DOWN, HID_KEY_NONE, HID_KEY_C, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_F3},
	/* C4 */
	{HID_KEY_R, HID_KEY_T, HID_KEY_ARROW_RIGHT, HID_KEY_G, HID_KEY_V, HID_KEY_B, HID_KEY_F5, HID_KEY_F4},
	/* C5 */
	{HID_KEY_U, HID_KEY_Y, HID_KEY_INSERT, HID_KEY_H, HID_KEY_DELETE, HID_KEY_N, HID_KEY_F6, HID_KEY_F7},
	/* C6 + C11 */
	{HID_KEY_PRINT_SCREEN, HID_KEY_BRACKET_RIGHT, HID_KEY_HOME, HID_KEY_SPACE, HID_KEY_END, HID_KEY_ARROW_DOWN, HID_KEY_F12, HID_KEY_F8},
	/* C7 + C15 */
	{HID_KEY_SCROLL_LOCK, HID_KEY_SHIFT_LEFT, HID_KEY_PAGE_UP, HID_KEY_NONE, HID_KEY_PAGE_DOWN, HID_KEY_SHIFT_RIGHT, HID_KEY_NONE, HID_KEY_F9},
	/* C8 */
	{HID_KEY_PAUSE, HID_KEY_BRACKET_LEFT, HID_KEY_BACKSPACE, HID_KEY_APOSTROPHE, HID_KEY_NONE, HID_KEY_SLASH, HID_KEY_F11/*-*/, HID_KEY_F10},
	/* C9 */
	{KEY_FN_R, HID_KEY_NONE, KEY_FN_L, HID_KEY_ALT_LEFT, HID_KEY_NONE, HID_KEY_ALT_RIGHT, HID_KEY_NONE, HID_KEY_NONE},
	/* C10 + C13 + OC13 */
	{HID_KEY_GUI_LEFT, HID_KEY_BACKSPACE, HID_KEY_BACKSLASH, HID_KEY_NONE, HID_KEY_ENTER, HID_KEY_GUI_RIGHT, HID_KEY_DELETE, HID_KEY_NONE},
};

int
convertiable2_tkl_matrix[15][8] =
/* Daughter Board, Right Top is PIN1, Left Down is PIN30 */
{
	/* 7, 10, 12, 14, 16, 18, 22, 24 */
	/* 5 */
	{HID_KEY_W, HID_KEY_NONE, HID_KEY_X, HID_KEY_2, HID_KEY_F1, HID_KEY_S, HID_KEY_NONE, HID_KEY_CAPS_LOCK},
	/* 6 */
	{HID_KEY_Q, HID_KEY_NONE, HID_KEY_Z, HID_KEY_1, HID_KEY_GRAVE, HID_KEY_A, HID_KEY_ESCAPE, HID_KEY_TAB},
	/* 8 */
	{HID_KEY_R, HID_KEY_B, HID_KEY_V, HID_KEY_4, HID_KEY_5, HID_KEY_F, HID_KEY_G, HID_KEY_T},
	/* 9 */
	{HID_KEY_U, HID_KEY_N, HID_KEY_M, HID_KEY_7, HID_KEY_6, HID_KEY_J, HID_KEY_H, HID_KEY_Y},
	/* 11 */
	{HID_KEY_KEYPAD_7, HID_KEY_ARROW_DOWN, HID_KEY_NUM_LOCK, HID_KEY_NONE, HID_KEY_DELETE, HID_KEY_KEYPAD_1, HID_KEY_SPACE, HID_KEY_KEYPAD_4},
	/* 13 */
	{HID_KEY_KEYPAD_8, HID_KEY_ARROW_RIGHT, HID_KEY_KEYPAD_DIVIDE, HID_KEY_NONE, HID_KEY_INSERT, HID_KEY_KEYPAD_2, HID_KEY_KEYPAD_0, HID_KEY_KEYPAD_5},
	/* 15 */
	{HID_KEY_NONE, HID_KEY_F12, HID_KEY_ENTER, HID_KEY_F10, HID_KEY_F9, HID_KEY_BACKSLASH, HID_KEY_F11, HID_KEY_BACKSPACE},
	/* 17 */
	{HID_KEY_I, HID_KEY_NONE, HID_KEY_COMMA, HID_KEY_8, HID_KEY_EQUAL, HID_KEY_K, HID_KEY_F6, HID_KEY_BRACKET_RIGHT},
	/* 19 */
	{HID_KEY_O, KEY_FN, HID_KEY_PERIOD, HID_KEY_9, HID_KEY_F8, HID_KEY_F, HID_KEY_NONE, HID_KEY_F7},
	/* 20 */
	{HID_KEY_KEYPAD_9, HID_KEY_KEYPAD_SUBTRACT, HID_KEY_KEYPAD_MULTIPLY, HID_KEY_PAGE_DOWN, HID_KEY_PAGE_UP, HID_KEY_KEYPAD_3, HID_KEY_KEYPAD_DECIMAL, HID_KEY_KEYPAD_6},
	/* 21 */
	{HID_KEY_E, HID_KEY_NONE, HID_KEY_C, HID_KEY_3, HID_KEY_F2, HID_KEY_D, HID_KEY_F4, HID_KEY_F3},
	/* 23 */
	{HID_KEY_P, HID_KEY_SLASH, HID_KEY_BACKSLASH, HID_KEY_O, HID_KEY_MINUS, HID_KEY_SEMICOLON, HID_KEY_APOSTROPHE, HID_KEY_BRACKET_LEFT},
	/* 25 */
	{HID_KEY_SCROLL_LOCK, HID_KEY_ALT_RIGHT, HID_KEY_NONE, HID_KEY_PRINT_SCREEN, HID_KEY_NONE, HID_KEY_GUI_RIGHT, HID_KEY_ALT_LEFT, HID_KEY_NONE},
	/* 26 */
	{HID_KEY_KEYPAD_ADD, HID_KEY_ARROW_LEFT, HID_KEY_SHIFT_RIGHT, HID_KEY_END, HID_KEY_HOME, HID_KEY_KEYPAD_ENTER, HID_KEY_ARROW_UP, HID_KEY_SHIFT_LEFT},
	/* 27 */
	{HID_KEY_PAUSE,HID_KEY_NONE, HID_KEY_CONTROL_RIGHT, HID_KEY_F5, HID_KEY_CONTROL_LEFT, HID_KEY_NONE, HID_KEY_NONE, HID_KEY_GUI_LEFT},
};
#endif
