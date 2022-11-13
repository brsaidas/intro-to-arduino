int x = 5;

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("x = ");
  Serial.print(x);
  Serial.print("\n");
}