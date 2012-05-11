/*!
 * \file main.c
 *
 * \date Created on: 2012.05.01.
 * \author     Author: tomi
 *
 * Próba project Eclipse alatt
 */

//#define F_CPU 4000000L  /* 4 MHz CPU clock ATmega16 project*/

/** \addtogroup Led output definiciók
 *  @{
 */
#define LED_DIR DDRA	/*!< Led direction regiszter definició. */
#define LED_PORT PORTA	/*!< Led port regiszter definició. */
#define LED_PIN PA0		/*!< Led pin definició */
/** @}*/
#include <util/delay.h>
#include <avr/io.h>
#include "function.h"

/// Main függvény
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
