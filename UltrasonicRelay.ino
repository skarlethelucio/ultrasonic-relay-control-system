const int trigPin = 8;
const int echoPin = 9;
const int relePin = 10;

long time; 
float distance;

const float minDistance = 3.0;
const float maxDistance = 40.0;

void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(relePin,OUTPUT);
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
  //Enviar un pulso ultrasónico
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  //Leer el pulso que rebota
  time = pulseIn(echoPin,HIGH);
  distance = time * 0.0343 / 2;
  
  if (distance <= 10.0){
    digitalWrite(relePin,LOW);

  }
  else if(distance >= 10){
    digitalWrite(relePin,HIGH);

  }
  Serial.println(distance);
}
