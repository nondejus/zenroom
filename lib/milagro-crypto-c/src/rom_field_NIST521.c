#include "arch.h"
#include "fp_NIST521.h"

/* Curve NIST521 */

#if CHUNK==16

#error Not supported

#endif

#if CHUNK==32
// Base Bits= 28
const BIG_528_28 Modulus_NIST521= {0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0xFFFFFFF,0x1FFFF};
const BIG_528_28 R2modp_NIST521= {0x400000,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const chunk MConst_NIST521= 0x1;
#endif

#if CHUNK==64
// Base Bits= 60
const BIG_528_60 Modulus_NIST521= {0xFFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFFL,0xFFFFFFFFFFFFFFFL,0x1FFFFFFFFFFL};
const BIG_528_60 R2modp_NIST521= {0x4000000000L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};
const chunk MConst_NIST521= 0x1L;
#endif