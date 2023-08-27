// Keyboard library
// #include <Keyboard.h>
// NOTE: Keyboard library not compatible with Uno board apparently, writing python script instead.

// Set up pins for distance sensor
#define TRIG 2
#define ECHO 3

void setup() {
  // Set up serial port at 9600 baud
  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  // Keyboard.begin();
}

void loop() {
  int dist = distance(TRIG, ECHO);
  Serial.print(dist);
  Serial.print("\n");
  if (dist < 20) {
    Serial.write('A');
    delay(1000);  // Prevent toggling after signalling
  }
  delay(100);

}

int distance(int trig, int echo) {
    digitalWrite(trig, LOW);
    delayMicroseconds(2);
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    return pulseIn(echo, HIGH) * 0.034/2;
}