int Relay = 8; //relay hooked to pin 8

void setup() {                
  pinMode(Relay, OUTPUT);     
}

void loop() {
  digitalWrite(Relay, LOW);		// turn the motor/relay off by making the voltage LOW
  delay(8000);					// 8 seconds of motor spin x3 = 58g of food
  digitalWrite(Relay, HIGH);	// turn the motor/relay on (HIGH is the voltage level)
  delay(28731000);				// wait 8 hours
}
