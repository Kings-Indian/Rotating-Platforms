/*
 * Rotating Platforms Control
 * ESP32 sketch for controlling two DC motors via L298N H-bridge
 */

// Motor control pins
const int motor1Pin1 = 2;  // IN1
const int motor1Pin2 = 4;  // IN2
const int motor2Pin1 = 16; // IN3
const int motor2Pin2 = 17; // IN4
const int enablePin1 = 18; // ENA
const int enablePin2 = 19; // ENB

// Speed settings
const int motorSpeed = 200; // PWM value (0-255)

void setup() {
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enablePin1, OUTPUT);
  pinMode(enablePin2, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Rotating Platforms Control Ready");
  stopAllMotors();
}

void loop() {
  // Demo sequence
  rotateBothClockwise(3000);
  stopAllMotors();
  delay(1000);
  
  rotateBothCounterClockwise(3000);
  stopAllMotors();
  delay(1000);
  
  rotateOppositeDirections(4000);
  stopAllMotors();
  delay(2000);
}

void rotateBothClockwise(int duration) {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(enablePin1, motorSpeed);
  analogWrite(enablePin2, motorSpeed);
  delay(duration);
}

void rotateBothCounterClockwise(int duration) {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, HIGH);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enablePin1, motorSpeed);
  analogWrite(enablePin2, motorSpeed);
  delay(duration);
}

void rotateOppositeDirections(int duration) {
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);
  analogWrite(enablePin1, motorSpeed);
  analogWrite(enablePin2, motorSpeed);
  delay(duration);
}

void stopAllMotors() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);
  analogWrite(enablePin1, 0);
  analogWrite(enablePin2, 0);
} 