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

int main(void)
{

	const uint32_t GPIOB_PORTMODE = 0x40020400;
	const uint32_t GPIOC_PORTMODE = 0x40020800;
	const uint32_t GPIOC_PORT = 0x40020810;
	const uint32_t RCC_CLOCKEN = 0x40023830;
	const uint32_t GPIOB_OUT = 0x40020414;


	uint32_t* GPIOC_portmode = (uint32_t *) GPIOC_PORTMODE;
	uint32_t* GPIOC_portinput = (uint32_t *) GPIOC_PORT;
	uint32_t* GPIOB_portmode = (uint32_t *) GPIOB_PORTMODE;
	uint32_t* RCC_clocken = (uint32_t *) RCC_CLOCKEN;
	uint32_t* GPIOB_out = (uint32_t *) GPIOB_OUT;


	//Enable GPIOB clock, bit 1 to '1'
	*RCC_clocken |= (1 << 1); //Shift 1 two positions

	//Enable GPIOC clock, bit 1 to '1'
	*RCC_clocken |= (1 << 2); //Shift 1 two positions


	//Set GPIOB bank as output
	*GPIOB_portmode |= (1 << 28); //Enable PORTB14
	*GPIOB_portmode |= (1 << 14); //Enable PORTB7
	*GPIOB_portmode |= (1 << 0); //Enable PORTB0

	//Set GPIOC pin 13 (USER) as input
	*GPIOC_portmode &= ~(3 << 26);

	//Read GPIOC input value and shift till LSB
	uint8_t user_val = (uint8_t)(*GPIOC_portinput >> 13);

	while(1)
	{
		// Set ON/OFF LED1 depending user_val value
		(user_val) ? (*GPIOB_out |= (1 << 0)) : (*GPIOB_out &= ~(1 << 0));
		// Read again USER value
		user_val = (uint8_t)(*GPIOC_portinput >> 13);
	}

}

