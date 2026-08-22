#ifndef CYTRON_MD10A_H
#define CYTRON_MD10A_H

#include "MotorDriver.h"

class CytronMD10A : public MotorDriver
{
private:                                   //Attributes for the CytronMD10A motor driver
    int DIR;
    int PWM;

public:
    CytronMD10A(int dir, int pwm);         // Constructor to initialize the CytronMD10A pin numbers

    void init() override;
    void drive(int speed) override;
};

#endif