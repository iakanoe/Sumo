#ifndef SUMO32_GPIO_H
#define SUMO32_GPIO_H

#include "main.h"

#define setLED(n, v) write(LED ## n, v)
#define getBTN(n) (!read(BTN ## n))

#endif //SUMO32_GPIO_H
