int a=49;
int b = 0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    b = Serial.read();
    Serial.println(b);

    if(a==b){
      Serial.println("hello world");
    }
    else{
      Serial.println("Hello");
    }
  }
}
