void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,INPUT_PULLUP);
  pinMode(3,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int button = digitalRead(5);

Serial.println(button);
if (button==0){
  digitalWrite(3,HIGH);
}
else{
  digitalWrite(3,LOW);
}

}
