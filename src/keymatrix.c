/* Utility to build keyboard matrix to K375s matrix, 2026.11 */

// HID Keyboard Definitions

// Modifiers
#define KEY_LEFT_CTRL     0x80
#define KEY_LEFT_SHIFT    0x81
#define KEY_LEFT_ALT      0x82
#define KEY_LEFT_GUI      0x83
#define KEY_RIGHT_CTRL    0x84
#define KEY_RIGHT_SHIFT   0x85
#define KEY_RIGHT_ALT     0x86
#define KEY_RIGHT_GUI     0x87

// Misc keys
#define KEY_UP_ARROW      0xDA
#define KEY_DOWN_ARROW    0xD9
#define KEY_LEFT_ARROW    0xD8
#define KEY_RIGHT_ARROW   0xD7
#define KEY_BACKSPACE     0xB2
#define KEY_TAB           0xB3
#define KEY_RETURN        0xB0
#define KEY_MENU          0xED // "Keyboard Application" in USB standard
#define KEY_ESC           0xB1
#define KEY_INSERT        0xD1
#define KEY_DELETE        0xD4
#define KEY_PAGE_UP       0xD3
#define KEY_PAGE_DOWN     0xD6
#define KEY_HOME          0xD2
#define KEY_END           0xD5
#define KEY_CAPS_LOCK     0xC1
#define KEY_PRINT_SCREEN  0xCE // Print Screen / SysRq
#define KEY_SCROLL_LOCK   0xCF
#define KEY_PAUSE         0xD0 // Pause / Break

// Numeric keypad
#define KEY_NUM_LOCK      0xDB
#define KEY_KP_SLASH      0xDC
#define KEY_KP_ASTERISK   0xDD
#define KEY_KP_MINUS      0xDE
#define KEY_KP_PLUS       0xDF
#define KEY_KP_ENTER      0xE0
#define KEY_KP_1          0xE1
#define KEY_KP_2          0xE2
#define KEY_KP_3          0xE3
#define KEY_KP_4          0xE4
#define KEY_KP_5          0xE5
#define KEY_KP_6          0xE6
#define KEY_KP_7          0xE7
#define KEY_KP_8          0xE8
#define KEY_KP_9          0xE9
#define KEY_KP_0          0xEA
#define KEY_KP_DOT        0xEB

// Function keys
#define KEY_F1            0xC2
#define KEY_F2            0xC3
#define KEY_F3            0xC4
#define KEY_F4            0xC5
#define KEY_F5            0xC6
#define KEY_F6            0xC7
#define KEY_F7            0xC8
#define KEY_F8            0xC9
#define KEY_F9            0xCA
#define KEY_F10           0xCB
#define KEY_F11           0xCC
#define KEY_F12           0xCD
#define KEY_F13           0xF0
#define KEY_F14           0xF1
#define KEY_F15           0xF2
#define KEY_F16           0xF3
#define KEY_F17           0xF4
#define KEY_F18           0xF5
#define KEY_F19           0xF6
#define KEY_F20           0xF7
#define KEY_F21           0xF8
#define KEY_F22           0xF9
#define KEY_F23           0xFA
#define KEY_F24           0xFB

// FN Keys
#define KEY_FN            0xFC
#define KEY_L_FN          0xFD
#define KEY_R_FN          0xFE
#define KEY_ESC           0x1B
#define KEY_TAB		  0x09
#define KEY_ENTER         0x0D
#define KEY_SPACE         0x20


int k375s_matrix[13][10] = {
//      23,              22,              21,              20,              19,
	{'`',            KEY_PAGE_DOWN,   KEY_KP_DOT,      KEY_KP_7,        KEY_KP_PLUS,
//              18,             17,           16,              15,            14
		0,              KEY_KP_0,     KEY_KP_ENTER,    'A',           KEY_KP_5},  /* 1 */
	{KEY_HOME,       KEY_PAGE_UP,     KEY_KP_ASTERISK, KEY_KP_MINUS,    KEY_KP_SLASH,
		'\\',           KEY_KP_1,     KEY_F7,          'F',           KEY_KP_8},  /* 2 */
	{'Q',            '6',             'S',             'O',             KEY_ENTER /* CR */,
		'V',            8 /* BS */,   KEY_F10,         '[',           KEY_F6},    /* 3 */
	{'B',            KEY_TAB,         KEY_DELETE,      '8',             'D',
		'Y',            '<',          'T',             KEY_CAPS_LOCK, '3'},       /* 4 */
	{'X',            'M',             'H',             '\\'/*??*/,      'L',
		'?',            KEY_F2,       KEY_F1,          'R',           KEY_F8},    /* 5 */
	{KEY_F11,        '9',             'J',             '0',             ']',
		KEY_INSERT,     'E',          '1',             '>',           KEY_F4},    /* 6 */
	{'5',            KEY_ESC,         'K',             '-',             '\"',
		KEY_F12,        'W',          '2',             ';',           '='},       /* 7 */
	{'.',            KEY_UP_ARROW,    '4',             KEY_DOWN_ARROW,  'U',
		KEY_LEFT_ARROW, 'N',          KEY_RIGHT_ARROW, '7',           KEY_F9},    /* 8 */
	{KEY_END,        KEY_KP_2,        KEY_KP_3,        KEY_KP_6,        KEY_KP_9,
		0,              0,            KEY_FN,          'I',           KEY_NUM_LOCK}, /* 9 */
	{0,              0,               0,               0,               0,
		0,              KEY_LEFT_GUI, KEY_PAUSE,       'Z',           'G'},       /* 10 */
	{0,              0,               0,               0,               KP_LEFT_CTRL,
		KP_RIGHT_CTRL,  0,            KEY_SCR_LOCK,    KEY_F3,        'C'},       /* 11 */
	{0,              0,               KEY_LEFT_ALT,    KEY_RIGHT_ALT,   0,
		0,              0,            0,               'P',           KEY_F5},    /* 12 */
	{KEY_LEFT_SHIFT, KEY_RIGHT_SHIFT, 0,               0,               0,
		0,              0,            0,               KEY_KP_4,      KEY_SPACE}  /* 13 */
};

int minila_matrix[17][8] = {
//       R0,           R1,             R2,             R3,           R4,         R5,              R6,            R7
	{0,            0,              0,              0,            0,          0,               KEY_LEFT_CTRL, 0},    /* C0 */
	{'Q',          KEY_TAB,        'A',            KEY_ESC,      'Z',        0,               '`',           '1'},  /* C1 */
	{'W',          KEY_CAPS_LOCK,  'S',            0,            'X',        0,               0,             '2'},  /* C2 */
	{'E',          0,              'D',            0,            'C',        0,               0,             '3'},  /* C3 */
	{'R',          'T',            'F',            'G',          'V',        'B',             '5',           '4'},  /* C4 */
	{'U',          'Y',            'J',            'H',          'M',        'N',             '6',           '7'},  /* C5 */
	{'I',          ']',            'K',            0,            '<',        0,               '=',           '8'},  /* C6 */
	{'O',          0,              'L',            0,            '>',        0,               0,             '9'},  /* C7 */
	{'P',          '[',            ';',            '\"',         0,          '?',             '-',           '0'},  /* C8 */
	{KEY_R_FN,     0,              KEY_L_FN,       KEY_LEFT_ALT, 0,          KEY_RIGHT_ALT,   0,             0},    /* C9 */
	{0,            KEY_BACKSPACE,  '\\',           0,            KEY_ENTER,  0,               KEY_DELETE,    0},    /* C10 */
	{0,            0,              0,              KEY_SPACE,    0,          KEY_DOWN_ARROW,  0,             0},    /* C11 */
	{0,            0,              0,              0,            0,          KEY_RIGHT_ARROW, 0,             0},    /* C12 */
	{0,            0,              0,              0,            0,          KEY_RIGHT_GUI,   0,             0},    /* C13 */
	{0,            0,              KEY_UP_ARROW,   0,            0,          KEY_LEFT_ARROW,  0,             0},    /* C14 */
	{0,            KEY_LEFT_SHIFT, 0,              0,            0,          KEY_RIGHT_SHIFT, 0,             0},    /* C15 */
	{KEY_LEFT_GUI, 0,              0,              0,            0,          0,               0,             0},    /* OC13 */
};

int r_minila_matrix[13][8] = { /* reduced minila matrix */
//       R0,           R1,             R2,             R3,           R4,         R5,              R6,            R7
	{KEY_LEFT_GUI, 0,              KEY_UP_ARROW,   0,            0,          KEY_LEFT_ARROW,  KEY_LEFT_CTRL, 0},    /* C0 + OC13 + C14 */
	{'Q',          KEY_TAB,        'A',            KEY_ESC,      'Z',        0,               '`',           '1'},  /* C1 */
	{'W',          KEY_CAPS_LOCK,  'S',            0,            'X',        0,               0,             '2'},  /* C2 */
	{'E',          0,              'D',            0,            'C',        0,               0,             '3'},  /* C3 */
	{'R',          'T',            'F',            'G',          'V',        'B',             '5',           '4'},  /* C4 */
	{'U',          'Y',            'J',            'H',          'M',        'N',             '6',           '7'},  /* C5 */
	{'I',          ']',            'K',            0,            '<',        0,               '=',           '8'},  /* C6 */
	{'O',          KEY_LEFT_SHIFT, 'L',            0,            '>',        KEY_RIGHT_SHIFT, 0,             '9'},  /* C7 + C15 */
	{'P',          '[',            ';',            '\"',         0,          '?',             '-',           '0'},  /* C8 */
	{KEY_R_FN,     0,              KEY_L_FN,       KEY_LEFT_ALT, 0,          KEY_RIGHT_ALT,   0,             0},    /* C9 */
	{0,            KEY_BACKSPACE,  '\\',           0,            KEY_ENTER,  KEY_RIGHT_GUI,   KEY_DELETE,    0},    /* C10 + C13 */
	{0,            0,              0,              KEY_SPACE,    0,          KEY_DOWN_ARROW,  0,             0},    /* C11 */
	{0,            0,              0,              0,            0,          KEY_RIGHT_ARROW, 0,             0},    /* C12 */
};


