// Exercicio 3 
const int botao = 2;
const int led = 13;
boolean ledLigado = false;
int estadoAnterior = LOW;

void setup() {
  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  int estadoAtual = digitalRead(botao);
  if (estadoAtual == HIGH && estadoAnterior == LOW) {
    ledLigado = !ledLigado;
    digitalWrite(led, ledLigado ? HIGH : LOW);
    delay(200); // debounce
  }
  estadoAnterior = estadoAtual;
}
