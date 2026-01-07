const int buzzer = 7; //pino do buzzer

const int d = 587.33; // Ré
const int e = 659.25; // Mi
const int a = 440.00; // Lá
const int b = 493.88; // Si

const int x = 554.37; //Dó sustenido
const int y = 739.99; //Fá sustenido
const int z = 415.30; //Sol sustenido

int minecraftNotas[] = {a,e,a,b,x,b,a,e,d,y,x,e,x,a,z,a,e,a,x,d,x,a,e,y,d,b,x,d,x,d,y,x,b,a,b}; //notas em sequência a serem tocadas
int duracao[] = {1904,952,952,952,952,952,1904,1904,952,952,952,952,952,1904,952,1904,1904,952,952,952,952,1904,1904,952,1904,1904,952,952,952,952,952,952,952,952,1904}; //Duracao em ms
int tamanho = sizeof(minecraftNotas) / sizeof(minecraftNotas[0]);

void setup() {
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for(int i = 0; i < tamanho ; i++){
    tone(buzzer, minecraftNotas[i],duracao[i]);
    delay(duracao[i]+100);
  }
}
