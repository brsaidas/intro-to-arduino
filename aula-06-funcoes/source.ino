void setup() {
  Serial.begin(9600);
}

int soma(float valor1, float valor2) {
  float res = valor1 + valor2;
  return res;
}

String toString(int valor) {
  return String(valor);
}

void loop() {
  Serial.println("Valor: " + toString(10 + 15));
}
