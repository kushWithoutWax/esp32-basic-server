# Basic HTTP functionalities on ESP32 CAM 

The idea is to test basic HTTP functionalities on a ESP32 CAM device.

__ESP32-CAM__ : Shenzen AI Thinker ESP32 CAM board.\
Using Platform IO plugin in VS-Code for this. 

HTTP Server written in Golang (I just find it easier).

## Server Setup instructions - 
1. In folder $root/go-server > go run main.go 
2. ifconfig -> Look for the local-ip - In my case it is en0 interface.
3. Replace the ip in include/http_client.h - servername - so that ESP32 can hit the right IP . [This will be changed later]


