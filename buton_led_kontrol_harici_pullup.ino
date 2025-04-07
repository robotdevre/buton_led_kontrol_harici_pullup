const int buttonPin = 7;
const int ledPin = 13;
int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT); // Dahili pull-up YOK!
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // Butona basılınca LED yanar
  } else {
    digitalWrite(ledPin, LOW); // Bırakılınca söner
  }
}
