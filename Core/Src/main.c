/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */
void bai2(){
      HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	  HAL_Delay(5000);
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	  HAL_Delay(2000);
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	  HAL_Delay(3000);
}
void Bai3(int count){
	if (count >= 7){
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
  }else if (count >= 5) {
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
  }else if (count >= 0) {
	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
  }

  if (count >= 5){
	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
  }else if (count >= 2) {
	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
  }else if (count >= 0) {
	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
  }
  count--;
  if (count == -1) count = 10;
  HAL_Delay(1000);
}

void seg_0_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
}
void seg_1_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
}
void seg_2_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, SET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
}
void seg_3_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
}
void seg_4_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, SET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
}
void seg_5_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
}
void seg_6_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, SET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
}
void seg_7_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, SET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, SET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, SET);
}
void seg_8_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, RESET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
}
void seg_9_2(){
	HAL_GPIO_WritePin(a2_GPIO_Port, a2_Pin, RESET);
	HAL_GPIO_WritePin(b2_GPIO_Port, b2_Pin, RESET);
	HAL_GPIO_WritePin(c2_GPIO_Port, c2_Pin, RESET);
	HAL_GPIO_WritePin(d2_GPIO_Port, d2_Pin, RESET);
	HAL_GPIO_WritePin(e2_GPIO_Port, e2_Pin, SET);
	HAL_GPIO_WritePin(f2_GPIO_Port, f2_Pin, RESET);
	HAL_GPIO_WritePin(g2_GPIO_Port, g2_Pin, RESET);
}
void seg_0(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
}
void seg_1(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
}
void seg_2(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, SET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
}
void seg_3(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
}
void seg_4(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, SET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
}
void seg_5(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
}
void seg_6(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, SET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
}
void seg_7(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, SET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, SET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, SET);
}
void seg_8(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, RESET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
}
void seg_9(){
	HAL_GPIO_WritePin(a1_GPIO_Port, a1_Pin, RESET);
	HAL_GPIO_WritePin(b1_GPIO_Port, b1_Pin, RESET);
	HAL_GPIO_WritePin(c1_GPIO_Port, c1_Pin, RESET);
	HAL_GPIO_WritePin(d1_GPIO_Port, d1_Pin, RESET);
	HAL_GPIO_WritePin(e1_GPIO_Port, e1_Pin, SET);
	HAL_GPIO_WritePin(f1_GPIO_Port, f1_Pin, RESET);
	HAL_GPIO_WritePin(g1_GPIO_Port, g1_Pin, RESET);
}

void Bai4_1(int a){
	switch (a) {
	case 0:
		seg_0();
		break;
	case 1:
		seg_1();
		break;
	case 2:
		seg_2();
		break;
	case 3:
		seg_3();
		break;
	case 4:
		seg_4();
		break;
	case 5:
		seg_5();
		break;
	case 6:
		seg_6();
		break;
	case 7:
		seg_7();
		break;
	case 8:
		seg_8();
		break;
	default:
		seg_9();
	}
}
void Bai4_2(int a){
	switch (a) {
	case 0:
		seg_0_2();
		break;
	case 1:
		seg_1_2();
		break;
	case 2:
		seg_2_2();
		break;
	case 3:
		seg_3_2();
		break;
	case 4:
		seg_4_2();
		break;
	case 5:
		seg_5_2();
		break;
	case 6:
		seg_6_2();
		break;
	case 7:
		seg_7_2();
		break;
	case 8:
		seg_8_2();
		break;
	default:
		seg_9_2();
	}
}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int count = 0;
  while (1)
  {
    /* USER CODE END WHILE */
	  if (count >= 7){
	  	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, SET);
	  	  Bai4_1(count - 6);
	    }else if (count >= 5) {
	  	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, SET);
	  	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	  	  Bai4_1(count - 4);
	    }else if (count >= 0) {
	  	  HAL_GPIO_WritePin(LED_RED_GPIO_Port, LED_RED_Pin, SET);
	  	  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_GREEN_GPIO_Port, LED_GREEN_Pin, RESET);
	  	  Bai4_1(count + 1);
	    }

	    if (count >= 5){
	  	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
	  	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
	  	  Bai4_2(count - 4);
	    }else if (count >= 2) {
	  	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, SET);
	  	  Bai4_2(count - 1);
	    }else if (count >= 0) {
	  	  HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
	  	  HAL_GPIO_WritePin(LED_YELLOW2_GPIO_Port, LED_YELLOW2_Pin, SET);
	  	  HAL_GPIO_WritePin(LED_GREEN2_GPIO_Port, LED_GREEN2_Pin, RESET);
	  	  Bai4_2(count + 1);
	    }

	    count--;
	    if (count == -1) count = 9;
	    HAL_Delay(1000);
    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|a1_Pin
                          |b1_Pin|c1_Pin|d1_Pin|e1_Pin
                          |f1_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_RED2_Pin|LED_YELLOW2_Pin|LED_GREEN2_Pin|g1_Pin
                          |a2_Pin|b2_Pin|c2_Pin|d2_Pin
                          |e2_Pin|f2_Pin|g2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_Pin LED_YELLOW_Pin LED_GREEN_Pin a1_Pin
                           b1_Pin c1_Pin d1_Pin e1_Pin
                           f1_Pin */
  GPIO_InitStruct.Pin = LED_RED_Pin|LED_YELLOW_Pin|LED_GREEN_Pin|a1_Pin
                          |b1_Pin|c1_Pin|d1_Pin|e1_Pin
                          |f1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_RED2_Pin LED_YELLOW2_Pin LED_GREEN2_Pin g1_Pin
                           a2_Pin b2_Pin c2_Pin d2_Pin
                           e2_Pin f2_Pin g2_Pin */
  GPIO_InitStruct.Pin = LED_RED2_Pin|LED_YELLOW2_Pin|LED_GREEN2_Pin|g1_Pin
                          |a2_Pin|b2_Pin|c2_Pin|d2_Pin
                          |e2_Pin|f2_Pin|g2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
