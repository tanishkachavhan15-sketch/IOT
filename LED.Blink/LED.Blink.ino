//Global declaration
#define my_led 4 

void setup() {
  
pinMode(my_led,OUTPUT);
//Serial.begin(9600);
}

void loop() {
  digitalWrite(my_led,HIGH);
  Serial.println("LED Turns ON");
  delay(1000);

  //LED_OFF
  digitalWrite(my_led, LOW);
  Serial.println("LED Turns OFF");
  delay(1000);
}