#include <DHT.h>
#define DHTPIN ____  //pin DHT 23
#define Buzzer_Pin ____

#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  dht.begin();
  pinMode(Buzzer_Pin, ____);
}
void loop() {
  // put your main code here, to run repeatedly:
  ////// รับค่า  Sensor DHT
  float humi = dht.readHumidity();     //รับค่าความชื้น
  float temp = dht.readTemperature();  //รับค่าอุณหภูมิ
  Serial.print("Humidity : ");
  Serial.println(____);
  Serial.print("Temperature : ");
  Serial.println(____);
  delay(1000);

  if(temp > 28){
    digitalWrite(Buzzer_Pin, ____);
    delay(1000);
  }
  else {
    digitalWrite(Buzzer_Pin, LOW);
    delay(1000);
  }
}





