//Code for water pump. Biogardener.

//This circuit works to activate a 12V water pump, with a relay, 12V power supply. It is activated every hour.

int bomba = 2;

void setup() {
  
      pinMode(bomba,OUTPUT);
         Serial.begin(9600);
  
}

void loop() {

    digitalWrite(bomba, HIGH); 
      Serial.println("Bomba en funcionamiento");
      delay(3600000);

      digitalWrite(bomba, LOW);
        Serial.println("Bomba no accionada");
          delay(3600000);


}
