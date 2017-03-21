#include <ESP8266WiFi.h>
int buttonPin = 5;
int buttonState = 0;
const char* ssid     = "ssid";
const char* password = "password";
const char* host = "https://api.particle.io/v1/devices/YOUR_DEVICE_ID/led";

void setup() {
  pinMode(buttonPin, INPUT);
  delay(100);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
}

void loop() {

  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH){
      sendPost();
  }

}

void sendPost() {

  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    return;
  }

  String data = "{access_token: YOUR_ACCESS_TOKEN, args: on}";

  Serial.print("Requesting POST: ");
  // Send request to the server:
  client.println("POST / HTTP/1.1");
  client.println("Host: https://api.particle.io/v1/devices/YOUR_DEVICE_ID/led");
  client.println("Accept: */*");
  client.println("Content-Type: application/x-www-form-urlencoded");
  client.print("Content-Length: ");
  client.println(data.length());
  client.println();
  client.print(data);

  delay(500); // Can be changed
  if (client.connected()) {
    client.stop();  // DISCONNECT FROM THE SERVER
  }
  Serial.println();
  Serial.println("closing connection");
  delay(5000);

 
}



