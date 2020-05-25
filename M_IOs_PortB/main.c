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

int main(void)
{
    //llamar funcion init
    init_port();

    while(1){
        //cambiar el nivel logico a 5V
        PORTB |= 0x20; //PORTB = PORTB | 0X20
        _delay_ms(50);
        PORTB &= 0x00; //portb=portb & 0x00
        _delay_ms(50);
    }
    

}