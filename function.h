/*!
 * \file function.h
 *
 * \date Created on: 2012.05.01.
 * \author Author: tomi
 *
 * Led kezelő függvények definiciója
 */
#ifndef FUNCTION_H_
#define FUNCTION_H_

/*!
 *
 * Led bekapcsolása
 *
 */
inline void ledON(void)
{
	LED_PORT |= _BV(LED_PIN); // Led bekapcsolása
}

/*!
 * Led kikapcsolása
 */
inline void ledOff(void)
{
    LED_PORT&= ~_BV(LED_PIN);
}

#endif /* FUNCTION_H_ */
