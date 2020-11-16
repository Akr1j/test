#include <Arduino.h>

int sleepTime = 5; //5 sekund
String jej;

void powerOff() {
  esp_err_t esp_bluedroid_disable();
  esp_err_t esp_bt_controller_disable();

  esp_err_t esp_wifi_stop(); 
}

void setup() {
  Serial.begin(9600);
  //powerOff();
}

void loop() {
  Serial.println("");
  Serial.println("Ahoj");
  esp_deep_sleep(sleepTime * 1000000);
}