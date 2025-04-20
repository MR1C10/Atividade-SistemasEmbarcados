// Exercicio 4 
const int pinoSensor = A0;
float temperatura = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int leitura = analogRead(pinoSensor);
  temperatura = (leitura * 5.0 * 100.0) / 1024.0; // LM35
  Serial.print("Temperatura: ");
  Serial.println(temperatura);
  delay(1000);
}
