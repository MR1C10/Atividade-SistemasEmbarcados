// Exercicio 6 
const int sensor = A0;
int leitura1, leitura2, leitura3;
float media;

void setup() {
  Serial.begin(9600);
}

void loop() {
  leitura1 = analogRead(sensor);
  leitura2 = analogRead(sensor);
  leitura3 = analogRead(sensor);
  media = (leitura1 + leitura2 + leitura3) / 3.0;
  Serial.print("Media: ");
  Serial.println(media);
  delay(1000);
}
