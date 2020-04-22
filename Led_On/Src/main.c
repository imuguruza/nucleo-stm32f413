/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Iñigo Muguruza (imuguruza)
 * @brief          : Read USER button of board and turn ON/OFF LD1
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

#include <stdint.h>
#include "main.h"

int main(void)
{

	const uint32_t GPIOB_PORTMODE = 0x40020400;
	const uint32_t GPIOC_PORTMODE = 0x40020800;
	const uint32_t GPIOC_IN = 0x40020810;
	const uint32_t RCC_CLOCKEN = 0x40023830;
	const uint32_t GPIOB_OUT = 0x40020414;

	GPIOx_MODER_t volatile* const GPIOB_mode = (GPIOx_MODER_t*) GPIOB_PORTMODE;
	GPIOx_MODER_t volatile* const GPIOC_mode = (GPIOx_MODER_t*) GPIOC_PORTMODE;
	GPIOx_ODR_t volatile* const GPIOB_out = (GPIOx_ODR_t*) GPIOB_OUT;
	GPIOx_IDR_t volatile* const GPIOC_in = (GPIOx_IDR_t*) GPIOC_IN;
	RCC_AHB1ENR_t volatile* const RCC_AHB1ENR = (RCC_AHB1ENR_t*) RCC_CLOCKEN;

	//Enable GPIOB clock, bit 1 to '1'
	RCC_AHB1ENR->gpio_b_en = 1;

	//Enable GPIOC clock, bit 1 to '1'
	RCC_AHB1ENR->gpio_c_en = 1;

	//Set GPIOBbank pins as output
	GPIOB_mode->moder_0 = 1;
	GPIOB_mode->moder_7 = 1;
	GPIOB_mode->moder_14 =1;

	//Set GPIOC pin 13 (USER) as input
	GPIOC_mode->moder_13 = 0;

	//Read GPIOC input value and shift till LSB;
	uint8_t user_val = (uint8_t)(GPIOC_in->port_13);

	while(1)
	{
		// Set ON/OFF LED1 depending user_val value
		(user_val) ? (GPIOB_out->port_0= 1): (GPIOB_out->port_0 = 0);
		// Read again USER value
		user_val = (uint8_t)(GPIOC_in->port_13);
	}

}
