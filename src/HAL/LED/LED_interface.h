/*
 * LED_interface.h
 *
 *  Created on: 13May,2023
 *      Author: osama
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_


/****************   Error State   ***************/

typedef enum {
	NoError,
	invalidPinNumber,
	invaildPort,
	ForbiddenPinNumber
}Error_t;

/*****************Port Selection ************************/
#define HGPIOPA 		1
#define HGPIOPB 		2
#define HGPIOPC			3


/*****************Pin Selection ************************/

#define HPIN0			0
#define HPIN1			1
#define HPIN2			2
#define HPIN3			3
#define HPIN4			4
#define HPIN5			5
#define HPIN6			6
#define HPIN7			7
#define HPIN8			8
#define HPIN9			9
#define HPIN10			10
#define HPIN11			11
#define HPIN12			12
#define HPIN13			13
#define HPIN14			14
#define HPIN15			15

/*Select Active high or Active Low  */
#define PIN_ACTHIH		1
#define PIN_ACTLOW		2


/*Finction for inlization Pin */
Error_t LED_Error_tLedInit(u8 Copy_u8PortID , u8 Copy_u8PinID,u8 Copy_u8ActiveType);

/* Function is for Led On  */
Error_t LED_Error_tLedOn(u8 Copy_u8PortID , u8 Copy_u8PinID,u8 Copy_u8ActiveType);

/* Function is for Led Off */
Error_t LED_Error_tLedOFF(u8 Copy_u8PortID , u8 Copy_u8PinID,u8 Copy_u8ActiveType);



#endif /* HAL_LED_LED_INTERFACE_H_ */
