// Here you will test whether the system you just designed will work.
// The code lights an LED for 2 seconds and turns it off for 10 seconds.


void setup() {
 // seting up  the IO pins used and whether they are outputs or inputs.
pinMode (4,OUTPUT);
}
void loop() {
  // putthe main code here, to run repeatedly:
 digitalWrite(9,HIGH);
 delay(2000);
 digitalWrite(4,LOW);
 delay(10000);
}
