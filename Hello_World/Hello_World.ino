// Hello World
// Get Arduino to print on the computer screen

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("hello ");
  delay(1000);
  Serial.println("world.");
  delay(1000);
}
