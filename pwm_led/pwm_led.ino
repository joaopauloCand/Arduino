const int pinoPotenciometro = A0; 
const int pinoLed = 9;
int leitura = 0;
int pwm = 0;

void setup() {
  Serial.begin(9600); 
  pinMode(pinoPotenciometro, INPUT);
  pinMode(pinoLed,OUTPUT);
}

void loop() {
  leitura = analogRead(pinoPotenciometro);
  // converte o valor do potenciômetro, de 0 a 1023, em um valor de 0 a 255
  pwm = map(leitura,0,1023,0,255);

  //inverso:
  //pwm = map(leitura,1023,0,0,255);
  Serial.println(pwm);
  Serial.print(" ");
  Serial.println(leitura);
  // atualiza a razão cíclica do pino, variando a intensidade do LED
  analogWrite(pinoLed,pwm);
}