// Exercicio 1 
int tempoLigado = 500;
int tempoDesligado = 300;
const int pinoLED = 13;

void setup() {
  pinMode(pinoLED, OUTPUT);
}

void loop() {
  digitalWrite(pinoLED, HIGH);
  delay(tempoLigado);
  digitalWrite(pinoLED, LOW);
  delay(tempoDesligado);
}
