// hardware-specific definitions
// (C) 2011 Ian Daniher (Nonolith Labs) <ian@nonolithlabs.com>
// Licensed under the terms of the GNU GPLv3+


// MCP4922 flags
#define DACFLAG_CHANNEL (1<<3)
#define DACFLAG_BUF     (1<<2)
#define DACFLAG_NO_MULT_REF (1<<1)
#define DACFLAG_ENABLE  (1<<0)    

// DAC-specific pinmappings
#define DAC_SHDN  (1 << 2)
#define LDAC	(1 << 3)
#define CS	(1 << 4)
#define SCK (1 << 5)
#define TXD1 (1 << 7)

// PORTC is mapped to VPORT0 for speed
inline void CS_LO(void) ATTR_ALWAYS_INLINE;
inline void CS_LO(void){VPORT0.OUT &= ~CS;}
inline void CS_HI(void) ATTR_ALWAYS_INLINE;
inline void CS_HI(void){VPORT0.OUT |= CS;}


// generic pinmappings
#define SHDN_INS_A	(1 << 5)
#define SWMODE_A	(1 << 3)
#define SWMODE_B	(1 << 2)
#define SHDN_INS_B	(1 << 1)
#define EN_OPA_A	(1 << 0)
#define EN_OPA_B	(1 << 0)
#define TFLAG_A	(1 << 4)
#define	TFLAG_B	(1 << 1)
#define ISET_B	(1 << 3)
#define ISET_A	(1 << 2)

