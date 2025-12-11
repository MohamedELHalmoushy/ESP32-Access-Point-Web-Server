#include <WiFi.h>
const char* ssid = "ESP32-Test";
const char* password = "12345678";
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  WiFi.softAP(ssid, password);
  Serial.println("Access Point Started!");

  Serial.print("IP Address: ");
  Serial.println(WiFi.softAPIP());
  server.begin();
}

void loop() {
  WiFiClient client = server.available(); 

  if (!client) {
    return;
  }

  Serial.println("Client Connected");
  while (!client.available()) {
    delay(1);
  }

  String request = client.readStringUntil('\r');  
  Serial.println(request);

  client.flush();
  client.println("HTTP/1.1 200 OK");
  client.println("Content-Type: text/html");
  client.println("Connection: close");
  client.println();
  client.println("<html><body><h1>Welcome to The deepest point of Ocean "
               "<span style=\"color: blue;\">Blue Whales</span>!"
               "</h1></body></html>");
  delay(1);
  client.stop();
  Serial.println("Client Disconnected");
}
