
/**************_INCLUDES_***********/
#include "Timer0.h"
#include "TM4C123.h"
/************_Declaration_********/

void (*CallBack)(void);  //Pointer to function 

/***********_FUNCTION_PROTOTYPES_***********/

void M_Timer0_Init(void)
{
	SetBit(RCGCTIMER_,0);           //to enable clock of timer 0
	ClrBit(GPTMCTL_0,0);            //To Disable timer 
	GPTMCFG_0 = 0x00;                //to choose 32 bit register
	SetBit(GPTMTAMR_0,1);           //to choose one peridoic Mode  
	GPTMTAPR_0=250-1;               // To Choose prescaler of  250
	ClrBit(GPTMTAMR_0,4);           //to count down 
	SetBit(GPTMIMR_0,0);            //to enable interrupt mask Time out 	
}


void M_Timer0_SetTime(u32 Target_Time)
{
	u16 local_u16_TotalTick=((u16)(Target_Time*64000)/(1000));  //to  calculate total tick
	GPTMTAILR_0 =local_u16_TotalTick;
	SetBit(GPTMICR_0,0); //Clear interrupt flag
}

void M_Timer0_Start(void)
{
SetBit(GPTMCTL_0,0); //To Start timer 
}

void M_Timer0_Stop(void)
{
	ClrBit(GPTMCTL_0,0); //To Disable timer 
}

void M_Timer0_SetCallBack(void (*ptr)(void))
{
	CallBack=ptr;
}

/******Timer0_ISR*******/

void TIMER0A_Handler(void)
{
if(GetBit(GPTMMIS_0,0)==1)
{
CallBack();
SetBit(GPTMICR_0,0); //Clear interrupt flag
}

}
 
