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
    // green off, yellow on for 3 seconds
    digitalWrite(D4, LOW);
    digitalWrite(D3, HIGH);
    delay(3000);

    // turn off yellow, then turn red on for 5 seconds
    digitalWrite(D3, LOW);
    digitalWrite(D7, HIGH);
    delay(5000);

    // red and yellow on for 2 seconds 
    digitalWrite(D3, HIGH);
    delay(2000);

    // turn off red and yellow, then turn on green
    digitalWrite(D3, LOW);
    digitalWrite(D7, LOW);
    digitalWrite(D4, HIGH);
    delay(3000);
}
