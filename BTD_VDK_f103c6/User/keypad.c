#include "keypad.h"

void PRESSKEY(unsigned char array[], uint8_t *t, uint8_t *enter)		// ham quet phim
{
		uint8_t keypress = 0;
    outA(GPIO_PIN_SET);
		outB(GPIO_PIN_SET);
		outC(GPIO_PIN_SET);
	
		outA(GPIO_PIN_RESET);
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)))										// nhan so 1
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)));
			keypress = 1;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1)))										// nhan so 4
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1)));
			keypress = 4;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2)))										// nhan so 7
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2)));
			keypress = 7;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3)))											// xoa 1 so 
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3)));
			if(t>0)
			{
				keypress = 10;
				(*t)--;
				array[*t] = keypress;
			}
    }
		outA(GPIO_PIN_SET);
//----------------------------------------------------------
		outB(GPIO_PIN_RESET);
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)))											// nhan so 2
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)));
			keypress = 2;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1)))											// nhan so 5
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1)));
			keypress = 5;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2)))											// nhan so 8
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2)));
			keypress = 8;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3)))										// nhan so 0
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3)));
			keypress = 0;
			array[*t] = keypress;
			(*t)++;
    }
		outB(GPIO_PIN_SET);
//---------------------------------------------------------- 	
		outC(GPIO_PIN_RESET);
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)))										// nhan so 3
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)));
			keypress = 3;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1)))											// nhan so 5
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_1)));
			keypress = 6;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2)))											// nhan so 9
    {
      while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_2)));
			keypress = 9;
			array[*t] = keypress;
			(*t)++;
    }
    if(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3)))											// nhan enter
    {
			while(!(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_3)));
			(*enter)=1;
    }
		outC(GPIO_PIN_SET);
}
