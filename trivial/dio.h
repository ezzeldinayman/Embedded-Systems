/*
 * dio.h
 *
 * Created: 28-Sep-21 11:24:21 AM
 *  Author: ezz_a
 */ 


#ifndef DIO_H_
#define DIO_H_

void DIO_vsetPINDir(unsigned char portname, unsigned char pinnumber, unsigned char direction);
/*
This Function sets the pin direction in the DDRx register.
*/
void DIO_write(unsigned char portname, unsigned char pinnumber, unsigned char val);
/* This function writes on the port 1 or 0 */
void DIO_toggle(unsigned char portname,unsigned char pinnumber);
/* This function toggles PORTx Register Output */

#endif /* DIO_H_ */