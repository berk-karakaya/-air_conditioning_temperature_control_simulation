#ifndef SENSOR_H
#define SENSOR_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "sensor.h"   

void sensor_Init(void);
int32_t sensor_get_temp_value(void);

#endif
