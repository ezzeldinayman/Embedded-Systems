/*
 * myio.h
 *
 * Created: 26-Sep-21 4:59:33 PM
 *  Author: ezz_a
 */ 


#ifndef MYIO_H_
#define MYIO_H_

#define DDRA *(volatile unsigned char*)(0x3A) //dereference the 8 bits in the address 0x3A (DDRA Register)
#define DDRB *(volatile unsigned char*)(0x37)
#define DDRC *(volatile unsigned char*)(0x34)
#define DDRA *(volatile unsigned char*)(0x31)

#define PORTA *(volatile unsigned char*)(0x3B)
#define PORTB *(volatile unsigned char*)(0x38)
#define PORTC *(volatile unsigned char*)(0x35)
#define PORTD *(volatile unsigned char*)(0x32)

#define PINA *(volatile unsigned char*)(0x39)
#define PINB *(volatile unsigned char*)(0x36)
#define PINC *(volatile unsigned char*)(0x33)
#define PIND *(volatile unsigned char*)(0x30)



#endif /* MYIO_H_ */