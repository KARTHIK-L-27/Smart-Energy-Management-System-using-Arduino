int currentSensor = A0;
int relay = 7;

void setup() {
  pinMode(relay, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(currentSensor);
  Serial.println(value);

  if (value > 600) {   // High load threshold
    digitalWrite(relay, LOW);   // Load OFF
  } else {
    digitalWrite(relay, HIGH);  // Load ON
  }

  delay(1000);
}
EN
