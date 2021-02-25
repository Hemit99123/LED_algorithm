void setup() {
  // put your setup code here, to run once:
pinMode(8,OUTPUT);
pinMode(2,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //varibles for this project:
int ledRED =8;
int ledBLUE =2;
int ledGREEN = 7;
int veryslow_TIME = 500;
int slow_TIME = 250;
int fast_TIME = 100;
int wait_time = 1000;
//Blink red:
digitalWrite(ledRED, HIGH);
delay(fast_TIME);
digitalWrite(ledRED, LOW);
delay(fast_TIME);
digitalWrite(ledRED, HIGH);
delay(fast_TIME);
digitalWrite(ledRED, LOW);
delay(fast_TIME);
digitalWrite(ledRED, HIGH);
delay(fast_TIME);
digitalWrite(ledRED, LOW);
delay(fast_TIME);
digitalWrite(ledRED, HIGH);
delay(fast_TIME);
digitalWrite(ledRED, LOW);
delay(fast_TIME);
digitalWrite(ledRED, HIGH);
delay(fast_TIME);
digitalWrite(ledRED, LOW);
delay(fast_TIME);
digitalWrite(ledRED, HIGH);
delay(fast_TIME);
digitalWrite(ledRED, LOW);
delay(fast_TIME);
//Blink green:
digitalWrite(ledGREEN,HIGH);
delay(slow_TIME);
digitalWrite(ledGREEN,LOW);
delay(slow_TIME);
digitalWrite(ledGREEN,HIGH);
delay(slow_TIME);
digitalWrite(ledGREEN,LOW);
delay(slow_TIME);
digitalWrite(ledGREEN,HIGH);
delay(slow_TIME);
digitalWrite(ledGREEN,LOW);
delay(slow_TIME);
digitalWrite(ledGREEN,HIGH);
delay(slow_TIME);
digitalWrite(ledGREEN,LOW);
delay(slow_TIME);
digitalWrite(ledGREEN,HIGH);
delay(slow_TIME);
digitalWrite(ledGREEN,LOW);
delay(slow_TIME);
//Blink blue:
digitalWrite(ledBLUE,HIGH);
delay(veryslow_TIME);
digitalWrite(ledBLUE,LOW);
delay(veryslow_TIME);
digitalWrite(ledBLUE,HIGH);
delay(veryslow_TIME);
digitalWrite(ledBLUE,LOW);
delay(veryslow_TIME);
digitalWrite(ledBLUE,HIGH);
delay(veryslow_TIME);
digitalWrite(ledBLUE,LOW);
delay(veryslow_TIME);
delay(wait_time);
}
