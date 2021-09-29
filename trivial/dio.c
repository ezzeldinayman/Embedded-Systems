/*
 * dio.c
 *
 * Created: 28-Sep-21 11:15:39 AM
 *  Author: ezz_a
 */ 

#include "new_lib.h"
#include "avr/io.h"

void DIO_vsetPINDir(unsigned char portname, unsigned char pinnumber, unsigned char direction)
{
	switch(portname)
	{
		case 'A':
		case 'a':
		{
			if(direction==1) SET_BIT(DDRA,pinnumber);
			else CLR_BIT(DDRA,pinnumber);
		}
		case 'B':
		case 'b':
		{
			if(direction==1) SET_BIT(DDRB,pinnumber);
			else CLR_BIT(DDRB,pinnumber);
		}
		case 'C':
		case 'c':
		{
			if(direction==1) SET_BIT(DDRC,pinnumber);
			else CLR_BIT(DDRC,pinnumber);
		}
		case 'D':
		case 'd':
		{
			if(direction==1) SET_BIT(DDRD,pinnumber);
			else CLR_BIT(DDRD,pinnumber);
		}
	}		
		
}


void DIO_write(unsigned char portname, unsigned char pinnumber, unsigned char val)
{
	switch(portname)
	{
		case 'A':
		case 'a':
		{
			if(val==1) SET_BIT(PORTA,pinnumber);
			else CLR_BIT(PORTA,pinnumber);
		}
		case 'B':
		case 'b':
		{
			if(val==1) SET_BIT(PORTB,pinnumber);
			else CLR_BIT(PORTB,pinnumber);
		}
		case 'C':
		case 'c':
		{
			if(val==1) SET_BIT(PORTC,pinnumber);
			else CLR_BIT(PORTC,pinnumber);
		}
		case 'D':
		case 'd':
		{
			if(val==1) SET_BIT(PORTD,pinnumber);
			else CLR_BIT(PORTD,pinnumber);
		}
	}
}

void DIO_toggle(unsigned char portname,unsigned char pinnumber)
{
		switch(portname)
		{
			case 'A':
			case 'a':
			{
				TOG_BIT(PORTA,pinnumber);
			}
			case 'B':
			case 'b':
			{
				TOG_BIT(PORTB,pinnumber);
			}
			case 'C':
			case 'c':
			{
				TOG_BIT(PORTC,pinnumber);
			}
			case 'D':
			case 'd':
			{
				TOG_BIT(PORTD,pinnumber);
			}
		}
}

