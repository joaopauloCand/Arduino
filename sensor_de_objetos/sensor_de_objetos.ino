const int entrAnalog = A0;
const int saidaBuzzer = 9; 
const int leituraNeutra = 1000;
int quantidade = 0; //Quantidade de objetos que passaram
int leitura = 0; //Leitura atual do LDR
void setup() {
  Serial.begin(9600);
  pinMode(entrAnalog,INPUT);
}

void loop() {
  leitura = analogRead(entrAnalog);
  Serial.print("Leitura: ");
  Serial.print(leitura);
    Serial.print(" Quantidade: ");
  Serial.print(quantidade);

  if(leitura < leituraNeutra){                              
    while(leitura < leituraNeutra){
      leitura = analogRead(entrAnalog);
    }
    tone(saidaBuzzer,800,100);
    quantidade += 1;
  }


  Serial.println();
  delay(100);
}