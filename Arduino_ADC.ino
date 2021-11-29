
// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600);
}

void loop() {
  int ldr = analogRead(A1);
  Serial.println(ldr);
  delay(500);
}

/* 
int LDR = A0;
int LDR_Value;

void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(LDR, INPUT);
  Serial.begin(9600);
}

void loop() {
  LDR_Value = analogRead(A0);
  Serial.println(LDR_Value);
  delay(500); 
}
 */
