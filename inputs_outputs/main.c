#define F_CPU 16000000 
#define __AVR_ATmega328P__  
#include <avr/io.h>
#include <util/delay.h> 

void pin_config()
{
    DDRD |= 0x40; //output bit 6
    PORTD &= 0x00;

}

void change_logic(volatile uint8_t* registrador)
{
    *registrador ^= 0x40; //xor bit 6 de la portd
    _delay_ms(100);

}

int main()
{
    pin_config();

    while (1)
    {
        if (PIND & 0x80) //bit 7
        {
            change_logic(&PORTD);
        }
        else
        {
            PORTD &= 0x00; //LED APAGADO
        }
        
    }

}