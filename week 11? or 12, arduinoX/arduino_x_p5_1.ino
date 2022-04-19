const int POT = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(POT, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(POT);
  Serial.println(potValue);

}
