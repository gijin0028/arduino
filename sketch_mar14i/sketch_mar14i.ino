void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for (int i=0;i<10;i++){
        Serial.print("While i :");
    Serial.print(i);
    Serial.println("Hi EDI");
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
