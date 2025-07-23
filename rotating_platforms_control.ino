#define CUSTOM_SETTINGS
#define INCLUDE_GAMEPAD_MODULE
#include <DabbleESP32.h>

// Right motor
int rightMotorPin1 = 12;
int rightMotorPin2 = 13;

// Left motor
int leftMotorPin1 = 26;
int leftMotorPin2 = 27;

void rotateMotor(int rightMotorSpeed, int leftMotorSpeed) {
  if (rightMotorSpeed < 0) {
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, HIGH);
  } else if (rightMotorSpeed > 0) {
    digitalWrite(rightMotorPin1, HIGH);
    digitalWrite(rightMotorPin2, LOW);
  } else {
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, LOW);
  }

  if (leftMotorSpeed < 0) {
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, HIGH);
  } else if (leftMotorSpeed > 0) {
    digitalWrite(leftMotorPin1, HIGH);
    digitalWrite(leftMotorPin2, LOW);
  } else {
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, LOW);
  }
}

void setUpPinModes() {
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);

  rotateMotor(0, 0);  // Stop motors at startup
}

void setup() {
  setUpPinModes();
  Dabble.begin("SPINNNN");  // Renamed to "SPINNNN"
}

void loop() {
  int rightMotorSpeed = 0;
  int leftMotorSpeed = 0;

  Dabble.processInput();

  if (GamePad.isUpPressed()) {
    rightMotorSpeed = 255;
    leftMotorSpeed = 255;
  }

  if (GamePad.isDownPressed()) {
    rightMotorSpeed = -255;
    leftMotorSpeed = -255;
  }

  if (GamePad.isLeftPressed()) {
    rightMotorSpeed = 255;
    leftMotorSpeed = -255;
  }

  if (GamePad.isRightPressed()) {
    rightMotorSpeed = -255;
    leftMotorSpeed = 255;
  }

  rotateMotor(rightMotorSpeed, leftMotorSpeed);
}
