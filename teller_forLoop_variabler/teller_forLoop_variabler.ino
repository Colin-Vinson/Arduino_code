const int motor = 6;  //PWM --> base of Tip122, collector of Tip122 --> motor
const int start_button = 8;

int buttonState;

void setup() {
  Serial.begin(9600);

  pinMode(start_button, INPUT);
  pinMode(motor, OUTPUT);

}

void loop() {
  buttonState = digitalRead(start_button);

  if(buttonState == HIGH){
      int start_val = 0;
      int end_val = 10; 
  
      for(int i = start_val; i <= end_val; i++){
        Serial.println(i);
        analogWrite(motor, 255);
        delay(1000);
      } 
  }
  else{
     //analogWrite(motor, 0);
      digitalWrite(motor, LOW);
  }
  

}
