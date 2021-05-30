# 
CC=avr-gcc
CFLAGS= -g -Os -mmcu=atmega328p
LDFLAGS= -Wl,-Map=main.map
OBJCOPY=avr-objcopy
OBJDUMP=avr-objdump

all: msg main.hex 
     
msg: 
	@echo '1- Inicio de compilacao'

main.elf: main.o
	@echo '3- Geração do main.elf'
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

main.o: main.c 
	@echo '2- Geracao do main.o'
	$(CC) $(CFLAGS) -c $< -o $@ 

main.lst: main.elf
	$(OBJDUMP) -d $< > $@

main.hex: main.elf
	@echo '4 - Geração do main.hex'
	$(OBJCOPY) -j .text -j .data -O ihex $< $@

program: main.hex
	avrdude -p atmega328p -c arduino -P /dev/ttyACM0 -b 115200 -U flash:w:main.hex:i

clean:
	rm -rf main.o main.elf main.hex main.map
	