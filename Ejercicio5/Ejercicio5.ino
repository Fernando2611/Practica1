// the setup function runs once when you press reset or power the board
int bandera = LOW;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  attachInterrupt(0,interrupcion,RISING);
}

// the loop function runs over and over again forever
void loop() {
  if(bandera == HIGH){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(2000);
    bandera=LOW;
  }   
  digitalWrite(LED_BUILTIN, LOW);                   
}

void interrupcion(){
  bandera = HIGH;
}
