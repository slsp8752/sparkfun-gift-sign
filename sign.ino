
int led2 = D0;

void setup() {
    Serial.begin(9600);
   pinMode(led2, OUTPUT);
   Particle.function("led",ledToggle);
   digitalWrite(led2, LOW);

}

void loop() {
}

int ledToggle(String command) {

    digitalWrite(led2,HIGH);
    delay(1000);
    digitalWrite(led2,LOW);
    delay(500);
    digitalWrite(led2,HIGH);
    delay(500);
    digitalWrite(led2,LOW);
    delay(250);
    digitalWrite(led2,HIGH);
    delay(250);
    digitalWrite(led2,LOW);
    delay(125);
    digitalWrite(led2,HIGH);
    delay(125);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(62);
    digitalWrite(led2,LOW);
    delay(62);
    digitalWrite(led2,HIGH);
    delay(3000);
    digitalWrite(led2,LOW);

    return 1;

}
