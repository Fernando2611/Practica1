int izq1= 13;
int izq2=12;
int der1=7;
int der2=8;
int PWM_I=5;
int PWM_D=3;


void setup() {
  pinMode(izq1, OUTPUT);
  pinMode(izq2, OUTPUT);
  pinMode(der1, OUTPUT);
  pinMode(der2, OUTPUT);
  pinMode(PWM_I, OUTPUT);
  pinMode(PWM_D, OUTPUT);


}

void loop() {
  //Empieza detenido
  moverRobot(0,0);

  //Adelante
  moverRobot(60, 75); //Derecha, Izquierda
  delay(1800);

  //Gira 
  moverRobot(50,0);
  delay(600);

    //Adelante
  moverRobot(60, 75); //Derecha, Izquierda
  delay(800);

    //Gira 
  moverRobot(50,0);
  delay(500);

   //Adelante
  moverRobot(60, 75); //Derecha, Izquierda
  delay(1500);

  //Gira 
  moverRobot(50,0);
  delay(600);

    //Adelante
  moverRobot(60, 75); //Derecha, Izquierda
  delay(500);
   
  moverRobot(0,0);
  delay(5000);

}

void moverRobot(int a, int b) //a=Derecho ; b=Izquierda
{
  digitalWrite(izq1,LOW);
  digitalWrite(izq2,HIGH);
  digitalWrite(der1,LOW);
  digitalWrite(der2,HIGH);

  analogWrite(PWM_D,a);//Velocidad motor derecho 200
  analogWrite(PWM_I,b);//Velocidad motor izquierdo 200
}
