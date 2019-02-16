int led=9;
int i=0;
int tiempo=0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(A0);
  tiempo= map(potValue, 0, 1024, 0, 3000);
  Serial.println(potValue);
  for(i; i<=250; i++)
  {
    analogWrite(led, i);
  }
  delay(tiempo);
  for(i; i>=0; i--)
  {
    analogWrite(led, i);
  }
  delay(tiempo);
  

}
