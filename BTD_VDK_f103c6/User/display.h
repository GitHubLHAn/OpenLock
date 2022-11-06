#define DISPLAY_H

#include "stm32f1xx_hal.h"

// define cac chan led
#define LED			GPIOB
#define LED1		GPIO_PIN_1
#define LED2		GPIO_PIN_2
#define LED3		GPIO_PIN_3
#define LED4		GPIO_PIN_4
#define LED5		GPIO_PIN_5
#define LED6		GPIO_PIN_6
#define LED7		GPIO_PIN_7
#define LED8		GPIO_PIN_8

// define cac chan BCD
#define BCD			GPIOA
#define ND			GPIO_PIN_8
#define NC			GPIO_PIN_9
#define NB			GPIO_PIN_10
#define NA			GPIO_PIN_11

#define ON		GPIO_PIN_SET
#define OFF		GPIO_PIN_RESET

void NUM(unsigned char num);					// ham hien thi nut duoc nhan

void DISPLAY(unsigned char led[]);		// ham quet led

