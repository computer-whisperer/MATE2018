/* ledblink.c, an LED blinking program */
#include<avr/io.h>
#include<util/delay.h>
void sleep(uint8_t millisec)
{
        while(millisec)

        {
                _delay_ms(1);/* 1 ms delay */
                millisec--;
        }
}
int main()
{

        DDRD |=1<<PD2;  /* PC2 will now be the output pin */
        while(1)
        {
                PORTD &= ~(1<<PD2);/* PC2 LOW */
                sleep(100);/* 100 ms delay */

                PORTD |=(1<<PD2); /* PC2 HIGH */
                sleep(100);/* 100 ms delay */
        }
}
