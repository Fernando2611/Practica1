  int bandera= LOW;
  int i=0;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(0,interrupcion,RISING);
}


void loop() {
  if (bandera==HIGH)
  {
    for (i; i<=9; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);      // wait for a second

  }
   
  }

  digitalWrite(LED_BUILTIN, LOW);
}

void interrupcion()
{
  bandera=HIGH;
}
