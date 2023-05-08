const int l1= 2;
const int l2 = 3;
const int l3= 4;
const int l4 = 5;

void setup() {
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
}

void loop() {
  digitalWrite(l1, HIGH);
  delay(250);

  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
  delay(250);

  digitalWrite(l2, LOW);
  digitalWrite(l3, HIGH);
  delay(250);

  digitalWrite(l3, LOW);
  digitalWrite(l4, HIGH);
  delay(250);

  digitalWrite(l4, LOW);
  digitalWrite(l1 | l2 | l3 | l4, HIGH);
  delay(250);

  digitalWrite(l1 & l2 & l3 & l4, LOW);
  delay(250);
}