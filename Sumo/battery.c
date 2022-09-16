#include <math.h>
#include "battery.h"
#include "adc.h"

/*struct {
    uint16_t motor;
    uint16_t logic;
} battery;*/

volatile uint16_t battery[2];

double map(double x, double in_min, double in_max, double out_min, double out_max) {
    return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

void initBattery(void) {
    HAL_ADC_Start_DMA(&hadc1, (uint32_t *) battery, 2);
}

uint8_t getMotorBatteryLevel(void) {
    double volts = battery[0] * 18.81 / 4095;
    uint8_t steps = floor(map(volts, 0, 13, 0, 9));
    return steps;
}

uint8_t getLogicBatteryLevel(void) {
    double volts = battery[1] * 9.24 / 4095;
    return 0;
}

void HAL_ADC_ConvCpltCallback(ADC_HandleTypeDef *hadc) {
    UNUSED(hadc);
    __NOP();
}