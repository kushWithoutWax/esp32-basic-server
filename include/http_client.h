#include <WiFi.h>
#include <HTTPClient.h>

struct WifiConfig {
    const char* ssid = "Airtel_lahiri";
    const char* password = "air50896";
};

struct ServerInfo {
    String servername = "http://192.168.1.3:8081/hi";
};

struct ClientConfig {
    unsigned long timerDelay = 5000;
    unsigned long lastTime = 0;
};

class ClientWrapper {
    WifiConfig wifi_cfg;
    ServerInfo server_info;
    ClientConfig control_cfg;

public:
    void setup();
    void getRequest();
};