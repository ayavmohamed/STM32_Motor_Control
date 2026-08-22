#ifndef L298N_H
#define L298N_H

#include "MotorDriver.h"

class L298N : public MotorDriver
{
private:                                      //Attributes for the L298N motor driver
    int IN1;                   
    int IN2;
    int ENA;

public:
    L298N(int in1, int in2, int ena);         // Constructor to initialize the L298N pin numbers

    void init() override;
    void drive(int speed) override;
};

#endif