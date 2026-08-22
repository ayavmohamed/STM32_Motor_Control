#include <Arduino.h>
#include "L298N.h"

L298N::L298N(int in1, int in2, int ena)
{
    IN1 = in1;
    IN2 = in2;
    ENA = ena;
}

void L298N::init()
{
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(ENA, OUTPUT);

    digitalWrite(IN1, LOW);                
    digitalWrite(IN2, LOW);
    analogWrite(ENA, 0);
}

void L298N::drive(int speed)
{
    if (speed > 0)                         // Move forward
    {
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        analogWrite(ENA, speed);
    }
    else if (speed < 0)                    // Move backward
    {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        analogWrite(ENA, -speed);
    }
    else                                    // Stop 
    {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        analogWrite(ENA, 0);
    }
}
