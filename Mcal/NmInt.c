
/***********_INCLUDES_*************/
#include "NmInt.h"
/********_Function_defination_*********/
void M_NmInt_Int19Init(void)
{
	SetBit(INT_EN0,19); /*to enable timer0 sutimer A interrupt*/
}

