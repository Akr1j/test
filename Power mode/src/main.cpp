#include <Arduino.h>


void setup() {
  //Serial.begin(9600);
  //esp_err_t esp_bluedroid_disable();
  esp_err_t esp_wifi_stop();
}

void loop() {
  //Serial.println("Ahoj");
}


/*
125mA po prvním spuštění
60 mA při vypisování do konzole (Ahoj)
73 mA Zapnuté BLE bez konzole
73 mA Vypnuté BLE bez konzole
73 mA Bez WIFI baz konzoleb

*/