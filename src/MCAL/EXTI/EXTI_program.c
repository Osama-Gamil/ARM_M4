/*
 * EXTI_program.c
 *
 *  Created on: 19May,2023
 *      Author: osama
 */




#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "EXTI_private.h"
#include "EXTI_config.h"
#include "EXTI_interface.h"

/*line and mode  */
void MEXTI_voidInit(void)
{
	/*Mode and line  */
	#if EXTI_MODE == RASING
	 SET_BIT(EXTI-> RTSR ,EXTI_LINE);
	#elif EXTI_MODE == FALLING
	 SET_BIT(EXTI-> FTSR ,EXTI_LINE);
	#elif EXTI_MODE == ONCHANG
	 SET_BIT(EXTI-> FTSR ,EXTI_LINE);
	 SET_BIT(EXTI-> RTSR ,EXTI_LINE);
	#else
	#error "Worn Mode choice "

	#endif
	 /*Disable the interrupt */

	 CLR_BIT(EXTI-> IMR ,EXTI_LINE);
}

void MEXTI_voidEnable(u8 Copy_u8Line)
{
	 SET_BIT(EXTI-> IMR ,Copy_u8Line);
}
void MEXTI_voidDsable(u8 Copy_u8Line){

	CLR_BIT(EXTI-> IMR ,Copy_u8Line);
}

void MEXTI_voidSwTrigger(u8 Copy_u8Line)
{
	SET_BIT(EXTI-> SWIER ,Copy_u8Line);
}


void MEXTI_voidRunTimeInit(u8 Copy_u8Line ,u8 Copy_u8Mode)
{
	switch(Copy_u8Mode)
	{
	case RASING:
		 SET_BIT(EXTI-> RTSR ,Copy_u8Line);
		break;
	case FALLING:
		SET_BIT(EXTI-> FTSR ,Copy_u8Line);
		break;
	case ONCHANG:
		 SET_BIT(EXTI-> FTSR ,Copy_u8Line);
		 SET_BIT(EXTI-> RTSR ,Copy_u8Line);
		break;
	//default :
	//	break;
	}
}
