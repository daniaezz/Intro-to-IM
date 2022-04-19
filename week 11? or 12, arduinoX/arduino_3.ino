const int POT = A0;
const int LED = 3;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  while (Serial.available() <= 0) {
    Serial.println("hello"); // send a starting message
    delay(300);              // wait 1/3 second
  }
}

void loop() {
  if (Serial.available() > 0) {

    // read information from p5
    int intByte = Serial.read();
    if(intByte == 0) {
      digitalWrite(LED, LOW);
    } else {
      digitalWrite(LED, HIGH);
    }

    Serial.println(intByte);
  
    // send information to p5
    int potValue = analogRead(POT);
    Serial.println(potValue);
  }
}
