/*
 * EXTI_interface.h
 *
 *  Created on: 19May,2023
 *      Author: osama
 */

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_

/*line and mode  */
void MEXTI_voidInit(void);

void MEXTI_voidEnable(u8 Copy_u8Line);
void MEXTI_voidDsable(u8 Copy_u8Line);

void MEXTI_voidSwTrigger(u8 Copy_u8Line);

void MEXTI_voidRunTimeInit(u8 Copy_u8Line ,u8 Copy_u8Mode);

#endif /* MCAL_EXTI_EXTI_INTERFACE_H_ */
