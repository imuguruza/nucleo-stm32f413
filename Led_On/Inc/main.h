/*
 * main.h
 *
 * Store RCC, GPIO structs
 *
 *  Created on: Apr 22, 2020
 *      Author: inigo Muguruza
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct{
	uint32_t port_0   :1;
	uint32_t port_1   :1;
	uint32_t port_2   :1;
	uint32_t port_3   :1;
	uint32_t port_4   :1;
	uint32_t port_5   :1;
	uint32_t port_6   :1;
	uint32_t port_7   :1;
	uint32_t port_8   :1;
	uint32_t port_9   :1;
	uint32_t port_10  :1;
	uint32_t port_11  :1;
	uint32_t port_12  :1;
	uint32_t port_13  :1;
	uint32_t port_14  :1;
	uint32_t port_15  :1;
	uint32_t reserved :16;
}GPIOx_ODR_t;

typedef struct{
	uint32_t port_0   :1;
	uint32_t port_1   :1;
	uint32_t port_2   :1;
	uint32_t port_3   :1;
	uint32_t port_4   :1;
	uint32_t port_5   :1;
	uint32_t port_6   :1;
	uint32_t port_7   :1;
	uint32_t port_8   :1;
	uint32_t port_9   :1;
	uint32_t port_10  :1;
	uint32_t port_11  :1;
	uint32_t port_12  :1;
	uint32_t port_13  :1;
	uint32_t port_14  :1;
	uint32_t port_15  :1;
	uint32_t reserved :16;
}GPIOx_IDR_t;

typedef struct{
	uint32_t gpio_a_en  :1;
	uint32_t gpio_b_en  :1;
	uint32_t gpio_c_en  :1;
	uint32_t gpio_d_en  :1;
	uint32_t gpio_e_en  :1;
	uint32_t gpio_f_en  :1;
	uint32_t gpio_g_en  :1;
	uint32_t gpio_h_en  :1;
	uint32_t reserved   :4;
	uint32_t crc_en 	:1;
	uint32_t reserved1  :8;
	uint32_t dma1_en 	:1;
	uint32_t dma2_en 	:1;
	uint32_t reserved2	:9;
}RCC_AHB1ENR_t;

typedef struct{
	uint32_t moder_0 :2;
	uint32_t moder_1 :2;
	uint32_t moder_2 :2;
	uint32_t moder_3 :2;
	uint32_t moder_4 :2;
	uint32_t moder_5 :2;
	uint32_t moder_6 :2;
	uint32_t moder_7 :2;
	uint32_t moder_8 :2;
	uint32_t moder_9 :2;
	uint32_t moder_10 :2;
	uint32_t moder_11 :2;
	uint32_t moder_12 :2;
	uint32_t moder_13 :2;
	uint32_t moder_14 :2;
	uint32_t moder_15 :2;
}GPIOx_MODER_t;

#endif /* MAIN_H_ */
