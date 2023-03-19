int p = A0;
int l = 3;

void setup() {
  Serial.begin(9600);
  pinMode(p, INPUT);
  pinMode(l, OUTPUT);

  digitalWrite(l, HIGH);
  delay(500);
  digitalWrite(l, LOW);
}

void loop() {
  while (Serial.available() == 0) {

  }

  int timeSet = Serial.readStringUntil("\r").toInt();
  delay(timeSet);
  for (int i=0;i<=5;i++) {
    digitalWrite(l, HIGH);
    delay(250);
    digitalWrite(l, LOW);
    delay(250);

  }

}