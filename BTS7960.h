#ifndef BTS7960_H
#define BTS7960_H

#include "MotorDriver.h"

class BTS7960 : public MotorDriver
{
private:                             //Attributes for the BTS7960 motor driver
    int RPWM;
    int LPWM;

public:
    BTS7960(int rpwm, int lpwm);     //Constructor to initialize the BTS7960 pin numbers

    void init() override;
    void drive(int speed) override;
};

#endif