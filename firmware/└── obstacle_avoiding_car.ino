// Define pin numbers for motor control
#define motor1A 3
#define motor1B 4
#define motor2A 5
#define motor2B 6

// Define pins for ultrasonic sensor
#define trigPin 9
#define echoPin 10

// Define distance threshold for obstacle detection (in cm)
#define distanceThreshold 15

void setup() {
  // Initialize motor control pins as output
  pinMode(motor1A, OUTPUT);
  pinMode(motor1B, OUTPUT);
  pinMode(motor2A, OUTPUT);
`` End
pinMode(motor2B, OUTPUT);
  
  // Initialize ultrasonic sensor pins
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  
  Serial.begin(9600);  // For debugging
}

void loop() {
  long duration, distance;
  
  // Send a pulse to trigger the ultrasonic sensor
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Measure the duration of the echo pulse
duration = pulseIn(echoPin, HIGH);\
  \
  // Calculate the distance in cm
 distance = duration * 0.034 / 2;
 
  \\
  // Print the distance for debugging
 Serial.print("Distance: ");
 Serial.println(distance);
  \\
  // Decision making based on distance
 if (distance > distanceThreshold) {
    moveForward();
  } else {
    stopMotors();
delay(500); // pauses for half a second before doing something


//
// if something is in our way, take an action (e.g. turn right)
turnRight();
delay(1000);  // turn for 1 second
}
}

void moveForward() {
  digitalWrite(motor1A, HIGH);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}

void stopMotors() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
digitalWrite(motor2A, LOW);
  digitalWrite(motor2B, LOW);
}

void turnRight() {
  digitalWrite(motor1A, LOW);
  digitalWrite(motor1B, LOW);
  digitalWrite(motor2A, HIGH);
  digitalWrite(motor2B, LOW);
}
```

