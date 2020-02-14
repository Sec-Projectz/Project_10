void setup() {
  // put your setup code here, to run once:
pinMode(D4,OUTPUT);
pinMode(LED_BUILTIN , OUTPUT );
pinMode(D3,OUTPUT);
pinMode(D7,OUTPUT);

}

void loop() {
 trafficLights();
    delay(10000);
}

void trafficLights(){

    digitalWrite(D4, LOW);
    digitalWrite(D3, HIGH);
    delay(3000);

    digitalWrite(D3, LOW);
    digitalWrite(D7, HIGH);
    delay(5000);

    
    digitalWrite(D3, HIGH);
    delay(2000);

    // green is on for 6 seconds
    digitalWrite(D3, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D4, HIGH);
    delay(6000);
}
