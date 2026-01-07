const int pinoPotenciometro = A0; 
const int pinoLed = 8;
const int periodo = 1023;
int tempo_ligado = 0; 
int tempo_desligado = 0;
float tensao = 0.0; 

void setup() {
  Serial.begin(9600); 
  pinMode(pinoPotenciometro, INPUT);
  pinMode(pinoLed,OUTPUT);
}

void loop() {
  tempo_ligado = analogRead(pinoPotenciometro);
  int tempo_desligado = periodo - tempo_ligado;

  // imprime valor no plotter serial
  Serial.print(tempo_ligado);
  Serial.print("\t");
  Serial.println(tempo_desligado);

  digitalWrite(pinoLed,HIGH);
  //delay(tempo_ligado);
  delayMicroseconds(tempo_ligado);
  digitalWrite(pinoLed,LOW);
  //delay(tempo_desligado);
  delayMicroseconds(tempo_desligado);
}