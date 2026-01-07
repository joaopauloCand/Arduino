const int pinoPotenciometro = A0; 
int leitura = 0; 
float tensao = 0.0; 

void setup() {
  Serial.begin(9600); 
  pinMode(pinoPotenciometro, INPUT);
}

void loop() {
  leitura = analogRead(pinoPotenciometro);

  // converte e imprime o valor em tensão elétrica
  tensao = leitura * 5.0 / 1024.0;

  // imprime valor no plotter serial
  Serial.println(tensao);
  Serial.print(" ");
  Serial.println(tensao /2);
  delay(100); 
}