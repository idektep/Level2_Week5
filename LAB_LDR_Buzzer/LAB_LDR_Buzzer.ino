#define Buz 18
#define LDR_Pin 34
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LDR_Pin, INPUT);
  pinMode(Buz, OUTPUT);
  delay(500);
}
void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(LDR_Pin);
  Serial.print("LDR: ");
  Serial.println(val);

  if(val > 3000){
    digitalWrite(Buz, 1);
    Serial.println("Buz ON ");
    delay(500);
  }
   else{
    digitalWrite(Buz, 0);
    Serial.println("Buz Off ");
    delay(500);
   }
}
