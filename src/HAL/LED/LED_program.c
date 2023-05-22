/*
 * LED_program.c
 *
 *  Created on: 13May,2023
 *      Author: osama
 */

#ifndef LED_PROGRAM_C_
#define LED_PROGRAM_C_

#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"
#include "../../MCAL/MGPIO/GPIO_interface.h"

#include "LED_interface.h"
#include "LED_config.h"
#include "LED_private.h"

/*Finction for inlization Pin */
Error_t LED_Error_tLedInit(u8 Copy_u8PortID , u8 Copy_u8PinID,u8 Copy_u8ActiveType)
{
	Error_t Local_Error = NoError ;
	ErrorState_t Ret_ErrorForGPIO = OkNoErr;

	if(Copy_u8PinID > 15)
	{
		Local_Error = invalidPinNumber ;
	}
	else
	{
		switch (Copy_u8PortID)
		{
			case HGPIOPA :
			{
				switch(Copy_u8ActiveType)
				{
				case(PIN_ACTHIH):
					{
						if((Copy_u8PinID == 15)||(Copy_u8PinID == 13)||(Copy_u8PinID == 14))
						{
							Local_Error =ForbiddenPinNumber ;
						}
						else
						{
							/*Set the Pin Mode && speed fixed  */
							Ret_ErrorForGPIO = GPIO_ErrorStateInitOutputPin(GPIOA,Copy_u8PinID,MGPIO_PUSH_PULL, MGPIO_LOW_SPED);
							Ret_ErrorForGPIO = GPIO_ErrorState_tSetActiveType(GPIOA,Copy_u8PinID,PIN_ACTHIH);
						}
						break ;
					}
				case(PIN_ACTLOW):
					{
						if((Copy_u8PinID == 15)||(Copy_u8PinID == 13)||(Copy_u8PinID == 14))
						{
							Local_Error =ForbiddenPinNumber ;
						}
						else
						{
							/*Set the Pin Mode && speed fixed  */
							Ret_ErrorForGPIO = GPIO_ErrorStateInitOutputPin(GPIOA,Copy_u8PinID,MGPIO_PUSH_PULL, MGPIO_LOW_SPED);
							Ret_ErrorForGPIO = GPIO_ErrorState_tSetActiveType(GPIOA,Copy_u8PinID,PIN_ACTLOW);
						}
						break ;
					}

				}
				break;
			}
			case HGPIOPB :
			{
				if((Copy_u8PinID == 2)||(Copy_u8PinID == 3)||(Copy_u8PinID == 4))
					{
						Local_Error =ForbiddenPinNumber ;
					}
					else
					{
						/*Set the Pin Mode && speed fixed  */
						Ret_ErrorForGPIO = GPIO_ErrorStateInitOutputPin(GPIOB,Copy_u8PinID,MGPIO_PUSH_PULL, MGPIO_LOW_SPED);
					}
				break ;
			}
			case HGPIOPC :
			{
				Ret_ErrorForGPIO = GPIO_ErrorStateInitOutputPin(GPIOC,Copy_u8PinID,MGPIO_PUSH_PULL, MGPIO_LOW_SPED);

				break ;
			}
			default :
			{
				Local_Error = invaildPort ;
			}

		}
	}
	return Local_Error;
}

/* Function is for Led On  */
Error_t LED_Error_tLedOn(u8 Copy_u8PortID , u8 Copy_u8PinID,u8 Copy_u8ActiveType)
{
	Error_t Local_Error = NoError ;
	ErrorState_t Ret_ErrorForGPIO = OkNoErr;

	if(Copy_u8PinID > 15)
	{
		Local_Error = invalidPinNumber ;
	}
	else
	{
		switch (Copy_u8PortID)
		{
			case HGPIOPA :
			{
				if((Copy_u8PinID == 15)||(Copy_u8PinID == 13)||(Copy_u8PinID == 14))
				{
					Local_Error =ForbiddenPinNumber ;
				}
				else
				{
					if(Copy_u8ActiveType == PIN_ACTHIH)
					{
						/*Set the Pin Mode && speed fixed  */
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOA,Copy_u8PinID,MGPIO_OUTPUT_HIGH);

					}else if (Copy_u8ActiveType == PIN_ACTLOW)
					{
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOA,Copy_u8PinID,MGPIO_OUTPUT_LOW);
					}
				}
				break ;
			}
			case HGPIOPB :
			{
				if((Copy_u8PinID == 2)||(Copy_u8PinID == 3)||(Copy_u8PinID == 4))
					{
						Local_Error =ForbiddenPinNumber ;
					}
					else if(Copy_u8ActiveType == PIN_ACTHIH)
					{
							/*Set the Pin Mode && speed fixed  */
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOB,Copy_u8PinID,MGPIO_OUTPUT_HIGH);

					}else if (Copy_u8ActiveType == PIN_ACTLOW)
					{
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOB,Copy_u8PinID,MGPIO_OUTPUT_LOW);
					}
				break ;
			}
			case HGPIOPC :
			{
			if(Copy_u8ActiveType == PIN_ACTHIH)
			{
					/*Set the Pin Mode && speed fixed  */
				Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOC,Copy_u8PinID,MGPIO_OUTPUT_HIGH);

			}else if (Copy_u8ActiveType == PIN_ACTLOW)
			{
				Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOC,Copy_u8PinID,MGPIO_OUTPUT_LOW);
			}

				break ;
			}
			default :
			{
				Local_Error = invaildPort ;
			}

		}
	}
	return Local_Error;
}

/* Function is for Led Off */
Error_t LED_Error_tLedOFF(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 Copy_u8ActiveType)
{
	Error_t Local_Error = NoError ;
	ErrorState_t Ret_ErrorForGPIO = OkNoErr;

	if(Copy_u8PinID > 15)
	{
		Local_Error = invalidPinNumber ;
	}
	else
	{
		switch (Copy_u8PortID)
		{
			case HGPIOPA :
			{
				if((Copy_u8PinID == 15)||(Copy_u8PinID == 13)||(Copy_u8PinID == 14))
				{
					Local_Error =ForbiddenPinNumber ;
				}
				else
				{
					if(Copy_u8ActiveType == PIN_ACTHIH)
					{
						/*Set the Pin Mode && speed fixed  */
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOA,Copy_u8PinID,MGPIO_OUTPUT_LOW);

					}else if (Copy_u8ActiveType == PIN_ACTLOW)
					{
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOA,Copy_u8PinID,MGPIO_OUTPUT_HIGH);
					}
				}
				break ;
			}
			case HGPIOPB :
			{
				if((Copy_u8PinID == 2)||(Copy_u8PinID == 3)||(Copy_u8PinID == 4))
					{
						Local_Error =ForbiddenPinNumber ;
					}
					else if(Copy_u8ActiveType == PIN_ACTHIH)
					{
							/*Set the Pin Mode && speed fixed  */
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOB,Copy_u8PinID,MGPIO_OUTPUT_LOW);

					}else if (Copy_u8ActiveType == PIN_ACTLOW)
					{
						Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOB,Copy_u8PinID,MGPIO_OUTPUT_HIGH);
					}
				break ;
			}
			case HGPIOPC :
			{
			if(Copy_u8ActiveType == PIN_ACTHIH)
			{
					/*Set the Pin Mode && speed fixed  */
				Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOC,Copy_u8PinID,MGPIO_OUTPUT_LOW);

			}else if (Copy_u8ActiveType == PIN_ACTLOW)
			{
				Ret_ErrorForGPIO = GPIO_ErrorStateSetOutputPinValue(GPIOC,Copy_u8PinID,MGPIO_OUTPUT_HIGH);
			}

				break ;
			}
			default :
			{
				Local_Error = invaildPort ;
			}

		}
	}
	return Local_Error;
}


#endif /* HAL_LED_LED_PROGRAM_C_ */
