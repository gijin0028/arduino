void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(5,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
int button = digitalRead(5);

Serial.println(button);
delay(500);
}
