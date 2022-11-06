#define KEYPAD_H

#include "stm32f1xx_hal.h"

#define outA(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, x)
#define outB(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, x)
#define outC(x) HAL_GPIO_WritePin(GPIOA, GPIO_PIN_6, x)

void PRESSKEY(unsigned char array[], uint8_t *t, uint8_t *enter); 		// ham quet phim
