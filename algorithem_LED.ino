void setup() {
  // put your setup code here, to run once:
int redLED=8;
float pi=3.14;
int dit=100;
int dah=500;
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(2,OUTPUT);

//other LED are disconnected
}

void loop() {
  // put your main code here, to run repeatedly:
int redLED=8;
digitalWrite(redLED,HIGH);
delay(50);
digitalWrite(redLED,LOW);
delay(50);

digitalWrite(redLED,HIGH);
delay(500);
digitalWrite(redLED,HIGH);
delay(500);


digitalWrite(redLED,HIGH);
delay(500);
digitalWrite(redLED,HIGH);
delay(500);

digitalWrite(redLED,LOW);
delay(500);
digitalWrite(redLED,HIGH);
delay(500);
digitalWrite(redLED,HIGH);
delay(500);

digitalWrite(redLED,LOW);
delay(50);
digitalWrite(redLED,HIGH);
delay(50);

delay(1000);
}
