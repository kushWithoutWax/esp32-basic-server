/*
  Rui Santos
  Complete project details at Complete project details at https://RandomNerdTutorials.com/esp32-http-get-post-arduino/

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files.

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
*/

#include <WiFi.h>
#include <HTTPClient.h>
#include "http_client.h"


//Your Domain name with URL path or IP address with path
//String serverName = "http://192.168.1.3:8081/hi";
ClientWrapper client;

void setup() {
  Serial.begin(115200); 
  client.setup();
}

void loop() {
  client.getRequest();
}