const int entrAnalog = A0;
const int saidaBuzzer = 9;
int leitura = 0;
void setup() {
  Serial.begin(9600);
  pinMode(entrAnalog,INPUT);
}

void loop() {
  leitura = analogRead(entrAnalog);
  Serial.print("Leitura: ");
  Serial.print(leitura);

  while(leitura < 1000){                              
    tone(saidaBuzzer,800,100);
    delay(100);
    tone(saidaBuzzer,300,100);
    delay(100);
    leitura = analogRead(entrAnalog);
  }


  Serial.println();
}