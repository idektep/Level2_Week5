#define Buzzer_Pin ____

void setup() {
  // put your setup code here, to run once:
 Serial.begin(115200);
 pinMode(Buzzer_Pin, ____);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Buzzer_Pin, HIGH);
  delay(1000);
  digitalWrite(Buzzer_Pin, LOW);
  delay(1000);
}



