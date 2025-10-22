void setup() {
  	pinMode(12,OUTPUT);
  	pinMode(11,OUTPUT);
  	pinMode(10,OUTPUT);
  	pinMode(9,OUTPUT);
  	pinMode(8,OUTPUT);
}

void loop() {
  	digitalWrite(11,HIGH);
  	digitalWrite(12,LOW);
  
  	digitalWrite(8,HIGH);
  	digitalWrite(9,LOW);
  	digitalWrite(10,LOW);
  	delay(3000);
  
  	digitalWrite(8,LOW);
  	digitalWrite(9,HIGH);
  	digitalWrite(10,LOW);
  	delay(3000);
  
  	digitalWrite(11,LOW);
  	digitalWrite(12,HIGH);
  
  	digitalWrite(8,LOW);
  	digitalWrite(9,LOW);
  	digitalWrite(10,HIGH);
  	delay(3000);
  	
  for(int i = 0; i < 5; i++){
  	digitalWrite(11,LOW);
    delay(500);
    digitalWrite(11,HIGH);
    delay(500);
  }
}

