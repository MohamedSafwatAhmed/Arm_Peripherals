/*************************/

/**************_INCLUDES_**************/
#include "Dio.h"
/**************_FUNCTIONS_DEFINATIONS_*********/


/*******************_Mode_Function_*******************/



void M_Dio_PinMode(Dio_Pin Pin_Name,Dio_PinType Pin_Mode)
	{
	
	u8 Pin_Number = Pin_Name % 10;
	u8 Port = Pin_Name / 10;
	
/*****************************_ENABLE_CLOCK_*************************************/
	switch(Port)
				 {
  					case 1:  SetBit(RCGCGPIO_,0);            break;    /*To enable GPIOA Clock*/
				    case 2:  SetBit(RCGCGPIO_,1);            break;    /*To enable GPIOB Clock*/
				    case 3:  SetBit(RCGCGPIO_,2);            break;    /*To enable GPIOC Clock*/
				    case 4:  SetBit(RCGCGPIO_,3);            break;    /*To enable GPIOD Clock*/
				    case 5:  SetBit(RCGCGPIO_,4);            break;    /*To enable GPIOE Clock*/
				    case 6:  SetBit(RCGCGPIO_,5);            break;    /*To enable GPIOF Clock*/
					  default :                                break;    
				 }
					 
	switch(Pin_Mode)
	{
		case OUTPUT:  
	       switch(Port)
				 {
					  case 1:  SetBit(GPIO_PORTA_DIR,Pin_Number);                 /*Enable port A As Output*/
                     SetBit(GPIO_PORTA_DEN,Pin_Number);      break;     /*Enable port A As Digital*/
																					 
				    case 2:  SetBit(GPIO_PORTB_DIR,Pin_Number);									/*Enable port B As Output*/
										 SetBit(GPIO_PORTB_DEN,Pin_Number);      break;     /*Enable port B As Digital*/
																					 
				    case 3:  SetBit(GPIO_PORTC_DIR,Pin_Number);									/*Enable port C As Output*/
										 SetBit(GPIO_PORTB_DEN,Pin_Number);      break;     /*Enable port C As Digital*/
																					 
				    case 4:  SetBit(GPIO_PORTD_DIR,Pin_Number);									/*Enable port D As Output*/
										 SetBit(GPIO_PORTD_DEN,Pin_Number);      break;     /*Enable port D As Digital*/
																					 
				    case 5:  SetBit(GPIO_PORTE_DIR,Pin_Number);									/*Enable port E As Output*/
                     SetBit(GPIO_PORTE_DEN,Pin_Number);      break;     /*Enable port E As Digital*/
																					 
				    case 6:  SetBit(GPIO_PORTF_DIR,Pin_Number);									/*Enable port F As Output*/
										 SetBit(GPIO_PORTF_DEN,Pin_Number);      break;     /*Enable port F As Digital*/
				    
					  default :                                        break;
				 }
    break;
	  case INPUT:
			switch(Port)
				 {
					  case 1:  ClrBit(GPIO_PORTA_DIR,Pin_Number);                  /*Enable port A As Input*/
                     SetBit(GPIO_PORTA_DEN,Pin_Number);      break;     /*Enable port A As Digital*/
																					 
				    case 2:  ClrBit(GPIO_PORTB_DIR,Pin_Number);									/*Enable port B As Input*/
										 SetBit(GPIO_PORTB_DEN,Pin_Number);      break;     /*Enable port B As Digital*/
																					 
				    case 3:  ClrBit(GPIO_PORTC_DIR,Pin_Number);									/*Enable port C As Input*/
										 SetBit(GPIO_PORTB_DEN,Pin_Number);      break;     /*Enable port C As Digital*/
																					
				    case 4:  ClrBit(GPIO_PORTD_DIR,Pin_Number);									/*Enable port D As Input*/
										 SetBit(GPIO_PORTD_DEN,Pin_Number);      break;     /*Enable port D As Digital*/
																					 
				    case 5:  ClrBit(GPIO_PORTE_DIR,Pin_Number);									/*Enable port E As Input*/
                     SetBit(GPIO_PORTE_DEN,Pin_Number);      break;     /*Enable port E As Digital*/
																					 
				    case 6:  ClrBit(GPIO_PORTF_DIR,Pin_Number);									/*Enable port F As Input*/
										 SetBit(GPIO_PORTF_DEN,Pin_Number);      break;     /*Enable port F As Digital*/
					  default :                               break;
				 }
			
		break;
		
		default: 
			
		break;
	}
}

/****************************_Reading_Functions_*************************/
Dio_Level M_Dio_PinRead(Dio_Pin Pin_Name)
{
u8 Pin_Number = Pin_Name % 10;
	u8 Port = Pin_Name / 10;
	Dio_Level Reading =0;
 switch(Port)
	 {
						case 1: Reading = GetBit(GPIO_PORTA_DATA,Pin_Number);   break;
				    case 2: Reading = GetBit(GPIO_PORTB_DATA,Pin_Number);   break;
				    case 3: Reading = GetBit(GPIO_PORTC_DATA,Pin_Number);   break;
				    case 4: Reading = GetBit(GPIO_PORTD_DATA,Pin_Number);   break;
				    case 5: Reading = GetBit(GPIO_PORTE_DATA,Pin_Number);   break;
				    case 6: Reading = GetBit(GPIO_PORTF_DATA,Pin_Number);   break;
					  default :                                               break;
		}
	 return Reading; 
}


/**************************_Write_Function_***************************/
void Dio_PinWrite(Dio_Pin Pin_Name,Dio_Level Pin_Level)
{
	u8 Pin_Number = Pin_Name % 10;
	u8 Port = Pin_Name / 10;
	switch(Pin_Level)
	{
		case HIGH:
	       switch(Port)
				 {
					  case 1:  SetBit(GPIO_PORTA_DATA,Pin_Number);   break;
				    case 2:  SetBit(GPIO_PORTB_DATA,Pin_Number);   break;
				    case 3:  SetBit(GPIO_PORTC_DATA,Pin_Number);   break;
				    case 4:  SetBit(GPIO_PORTD_DATA,Pin_Number);   break;
				    case 5:  SetBit(GPIO_PORTE_DATA,Pin_Number);   break;
				    case 6:  SetBit(GPIO_PORTF_DATA,Pin_Number);   break;
					  default :                                    break;
				 }
    break;
	  case LOW:
			switch(Port)
				 {
					  case 1:  ClrBit(GPIO_PORTA_DATA,Pin_Number);   break;
				    case 2:  ClrBit(GPIO_PORTB_DATA,Pin_Number);   break;
				    case 3:  ClrBit(GPIO_PORTC_DATA,Pin_Number);   break;
				    case 4:  ClrBit(GPIO_PORTD_DATA,Pin_Number);   break;
				    case 5:  ClrBit(GPIO_PORTE_DATA,Pin_Number);   break;
				    case 6:  ClrBit(GPIO_PORTF_DATA,Pin_Number);   break;
					  default :                                    break;
				 }
			
		break;
		
		default:                                             	break;
	}
}
