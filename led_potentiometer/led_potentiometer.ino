//global declaration
#define pot A0
#define led 2

void setup() {
  pinMode(pot , INPUT);
  Serial.begin(9600);
  pinMode(led , INPUT);
  Serial.begin(9600);
}

void loop() {
  
  int x = analogRead(pot);
  Serial.print("Pot Reading = ");
  Serial.println(x);
  
  digitalWrite(led, LOW);
  Serial.println("LED Turns OFF");
  delay(1000);
  
  if( x>0 ){
        digitalWrite(led, HIGH);
        Serial.println("LED turns ON");
      }
      else{
        digitalWrite(led, LOW);
        Serial.println("LED turns OFF");
      }
  delay(1000);
}
