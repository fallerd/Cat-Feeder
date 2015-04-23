
 
int Relay = 8; //relay hooked to pin 8

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(Relay, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(Relay, LOW);    // turn the motor/relay off by making the voltage LOW
  delay(8000); // 8 seconds of motor spin x3 = 58g of food
  digitalWrite(Relay, HIGH);   // turn the motor/relay on (HIGH is the voltage level)
  delay(28731000);       // wait 8 hours        

  
}
