

void setup() {
  Serial.begin(9600);

  for(int i = 0; i <= 10; i++){
    Serial.println(i);
    delay(1000);
  }
  
  for(int i = 10; i >= 0; i--){
    Serial.println(i);
    delay(1000);
  }
  
}

void loop() {

}
