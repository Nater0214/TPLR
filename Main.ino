#include <Servo.h>
#include <HCSR04.h>

Servo leftMotor;
Servo rightMotor;
HCSR04 distanceSensor(9, 10);
int readings = 0;
float distance = 0;

Motors motors(leftMotors, rightMotors);

void setup() {
    Serial.begin(9600);

    pinMode(LED_BUILTIN, OUTPUT);
    leftMotor.attach(3);
    rightMotor.attach(5);
}

void loop() {
    distance = distanceSensor.dist();

    if (distance <= 10) {
        motors.stop();
    } else {
        motors.forward();
    }

    Serial.println(distance);
    delay(250);
}