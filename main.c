#define F_CPU 160000000UL
#include <avr/io.h>
#include "Driver/Buzzer/Buzzer.h"

int main(void)
{	
	Buzzer_init();
	Buzzer_powerOnSound();

    while (1) 
    {

    }
}

