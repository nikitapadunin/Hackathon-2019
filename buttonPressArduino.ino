int pin1 = 13;
int button = 3;
int buttonClicks = 0;
void setup() {
  // put your setup code here, to run once:

pinMode(pin1, OUTPUT);
pinMode(button, INPUT);
  digitalWrite(button, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:

if(digitalRead(button) == LOW){
  buttonClicks = buttonClicks + 1;
    if(buttonClicks%2 == 1){
        digitalWrite(pin1, HIGH);
      }

      if(buttonClicks%2 == 0){
        digitalWrite(pin1, LOW);
      }
  }


  
//int time = random(1000,2000);
//digitalWrite(pin1, HIGH);
//delay(time);
//digitalWrite(pin1, LOW);
//delay(time);
}
