#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "display.h"
#include "motor.h"
#include "sensor.h"

void delay(void);
/*

********air conditioning temperature control simulation********

DISPLAY FUNCTIONS
- display_Init();
- display_power_on();
- display_power_off();
- display_write_to_screen();


MOTOR FUNCTIONS
- motor_Init();
- motor_power_on();
- motor_power_off();


SENSOR FUNCTIONS
- sensor_Init();
- sensor_get_temp_value();



*/

int main()
{

	int32_t get_value;
	display_Init();
	motor_Init();
	sensor_Init();

	while (1) 
	{                    


		get_value = sensor_get_temp_value();

		display_write_to_screen(get_value);

		if (get_value >= 25) {

			motor_power_on();


		}

		else {

			motor_power_off();

		}

		delay();
		delay();
		delay();

	}


	return 0;
}



void delay(void) {

	int64_t i;


	for (i = 0; i < 64000000; i++) {

	}

}


