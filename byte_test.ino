uint32_t n;
void setup() {
  // put your setup code here, to run once:
  n=0;
  Serial.begin(9600);
}

void loop() {
  Serial.println(n++);
  delay(10);
}
