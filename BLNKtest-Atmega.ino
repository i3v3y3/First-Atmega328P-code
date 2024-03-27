// Here you will test whether the system you just designed will work.
// The code lights an LED for 2 seconds and turns it off for 10 seconds.

void setup() {
 // seting up  the IO pins used and whether they are outputs or inputs.

pinMode (2,OUTPUT);
}

void loop() {
  // putthe main code here, to run repeatedly:
 digitalWrite(2,HIGH);
 delay(2000);
 digitalWrite(2,LOW);
 delay(10000);
}
