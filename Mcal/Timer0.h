/******************************************************************************
==========================BY MOHAMED_SAFWAT====================================
******************************************************************************/

#ifndef TIMER0_H_
#define TIMER0_H_


/*********_INCLUDES_**************/
#include "Std_Types.h"
#include "Bit_Masking.h"
#include "Reg.h"

/***********_FUNCTIONS_DIFINATION_**********/
void M_Timer0_Init(void);
void M_Timer0_SetTime(u32);
void M_Timer0_Start(void);
void M_Timer0_Stop(void);
void M_Timer0_SetCallBack(void (*)(void));   /*for CallBack functions*/ 

#endif /*TIMER0_H_*/
