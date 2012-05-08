/*
 * function.h
 *
 *  Created on: 2012.05.01.
 *      Author: tomi
 */

#ifndef FUNCTION_H_
#define FUNCTION_H_

static inline void ledON(void)
{
	LED_PORT |= _BV(LED_PIN);
}

static inline void ledOff(void)
{
    LED_PORT&= ~_BV(LED_PIN);
}

#endif /* FUNCTION_H_ */
