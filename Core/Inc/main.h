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
#define IR2_Pin GPIO_PIN_13
#define IR2_GPIO_Port GPIOC
#define IR1_Pin GPIO_PIN_14
#define IR1_GPIO_Port GPIOC
#define CNY1_Pin GPIO_PIN_15
#define CNY1_GPIO_Port GPIOC
#define V_MOT_Pin GPIO_PIN_0
#define V_MOT_GPIO_Port GPIOA
#define V_LOGIC_Pin GPIO_PIN_1
#define V_LOGIC_GPIO_Port GPIOA
#define MOTL_B_Pin GPIO_PIN_2
#define MOTL_B_GPIO_Port GPIOA
#define MOTL_EN_Pin GPIO_PIN_3
#define MOTL_EN_GPIO_Port GPIOA
#define MOTL_A_Pin GPIO_PIN_4
#define MOTL_A_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_5
#define LED2_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_6
#define LED1_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_7
#define LED3_GPIO_Port GPIOA
#define LED4_Pin GPIO_PIN_0
#define LED4_GPIO_Port GPIOB
#define LED5_Pin GPIO_PIN_1
#define LED5_GPIO_Port GPIOB
#define BTN1_Pin GPIO_PIN_2
#define BTN1_GPIO_Port GPIOB
#define LED6_Pin GPIO_PIN_10
#define LED6_GPIO_Port GPIOB
#define LED7_Pin GPIO_PIN_12
#define LED7_GPIO_Port GPIOB
#define LED8_Pin GPIO_PIN_13
#define LED8_GPIO_Port GPIOB
#define BTN3_Pin GPIO_PIN_14
#define BTN3_GPIO_Port GPIOB
#define LED9_Pin GPIO_PIN_15
#define LED9_GPIO_Port GPIOB
#define MOTR_B_Pin GPIO_PIN_11
#define MOTR_B_GPIO_Port GPIOA
#define MOTR_A_Pin GPIO_PIN_12
#define MOTR_A_GPIO_Port GPIOA
#define MOTR_EN_Pin GPIO_PIN_15
#define MOTR_EN_GPIO_Port GPIOA
#define CNY2_Pin GPIO_PIN_3
#define CNY2_GPIO_Port GPIOB
#define SQ38KHZ_Pin GPIO_PIN_4
#define SQ38KHZ_GPIO_Port GPIOB
#define IR7_Pin GPIO_PIN_5
#define IR7_GPIO_Port GPIOB
#define IR6_Pin GPIO_PIN_6
#define IR6_GPIO_Port GPIOB
#define IR5_Pin GPIO_PIN_7
#define IR5_GPIO_Port GPIOB
#define IR4_Pin GPIO_PIN_8
#define IR4_GPIO_Port GPIOB
#define IR3_Pin GPIO_PIN_9
#define IR3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

enum {
    IR1, IR2, IR3, IR4, IR5, IR6, IR7,
    CNY1, CNY2,
    LED1, LED2, LED3, LED4, LED5, LED6, LED7, LED8, LED9,
    BTN1, BTN3,
    MOTL_A, MOTL_B,
    MOTR_A, MOTR_B
};

#define read(x) HAL_GPIO_ReadPin(x ## _GPIO_Port, x ## _Pin)
#define write(x, value) HAL_GPIO_WritePin(x ## _GPIO_Port, x ## _Pin, value)

void setup(void);
void loop(void);

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
