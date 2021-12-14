// Button is connected to the digital pin 2
const int buttonPin = 2;
// Potentiometer is connected to the analog pin A0
const int potPin = A0;
int shockSensorPin = 12;

int buttonState, potVal;
bool shockSensorSate = 0;

// Setup runs once after arduino boots up
void setup() {
  // Set the data rate in bits per second (baud) for serial data transmission
  Serial.begin(9600);
  
  // For digital pins it's also possible to send data but here we are receiving data from pin. Digital pin has two values - HIGH and LOW
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(shockSensorPin, INPUT);
}

// Infinite loop for event listening
void loop() {
  
  int buttonState2  = digitalRead(2);
  int buttonState3  = digitalRead(3);
  int buttonState4  = digitalRead(4);
  int buttonState5  = digitalRead(5);
  int buttonState6 = digitalRead(6);
  int buttonState7  = digitalRead(7);
  int buttonState8  = digitalRead(8);
  

  

  if (buttonState2 == HIGH) {
    Serial.println("0");
  }
  if (buttonState3 == HIGH) {
    Serial.println("1");
  }
  if (buttonState4 == HIGH) {
    Serial.println("2");
  }
  if (buttonState5 == HIGH) {
    Serial.println("3");
  }
  if (buttonState6 == HIGH) {
    Serial.println("4");
  }
  if (buttonState7 == HIGH) {
    Serial.println("5");
  }
  if (buttonState8 == HIGH) {
    Serial.println("6");
  }

  shockSensorSate = digitalRead(shockSensorPin);
  if ( shockSensorSate == 0 ) {
    Serial.println("8");
  }
  
  delay(200);
}
