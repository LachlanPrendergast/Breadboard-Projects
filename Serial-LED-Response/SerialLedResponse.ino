int ledPin = 7;

void setup() {               
  Serial.begin(9600); 
  pinMode(ledPin, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) {
    char incomingByte = Serial.read();

    if (incomingByte != '\n' ){
      Serial.print("Returning: ");
      Serial.println(incomingByte);
      digitalWrite(ledPin, HIGH);
      delay(500); 
      digitalWrite(ledPin, LOW); 
      delay(500);
    }
  }
}
