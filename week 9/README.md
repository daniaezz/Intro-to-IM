# Traffic
### [Link to the video](https://youtu.be/mv-CkCjcHgU)
---

For this assignment, I tried to recreate a traffic signal system using a photoresistor and a button. I used the button to act as a pedestrian button and the photoresistor to detect the car. Initially I wanted to have a toy car in the system however I was unable to find one and resorted to using my finger as the car. Initially, I wanted to make a more complex system that included multiple cars, however I quickly ran out of wires and space on the bread board and therefore resorted to making a simpler system.

One of the issues I faced was getting the values for the photoresistor. It was a bit tricky as the value needed to detect the car changed depending on the light in the environment. Another issue that I faced was the triggering of some lights despite the code specifying otherwise. I resolved this issue by adding resistors to the light to make sure that not enough current is flowing through them when they're meant to be off. This taught me the importance of having resistors, which is something I overlooked before.

for the traffic system, I made it so that if there is no car and no pedestrian, then the light is green, allowing any car coming through to pass.
The next condition was to turn the green light on and make the yellow LED blink if there is a car in front of the resistor and no pedestrians. 
The third condition was to specify what to do if there is a car as well as a pedestrian. In this situation, the green light starts blinking and the yellow light gradually becomes brighter, and after a few moments, the light turns red, allowing the pedestrian to cross, and then the light turns green again. 
The last condition is meant to turn the red light on if there are no cars but there is a pedestrian.
 
 
Overall I am happy with how this project turned out.





### The Circuit
<img width="663" alt="Screen Shot 2022-04-05 at 11 52 18 AM" src="https://user-images.githubusercontent.com/90758857/161705601-3d4def58-dc73-441c-b4ea-f514336fe3e1.png">




## The code
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
