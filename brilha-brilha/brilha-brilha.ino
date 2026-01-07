/*
 * Exemplo de Buzzer Passivo
 * Toca a melodia "Brilha, Brilha Estrelinha"
 * * Hardware:
 * - Buzzer passivo conectado entre o pino 8 e o GND.
 */

// --- 1. Definição das Notas (Frequências em Hertz) ---
// Estas são "constantes", apelidos para as frequências de cada nota.
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440

// --- 2. Definição do pino do Buzzer ---
#define BUZZER_PIN 8

// --- 3. A Melodia (Arrays) ---

// 'melody' é a sequência de notas que queremos tocar
int melody[] = {
  NOTE_C4, NOTE_C4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, // Brilha, brilha...
  NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_C4  // ...lá no céu
};

// 'noteDurations' é a duração de cada nota em milissegundos (ms)
// Cada número aqui corresponde à nota na mesma posição no array 'melody'
int noteDurations[] = {
  500, 500, 500, 500, 500, 500, 1000, // A última nota é mais longa
  500, 500, 500, 500, 500, 500, 1000
};


void setup() {
  // O setup fica vazio, pois toda a ação acontece no loop.
}

void loop() {
  // Vamos usar um loop 'for' para tocar cada nota da melodia
  // 'sizeof(melody) / sizeof(int)' é um truque para calcular automaticamente
  // quantas notas existem no array 'melody'.
  for (int thisNote = 0; thisNote < (sizeof(melody) / sizeof(int)); thisNote++) {

    // Pega a duração da nota atual
    int noteDuration = noteDurations[thisNote];

    // --- 4. A Função tone() ---
    // Esta é a função mágica para buzzers passivos!
    // Sintaxe: tone(pino, frequencia, duracao)
    tone(BUZZER_PIN, melody[thisNote], noteDuration);

    // --- 5. A Pausa ---
    // Precisamos de uma pausa para que a nota toque antes de ir para a próxima.
    // Colocamos um pequeno tempo extra (+ 50ms) para criar um 
    // silêncio sutil entre as notas.
    int pauseBetweenNotes = noteDuration + 50;
    delay(pauseBetweenNotes);

    // (Não precisamos de 'noTone()' aqui porque já especificamos
    // a duração dentro da própria função 'tone()')
  }

  // Pausa de 2 segundos no final antes de repetir a música
  delay(2000);
}