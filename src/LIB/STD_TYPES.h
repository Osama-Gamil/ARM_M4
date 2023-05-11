/**********************************************************************/
/* Author  : Osama Gamil 											  */
/* Date    : 28/4/2023 												  */
/* Version : V01									   				  */
/**********************************************************************/


#ifndef STD_TYPES_H
#define STD_TYPES_H
	// 1 byte data type 
typedef unsigned char u8;         	
typedef signed char s8;  

	// 2 byte data type           
typedef unsigned short int u16;
typedef signed short int s16;

	// 4 byte data type 
typedef unsigned long int u32;
typedef signed long int s32;

	//floating data type 
typedef float f32;
typedef double d64;
	//not comman used
typedef long double d128;



/*to check the return of ani function*/

#define OK  1
#define NOK 2


/*checking the null pointers */
#define NULL 		 0
#define NULL_POINTER 2

//
///*Mapping any value (y-y1/x-x1)=(y1-y2/x1-x2) Linear equation */
///*use signed number  */
//s32  Mappying(s32 X,s32 Y1,s32 X1,s32 Y2,s32 X2){
//	/*for return the value  */
//	s32 Local_u32YreturnValue;
//
//	/*local variable to help in equation */
//	s32 Copy_Hel1,Copy_Hel2,Copy_Hel3;
//
//	Copy_Hel1=(X-X1);
//	Copy_Hel2=(Y2-Y1);
//	Copy_Hel3=(X2-X1);
//
//	return Local_u32YreturnValue=((Copy_Hel1*Copy_Hel2)/Copy_Hel3)+Y1 ;
//
//
//}

#endif
