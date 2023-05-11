
/**********************************************************************/
/* Author  : Osama Gamil 											  */
/* Date    : 29/4/2023 												  */
/* Version : V01									   				  */
/**********************************************************************/

#ifndef  GPIO_INTERFACE_H_
#define	 GPIO_INTERFACE_H_

typedef enum errorState_t{

	okval ,
	GPIOInvalidPort,
	GPIOInvalidPin

}ErrorState_t;



/*
 *
 * GPIO -> ODR
 *
 * */
/* MC Ports  */
#define  	GPIOA	            	1
#define  	GPIOB	            	2
#define  	GPIOC	            	3

#define      PIN0	            	0
#define      PIN1	            	1
#define      PIN2	            	2
#define      PIN3	            	3
#define      PIN4	            	4
#define      PIN5	            	5
#define      PIN6	            	6
#define      PIN7	            	7
#define      PIN8	            	8
#define      PIN9	            	9
#define      PIN10	            	10
#define      PIN11	            	11
#define      PIN12	            	12
#define      PIN13	            	13
#define      PIN14	            	14
#define      PIN15	            	15

/*Output values  */
#define MGPIO_OUTPUT_HIGH 			1
#define MGPIO_OUTPUT_LOW			0

/*Output pin modes */
#define MGPIO_PUSH_PULL				0
#define MGPIO_OPEN_DRIN				1

/*Outpin pin speed  */
#define MGPIO_LOW_SPED				0
#define MGPIO_MEDIUM_SPED			1
#define MGPIO_HIGH_SPED				2
#define MGPIO_VERY_SPED				3


/*input pin Mode */
#define MGPIO_INPUT_FLOAT			0
#define MGPIO_INPUT_PPUP			1
#define MGPIO_INPUT_PPDN			2

/*this function is to set the output pin mode  */
ErrorState_t MGPIO_ErrorState_tIniOutPin(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 Copy_PinMode , u8 Copy_u8Speed);

/*this function is to set the input pin mode  */
ErrorState_t MGPIO_ErrorState_tInInputPin(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 Copy_PinPP_PD );

/*this function is to get Pin value  */
ErrorState_t MGPIO_ErrorState_tGetPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 * Copy_Value);

/*this function is to set Pin value  */
ErrorState_t MGPIO_ErrorState_tSETPinValue(u8 Copy_u8PortID , u8 Copy_u8PinID ,u8 Copy_u8PinState);



#endif
