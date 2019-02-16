// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int sensor_pot = analogRead(A0);
  Serial.println(sensor_pot);
  //if(sensor_pot>=500) //2V
  //if(sensor_pot>=750) //3V
  if(sensor_pot>=1000) //4V
  {
  digitalWrite(LED_BUILTIN, HIGH); 
  } 
  else{
  digitalWrite(LED_BUILTIN, LOW);                      
  }
    
}
