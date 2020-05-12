#ifndef HAL_GPIO_H_
#define HAL_GPIO_H_

#include <stdint.h>

#define OUTPUT 1
#define INPUT 0

#define GPIO_BASE 				0x40020000U

#define GPIOA_OFFSET 			0x00U
#define GPIOB_OFFSET			0x400U
#define GPIOC_OFFSET			0x800U
#define GPIOD_OFFSET 			0xC00U
#define GPIOE_OFFSET 			0x1000U
#define GPIOF_OFFSET 			0x1400U
#define GPIOG_OFFSET 			0x1800U
#define GPIOH_OFFSET 			0x1C00U


#define GPIOA_BASE 				(GPIO_BASE + GPIOA_OFFSET)
#define GPIOB_BASE 				(GPIO_BASE + GPIOB_OFFSET)
#define GPIOC_BASE				(GPIO_BASE + GPIOC_OFFSET)
#define GPIOD_BASE 				(GPIO_BASE + GPIOD_OFFSET)
#define GPIOE_BASE 				(GPIO_BASE + GPIOE_OFFSET)
#define GPIOF_BASE 				(GPIO_BASE + GPIOF_OFFSET)
#define GPIOG_BASE 				(GPIO_BASE + GPIOG_OFFSET)
#define GPIOH_BASE 				(GPIO_BASE + GPIOH_OFFSET)

#define GPIOx_MODER_OFFSET 		0x00U
#define GPIOx_OTYPER_OFFSET 	0x04U
#define GPIOx_OSPEEDR_OFFSET 	0x08U
#define GPIOx_PUPDR_OFFSET  	0x0CU
#define GPIOx_IDR_OFFSET  		0x10U
#define GPIOx_ODR_OFFSET  		0x14U
#define GPIOx_BSRR_OFFSET  		0x18U
#define GPIOx_LCKR_OFFSET  		0x1CU
#define GPIOx_AFRL_OFFSET  		0x20U
#define GPIOx_AFRH_OFFSET  		0x24U

#define GPIOA_MODER 			(GPIOA_BASE + GPIOx_MODER_OFFSET)
#define GPIOA_OTYPER 			(GPIOA_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOA_OSPEEDR 			(GPIOA_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOA_PUPDR 			(GPIOA_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOA_IDR  				(GPIOA_BASE + GPIOx_IDR_OFFSET)
#define GPIOA_ODR 				(GPIOA_BASE + GPIOx_ODR_OFFSET)
#define GPIOA_BSRR  			(GPIOA_BASE + GPIOx_BSRR_OFFSET)
#define GPIOA_LCKR 				(GPIOA_BASE + GPIOx_LCKR_OFFSET)
#define GPIOA_AFRL  			(GPIOA_BASE + GPIOx_AFRL_OFFSET)
#define GPIOA_AFRH  			(GPIOA_BASE + GPIOx_AFRH_OFFSET)

#define GPIOB_MODER  			(GPIOB_BASE + GPIOx_MODER_OFFSET)
#define GPIOB_OTYPER  			(GPIOB_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOB_OSPEEDR  			(GPIOB_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOB_PUPDR  			(GPIOB_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOB_IDR  				(GPIOB_BASE + GPIOx_IDR_OFFSET)
#define GPIOB_ODR 				(GPIOB_BASE + GPIOx_ODR_OFFSET)
#define GPIOB_BSRR  			(GPIOB_BASE + GPIOx_BSRR_OFFSET)
#define GPIOB_LCKR  			(GPIOB_BASE + GPIOx_LCKR_OFFSET)
#define GPIOB_AFRL  			(GPIOB_BASE + GPIOx_AFRL_OFFSET)
#define GPIOB_AFRH  			(GPIOB_BASE + GPIOx_AFRH_OFFSET)

#define GPIOC_MODER 			(GPIOC_BASE + GPIOx_MODER_OFFSET)
#define GPIOC_OTYPER 			(GPIOC_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOC_OSPEEDR 			(GPIOC_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOC_PUPDR 			(GPIOC_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOC_IDR  				(GPIOC_BASE + GPIOx_IDR_OFFSET)
#define GPIOC_ODR 				(GPIOC_BASE + GPIOx_ODR_OFFSET)
#define GPIOC_BSRR  			(GPIOC_BASE + GPIOx_BSRR_OFFSET)
#define GPIOC_LCKR 				(GPIOC_BASE + GPIOx_LCKR_OFFSET)
#define GPIOC_AFRL  			(GPIOC_BASE + GPIOx_AFRL_OFFSET)
#define GPIOC_AFRH  			(GPIOC_BASE + GPIOx_AFRH_OFFSET)

#define GPIOD_MODER  			(GPIOD_BASE + GPIOx_MODER_OFFSET)
#define GPIOD_OTYPER  			(GPIOD_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOD_OSPEEDR  			(GPIOD_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOD_PUPDR  			(GPIOD_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOD_IDR  				(GPIOD_BASE + GPIOx_IDR_OFFSET)
#define GPIOD_ODR 				(GPIOD_BASE + GPIOx_ODR_OFFSET)
#define GPIOD_BSRR  			(GPIOD_BASE + GPIOx_BSRR_OFFSET)
#define GPIOD_LCKR  			(GPIOD_BASE + GPIOx_LCKR_OFFSET)
#define GPIOD_AFRL  			(GPIOD_BASE + GPIOx_AFRL_OFFSET)
#define GPIOD_AFRH  			(GPIOD_BASE + GPIOx_AFRH_OFFSET)

#define GPIOE_MODER  			(GPIOE_BASE + GPIOx_MODER_OFFSET)
#define GPIOE_OTYPER  			(GPIOE_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOE_OSPEEDR  			(GPIOE_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOE_PUPDR  			(GPIOE_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOE_IDR  				(GPIOE_BASE + GPIOx_IDR_OFFSET)
#define GPIOE_ODR 				(GPIOE_BASE + GPIOx_ODR_OFFSET)
#define GPIOE_BSRR  			(GPIOE_BASE + GPIOx_BSRR_OFFSET)
#define GPIOE_LCKR  			(GPIOE_BASE + GPIOx_LCKR_OFFSET)
#define GPIOE_AFRL  			(GPIOE_BASE + GPIOx_AFRL_OFFSET)
#define GPIOE_AFRH  			(GPIOE_BASE + GPIOx_AFRH_OFFSET)

#define GPIOF_MODER  			(GPIOF_BASE + GPIOx_MODER_OFFSET)
#define GPIOF_OTYPER  			(GPIOF_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOF_OSPEEDR  			(GPIOF_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOF_PUPDR  			(GPIOF_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOF_IDR  				(GPIOF_BASE + GPIOx_IDR_OFFSET)
#define GPIOF_ODR 				(GPIOF_BASE + GPIOx_ODR_OFFSET)
#define GPIOF_BSRR  			(GPIOF_BASE + GPIOx_BSRR_OFFSET)
#define GPIOF_LCKR  			(GPIOF_BASE + GPIOx_LCKR_OFFSET)
#define GPIOF_AFRL  			(GPIOF_BASE + GPIOx_AFRL_OFFSET)
#define GPIOF_AFRH  			(GPIOF_BASE + GPIOx_AFRH_OFFSET)

#define GPIOG_MODER  			(GPIOG_BASE + GPIOx_MODER_OFFSET)
#define GPIOG_OTYPER  			(GPIOG_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOG_OSPEEDR  			(GPIOG_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOG_PUPDR  			(GPIOG_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOG_IDR  				(GPIOG_BASE + GPIOx_IDR_OFFSET)
#define GPIOG_ODR 				(GPIOG_BASE + GPIOx_ODR_OFFSET)
#define GPIOG_BSRR  			(GPIOG_BASE + GPIOx_BSRR_OFFSET)
#define GPIOG_LCKR  			(GPIOG_BASE + GPIOx_LCKR_OFFSET)
#define GPIOG_AFRL  			(GPIOG_BASE + GPIOx_AFRL_OFFSET)
#define GPIOG_AFRH  			(GPIOG_BASE + GPIOx_AFRH_OFFSET)

#define GPIOH_MODER  			(GPIOH_BASE + GPIOx_MODER_OFFSET)
#define GPIOH_OTYPER  			(GPIOH_BASE + GPIOx_OTYPER_OFFSET)
#define GPIOH_OSPEEDR  			(GPIOH_BASE + GPIOx_OSPEEDR_OFFSET)
#define GPIOH_PUPDR  			(GPIOH_BASE + GPIOx_PUPDR_OFFSET)
#define GPIOH_IDR  				(GPIOH_BASE + GPIOx_IDR_OFFSET)
#define GPIOH_ODR 				(GPIOH_BASE + GPIOx_ODR_OFFSET)
#define GPIOH_BSRR  			(GPIOH_BASE + GPIOx_BSRR_OFFSET)
#define GPIOH_LCKR  			(GPIOH_BASE + GPIOx_LCKR_OFFSET)
#define GPIOH_AFRL  			(GPIOH_BASE + GPIOx_AFRL_OFFSET)
#define GPIOH_AFRH  			(GPIOH_BASE + GPIOx_AFRH_OFFSET)


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
	uint32_t moder_0  :2;
	uint32_t moder_1  :2;
	uint32_t moder_2  :2;
	uint32_t moder_3  :2;
	uint32_t moder_4  :2;
	uint32_t moder_5  :2;
	uint32_t moder_6  :2;
	uint32_t moder_7  :2;
	uint32_t moder_8  :2;
	uint32_t moder_9  :2;
	uint32_t moder_10 :2;
	uint32_t moder_11 :2;
	uint32_t moder_12 :2;
	uint32_t moder_13 :2;
	uint32_t moder_14 :2;
	uint32_t moder_15 :2;
}GPIOx_MODER_t;

typedef struct{
	uint32_t outtype_0  :1;
	uint32_t outtype_1  :1;
	uint32_t outtype_2  :1;
	uint32_t outtype_3  :1;
	uint32_t outtype_4  :1;
	uint32_t outtype_5  :1;
	uint32_t outtype_6  :1;
	uint32_t outtype_7  :1;
	uint32_t outtype_8  :1;
	uint32_t outtype_9  :1;
	uint32_t outtype_10 :1;
	uint32_t outtype_11 :1;
	uint32_t outtype_12 :1;
	uint32_t outtype_13 :1;
	uint32_t outtype_14 :1;
	uint32_t outtype_15 :1;
	uint32_t reserved	:16;
}GPIOx_OTYPER_t;

typedef struct{
	uint32_t outspeed_0  :2;
	uint32_t outspeed_1  :2;
	uint32_t outspeed_2  :2;
	uint32_t outspeed_3  :2;
	uint32_t outspeed_4  :2;
	uint32_t outspeed_5  :2;
	uint32_t outspeed_6  :2;
	uint32_t outspeed_7  :2;
	uint32_t outspeed_8  :2;
	uint32_t outspeed_9  :2;
	uint32_t outspeed_10 :2;
	uint32_t outspeed_11 :2;
	uint32_t outspeed_12 :2;
	uint32_t outspeed_13 :2;
	uint32_t outspeed_14 :2;
	uint32_t outspeed_15 :2;
}GPIOx_OSPEEDR_t;

typedef struct{
	uint32_t pullupdown_0  :2;
	uint32_t pullupdown_1  :2;
	uint32_t pullupdown_2  :2;
	uint32_t pullupdown_3  :2;
	uint32_t pullupdown_4  :2;
	uint32_t pullupdown_5  :2;
	uint32_t pullupdown_6  :2;
	uint32_t pullupdown_7  :2;
	uint32_t pullupdown_8  :2;
	uint32_t pullupdown_9  :2;
	uint32_t pullupdown_10 :2;
	uint32_t pullupdown_11 :2;
	uint32_t pullupdown_12 :2;
	uint32_t pullupdown_13 :2;
	uint32_t pullupdown_14 :2;
	uint32_t pullupdown_15 :2;
}GPIOx_PUPDR_t;

typedef struct{
	uint32_t bitset_0	  :1;
	uint32_t bitset_1     :1;
	uint32_t bitset_2     :1;
	uint32_t bitset_3     :1;
	uint32_t bitset_4     :1;
	uint32_t bitset_5     :1;
	uint32_t bitset_6     :1;
	uint32_t bitset_7     :1;
	uint32_t bitset_8     :1;
	uint32_t bitset_9     :1;
	uint32_t bitset_10    :1;
	uint32_t bitset_11    :1;
	uint32_t bitset_12    :1;
	uint32_t bitset_13    :1;
	uint32_t bitset_14    :1;
	uint32_t bitset_15	  :1;
	uint32_t bitreset_0   :1;
	uint32_t bitreset_1   :1;
	uint32_t bitreset_2   :1;
	uint32_t bitreset_3   :1;
	uint32_t bitreset_4   :1;
	uint32_t bitreset_5   :1;
	uint32_t bitreset_6   :1;
	uint32_t bitreset_7   :1;
	uint32_t bitreset_8   :1;
	uint32_t bitreset_9   :1;
	uint32_t bitreset_10  :1;
	uint32_t bitreset_11  :1;
	uint32_t bitreset_12  :1;
	uint32_t bitreset_13  :1;
	uint32_t bitreset_14  :1;
	uint32_t bitreset_15  :1;
}GPIOx_BSRR_t;

typedef struct{
	uint32_t lockport_0  :1;
	uint32_t lockport_1  :1;
	uint32_t lockport_2  :1;
	uint32_t lockport_3  :1;
	uint32_t lockport_4  :1;
	uint32_t lockport_5  :1;
	uint32_t lockport_6  :1;
	uint32_t lockport_7  :1;
	uint32_t lockport_8  :1;
	uint32_t lockport_9  :1;
	uint32_t lockport_10 :1;
	uint32_t lockport_11 :1;
	uint32_t lockport_12 :1;
	uint32_t lockport_13 :1;
	uint32_t lockport_14 :1;
	uint32_t lockport_15 :1;
	uint32_t lock_key	 :2;
	uint32_t reserved	 :16;
}GPIOx_LCKR_t;

typedef struct{
	uint32_t alt_func_l_0  :4;
	uint32_t alt_func_l_1  :4;
	uint32_t alt_func_l_2  :4;
	uint32_t alt_func_l_3  :4;
	uint32_t alt_func_l_4  :4;
	uint32_t alt_func_l_5  :4;
	uint32_t alt_func_l_6  :4;
	uint32_t alt_func_l_7  :4;
}GPIOx_AFRL_t;

typedef struct{
	uint32_t alt_func_h_0  :4;
	uint32_t alt_func_h_1  :4;
	uint32_t alt_func_h_2  :4;
	uint32_t alt_func_h_3  :4;
	uint32_t alt_func_h_4  :4;
	uint32_t alt_func_h_5  :4;
	uint32_t alt_func_h_6  :4;
	uint32_t alt_func_h_7  :4;
}GPIOx_AFRH_t;

/*
typedef struct{
	GPIOx_IDR_t
	GPIOx_ODR_t
	GPIOx_MODER_t;
	GPIOx_OTYPER_t;
	GPIOx_OSPEEDR_t;
	GPIOx_PUPDR_t;
	GPIOx_BSRR_t;
	GPIOx_LCKR_t;
	GPIOx_AFRL_t;
	GPIOx_AFRH_t;
}GPIOx_t; */


//HOW DO I ASSIGN THE REGISTER POINTERS?
typedef struct{
	GPIOx_IDR_t 	volatile* const 	IDR;
	GPIOx_ODR_t 	volatile* const 	ODR;
	GPIOx_MODER_t 	volatile* const		MODER;
	GPIOx_OTYPER_t 	volatile* const		OTYPER;
	GPIOx_OSPEEDR_t volatile* const 	OSPEEDR;
	GPIOx_PUPDR_t 	volatile* const		PUPDR;
	GPIOx_BSRR_t 	volatile* const		BSRR;
	GPIOx_LCKR_t 	volatile* const		LCKR;
	GPIOx_AFRL_t 	volatile* const 	AFRL;
	GPIOx_AFRH_t 	volatile* const 	AFRH;
}GPIOx_t;

//Initialize
GPIOx_t GPIOA = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOA_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOA_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOA_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOA_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOA_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOA_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOA_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOA_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOA_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOA_AFRH
};
GPIOx_t GPIOB = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOB_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOB_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOB_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOB_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOB_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOB_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOB_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOB_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOB_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOB_AFRH
};
GPIOx_t GPIOC = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOC_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOC_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOC_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOC_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOC_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOC_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOC_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOC_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOC_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOC_AFRH
};
GPIOx_t GPIOD = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOD_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOD_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOD_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOD_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOD_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOD_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOD_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOD_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOD_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOD_AFRH
};
GPIOx_t GPIOE = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOE_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOE_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOE_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOE_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOE_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOE_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOE_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOE_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOE_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOE_AFRH
};
GPIOx_t GPIOF = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOF_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOF_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOF_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOF_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOF_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOF_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOF_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOF_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOF_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOF_AFRH
};
GPIOx_t GPIOG = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOG_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOG_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOG_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOG_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOG_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOG_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOG_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOG_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOG_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOG_AFRH
};
GPIOx_t GPIOH = {
	.IDR     =  (GPIOx_IDR_t*) 		GPIOH_IDR,
	.ODR     = 	(GPIOx_ODR_t*) 		GPIOH_ODR,
	.MODER	 = 	(GPIOx_MODER_t*) 	GPIOH_MODER,
	.OTYPER  =  (GPIOx_OTYPER_t*)	GPIOH_OTYPER,
	.OSPEEDR = 	(GPIOx_OSPEEDR_t*)	GPIOH_OSPEEDR,
	.PUPDR 	 = 	(GPIOx_PUPDR_t*) 	GPIOH_PUPDR,
	.BSRR 	 = 	(GPIOx_BSRR_t*) 	GPIOH_BSRR,
	.LCKR	 = 	(GPIOx_LCKR_t*) 	GPIOH_LCKR,
	.AFRL	 = 	(GPIOx_AFRL_t*)		GPIOH_AFRL,
	.AFRH	 = 	(GPIOx_AFRH_t*)		GPIOH_AFRH
};




#endif /* HAL_GPIO */
