/******************************************************************************
==========================BY MOHAMED_SAFWAT====================================
******************************************************************************/


#ifndef REG_H_
#define REG_H_
#include "Std_Types.h"
/******************************************************************************
==========================CLOCK_REGISTER====================================
******************************************************************************/
#define GENRAL_PURPOSE_RUN_MODE_OFFSET   (0x608)
#define GENRAL_PURPOSE_RUN_MODE_BASE     (0x400FE000)
#define RCGCGPIO_                        (*(volatile u32*)(GENRAL_PURPOSE_RUN_MODE_OFFSET + GENRAL_PURPOSE_RUN_MODE_BASE))
/***********_Timer_Clock_***********/
#define GENRAL_PURPOSE_TIMER_RUN_MODE_OFFSET   (0x604)
#define GENRAL_PURPOSE_TIMER_RUN_MODE_BASE     (0x400FE000)
#define RCGCTIMER_                     (*(volatile u32*)(GENRAL_PURPOSE_TIMER_RUN_MODE_OFFSET + GENRAL_PURPOSE_TIMER_RUN_MODE_BASE))
/***********_Timer0_Reg_********************/

/******************************************************************************
==========================GPIO_REGISTER====================================
******************************************************************************/
/*PORTS_ADDRESS*/
#define GPIO_DIR_OFFSET       (0x400)
#define GPIO_DATA_OFFSET      (0x000)
#define GPIO_DEN_OFFSET       (0x51C)
#define BIT_BRAND             (0x03FC)
#define GPIO_Pull_Down        (0x514)
													    
#define GPIO_PORTA_BASE       (0x40004000)
#define GPIO_PORTB_BASE       (0x40005000)
#define GPIO_PORTC_BASE       (0x40006000)
#define GPIO_PORTD_BASE       (0x40007000)
#define GPIO_PORTE_BASE       (0x40024000)
#define GPIO_PORTF_BASE       (0x40025000)

#define GPIO_PORTA_DIR        (*(volatile u32*)(GPIO_PORTA_BASE+GPIO_DIR_OFFSET))
#define GPIO_PORTB_DIR        (*(volatile u32*)(GPIO_PORTB_BASE+GPIO_DIR_OFFSET))
#define GPIO_PORTC_DIR        (*(volatile u32*)(GPIO_PORTC_BASE+GPIO_DIR_OFFSET))
#define GPIO_PORTD_DIR        (*(volatile u32*)(GPIO_PORTD_BASE+GPIO_DIR_OFFSET))
#define GPIO_PORTE_DIR        (*(volatile u32*)(GPIO_PORTE_BASE+GPIO_DIR_OFFSET))
#define GPIO_PORTF_DIR        (*(volatile u32*)(GPIO_PORTF_BASE+GPIO_DIR_OFFSET))
	
#define GPIO_PORTA_PDR        (*(volatile u32*)(GPIO_PORTA_BASE+GPIO_Pull_Down))
#define GPIO_PORTB_PDR        (*(volatile u32*)(GPIO_PORTB_BASE+GPIO_Pull_Down))
#define GPIO_PORTC_PDR        (*(volatile u32*)(GPIO_PORTC_BASE+GPIO_Pull_Down))
#define GPIO_PORTD_PDR        (*(volatile u32*)(GPIO_PORTD_BASE+GPIO_Pull_Down))
#define GPIO_PORTE_PDR        (*(volatile u32*)(GPIO_PORTE_BASE+GPIO_Pull_Down))
#define GPIO_PORTF_PDR        (*(volatile u32*)(GPIO_PORTF_BASE+GPIO_Pull_Down))
	

/*Data_Physical Addresses*/ 
#define GPIO_PORTA_DATA        (*(volatile u32*)(GPIO_PORTA_BASE+GPIO_DATA_OFFSET+BIT_BRAND))
#define GPIO_PORTB_DATA        (*(volatile u32*)(GPIO_PORTB_BASE+GPIO_DATA_OFFSET+BIT_BRAND))
#define GPIO_PORTC_DATA        (*(volatile u32*)(GPIO_PORTC_BASE+GPIO_DATA_OFFSET+BIT_BRAND))
#define GPIO_PORTD_DATA        (*(volatile u32*)(GPIO_PORTD_BASE+GPIO_DATA_OFFSET+BIT_BRAND))
#define GPIO_PORTE_DATA        (*(volatile u32*)(GPIO_PORTE_BASE+GPIO_DATA_OFFSET+BIT_BRAND))
#define GPIO_PORTF_DATA        (*(volatile u32*)(GPIO_PORTF_BASE+GPIO_DATA_OFFSET+BIT_BRAND))

/*Dagital _Enable _REGITER_ADDRESS*/
/*Physical Addresses*/ 
#define GPIO_PORTA_DEN        (*(volatile u32*)(GPIO_PORTA_BASE+GPIO_DEN_OFFSET))
#define GPIO_PORTB_DEN        (*(volatile u32*)(GPIO_PORTB_BASE+GPIO_DEN_OFFSET))
#define GPIO_PORTC_DEN        (*(volatile u32*)(GPIO_PORTC_BASE+GPIO_DEN_OFFSET))
#define GPIO_PORTD_DEN        (*(volatile u32*)(GPIO_PORTD_BASE+GPIO_DEN_OFFSET))
#define GPIO_PORTE_DEN        (*(volatile u32*)(GPIO_PORTE_BASE+GPIO_DEN_OFFSET))
#define GPIO_PORTF_DEN        (*(volatile u32*)(GPIO_PORTF_BASE+GPIO_DEN_OFFSET))



/******************************************************************************
==========================TIMER0_REGISTER====================================
******************************************************************************/
#define GPTM0_BASE                (0x40030000)
#define GPTM0_CONFIG_OFFSET        (0x000)
#define GPTM0_MODE_OFFSET          (0x004)
#define GPTM0_CONTROL_OFFSET       (0x00C)
#define GPTM0_INTMASK_OFFSET       (0x018)
#define GPTM0_INTCLEAR_OFFSET      (0x024)
#define GPTM0_INTSTATUS_OFFSET     (0x01C)
#define GPTM0_LOAD_OFFSET          (0x028)
#define GPTM0_PRESCALER_OFFSET     (0x038)
#define GPTM0_Masked_Interrupt_Status_OFFSET (0x20)

#define GPTMCFG_0                 (*(volatile u32*)(GPTM0_BASE + GPTM0_CONFIG_OFFSET))
#define GPTMTAMR_0                (*(volatile u32*)(GPTM0_BASE + GPTM0_MODE_OFFSET))
#define GPTMCTL_0                 (*(volatile u32*)(GPTM0_BASE + GPTM0_CONTROL_OFFSET))
#define GPTMIMR_0                 (*(volatile u32*)(GPTM0_BASE + GPTM0_INTMASK_OFFSET))
#define GPTMICR_0                 (*(volatile u32*)(GPTM0_BASE + GPTM0_INTCLEAR_OFFSET))
#define GPTMIAILR_0               (*(volatile u32*)(GPTM0_BASE + GPTM0_LOAD_OFFSET))
#define GPTMTAILR_0               (*(volatile u32*)(GPTM0_BASE + GPTM0_LOAD_OFFSET))
#define GPTMRIS_0                 (*(volatile u32*)(GPTM0_BASE + GPTM0_INTSTATUS_OFFSET))
#define GPTMTAPR_0                (*(volatile u32*)(GPTM0_BASE + GPTM0_PRESCALER_OFFSET))
#define GPTMMIS_0                 (*(volatile u32*)(GPTM0_BASE + GPTM0_Masked_Interrupt_Status_OFFSET))

/******************************************************************************
============================NVIC_REGISTER=====================================
******************************************************************************/
#define INT_EN0_OFFSET   (0x100)
#define INT_EN1_OFFSET   (0x104)
#define INT_EN2_OFFSET   (0x108)
#define INT_EN3_OFFSET   (0x10C)
#define INT_EN4_OFFSET   (0x110)
#define INT_EN_BASE     (0xE000E000)

#define INT_EN0          (*(volatile u32*)(INT_EN0_OFFSET + INT_EN_BASE))
#define INT_EN1          (*(volatile u32*)(INT_EN1_OFFSET + INT_EN_BASE))
#define INT_EN2          (*(volatile u32*)(INT_EN2_OFFSET + INT_EN_BASE))
#define INT_EN3          (*(volatile u32*)(INT_EN3_OFFSET + INT_EN_BASE))
#define INT_EN4          (*(volatile u32*)(INT_EN4_OFFSET + INT_EN_BASE))


#endif  /***REG_H_*****/ 
