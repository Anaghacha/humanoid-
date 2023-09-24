#include <Servo.h>

// Create servo objects for each motor
Servo servoLeftFoot;
Servo servoLeftKnee;
Servo servoLeftHip;
Servo servoRightFoot;
Servo servoRightKnee;
Servo servoRightHip;

// Define the angles for each motor
int servoLeftFootAngle = 0;
int servoLeftKneeAngle = 90;
int servoLeftHipAngle = 90;
int servoRightFootAngle = 0;
int servoRightKneeAngle = 90;
int servoRightHipAngle = 90;

// Setup function
void setup() {
  // Attach each servo object to the corresponding pin on the servo driver
  servoLeftFoot.attach(0);
  servoLeftKnee.attach(1);
  servoLeftHip.attach(2);
  servoRightFoot.attach(3);
  servoRightKnee.attach(4);
  servoRightHip.attach(5);

  // Set the initial angles for each motor
  servoLeftFootAngle = 90;
  servoLeftKneeAngle = 0;
  servoLeftHipAngle = 0;
  servoRightFootAngle = 90;
  servoRightKneeAngle = 0;
  servoRightHipAngle = 0;
}

// Loop function
void loop() {
  // Move the motors to their respective angles
  servoLeftFoot.write(servoLeftFootAngle);
  servoLeftKnee.write(servoLeftKneeAngle);
  servoLeftHip.write(servoLeftHipAngle);
  servoRightFoot.write(servoRightFootAngle);
  servoRightKnee.write(servoRightKneeAngle);
  servoRightHip.write(servoRightHipAngle);

  // Delay for a short period of time
  delay(100);

  // Change the angles for each motor
  servoLeftFootAngle += 1;
  servoLeftKneeAngle += 2;
  servoLeftHipAngle += 3;
  servoRightFootAngle += 1;
  servoRightKneeAngle += 2;
  servoRightHipAngle += 3;

  // Check if the robot has reached the end of its travel
  if (servoLeftFootAngle >= 180) {
    // Reverse the direction of the robot
    servoLeftFootAngle -= 180;
    servoLeftKneeAngle -= 180;
    servoLeftHipAngle -= 180;
    servoRightFootAngle -= 180;
    servoRightKneeAngle -= 180;
    servoRightHipAngle -= 180;
  }
}
