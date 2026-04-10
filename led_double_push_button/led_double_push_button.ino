//global declaration
#define my_led1 2
#define my_led2 3
#define button1 8
#define button2 7

void setup(){
  Serial.begin(9600);
  pinMode(my_led1, OUTPUT);//LED
  pinMode(my_led2, OUTPUT);

  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop(){

      bool x = digitalRead(button1);
      bool y = digitalRead(button2);

      Serial.print("button status1");
      Serial.print(x);
      Serial.print("button status2");
      Serial.print(y);

      if( x==1 ){
        digitalWrite(my_led1, HIGH);
        digitalWrite(my_led2, LOW);
        Serial.println("LED turns ON");
        Serial.println("LED turns OFF");
      }
      else if( y==1 ){
        digitalWrite(my_led1, LOW);
        digitalWrite(my_led2, HIGH);
        Serial.println("LED turns OFF");
        Serial.println("LED turns ON");
      }
      else{
        digitalWrite(my_led1, LOW);
        digitalWrite(my_led2, LOW);
        Serial.println("LED turns OFF");
        Serial.println("LED turns OFF");
      }
      


}
