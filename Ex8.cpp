// Exercicio 8 
const int sensorNivel = A0;
int valorNivel;

void setup() {
  Serial.begin(9600);
}

void loop() {
  valorNivel = analogRead(sensorNivel);

  if (valorNivel < 300) {
    Serial.println("Nivel: Baixo");
  } else if (valorNivel < 700) {
    Serial.println("Nivel: Medio");
  } else {
    Serial.println("Nivel: Alto");
  }
  delay(1000);
}
