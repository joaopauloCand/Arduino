const int b1 = 11, b2 = 10, b3 = 9; //pino dos botoes
const int buzzer = 7; //pino do buzzer
const int led_verde = 4, led_amarelo = 3, led_vermelho = 2; //pinos dos leds

const int f1 = 739.99, f2 = 415.30, f3 = 554.37; //frequências do buzzer

//const int c = 261; // Dó
//const int d = 293; // Ré
//const int e = 329; // Mi
//const int f = 349; // Fá
//const int g = 391; // Sol
//const int a = 440; // Lá
//const int b = 493; // Si

void setup() {
  pinMode(b1, INPUT_PULLUP);
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);

  pinMode(buzzer, OUTPUT);

  pinMode(led_verde, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_vermelho, OUTPUT);

}

void loop() {
  if(digitalRead(b1) == LOW){
    digitalWrite(led_verde, HIGH);
    tone(buzzer,b1,1000);
    digitalWrite(led_verde, LOW);
  }
  if(digitalRead(b2) == LOW){
    digitalWrite(led_amarelo, HIGH);
        tone(buzzer,b2,1000);
    digitalWrite(led_amarelo, LOW);
  }
  if(digitalRead(b3) == LOW){
    digitalWrite(led_vermelho, HIGH);
        tone(buzzer,b3,1000);
    digitalWrite(led_vermelho, LOW);
  }

}
