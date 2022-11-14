unsigned int a = 65536;
char b = 'B';
float c = 10.5;
double d = 19.56;

void setup() {
	Serial.begin(9600);
}

void loop() {
  	Serial.print("a = ");
  	Serial.println(a);
}
