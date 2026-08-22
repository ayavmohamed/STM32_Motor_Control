#include <Arduino.h>
#include "CytronMD10A.h"

CytronMD10A::CytronMD10A(int dir, int pwm)
{
    DIR = dir;
    PWM = pwm;
}

void CytronMD10A::init()
{
    pinMode(DIR, OUTPUT);
    pinMode(PWM, OUTPUT);

    digitalWrite(DIR, LOW);
    analogWrite(PWM, 0);
}

void CytronMD10A::drive(int speed)
{
    if (speed > 0)                                        // Move forward
    {
        digitalWrite(DIR, HIGH);
        analogWrite(PWM, speed);
    }
    else if (speed < 0)                                   // Move backward
    {
        digitalWrite(DIR, LOW);
        analogWrite(PWM, -speed);
    }
    else                                                  // Stop
    {
        analogWrite(PWM, 0);
    }
}