int led=9;
int i=0;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  for(i; i<=250; i++)
  {
    analogWrite(led, i);
    Serial.println(i);
  }
  delay(2000);
  for(i; i>=0; i--)
  {
    analogWrite(led, i);
    Serial.println(i);
  }
  delay(3000);
  

}
