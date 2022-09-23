#include <Adafruit_NeoPixel.h>;
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN 10

Adafruit_NeoPixel pixels= Adafruit_NeoPixel(5,PIN, NEO_GRB+NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  pinMode(12, INPUT);
  pinMode(9, INPUT);
  pixels.begin();
  pixels.show();
}

void loop() {
  pixels.clear();
  pixels.show();
  delay(500);
  // put your main code here, to run repeatedly:
  if(digitalRead(12) == HIGH && digitalRead(9) == LOW){
    for(int i = 0; i<5; i++){
    pixels.setPixelColor(i, 200,20, 0);
    pixels.show();
    delay(500);
    }
    for(int i = 4; i>=0; i--){
    pixels.setPixelColor(i, 0,0,0);
    pixels.show();
    delay(500);
  }
  }
  if(digitalRead(12) == LOW && digitalRead(9) == HIGH){
    for(int i = 0; i<5; i++){
      if(i%2 == 0){
        pixels.setPixelColor(i,200,0,0);
      }
      else{
        pixels.setPixelColor(i, 0,0,200);
      }
      pixels.show();
      delay(500);
    }
  }
  if(digitalRead(12) == HIGH && digitalRead(9) == HIGH){
    pixels.setPixelColor(0,0,150,250);
    pixels.setPixelColor(1,0,150,250);
    pixels.setPixelColor(2,0,150,250);
    pixels.setPixelColor(3,0,150,250);
    pixels.setPixelColor(4,0,150,250);
    pixels.show();
      delay(500);
    }

}
