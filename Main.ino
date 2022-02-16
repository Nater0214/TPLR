#include <Servo.h>
Servo leftMotor;
Servo rightMotor;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    pinMode(2, OUTPUT);
    leftMotor.attach(3);
    rightMotor.attach(5);
}

void loop() {
    digitalWrite(2, HIGH);

    digitalWrite(LED_BUILTIN, HIGH);
    leftMotor.write(0);
    rightMotor.write(180);
    delay(1000);

    digitalWrite(LED_BUILTIN, LOW);
    leftMotor.write(180);
    rightMotor.write(0);
    delay(1000);
}