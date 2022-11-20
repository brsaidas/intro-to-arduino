char c = 'A';

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  Serial.println((c == 'A' ? "c == 'A'" : "nao"));
  
}