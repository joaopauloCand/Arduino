const int pinoLed01 = 3,pinoLed02 = 5,pinoLed03 = 6;
const int pinoBot01 = 10,pinoBot02 = 11,pinoBot03 = 12;

int leituraBotao1;
int leituraBotao2;
int leituraBotao3;


void setup() {
  pinMode(pinoLed01, OUTPUT);
  pinMode(pinoLed02, OUTPUT);
  pinMode(pinoLed03, OUTPUT);

    pinMode(pinoBot01, INPUT_PULLUP);
    pinMode(pinoBot02, INPUT_PULLUP);
    pinMode(pinoBot03, INPUT_PULLUP);
}

void loop() {
    leituraBotao1 = digitalRead(pinoBot01);
    leituraBotao2 = digitalRead(pinoBot02);
    leituraBotao3 = digitalRead(pinoBot03);

    if(leituraBotao1 == LOW){
      analogWrite(pinoLed01,255);
    }else{
      analogWrite(pinoLed01,0);
    }

    if(leituraBotao2 == LOW){
      analogWrite(pinoLed02,255);
    }else{
      analogWrite(pinoLed02,0);
    }

    if(leituraBotao3 == LOW){
      analogWrite(pinoLed03,255);
    }else{
      analogWrite(pinoLed03,0);
    }

}
