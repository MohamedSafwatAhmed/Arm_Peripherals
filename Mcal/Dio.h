/******************************************************************************
==========================BY MOHAMED_SAFWAT====================================
******************************************************************************/

#ifndef DIO_H_
#define DIO_H_
/***************_INCLUDES_************/

#include "Std_Types.h"
#include "Bit_Masking.h"
#include "Reg.h"
/***************_MACROS_***********/

/********_PORT_**************/

#define A     1
#define B     2
#define C     3
#define D     4
#define E     5
#define F     6

/************_PORT_PINS_*****************/
enum{
PA0_Pin =10,PA1_Pin,PA2_Pin,PA3_Pin,PA4_Pin,PA5_Pin,PA6_Pin,PA7_Pin,
PB0_Pin =20,PB1_Pin,PB2_Pin,PB3_Pin,PB4_Pin,PB5_Pin,PB6_Pin,PB7_Pin,
PC0_Pin =30,PC1_Pin,PC2_Pin,PC3_Pin,PC4_Pin,PC5_Pin,PC6_Pin,PC7_Pin,
PD0_Pin =40,PD1_Pin,PD2_Pin,PD3_Pin,PD4_Pin,PD5_Pin,PD6_Pin,PD7_Pin,
PE0_Pin =50,PE1_Pin,PE2_Pin,PE3_Pin,PE4_Pin,PE5_Pin,PE6_Pin,PE7_Pin,
PF0_Pin =60,PF1_Pin,PF2_Pin,PF3_Pin,PF4_Pin,PF5_Pin,PF6_Pin,PF7_Pin};

#define LOW     0
#define HIGH    1
#define INPUT   1
#define OUTPUT  2

/************_API_TYPES_*****************/

#define Dio_PinType           u8
#define Dio_Pin               u8
#define Dio_PortType          u8
#define Dio_Level             u8

/************_FUNCTIONS_PROTOTYPES_*****************/

void M_Dio_PinMode(Dio_Pin,Dio_PinType);
Dio_Level M_Dio_PinRead(Dio_Pin);
void Dio_PinWrite(Dio_Pin,Dio_Level);

#endif /**DIO_H_**/
