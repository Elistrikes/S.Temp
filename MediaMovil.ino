void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
float sensorPin = A0, band = 0.07, a, b = a;
void loop() {
  // put your main code here, to run repeatedly:
a= analogRead(sensorPin);
b = (band*a)+((1-band)*b);
Serial.println(b);
}
