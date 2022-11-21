void setup() {
  Serial.begin(9600);
}

void loop() {
  int matriz[3][3][2][4];
  
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
    	Serial.print("[" + String(matriz[i][j]) + "]");
    }
    Serial.println();
  }
  
  Serial.println("-------------------");
}