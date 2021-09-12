unsigned long myTime;
const int buttonPin = 12;

void setup() {
  pinMode(buttonPin, INPUT);  
  pinModeLeds();
  testingLeds();
}

void loop() {
  myTime = millis();
  randomSeed(myTime);
  if (digitalRead(buttonPin) == HIGH) {
    startTraining();
  }
}

  void testingLeds() {
    digitalWrite(2, HIGH ); // Turn the LED on
    digitalWrite(3, HIGH );
    digitalWrite(4, HIGH );
    digitalWrite(5, HIGH );
    digitalWrite(6, HIGH );
    digitalWrite(7, HIGH );
    digitalWrite(8, HIGH );
    digitalWrite(9, HIGH );
    digitalWrite(10, HIGH );
    delay(1000);
    digitalWrite(2, LOW ); // Turn the LED off
    digitalWrite(3, LOW );
    digitalWrite(4, LOW );
    digitalWrite(5, LOW );
    digitalWrite(6, LOW );
    digitalWrite(7, LOW );
    digitalWrite(8, LOW );
    digitalWrite(9, LOW );
    digitalWrite(10, LOW );
}

  void pinModeLeds() {
    pinMode(2, OUTPUT); // Declare the LED as an output
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
}

  void startTraining() {
    while (digitalRead(buttonPin) == LOW) {
      int Rand = random(2,10);   
      if (Rand==2){
         digitalWrite(2, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(2, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==3){
         digitalWrite(3, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(3, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==4){
         digitalWrite(4, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(4, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==5){
         digitalWrite(5, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(5, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==6){
         digitalWrite(6, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(6, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==7){
         digitalWrite(7, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(7, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==8){
         digitalWrite(8, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(8, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==9){
         digitalWrite(9, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(9, LOW ); // Turn the LED off
         delay(2000);
      }
      if (Rand==10){
         digitalWrite(10, HIGH ); // Turn the LED on
         delay(2000);
         digitalWrite(10, LOW ); // Turn the LED off
         delay(2000);
      }
    }  
}
