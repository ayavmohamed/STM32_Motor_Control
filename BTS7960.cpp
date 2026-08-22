#include <Arduino.h>
#include "BTS7960.h"

BTS7960::BTS7960(int rpwm, int lpwm)
{
    RPWM = rpwm;
    LPWM = lpwm;
}

void BTS7960::init()
{
    pinMode(RPWM, OUTPUT);
    pinMode(LPWM, OUTPUT);

    analogWrite(RPWM, 0);
    analogWrite(LPWM, 0);
}

void BTS7960::drive(int speed)
{
    if (speed > 0)                    // Move forward
    {
        analogWrite(RPWM, speed);
        analogWrite(LPWM, 0);
    }
    else if (speed < 0)               // Move backward
    {
        analogWrite(RPWM, 0);
        analogWrite(LPWM, -speed);
    }
    else                              // Stop
    {
        analogWrite(RPWM, 0);
        analogWrite(LPWM, 0);
    }
}