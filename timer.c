#include <avr/io.h>
#include <inttypes.h>


/**
 * @brief Creates ticks to measure time for the task scheduler
 * 
 */
void initSchedulerTimer(void)
{
    TCCR0 = _BV(CS01); //510us tick
    TIMSK |= _BV(TOIE0);
}