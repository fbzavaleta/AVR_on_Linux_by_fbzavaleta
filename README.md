# AVR_on_Linux_by_fbzavaleta

Repositório oficial de mi curso de programación de microcontroladores AVR para usuarios Linux

link:https://www.youtube.com/watch?v=JUvc0qsOBSY&list=PLAHpxnGtTaZ4pR9T6SPtew5xFm4QgUD1n


#                                       
#        INTRODUCCIÓN          


Cuando se entra en el mundo de los sistema embutidos, el primer punto de atención son las inúmeras
IDEs de cada fabricante, que "obligan" al desarrollador a instalar en sus sistema operativo, sin
contar que la mayoría de softwares no es multiplataforma ni existe soporte para sistemas con Linux.
El presente repositorio contiene los códigos fuentes para la programación del firmware y la grabación
en el resppectivo microcontrolador, sin necesidad de utilizar la IDE oficial (AVR Studio).

ENJOY!!!!!


#                               #        
#             SETUP             #


Disponible: https://www.youtube.com/watch?v=SON6iVxlvyY

sudo apt update #Atualizar software

sudo apt-get install gcc-avr binutils-avr avr-libc     #Instalación de dependencias

whereis avr-gcc                                        #Identificando el path del compilador

whereis avr                                            #Identificando el path del toolchain

sudo apt-get install avrdude                           #Instalando el grabador

dmesg | grep tyy                                       #Identificando en que puerto serial esta conectado el microcontrolador
