/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define inA_Pin GPIO_PIN_0
#define inA_GPIO_Port GPIOA
#define inB_Pin GPIO_PIN_1
#define inB_GPIO_Port GPIOA
#define inC_Pin GPIO_PIN_2
#define inC_GPIO_Port GPIOA
#define inD_Pin GPIO_PIN_3
#define inD_GPIO_Port GPIOA
#define outA_Pin GPIO_PIN_4
#define outA_GPIO_Port GPIOA
#define outB_Pin GPIO_PIN_5
#define outB_GPIO_Port GPIOA
#define outC_Pin GPIO_PIN_6
#define outC_GPIO_Port GPIOA
#define l1_Pin GPIO_PIN_1
#define l1_GPIO_Port GPIOB
#define l2_Pin GPIO_PIN_2
#define l2_GPIO_Port GPIOB
#define ND_Pin GPIO_PIN_8
#define ND_GPIO_Port GPIOA
#define NC_Pin GPIO_PIN_9
#define NC_GPIO_Port GPIOA
#define NB_Pin GPIO_PIN_10
#define NB_GPIO_Port GPIOA
#define NA_Pin GPIO_PIN_11
#define NA_GPIO_Port GPIOA
#define l3_Pin GPIO_PIN_3
#define l3_GPIO_Port GPIOB
#define l4_Pin GPIO_PIN_4
#define l4_GPIO_Port GPIOB
#define l5_Pin GPIO_PIN_5
#define l5_GPIO_Port GPIOB
#define l6_Pin GPIO_PIN_6
#define l6_GPIO_Port GPIOB
#define l7_Pin GPIO_PIN_7
#define l7_GPIO_Port GPIOB
#define l8_Pin GPIO_PIN_8
#define l8_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
