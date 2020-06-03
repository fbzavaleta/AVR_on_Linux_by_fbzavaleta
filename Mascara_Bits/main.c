#define F_CPU 16000000 //clock 16Mhz
#define __AVR_ATmega328P__  //definicion del mcu
#include <avr/io.h> //ios del mcu
#include <util/delay.h> //rutinas de delay

/*Inicializar la puerta(direccion y nivel logico*/
void init_port()
{
    //direccion como salida
    DDRB = 0xFF;
    //definir nivel logico en 0V
    PORTB = 0x00;
}

void change_logic_xor(volatile uint8_t* registrador)
{
    *registrador ^= 0x20;
    _delay_ms(100);

}

void change_logic_masc(volatile uint8_t* registrador,int n)
{
    *registrador |= (1<<n); //5V
    _delay_ms(50);
    *registrador &= ~(1<<n); //Ov
    _delay_ms(50);

}


int main(void)
{
    //llamar funcion init
    init_port();

    while(1)
    {
        change_logic_masc(&PORTB,5); //5 --> led interno
    }
}