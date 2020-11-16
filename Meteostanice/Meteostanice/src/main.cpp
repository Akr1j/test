#include <Arduino.h>
#include <sys/types.h>
#include <sys/time.h>

int sleepTime = 5; //Doba spánku (ve vteřinách)

static uint64_t sleep_start_us = 0;
struct timeval tv_now;
RTC_DATA_ATTR long int casSpankuStary;

void timeChecker() {
  sleep_start_us = gettimeofday(&tv_now,NULL);
  time_t now;
  time(&now);
  long int casSpanku = now;


  if (casSpanku - casSpankuStary < 5)
  {
    Serial.println("Ukradnuto");
  }
  Serial.println();
  Serial.println(casSpanku);
  Serial.println(casSpankuStary);
  casSpankuStary = casSpanku;
 
}

void setup() {
  Serial.begin(9600);

}

void loop() {
  timeChecker();
  esp_deep_sleep(sleepTime * 1000000);
}