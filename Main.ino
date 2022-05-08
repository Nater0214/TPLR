#include <Servo.h>
#include <HCSR04.h>
#include "Motors.h"

Servo leftMotors;
Servo rightMotors;
HCSR04 distanceSensor(9, 10);
float distance = 0;

Motors motors(leftMotors, rightMotors);

void setup() {
    Serial.begin(9600);

    pinMode(LED_BUILTIN, OUTPUT);
    leftMotors.attach(3);
    rightMotors.attach(5);
}

void loop() {
    distance = distanceSensor.dist();

    /*
    if (distance < 1) {
    } else if (distance <= 10) {
        motors.stop();
    } else {
        motors.forward();
    }

    Serial.println(distance);
    delay(250);
    */
}