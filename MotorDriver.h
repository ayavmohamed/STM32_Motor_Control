#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H

class MotorDriver {
public:
    virtual void init() = 0;                      // Initialize the motor driver
    virtual void drive(int speed) = 0;            // Drive the motor at a specified speed
    virtual ~MotorDriver() {}                    // Virtual destructor for cleanup for child classes

};
#endif