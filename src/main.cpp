#include <Arduino.h>
#include <AsyncElegantOTA_RU.h>

const char* ssid     = "WT32-OTA-AP";
const char* password = "12345678";

AsyncWebServer server(80);

void setup() 
{
    Serial.begin(115200);
    WiFi.softAP(ssid, password);
    AsyncElegantOTAru.begin(&server);
    Serial.println("AsyncElegantOTAru запущен");
    server.begin();
    Serial.println("HTTP сервер запущен");
}
 
void loop(){}