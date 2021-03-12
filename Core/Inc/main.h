/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32g4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "st7735.h"
#include "Lcd.h"
#include "fonts.h"
#include <string.h>

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */
extern	ADC_HandleTypeDef hadc1;
extern	ADC_HandleTypeDef hadc2;
extern	DMA_HandleTypeDef hdma_adc1;
extern	DMA_HandleTypeDef hdma_adc2;

extern	DAC_HandleTypeDef hdac1;
extern	DMA_HandleTypeDef hdma_dac1_ch1;
extern	DMA_HandleTypeDef hdma_dac1_ch2;

extern	I2C_HandleTypeDef hi2c1;

extern	SPI_HandleTypeDef hspi1;

extern	TIM_HandleTypeDef htim1;
extern	TIM_HandleTypeDef htim6;
extern	TIM_HandleTypeDef htim7;
extern	TIM_HandleTypeDef htim16;
/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define AIN0_Pin GPIO_PIN_0
#define AIN0_GPIO_Port GPIOF
#define AIN1_Pin GPIO_PIN_1
#define AIN1_GPIO_Port GPIOF
#define TACT0_Pin GPIO_PIN_10
#define TACT0_GPIO_Port GPIOG
#define AIN2_Pin GPIO_PIN_0
#define AIN2_GPIO_Port GPIOA
#define AIN3_Pin GPIO_PIN_1
#define AIN3_GPIO_Port GPIOA
#define SIGIN0_Pin GPIO_PIN_2
#define SIGIN0_GPIO_Port GPIOA
#define SIGIN1_Pin GPIO_PIN_3
#define SIGIN1_GPIO_Port GPIOA
#define DAC0_Pin GPIO_PIN_4
#define DAC0_GPIO_Port GPIOA
#define DAC1_Pin GPIO_PIN_5
#define DAC1_GPIO_Port GPIOA
#define AIN4_Pin GPIO_PIN_6
#define AIN4_GPIO_Port GPIOA
#define AIN5_Pin GPIO_PIN_7
#define AIN5_GPIO_Port GPIOA
#define AIN6_Pin GPIO_PIN_0
#define AIN6_GPIO_Port GPIOB
#define LCD_RESET_Pin GPIO_PIN_8
#define LCD_RESET_GPIO_Port GPIOA
#define TACT2_Pin GPIO_PIN_9
#define TACT2_GPIO_Port GPIOA
#define TACT1_Pin GPIO_PIN_10
#define TACT1_GPIO_Port GPIOA
#define LCD_DC_Pin GPIO_PIN_15
#define LCD_DC_GPIO_Port GPIOA
#define LCD_CS_Pin GPIO_PIN_4
#define LCD_CS_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define	BACKLIGHT_TIMER	htim16
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
