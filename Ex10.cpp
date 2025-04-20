// Exercicio 10 
const int rele = 8;
const int botao = 2;
int tempoAtuacao = 2000; // milissegundos
int estadoAnterior = LOW;

void setup() {
  pinMode(rele, OUTPUT);
  pinMode(botao, INPUT);
}

void loop() {
  int estadoAtual = digitalRead(botao);
  if (estadoAtual == HIGH && estadoAnterior == LOW) {
    digitalWrite(rele, HIGH);
    delay(tempoAtuacao);
    digitalWrite(rele, LOW);
  }
  estadoAnterior = estadoAtual;
}
