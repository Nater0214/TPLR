#include <Servo.h>

class Motors {
    private:
        Servo leftMotors;
        Servo rightMotors;
    
    public:
        Motors(Servo left, Servo right) {
            leftMotors = left;
            rightMotors = right;
        }

        void forward() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotors.write(0);
            rightMotors.write(180);
        }

        void backwards() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotors.write(180);
            rightMotors.write(0);
        }

        void stop() {
            digitalWrite(LED_BUILTIN, LOW);
            leftMotors.write(90);
            rightMotors.write(90);
        }

        void forwardLeft() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotors.write(90);
            rightMotors.write(180);
        }

        void forwardRight() {
            digitalWrite(LED_BUILTIN, HIGH);
            leftMotors.write(0);
            rightMotors.write(90);
        }
};