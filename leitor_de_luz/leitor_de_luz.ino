const int entrAnalog = A0;
int leitura = 0;
float tensao = 0.0;
void setup() {
  Serial.begin(9600);
  pinMode(entrAnalog,INPUT);
}

void loop() {
  leitura = analogRead(entrAnalog);
  Serial.print("Leitura: ");
  Serial.print(leitura);

  tensao = leitura * 5.0/1024;
  Serial.print("       Tensao: ");
  Serial.print(tensao);
  Serial.print("V");


  Serial.println();
  delay(1000);
}
