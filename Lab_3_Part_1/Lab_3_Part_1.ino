int turnVal;
int pressureVal;

void setup() {
  // put your setup code here, to run once:
pinMode(A7, INPUT);
pinMode(A6, INPUT);
pinMode(10, OUTPUT);
pinMode(9, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  turnVal = analogRead(A6);
  pressureVal = analogRead(A7);
  Serial.print(turnVal);
  Serial.print(" , ");
  Serial.println(pressureVal);

  analogWrite(10, turnVal/4);
  analogWrite(9, pressureVal/4);

}
