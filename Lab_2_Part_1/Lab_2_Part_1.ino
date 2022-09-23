void setup() {
  // put your setup code here, to run once:
pinMode(12,INPUT);
pinMode(10 OUTPUT);
pinMode(8, INPUT);
pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(6, LOW);
  digitalWrite(10, LOW);

  if(digitalRead(12) == HIGH && digitalRead(8) == LOW){
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
    delay(1000);
  }

  if(digitalRead(12) == LOW && digitalRead(8) == HIGH){
    digitalWrite(6, HIGH);
    delay(1000);
    digitalWrite(6, LOW);
    delay(1000);
  }

  if(digitalRead(12) == HIGH && digitalRead(8) == HIGH){
    digitalWrite(10, HIGH);
    digitalWrite(6, LOW);
    delay(1000);
    digitalWrite(10, LOW);
    digitalWrite(6, HIGH);
    delay(1000);
  }

}
