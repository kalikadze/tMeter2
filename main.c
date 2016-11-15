/*
 * tMeter2.c
 *
 * Created: 15. 11. 2016 18:54:10
 * Author : kali
 */ 

 #define F_CPU 1000000UL 

#include <avr/io.h>
#include <stdlib.h>
#include <string.h>
#include <avr/interrupt.h>
#include <util/delay.h>

#include "ds18b20/ds18b20.h"

#define UART_BAUD_RATE 2400
#include "uart/uart.h"

double temp = 0.00;



int main(void)
{
	

    while (1) 
    {
		temp  = ds18b20_gettemp();
		//_delay_ms(500);
		temp = 7;
    }
}

