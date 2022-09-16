#include "main.h"
#include "motor.h"
#include "sensor.h"
#include "gpio.h"
#include "battery.h"

void setup(void) {
    initSensors();
    initMotors();
    //initBattery();
}

void loop(void) {
    uint16_t motors = battery[1];
    setLED(1, motors >= 0);
    setLED(2, motors >= 100);
    setLED(3, motors >= 200);
    setLED(4, motors >= 300);
    setLED(5, motors >= 1000);
    setLED(6, motors >= 2000);
    setLED(7, motors >= 3000);
    setLED(8, motors >= 3700);
    setLED(9, motors >= 3800);
}

void test(void) {
    char btn1 = getBTN(1);
    char btn3 = getBTN(3);

    char cny1 = getCNY(1);
    char cny2 = getCNY(2);

    char ir1 = getIR(1);
    char ir2 = getIR(2);
    char ir3 = getIR(3);
    char ir4 = getIR(4);
    char ir5 = getIR(5);
    char ir6 = getIR(6);
    char ir7 = getIR(7);

    setLED(1, btn1 || btn3 || cny1);
    setLED(2, btn1 || btn3 || ir1);
    setLED(3, btn1 || btn3 || ir2);
    setLED(4, btn1 || btn3 || ir3);
    setLED(5, btn1 || btn3 || ir4);
    setLED(6, btn1 || btn3 || ir5);
    setLED(7, btn1 || btn3 || ir6);
    setLED(8, btn1 || btn3 || ir7);
    setLED(9, btn1 || btn3 || cny2);

    if (btn1 || btn3) setMotors(1000, 1000);
    else setMotors(0, 0);
}