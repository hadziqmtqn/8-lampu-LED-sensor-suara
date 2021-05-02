int sensorSuara = A0;
int pinLED1 = 13;
int pinLED2 = 12;
int pinLED3 = 11;
int pinLED4 = 10;
int pinLED5 = 9;
int pinLED6 = 8;
int pinLED7 = 7;
int pinLED8 = 6;
void setup() {
  Serial.begin(9600);
  pinMode (pinLED1, OUTPUT);
  pinMode (pinLED2, OUTPUT);
  pinMode (pinLED3, OUTPUT);
  pinMode (pinLED4, OUTPUT);
  pinMode (pinLED5, OUTPUT);
  pinMode (pinLED6, OUTPUT);
  pinMode (pinLED7, OUTPUT);
  pinMode (pinLED8, OUTPUT);
  pinMode (sensorSuara, INPUT) ;
}
void loop () {
  int sensorValue = digitalRead(sensorSuara);
  //  1
  if (sensorValue == HIGH) {
    digitalWrite (pinLED1, HIGH);
  }
  else {
    digitalWrite (pinLED1, LOW);
  }
  // 2
  if (sensorValue == LOW) {
    digitalWrite (pinLED2, LOW);
  }
  else {
    digitalWrite (pinLED2, HIGH);
  }
  // 3
  if (sensorValue == HIGH) {
    digitalWrite (pinLED3, HIGH);
  }
  else {
    digitalWrite (pinLED3, LOW);
  }
  // 4
  if (sensorValue == LOW) {
    digitalWrite (pinLED4, LOW);
  }
  else {
    digitalWrite (pinLED4, HIGH);
  }
  // 5
  if (sensorValue == HIGH) {
    digitalWrite (pinLED5, HIGH);
  }
  else {
    digitalWrite (pinLED5, LOW);
  }
  // 6
  if (sensorValue == LOW) {
    digitalWrite (pinLED6, LOW);
  }
  else {
    digitalWrite (pinLED6, LOW);
  }
  // 7
  if (sensorValue == HIGH) {
    digitalWrite (pinLED7, HIGH);
  }
  else {
    digitalWrite (pinLED7, LOW);
  }
  // 8
  if (sensorValue == LOW) {
    digitalWrite (pinLED8, LOW);
  }
  else {
    digitalWrite (pinLED8, LOW);
  }
}
