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

#include <Arduino.h>
#include <U8g2lib.h>

#ifdef U8X8_HAVE_HW_SPI
#include <SPI.h>
#endif
#ifdef U8X8_HAVE_HW_I2C
#include <Wire.h>
#endif

const uint8_t clock_pin = 12;
const uint8_t data_pin = 13;
U8G2_SH1106_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE, clock_pin, data_pin);

//Your Domain name with URL path or IP address with path
//String serverName = "http://192.168.1.3:8081/hi";
ClientWrapper client;

void setup() {
  Serial.begin(115200); 
  //client.setup();
  u8g2.begin();
}

void loop() {
  //client.getRequest();
  u8g2.firstPage();
  do {
    u8g2.setFont(u8g2_font_ncenB12_tr);
    u8g2.drawStr(0,15,"Hello World");
  } while ( u8g2.nextPage() );
  delay(1000);
}