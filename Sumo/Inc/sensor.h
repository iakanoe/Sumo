#ifndef SUMO32_SENSOR_H
#define SUMO32_SENSOR_H

#include "main.h"

void initSensors(void);

#define getIR(n) (!read(IR ## n))
#define getCNY(n) (!read(CNY ## n))

#endif //SUMO32_SENSOR_H