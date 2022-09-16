#ifndef SUMO32_MOTOR_H
#define SUMO32_MOTOR_H

#include "stm32f1xx_hal.h"

void initMotors(void);
void setMotors(int16_t left, int16_t right);

#endif //SUMO32_MOTOR_H
