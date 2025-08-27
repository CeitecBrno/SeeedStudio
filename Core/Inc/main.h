/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2021 STMicroelectronics.
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
#include "stm32wlxx_hal.h"

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
#define RTC_PREDIV_A ((1<<(15-RTC_N_PREDIV_S))-1)
#define RTC_N_PREDIV_S 10
#define RTC_PREDIV_S ((1<<RTC_N_PREDIV_S)-1)
#define LED2_Pin GPIO_PIN_15
#define LED2_GPIO_Port GPIOA
#define LED1_Pin GPIO_PIN_15
#define LED1_GPIO_Port GPIOB
#define ADC_OUT_CUR_Pin GPIO_PIN_3
#define ADC_OUT_CUR_GPIO_Port GPIOB
#define ADC_IN_VOLT_Pin GPIO_PIN_4
#define ADC_IN_VOLT_GPIO_Port GPIOB
#define HDC_SDA_Pin GPIO_PIN_7
#define HDC_SDA_GPIO_Port GPIOB
#define ADC_OUT_VOLT_Pin GPIO_PIN_14
#define ADC_OUT_VOLT_GPIO_Port GPIOB
#define RS485_RX_Pin GPIO_PIN_10
#define RS485_RX_GPIO_Port GPIOA
#define VCC_OUT_EN_Pin GPIO_PIN_0
#define VCC_OUT_EN_GPIO_Port GPIOA
#define ADC_TEMP_Pin GPIO_PIN_13
#define ADC_TEMP_GPIO_Port GPIOB
#define RS485_TX_Pin GPIO_PIN_6
#define RS485_TX_GPIO_Port GPIOB
#define HDC_SCL_Pin GPIO_PIN_9
#define HDC_SCL_GPIO_Port GPIOA
#define RS485_RE_Pin GPIO_PIN_1
#define RS485_RE_GPIO_Port GPIOC
#define RS485_DE_Pin GPIO_PIN_0
#define RS485_DE_GPIO_Port GPIOC
#define RF_CTRL1_Pin GPIO_PIN_4
#define RF_CTRL1_GPIO_Port GPIOA
#define RF_CTRL2_Pin GPIO_PIN_5
#define RF_CTRL2_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
