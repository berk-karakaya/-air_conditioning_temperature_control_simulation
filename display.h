#ifndef DISPLAY_H
#define DISPLAY_H

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

void display_Init(void);
void display_power_on(void);
void display_power_off(void);
void display_write_to_screen(int32_t value);



#endif
