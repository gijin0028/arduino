void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


}

void loop() {
    if(Serial.available()){
      char data = Serial.read();
      Serial.println(data);
    }
  // put your main code here, to run repeatedly:

}
