# Power mode
## Cíl
Testování minimální spotřeby samotného esp32

## Výsledky
| Spotřeba | WIFI |
|-------|---------|
| 125mA | po prvním spuštění|
| 60 mA | při vypisování do konzole (Ahoj)|
| 73 mA | Zapnuté BLE bez konzole |
| 73 mA | Vypnuté BLE bez konzole|
| 73 mA | Bez WIFI bez konzole|
| 60 mA | Bez WIFI BLE + konzole|
| 60 mA | S WIFI BLE + konzole|
| 73 mA | S WIFI BLE bez konzole|
| 5  mA | Deep sleep|

## Zdroje
[Insight Into ESP32 Sleep Modes & Their Power Consumption](https://lastminuteengineers.com/esp32-sleep-modes-power-consumption/#esp32-hibernation-mode) <br>
[Sleep Modes](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/sleep_modes.html) <br>
[Power Management](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/system/power_management.html) <br>
[ESP32 Deep Sleep with Arduino IDE and Wake Up Sources](https://randomnerdtutorials.com/esp32-deep-sleep-arduino-ide-wake-up-sources/) <br>

## Poznámky
Na ESP32 se nachází Power LED bez možnosti vypnutí