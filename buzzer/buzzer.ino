const int pino_B1 = 11;  //pinos de entrada/saída dos componentes
const int pino_B2 = 9;
const int pino_Buzzer = 10;

int frequencia = 300; 


void setup() {
  pinMode(pino_B1,INPUT_PULLUP); //habilitando internamente no chip um resistor entre o pino e o VCC
  pinMode(pino_B2,INPUT_PULLUP);
  pinMode(pino_Buzzer, OUTPUT);
}

void loop() {
  if(digitalRead(pino_B1) == LOW){ //Como é 'INPUT_PULLUP' quando pressionamos o botão que conecta nossa entrada ao GND a tensão cai para 0V
      frequencia += 500;
      printf("Apertou B1");
  }

  if(digitalRead(pino_B2) == LOW){
      frequencia -= 250;
  }

  tone(pino_Buzzer, frequencia);
  delay(1000);
  noTone(pino_Buzzer);
  delay(1000);
}