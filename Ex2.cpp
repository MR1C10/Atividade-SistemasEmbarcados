// Exercicio 2 
const int botao = 2;
int contador = 0;
int estadoAnterior = LOW;

void setup() {
  pinMode(botao, INPUT);
  Serial.begin(9600);
}

void loop() {
  int estadoAtual = digitalRead(botao);
  if (estadoAtual == HIGH && estadoAnterior == LOW) {
    contador++;
    Serial.println(contador);
    delay(200); // debounce
  }
  estadoAnterior = estadoAtual;
}
