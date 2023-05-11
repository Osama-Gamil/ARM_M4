
/**********************************************************************/
/* Author  : Osama Gamil 											  */
/* Date    : 29/4/2023 												  */
/* Version : V01									   				  */
/**********************************************************************/


#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

/*it is in AHB1 */
/*
	0x4001 1400 - 0x4001 17FF GPIO Port D
	0x4001 1000 - 0x4001 13FF GPIO Port C
	0x4001 0C00 - 0x4001 0FFF GPIO Port B
	0x4001 0800 - 0x4001 0BFF GPIO Port A
*/ 
typedef struct {
	u32 MODER   ;  /*This Register is to set the mode of any pin */
	u32 OTYPER  ;  /*This Register is to set the type of output pins [PP/OD] */
	u32 OSPEEDR ;  /*This Register is to set the speed of any pin */
	u32 PUPDR   ;  /*This Register is to select weather pull up or pull down input */
	u32 IDR     ;  /*This Register is to get the value of input  */
	u32 ODR     ;  /*This Register is to set the value of output value  */
	u32 BSRR    ;
	u32 LCKR    ;
	u32 AFRL    ;
	u32 AFRH    ;
}MGPIO_REG_t;

#define MGPIOA			((volatile MGPIO_REG_t *)(0x40020000))
#define MGPIOB 			((volatile MGPIO_REG_t *)(0x40020400))
#define MGPIOC			((volatile MGPIO_REG_t *)(0x40020800))


//#define GPIOA_MODER				*(( u32 * )(GPIOA_BASE_ADDRESS + 0x00))
//#define GPIOA__OTYPER				*(( u32 * )(GPIOA_BASE_ADDRESS + 0x04))
//#define GPIOA_OSPEEDR				*(( u32 *)(GPIOA_BASE_ADDRESS + 0x08))
//#define GPIOA_PUPDR				*(( u32 * )(GPIOA_BASE_ADDRESS + 0x0C))
//#define GPIOA_IDR					*(( u32 * )(GPIOA_BASE_ADDRESS + 0x10))
//#define GPIOA_ODR					*(( u32 * )(GPIOA_BASE_ADDRESS + 0x14))
//#define GPIOA_BSRR				*(( u32 * )(GPIOA_BASE_ADDRESS + 0x18))
//#define GPIOA_LCKR				*(( u32 * )(GPIOA_BASE_ADDRESS + 0x1C))
//#define GPIOA_AFRL				*(( u32 * )(GPIOA_BASE_ADDRESS + 0x20))
//#define GPIOA_AFRH				*(( u32 * )(GPIOA_BASE_ADDRESS + 0x24))

//#define  GPIOB_MODER				*(( u32 * )(GPIOB_BASE_ADDRESS + 0x00))
//#define  GPIOB__OTYPER			*(( u32 * )(GPIOB_BASE_ADDRESS + 0x04))
//#define  GPIOB_OSPEEDR			*(( u32 * )(GPIOB_BASE_ADDRESS + 0x08))
//#define  GPIOB_PUPDR				*(( u32 * )(GPIOB_BASE_ADDRESS + 0x0C))
//#define  GPIOB_IDR				*(( u32 * )(GPIOB_BASE_ADDRESS + 0x10))
//#define  GPIOB_ODR				*(( u32 * )(GPIOB_BASE_ADDRESS + 0x14))
//#define  GPIOB_BSRR				*(( u32 * )(GPIOB_BASE_ADDRESS + 0x18))
//#define  GPIOB_ALCKR				*(( u32 * )(GPIOB_BASE_ADDRESS + 0x1C))
//#define  GPIOB_AFRL				*(( u32 * )(GPIOB_BASE_ADDRESS + 0x20))
//#define  GPIOB_AFRH			   	*((u32  * )(GPIOB_BASE_ADDRESS + 0x24))


//#define GPIOC_MODER				*(( u32 * )(GPIOC_BASE_ADDRESS + 0x00))
//#define GPIOC__OTYPER				*(( u32 * )(GPIOC_BASE_ADDRESS + 0x04))
//#define GPIOC_OSPEEDR				*(( u32 * )(GPIOC_BASE_ADDRESS + 0x08))
//#define GPIOC_PUPDR				*(( u32 * )(GPIOC_BASE_ADDRESS + 0x0C))
//#define GPIOC_IDR					*(( u32 * )(GPIOC_BASE_ADDRESS + 0x10))
//#define GPIOC_ODR					*(( u32 * )(GPIOC_BASE_ADDRESS + 0x14))
//#define GPIOC_BSRR				*(( u32 * )(GPIOC_BASE_ADDRESS + 0x18))
//#define GPIOC_ALCKR				*(( u32 * )(GPIOC_BASE_ADDRESS + 0x1C))
//#define GPIOC_AFRL				*(( u32 * )(GPIOC_BASE_ADDRESS + 0x20))
//#define GPIOC_AFRH			    *((u32 *  )(GPIOC_BASE_ADDRESS + 0x24))





#endif
