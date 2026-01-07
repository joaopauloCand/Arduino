const int entrAnalog = A0;
//const int saidaLazer = 10;
//const int  botaoEntrada = 11;
const int saidaBuzzer = 9;


int leitura = 0;

void setup() {
  Serial.begin(9600);
  //pinMode(saidaLazer,OUTPUT);
  pinMode(entrAnalog,INPUT);
  //pinMode(botaoEntrada, INPUT_PULLUP);
}

void loop() {
  // if(digitalRead(botaoEntrada) == LOW){
  //     digitalWrite(saidaLazer,HIGH);
  //     tone(saidaBuzzer,800,10);
  //     Serial.println(leitura);

  // }else{
  //   digitalWrite(saidaLazer,LOW);
  // }
  leitura = analogRead(entrAnalog);
  Serial.println(leitura);
}