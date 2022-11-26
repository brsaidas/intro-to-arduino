void setup() {
  Serial.begin(9600);
}

void proximo(int& a) {
  a++; a++;
  Serial.println("DENTRO: " + String(a));
}

void imprimirArray(int x[], int t) {
  for (int i = 0; i < t; i++) {
	Serial.print("[" + String(x[i]) + "]");
  }
  Serial.println();
}

void imprimirMatriz(int x[][2], int l, int c) {
  for (int i = 0; i < l; i++) {
    for (int j = 0; j < c; j++) {
      Serial.print("[" + String(x[i][j]) + "]");
    }
    Serial.println();
  }
  Serial.println("----------------------");
}

void loop() {
  int x[3] = {10, 20, 30};
  imprimirArray(x, sizeof(x)/sizeof(int));
}
