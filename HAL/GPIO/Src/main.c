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

//------------------------------------
//TODO: Add this to header file
const uint32_t RCC_CLOCKEN = 0x40023830;
//---------------------------------------

int main(void)
{



	RCC_AHB1ENR_t volatile* const RCC_AHB1ENR = (RCC_AHB1ENR_t*) RCC_CLOCKEN;
	//Enable GPIOB clock, bit 1 to '1'
	RCC_AHB1ENR->gpio_b_en = 1;
	//Enable GPIOC clock, bit 1 to '1'
	RCC_AHB1ENR->gpio_c_en = 1;

	//Set PORT B pins to output
	GPIOB.MODER->moder_0 = OUTPUT;
	GPIOB.MODER->moder_7 = OUTPUT;
	GPIOB.MODER->moder_14 = OUTPUT;
	//Set PORT B
	GPIOC.MODER->moder_13 = INPUT;

	//Read GPIOC input value and shift till LSB;
	uint8_t user_val = (uint8_t)(GPIOC.IDR->port_13);


	while(1)
	{
		// Set ON/OFF LEDs depending user_val value
		(user_val) ? (GPIOB.ODR->port_0= 1): (GPIOB.ODR->port_0 = 0);
		// Read again USER value
		user_val = (uint8_t)(GPIOC.IDR->port_13);
	}

	return 0;
}

