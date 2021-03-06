#include "keymap-ee.h"

#ifdef KBMAP_EEPC_INUSE

const uint8_t EEPC_asciimap[256] PROGMEM =
{
	0x00,NOMOD,             // NUL
	0x00,NOMOD,             // SOH
	0x00,NOMOD,             // STX
	0x00,NOMOD,             // ETX
	0x00,NOMOD,             // EOT
	0x00,NOMOD,             // ENQ
	0x00,NOMOD,             // ACK  
	0x00,NOMOD,             // BEL
	0x2a,NOMOD,			// BS	Backspace
	0x2b,NOMOD,			// TAB	Tab (2b)
	0x28,NOMOD,			// LF	Enter (28)
	0x00,NOMOD,             // VT 
	0x00,NOMOD,             // FF 
	0x00,NOMOD,             // CR 
	0x00,NOMOD,             // SO 
	0x00,NOMOD,             // SI 
	0x00,NOMOD,             // DEL
	0x00,NOMOD,             // DC1
	0x00,NOMOD,             // DC2
	0x00,NOMOD,             // DC3
	0x00,NOMOD,             // DC4
	0x00,NOMOD,             // NAK
	0x00,NOMOD,             // SYN
	0x00,NOMOD,             // ETB
	0x00,NOMOD,             // CAN
	0x00,NOMOD,             // EM 
	0x00,NOMOD,             // SUB
	0x00,NOMOD,             // ESC
	0x00,NOMOD,             // FS 
	0x00,NOMOD,             // GS 
	0x00,NOMOD,             // RS 
	0x00,NOMOD,             // US 

	0x2c,NOMOD,		   //  ' '
	0x1e,SHIFT,	   // !
	0x1f,SHIFT,	   // " 
	0x20,SHIFT,    // #
	0x21,ALT,    // $
	0x22,SHIFT,    // % 
	0x23,SHIFT,    // &
	0x32,NOMOD,          // '
	0x25,SHIFT,    // (
	0x26,SHIFT,    // )
	0x32,SHIFT,    // *
	0x2d,NOMOD,    // +
	0x36,NOMOD,          // ,
	0x38,NOMOD,          // -
	0x37,NOMOD,          // .
	0x24,SHIFT,          // /
	0x27,NOMOD,          // 0
	0x1e,NOMOD,          // 1
	0x1f,NOMOD,          // 2
	0x20,NOMOD,          // 3
	0x21,NOMOD,          // 4
	0x22,NOMOD,          // 5
	0x23,NOMOD,          // 6
	0x24,NOMOD,          // 7
	0x25,NOMOD,          // 8
	0x26,NOMOD,          // 9
	0x37,SHIFT,      // :
	0x36,SHIFT,          // ;
	0x64,NOMOD,      // <
	0x27,SHIFT,          // =
	0x64,SHIFT,      // >
	0x2d,SHIFT,      // ?
	0x1f,ALT,      // @
	0x04,SHIFT,      // A
	0x05,SHIFT,      // B
	0x06,SHIFT,      // C
	0x07,SHIFT,      // D
	0x08,SHIFT,      // E
	0x09,SHIFT,      // F
	0x0a,SHIFT,      // G
	0x0b,SHIFT,      // H
	0x0c,SHIFT,      // I
	0x0d,SHIFT,      // J
	0x0e,SHIFT,      // K
	0x0f,SHIFT,      // L
	0x10,SHIFT,      // M
	0x11,SHIFT,      // N
	0x12,SHIFT,      // O
	0x13,SHIFT,      // P
	0x14,SHIFT,      // Q
	0x15,SHIFT,      // R
	0x16,SHIFT,      // S
	0x17,SHIFT,      // T
	0x18,SHIFT,      // U
	0x19,SHIFT,      // V
	0x1a,SHIFT,      // W
	0x1b,SHIFT,      // X
	0x1c,SHIFT,      // Y
	0x1d,SHIFT,      // Z
	0x25,ALT,          // [
	0x2d,ALT,          // bslash // 
	0x26,ALT,          // ]
	0x00,NOMOD,    // ^ - unsupported, since some systems requires it to be pressed twice, while others only one
	0x38,SHIFT,    // _
	0x35,NOMOD,          // `
	0x04,NOMOD,          // a
	0x05,NOMOD,          // b
	0x06,NOMOD,          // c
	0x07,NOMOD,          // d
	0x08,NOMOD,          // e
	0x09,NOMOD,          // f
	0x0a,NOMOD,          // g
	0x0b,NOMOD,          // h
	0x0c,NOMOD,          // i
	0x0d,NOMOD,          // j
	0x0e,NOMOD,         // k
	0x0f,NOMOD,          // l
	0x10,NOMOD,          // m
	0x11,NOMOD,          // n
	0x12,NOMOD,          // o
	0x13,NOMOD,          // p
	0x14,NOMOD,          // q
	0x15,NOMOD,          // r
	0x16,NOMOD,          // s
	0x17,NOMOD,          // t
	0x18,NOMOD,          // u
	0x19,NOMOD,          // v
	0x1a,NOMOD,          // w
	0x1b,NOMOD,          // x
	0x1c,NOMOD,          // y
	0x1d,NOMOD,          // z
	0x24,ALT,    // {
	0x64,ALT,    // |
	0x27,ALT,    // }
	0x00,NOMOD,    // ~ - unsupported, since some systems requires it to be pressed twice, while others only one
	0,NOMOD				// DEL
};

#endif

#ifdef KBMAP_EEMAC_INUSE

const uint8_t EEMAC_asciimap[256] PROGMEM =
{
	0x00,NOMOD,             // NUL
	0x00,NOMOD,             // SOH
	0x00,NOMOD,             // STX
	0x00,NOMOD,             // ETX
	0x00,NOMOD,             // EOT
	0x00,NOMOD,             // ENQ
	0x00,NOMOD,             // ACK  
	0x00,NOMOD,             // BEL
	0x2a,NOMOD,			// BS	Backspace
	0x2b,NOMOD,			// TAB	Tab (2b)
	0x28,NOMOD,			// LF	Enter (28)
	0x00,NOMOD,             // VT 
	0x00,NOMOD,             // FF 
	0x00,NOMOD,             // CR 
	0x00,NOMOD,             // SO 
	0x00,NOMOD,             // SI 
	0x00,NOMOD,             // DEL
	0x00,NOMOD,             // DC1
	0x00,NOMOD,             // DC2
	0x00,NOMOD,             // DC3
	0x00,NOMOD,             // DC4
	0x00,NOMOD,             // NAK
	0x00,NOMOD,             // SYN
	0x00,NOMOD,             // ETB
	0x00,NOMOD,             // CAN
	0x00,NOMOD,             // EM 
	0x00,NOMOD,             // SUB
	0x00,NOMOD,             // ESC
	0x00,NOMOD,             // FS 
	0x00,NOMOD,             // GS 
	0x00,NOMOD,             // RS 
	0x00,NOMOD,             // US 
	0x2c,NOMOD,		   //  ' '
	0x1e,SHIFT,	   // !
	0x1f,SHIFT,	   // " 
	0x20,SHIFT,    // #
	0x20,SHIFT|ALT,    // $
	0x22,SHIFT,    // % 
	0x23,SHIFT,    // &
	0x32,NOMOD,          // '
	0x25,SHIFT,    // (
	0x26,SHIFT,    // )
	0x32,SHIFT,    // *
	0x2d,NOMOD,    // +
	0x36,NOMOD,          // ,
	0x38,NOMOD,          // -
	0x37,NOMOD,          // .
	0x24,SHIFT,          // /
	0x27,NOMOD,          // 0
	0x1e,NOMOD,          // 1
	0x1f,NOMOD,          // 2
	0x20,NOMOD,          // 3
	0x21,NOMOD,          // 4
	0x22,NOMOD,          // 5
	0x23,NOMOD,          // 6
	0x24,NOMOD,          // 7
	0x25,NOMOD,          // 8
	0x26,NOMOD,          // 9
	0x37,SHIFT,      // :
	0x36,SHIFT,          // ;
	0x64, NOMOD, // < (MacFix)
	0x27,SHIFT,          // =
	0x64, SHIFT, // > (Macfix)
	0x2d,SHIFT,      // ?
	0x32,ALT,      // @
	0x04,SHIFT,      // A
	0x05,SHIFT,      // B
	0x06,SHIFT,      // C
	0x07,SHIFT,      // D
	0x08,SHIFT,      // E
	0x09,SHIFT,      // F
	0x0a,SHIFT,      // G
	0x0b,SHIFT,      // H
	0x0c,SHIFT,      // I
	0x0d,SHIFT,      // J
	0x0e,SHIFT,      // K
	0x0f,SHIFT,      // L
	0x10,SHIFT,      // M
	0x11,SHIFT,      // N
	0x12,SHIFT,      // O
	0x13,SHIFT,      // P
	0x14,SHIFT,      // Q
	0x15,SHIFT,      // R
	0x16,SHIFT,      // S
	0x17,SHIFT,      // T
	0x18,SHIFT,      // U
	0x19,SHIFT,      // V
	0x1a,SHIFT,      // W
	0x1b,SHIFT,      // X
	0x1c,SHIFT,      // Y
	0x1d,SHIFT,      // Z
	0x25,ALT,          // [
	0x24,SHIFT|ALT,          // bslash // 
	0x26,ALT,          // ]
	0x00,NOMOD,    // ^ - unsupported, since some systems requires it to be pressed twice, while others only one
	0x38,SHIFT,    // _
	0x35,NOMOD,          // `
	0x04,NOMOD,          // a
	0x05,NOMOD,          // b
	0x06,NOMOD,          // c
	0x07,NOMOD,          // d
	0x08,NOMOD,          // e
	0x09,NOMOD,          // f
	0x0a,NOMOD,          // g
	0x0b,NOMOD,          // h
	0x0c,NOMOD,          // i
	0x0d,NOMOD,          // j
	0x0e,NOMOD,         // k
	0x0f,NOMOD,          // l
	0x10,NOMOD,          // m
	0x11,NOMOD,          // n
	0x12,NOMOD,          // o
	0x13,NOMOD,          // p
	0x14,NOMOD,          // q
	0x15,NOMOD,          // r
	0x16,NOMOD,          // s
	0x17,NOMOD,          // t
	0x18,NOMOD,          // u
	0x19,NOMOD,          // v
	0x1a,NOMOD,          // w
	0x1b,NOMOD,          // x
	0x1c,NOMOD,          // y
	0x1d,NOMOD,          // z
	0x25,ALT|SHIFT,    // {
	0x0c,ALT,    // |
	0x26,ALT|SHIFT,    // }
	0x00,NOMOD,    // ~ - unsupported, since some systems requires it to be pressed twice, while others only one
	0,NOMOD				// DEL
};

#endif