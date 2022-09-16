#ifndef SUMO32_BATTERY_H
#define SUMO32_BATTERY_H

#include "stm32f1xx_hal.h"

extern volatile uint16_t battery[2];

void initBattery(void);
uint8_t getMotorBatteryLevel(void);
uint8_t getLogicBatteryLevel(void);

#endif