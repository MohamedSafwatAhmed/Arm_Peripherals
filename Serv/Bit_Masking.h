
/******************************************************************************
==========================BY MOHAMED_SAFWAT====================================
******************************************************************************/

/*Bit_Masking*/

#ifndef BIT_MASKING_H_
#define BIT_MASKING_H_

/**********************MACROS******************/


#define SetBit(Reg,Bit)     Reg|=(1<<Bit)
#define ClrBit(Reg,Bit)     Reg&=~(1<<Bit)
#define TogBit(Reg,Bit)     Reg^=(1<<Bit)
#define GetBit(Reg,Bit)     (1&(Reg>>Bit))


#endif /*BIT_MASKING_H_*/ 
