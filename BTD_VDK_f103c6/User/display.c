#include "display.h"

void NUM(uint8_t num)
{
			HAL_GPIO_WritePin(BCD,NA,num%2);
			HAL_GPIO_WritePin(BCD,NB,(num/2)%2);
			HAL_GPIO_WritePin(BCD,NC,(num/4)%2);
			HAL_GPIO_WritePin(BCD,ND,(num/8)%2);
		if(num == 11)  					 // hien thi loi nhap sai password
		{
			HAL_GPIO_WritePin(BCD,NA,OFF);
			HAL_GPIO_WritePin(BCD,NB,OFF);
			HAL_GPIO_WritePin(BCD,NC,ON);
			HAL_GPIO_WritePin(BCD,ND,ON);
		}
		if(num == 10)    					// trang thai khong hien thi
		{
			HAL_GPIO_WritePin(BCD,NA,ON);
			HAL_GPIO_WritePin(BCD,NB,ON);
			HAL_GPIO_WritePin(BCD,NC,ON);
			HAL_GPIO_WritePin(BCD,ND,ON);
		}
}

void DISPLAY(unsigned char led[])
{

			HAL_GPIO_WritePin(LED,LED1,OFF);
			NUM(led[0]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED1,ON);
			
			HAL_GPIO_WritePin(LED,LED2,OFF);
			NUM(led[1]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED2,ON);
	
			HAL_GPIO_WritePin(LED,LED3,OFF);
			NUM(led[2]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED3,ON);
	
			HAL_GPIO_WritePin(LED,LED4,OFF);
			NUM(led[3]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED4,ON);
	
			HAL_GPIO_WritePin(LED,LED5,OFF);
			NUM(led[4]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED5,ON);
			
			HAL_GPIO_WritePin(LED,LED6,OFF);
			NUM(led[5]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED6,ON);
			
			HAL_GPIO_WritePin(LED,LED7,OFF);
			NUM(led[6]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED7,ON);
			
			HAL_GPIO_WritePin(LED,LED8,OFF);
			NUM(led[7]);
			HAL_Delay(5);
			HAL_GPIO_WritePin(LED,LED8,ON);
}



	
	
	
				
	
