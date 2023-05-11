/**********************************************************************/
/* Author  : Osama Gamil 											  */
/* Date    : 29/4/2023 												  */
/* Version : V01									   				  */
/**********************************************************************/


#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


/*
you can use Set bit but you will use 4 Set bit for every pin 
but this way is more easy way  
*/
#define GPIO_OUTPUT		1
#define GPIO_INPUT      0

/*to clear 2 bit  */
#define CLR_GPIO_BIT	3
/* to clear one bit */
#define CLR_GPIO_1BIT	1

/*this function is to set the output pin mode  */
ErrorState_t MGPIO_ErrorState_tIniOutPin(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 Copy_PinMode , u8 Copy_u8Speed){

	ErrorState_t Local_StateError  ;

	switch(Copy_u8PortID)
	{
		case (GPIOA) :
		{

			/* CLR mode first then make it output */
			MGPIOA->MODER &= ~(CLR_GPIO_BIT <<(2*Copy_u8PinID));
			MGPIOA->MODER |=  (GPIO_OUTPUT << (2*Copy_u8PinID));

			/*Set speed  */
			MGPIOA->OSPEEDR &= ~(CLR_GPIO_BIT << (2*Copy_u8PinID));
			MGPIOA->OSPEEDR |=  (Copy_u8Speed << (2*Copy_u8PinID));

			/*Set the pin type  */
//			GPIOA->OTYPER &= ~(CLR_GPIO_1BIT << (Copy_u8PinID));
//			GPIOA->OTYPER |=  (Copy_u8Speed << (Copy_u8PinID));
			/*another way to set pin */
			WRT_BIT( MGPIOA->OTYPER ,Copy_u8PinID,Copy_PinMode );
			break ;
		}
		case (GPIOB):
		{
			/* CLR mode first then make it output */
			MGPIOB->MODER &= ~(CLR_GPIO_BIT <<(2*Copy_u8PinID));
			MGPIOB->MODER |=  (GPIO_OUTPUT << (2*Copy_u8PinID));

			/*Set speed  */
			MGPIOB->OSPEEDR &= ~(CLR_GPIO_BIT << (2*Copy_u8PinID));
			MGPIOB->OSPEEDR |=  (Copy_u8Speed << (2*Copy_u8PinID));


			/*another way to set pin */
			WRT_BIT( MGPIOB->OTYPER ,Copy_u8PinID , Copy_PinMode );
			break ;
		}
		case (GPIOC):
		{
			/* CLR mode first then make it output */
			MGPIOC->MODER &= ~(CLR_GPIO_BIT <<(2*Copy_u8PinID));
			MGPIOC->MODER |=  (GPIO_OUTPUT << (2*Copy_u8PinID));

			/*Set speed  */
			MGPIOC->OSPEEDR &= ~(CLR_GPIO_BIT << (2*Copy_u8PinID));
			MGPIOC->OSPEEDR |=  (Copy_u8Speed << (2*Copy_u8PinID));

			/*Set the pin type  */

			WRT_BIT( (MGPIOC->OTYPER) , Copy_u8PinID , Copy_PinMode );
			break ;
		}
		default :
		{
			Local_StateError = GPIOInvalidPort ;
			break;
		}

	}
	return Local_StateError;
}

/*this function is to set the input pin mode  */
ErrorState_t MGPIO_ErrorState_tInInputPin(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 Copy_PinPP_PD ){

}

/*this function is to get Pin value  */
ErrorState_t MGPIO_ErrorState_tGetPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 * Copy_Value){

}

/*this function is to set Pin value  */
ErrorState_t MGPIO_ErrorState_tSETPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 Copy_u8PinState){

	switch(Copy_u8PortID)
	{
		case (GPIOA): WRT_BIT(MGPIOA->ODR ,Copy_u8PinID , Copy_u8PinState); break;
		case (GPIOB): WRT_BIT(MGPIOB->ODR ,Copy_u8PinID , Copy_u8PinState); break;
		case (GPIOC): WRT_BIT(MGPIOC->ODR ,Copy_u8PinID , Copy_u8PinState); break;


	}
}

