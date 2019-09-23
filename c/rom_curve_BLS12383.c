#include "arch.h"
#include "ecp_BLS12383.h"

/* Curve BLS12383 - Pairing friendly BLS curve */

#if CHUNK==16

#error Not supported

#endif

#if CHUNK==32

// Base Bits= 29

const int CURVE_A_BLS12383= 0;
const int CURVE_Cof_I_BLS12383= 0;
//const BIG_384_29 CURVE_Cof_BLS12383= {0x15169EAB,0xA82AB0A,0xAAEFFED,0x15558001,0x555,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const int CURVE_B_I_BLS12383= 15;
const BIG_384_29 CURVE_B_BLS12383= {0xF,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Order_BLS12383= {0x1EBC0001,0x1904CF5F,0x834E5CE,0xBE12B42,0xB381DE0,0xE40B4C,0x270110,0x10018017,0x1002001,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Gx_BLS12383= {0x8734573,0x623B9C8,0x1D1DC11E,0xBB7E107,0x1E3445C5,0x1D6C2578,0x10B0BE1E,0xED6103E,0x10F31D9F,0x296ED82,0x18E0D7D0,0x12F3D9C9,0x1FCBA55B,0x20};
const BIG_384_29 CURVE_Gy_BLS12383= {0x3F224,0x968B2F4,0x1FE63F48,0xFA93D90,0x14D2DDE5,0x54A56F5,0x12441D4C,0x18CD76C8,0x199D0DAD,0xE18E236,0x92BA73,0x99F6600,0x8F16727,0x3};

const BIG_384_29 CURVE_Bnx_BLS12383= {0x1001200,0x400000,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Cof_BLS12383= {0x10011FF,0x400000,0x40,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const BIG_384_29 CURVE_Cru_BLS12383= {0xEAAC2A9,0x61B3A81,0x17D974B7,0xBED0345,0xA341BC2,0x17A51A6F,0x5738948,0x69B7BAE,0x14605445,0x374A43,0x8116AD1,0x956DD69,0x16556956,0x2A};
const BIG_384_29 CURVE_Pxa_BLS12383= {0xD7F2D86,0x1E59DB1,0x17474F85,0x1FB56CF2,0x572EE81,0xE487AB1,0x96F51FC,0x190A5AAE,0x6432501,0x13E58F3A,0x101E6425,0xFD807D1,0x34D2240,0x3};
const BIG_384_29 CURVE_Pxb_BLS12383= {0x452DE15,0x1ECF20F6,0x1FF9837B,0x95651AA,0xD5D75B5,0x5D44749,0x12277F66,0x1DB3A0B9,0x1D24F498,0x19441B0E,0x1CDE9DC5,0x2C975,0xD78006,0x18};
const BIG_384_29 CURVE_Pya_BLS12383= {0x1408CB41,0x34785DC,0x3586597,0x13DBC9E4,0x1A2E75B4,0x1D65489,0xCF9A25E,0x1ACE7933,0x1B6E990E,0x19FF31A3,0x12527615,0x1A44A68F,0x1792CF93,0x19};
const BIG_384_29 CURVE_Pyb_BLS12383= {0x1F479093,0x16C2321B,0x1889218E,0x87961BC,0x1BC98B01,0x197A24FB,0xA3DEBC2,0x88D67DF,0x1CE0D,0x1E8AD3D7,0x93B9EE9,0x59B18D6,0xE5247DD,0x10};
const BIG_384_29 CURVE_W_BLS12383[2]= {{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}};
const BIG_384_29 CURVE_SB_BLS12383[2][2]= {{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}}};
const BIG_384_29 CURVE_WB_BLS12383[4]= {{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}};
const BIG_384_29 CURVE_BB_BLS12383[4][4]= {{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}},{{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0},{0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0}}};

#endif

#if CHUNK==64

// Base Bits= 58

const int CURVE_A_BLS12383= 0;
const int CURVE_Cof_I_BLS12383= 0;
//const BIG_384_58 CURVE_Cof_BLS12383= {0x150556155169EABL,0x2AAB0002AAEFFEDL,0x555L,0x0L,0x0L,0x0L,0x0L};
const int CURVE_B_I_BLS12383= 15;
const BIG_384_58 CURVE_B_BLS12383= {0xFL,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L};
const BIG_384_58 CURVE_Order_BLS12383= {0x32099EBFEBC0001L,0x17C25684834E5CEL,0x1C81698B381DE0L,0x2003002E0270110L,0x1002001L,0x0L,0x0L};
const BIG_384_58 CURVE_Gx_BLS12383= {0xC4773908734573L,0x176FC20FD1DC11EL,0x3AD84AF1E3445C5L,0x1DAC207D0B0BE1EL,0x52DDB050F31D9FL,0x25E7B3938E0D7D0L,0x41FCBA55BL};
const BIG_384_58 CURVE_Gy_BLS12383= {0x12D165E8003F224L,0x1F527B21FE63F48L,0xA94ADEB4D2DDE5L,0x319AED912441D4CL,0x1C31C46D99D0DADL,0x133ECC00092BA73L,0x68F16727L};

const BIG_384_58 CURVE_Bnx_BLS12383= {0x8000001001200L,0x40L,0x0L,0x0L,0x0L,0x0L,0x0L};
const BIG_384_58 CURVE_Cof_BLS12383= {0x80000010011FFL,0x40L,0x0L,0x0L,0x0L,0x0L,0x0L};
const BIG_384_58 CURVE_Cru_BLS12383= {0xC367502EAAC2A9L,0x17DA068B7D974B7L,0x2F4A34DEA341BC2L,0xD36F75C5738948L,0x6E94874605445L,0x12ADBAD28116AD1L,0x556556956L};
const BIG_384_58 CURVE_Pxa_BLS12383= {0x3CB3B62D7F2D86L,0x3F6AD9E57474F85L,0x1C90F562572EE81L,0x3214B55C96F51FCL,0x27CB1E746432501L,0x1FB00FA301E6425L,0x634D2240L};
const BIG_384_58 CURVE_Pxb_BLS12383= {0x3D9E41EC452DE15L,0x12ACA355FF9837BL,0xBA88E92D5D75B5L,0x3B6741732277F66L,0x3288361DD24F498L,0x592EBCDE9DC5L,0x300D78006L};
const BIG_384_58 CURVE_Pya_BLS12383= {0x68F0BB9408CB41L,0x27B793C83586597L,0x3ACA913A2E75B4L,0x359CF266CF9A25EL,0x33FE6347B6E990EL,0x34894D1F2527615L,0x33792CF93L};
const BIG_384_58 CURVE_Pyb_BLS12383= {0x2D846437F479093L,0x10F2C379889218EL,0x32F449F7BC98B01L,0x111ACFBEA3DEBC2L,0x3D15A7AE001CE0DL,0xB3631AC93B9EE9L,0x20E5247DDL};
const BIG_384_58 CURVE_W_BLS12383[2]= {{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}};
const BIG_384_58 CURVE_SB_BLS12383[2][2]= {{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}}};
const BIG_384_58 CURVE_WB_BLS12383[4]= {{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}};
const BIG_384_58 CURVE_BB_BLS12383[4][4]= {{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}},{{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L},{0x0L,0x0L,0x0L,0x0L,0x0L,0x0L,0x0L}}};

#endif