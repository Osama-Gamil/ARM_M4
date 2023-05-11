/**********************************************************************/
/* Author  : Osama Gamil 											  */
/* Date    : 28/4/2023 												  */
/* Version : V01									   				  */
/**********************************************************************/


#ifndef BIT_MATH_H
#define BIT_MATH_H

//function get bit
#define GET_BIT(REG,BIT_NU) (	(REG>>BIT_NU)&1)

//set bit 
#define SET_BIT(REG,BIT_NU) (REG |=( 1 <<  (BIT_NU)	) )

//clear bit 
#define CLR_BIT(REG,BIT_NU) (REG&=(~(1<<BIT_NU)))

//togle 
#define TGL_BIT(REG,BIT_NU) (REG^=(1<<BIT_NU))

#define WRT_BIT(VAR,BIT,BIT_VALUE)  (VAR = (BIT_VALUE<<BIT) | (VAR &= (~(1<<BIT))))

#endif
