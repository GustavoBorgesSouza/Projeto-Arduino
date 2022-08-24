#include <Servo.h>

Servo myservo; //

int pressionado; //estado do botao
int botao=3; //Pino a ser ligado o botao

void setup()
{
 myservo.attach(9); //pino de dados do servo conectado ao pino 9
 myservo.write(0); //inicia motor posição 0 graus
 pinMode(botao, INPUT_PULLUP);  
}

void loop() 
{
  pressionado=digitalRead(botao);  //verifica se o botao foi pressionado
 
  if(pressionado==1)
  {   
      myservo.write(200);//o Servo fica na posição 0 graus
      delay(200);
      myservo.write(0);
  }
      
  
}
