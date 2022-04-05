const int REDB = 8;
const int YELLOWB = 10;
const int GREENB = 12;
const int LIGHT = A0;
const int BUTTON = 3;

int analogVal = 0;
int inc = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(REDB, OUTPUT);
  pinMode(YELLOWB, OUTPUT);
  pinMode(GREENB, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonVal = digitalRead(BUTTON);
  analogVal = analogRead(LIGHT);

  if (analogVal > 500 and buttonVal == LOW) {
    digitalWrite(GREENB, HIGH);
    digitalWrite(REDB, LOW);
    digitalWrite(YELLOWB, LOW);
  } else if (buttonVal == LOW and analogVal <= 500) {
    digitalWrite(GREENB, HIGH);
    digitalWrite(REDB, LOW);
    digitalWrite(YELLOWB, HIGH);
    delay(500);
    digitalWrite(YELLOWB, LOW);
    delay(200);
  } else if (analogVal < 500 and buttonVal == HIGH) {

    digitalWrite(REDB, LOW);
    for ( int i = 0; i < 6; i++) {
      inc += 10;
      analogWrite(YELLOWB, inc);
      digitalWrite(GREENB, LOW);
      delay(200);
      digitalWrite(GREENB, HIGH);
      delay(200);
    }
    delay(500);
    digitalWrite(GREENB, LOW);
    digitalWrite(YELLOWB, LOW);
    digitalWrite(REDB, HIGH);
    delay(2000);
    digitalWrite(REDB, LOW);
    digitalWrite(GREENB, HIGH);
    delay(2000);

  } else {
    digitalWrite(GREENB, LOW);
    digitalWrite(REDB, HIGH);
    digitalWrite(YELLOWB, LOW);
  }


}
