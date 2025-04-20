// Exercicio 9 
const int sensor = A0;
int leitura;
char status = 'N';

void setup() {
  Serial.begin(9600);
}

void loop() {
  leitura = analogRead(sensor);

  if (leitura < 300) status = 'N';
  else if (leitura < 700) status = 'A';
  else status = 'P';

  Serial.print("Status: ");
  Serial.println(status);
  delay(1000);
}
