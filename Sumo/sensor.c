#include "sensor.h"
#include "tim.h"

void initSensors(void) {
    HAL_TIM_Base_Start(&htim3);
    HAL_TIM_PWM_Start(&htim3, TIM_CHANNEL_1);
}