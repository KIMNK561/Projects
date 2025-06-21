void setup() {
  Serial.begin(9600);
}

void loop() {
  float V = analogRead(A1) * (5.0 / 1023.0);
  Serial.print("Voltage: ");
  Serial.print(V, 2);
  Serial.println("V");
  delay(500);
}

