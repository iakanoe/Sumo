#include "motor.h"
#include "main.h"
#include "tim.h"

void initMotors(void) {
    HAL_TIM_Base_Start(&htim2);
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_4);
}

void setMotors(int16_t left, int16_t right) {
    htim2.Instance->CCR4 = left < 0 ? -left : left;
    htim2.Instance->CCR1 = right < 0 ? -right : right;

    write(MOTL_A, left <= 0);
    write(MOTL_B, left >= 0);

    write(MOTR_A, right >= 0);
    write(MOTR_B, right <= 0);
}