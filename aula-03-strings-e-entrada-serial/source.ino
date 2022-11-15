#define STR(x) String(x)

String palavra = STR(10.5);

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String dados = Serial.readString();
    
    Serial.println("dados = [" + dados + "]");
  }
  
  Serial.println("O valor de e: " + STR(10));
}