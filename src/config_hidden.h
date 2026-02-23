#ifndef CONFIG_HIDDEN_H
#define CONFIG_HIDDEN_H

#include <WiFi.h>

extern const char* ssid;
extern const char* password;

extern IPAddress ip;
extern IPAddress gateway;
extern IPAddress subnet;

extern const char* mqtt_server;


#endif


