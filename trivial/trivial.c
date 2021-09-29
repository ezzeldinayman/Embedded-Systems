/*
 * trivial.c
 *
 * Created: 24-Sep-21 11:00:01 AM
 *  Author: ezz_a
 */ 

#include "avr/io.h"
#include <util/delay.h>
#include "new_lib.h"
#include "dio.h"

int main(void)
{
	DIO_vsetPINDir('A',2,1);
    while(1)
    {
        //TODO:: Please write your application code
		DIO_toggle('A',2);
		_delay_ms(1000);
    }
}