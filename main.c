/*
 * main.c
 *
 *  Created on: 2012.05.01.
 *      Author: tomi
 *
 * Próba project Eclipse alatt
 */

//#define F_CPU 4000000L  /* 4 MHz CPU clock ATmega16 project*/

#define LED_DIR DDRA
#define LED_PORT PORTA
#define LED_PIN PA0

#include <util/delay.h>
#include <avr/io.h>
#include "function.h"

int main (void)
{
    //DDRA out;
	LED_DIR |= _BV(LED_PIN);

    while (1)                       /* loop forever */
    {
		ledON();
		_delay_ms(50);
		ledOff();
		_delay_ms(50);
    }
    return (0);
}
