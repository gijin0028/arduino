void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int i = 0;
  while(i<10){
    Serial.print("While i :");
    Serial.print(i);
    Serial.println("Hi EDI");
    i++;
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
