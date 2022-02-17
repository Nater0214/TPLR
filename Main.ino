#include <Servo.h>
Servo leftMotor;
Servo rightMotor;

class Motors {
    public:
        void forward() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotor.write(0);
            rightMotor.write(180);
        }
};
Motors motors;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
    leftMotor.attach(3);
    rightMotor.attach(5);
}

void loop() {
    motors.forward();
}