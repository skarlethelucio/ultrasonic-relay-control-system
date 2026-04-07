const int mic = 4;
const int relePin = 3;
int count = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(mic, INPUT);
  pinMode(relePin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(relePin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  int detector = digitalRead(mic);
  if (detector == LOW) {
    Serial.println("Aplauso");
    count++;
    Serial.println(count);
    delay(1000);
  }
  if (count == 1) {
    digitalWrite(relePin, LOW);
  }
  if (count == 3) {
    digitalWrite(relePin, HIGH);
    count = 0;

  }

}
