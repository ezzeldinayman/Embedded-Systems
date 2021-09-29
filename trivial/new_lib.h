/*
 * new_lib.h
 *
 * Created: 26-Sep-21 4:51:50 PM
 *  Author: ezz_a
 */ 


#ifndef NEW_LIB_H_
#define NEW_LIB_H_

#define SET_BIT(reg,pin)	reg|=(1<<pin)
#define CLR_BIT(reg,pin)	reg&=!(1<<pin)
#define TOG_BIT(reg,pin)	reg^=(1<<pin)




#endif /* NEW_LIB_H_ */