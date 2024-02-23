#define trigPin 7
#define echoPin 6
#define led1Pin 10
#define led2Pin 11

long duration;
int distance;
unsigned long previousMillis = 0;
const long interval = 1000; // Blinking interval (milliseconds)

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Clear the trigger pin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // Set the trigger pin high for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  // Read the echo pin, and calculate the distance based on the speed of sound
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  
  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);
  
  // If the distance is less than 100cm (adjust as needed), blink both LEDs
  if (distance < 100) {
    unsigned long currentMillis = millis();
    if (currentMillis - previousMillis >= interval) {
      // Save the last time the LED was blinked
      previousMillis = currentMillis;
      
      // Toggle the state of both LEDs
      digitalWrite(led1Pin, !digitalRead(led1Pin));
      digitalWrite(led2Pin, !digitalRead(led2Pin));
    }
  } else {
    // If distance is greater than 100cm, turn off both LEDs
    digitalWrite(led1Pin, LOW);
    digitalWrite(led2Pin, LOW);
  }
}
