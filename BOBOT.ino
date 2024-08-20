void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
  forward();
  // put your main code here, to run repeatedly:

}

void forward() {
digitalWrite(2,LOW);
analogWrite(4,255);
digitalWrite(5,HIGH);
analogWrite(6,255);
}