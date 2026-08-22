#include "Pins.h"
#include "L298N.h"
#include "CytronMD10A.h"
#include "BTS7960.h"

L298N l298n(L298N_IN1, L298N_IN2, L298N_ENA);              

CytronMD10A cytron(CYTRON_DIR, CYTRON_PWM);

BTS7960 bts(BTS_RPWM, BTS_LPWM);

void setup()
{
    l298n.init();
    cytron.init();
    bts.init();
}

void loop()
{
    // L298N
    l298n.drive(255);      // Forward
    delay(2000);

    l298n.drive(0);        // Stop
    delay(1000);

    l298n.drive(-255);     // Backward
    delay(2000);

    l298n.drive(0);        // Stop
    delay(1000);


    // Cytron MD10A
    cytron.drive(255);     // Forward
    delay(2000);

    cytron.drive(0);       // Stop
    delay(1000);

    cytron.drive(-255);    // Backward
    delay(2000);

    cytron.drive(0);       // Stop
    delay(1000);


    // BTS7960
    bts.drive(255);        // Forward
    delay(2000);

    bts.drive(0);          // Stop
    delay(1000);

    bts.drive(-255);       // Backward
    delay(2000);

    bts.drive(0);          // Stop
    delay(1000);
}