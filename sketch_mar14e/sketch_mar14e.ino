int a;
int b;
int ab;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  a = 7;
  b = -5;
  ab = a+b;

  Serial.println("ab");
  Serial.println(ab);
  Serial.println(a-b);
  Serial.println(a*b);
  Serial.println(a/b);
}

void loop() {
  // put your main code here, to run repeatedly:

}
