#include <Servo.h>
#include <HCSR04.h>

Servo leftMotor;
Servo rightMotor;
HCSR04 distanceSensor(9, 10);
int readings = 0;
float distance = 0;

class Motors {
    public:
        void forward() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotor.write(0);
            rightMotor.write(180);
        }

        void backwards() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotor.write(180);
            rightMotor.write(0);
        }

        void stop() {
            digitalWrite(LED_BUILTIN, LOW);
            leftMotor.write(90);
            rightMotor.write(90);
        }

        void left() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotor.write(0);
            rightMotor.write(0);
        }
};
Motors motors;

void setup() {
    Serial.begin(9600);

    pinMode(LED_BUILTIN, OUTPUT);
    leftMotor.attach(3);
    rightMotor.attach(5);
}

void loop() {
    distance = distanceSensor.dist();

    /*
    if (distance <= 1) {}
    else if (distance <= 10) {
        motors.stop();
    } else {
        motors.forward();
    }
    */

    Serial.println(distance);
    delay(500);
}