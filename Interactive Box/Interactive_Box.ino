#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN1 6
#define PIN2 5
#define PIN3 3

Adafruit_NeoPixel topStrip = Adafruit_NeoPixel(3,PIN1, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel middleStrip = Adafruit_NeoPixel(3,PIN2, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel bottomStrip = Adafruit_NeoPixel(3,PIN3, NEO_GRB + NEO_KHZ800);

void setup() {
  // put your setup code here, to run once:
  topStrip.begin();
  topStrip.show();
  middleStrip.begin();
  middleStrip.show();
  bottomStrip.begin();
  bottomStrip.show();
  pinMode(A0,INPUT);
  pinMode(A7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int  Vslider = analogRead(A0);
int  Hslider = analogRead(A7);
uint32_t blue = topStrip.Color(0,0,255);


topStrip.fill(blue, 0,3);
middleStrip.fill(blue, 0,3);
bottomStrip.fill(blue, 0,3);
topStrip.show();
middleStrip.show();
bottomStrip.show();

if(Vslider > 0 && Vslider <= 341){
  if(Hslider >= 0 && Hslider <=341){
    for(int i = 0; i <= 15; i++){
    bottomStrip.setPixelColor(2,i*17,0,175);
    bottomStrip.show();
    delay(100);
    }
  }
  else if(Hslider > 341 && Hslider <= 682){
    for(int i = 0; i <= 15; i++){
    bottomStrip.setPixelColor(1,i*17,0,175);
    bottomStrip.show();
    delay(100);
    }
  }
  else{
    for(int i = 0; i <= 15; i++){
    bottomStrip.setPixelColor(0,i*17,0,175);
    bottomStrip.show();
    delay(100);
    }
  }
}

else if(Vslider > 341 && Vslider <= 682){
  if(Hslider >= 0 && Hslider <=341){
    for(int i = 0; i <= 15; i++){
    middleStrip.setPixelColor(2,i*17,0,175);
    middleStrip.show();
    delay(100);
    }
  }
  else if(Hslider > 341 && Hslider <= 682){
    for(int i = 0; i <= 15; i++){
    middleStrip.setPixelColor(1,i*17,0,175);
    middleStrip.show();
    delay(100);
    }
  }
  else{
    for(int i = 0; i <= 15; i++){
    middleStrip.setPixelColor(0,i*17,0,175);
    middleStrip.show();
    delay(100);
    }
  }
}

else{
  if(Hslider >= 0 && Hslider <=341){
    for(int i = 0; i <= 15; i++){
    topStrip.setPixelColor(2,i*17,0,175);
    topStrip.show();
    delay(100);
    }
  }
  else if(Hslider > 341 && Hslider <= 682){
    for(int i = 0; i <= 15; i++){
    topStrip.setPixelColor(1,i*17,0,175);
    topStrip.show();
    delay(100);
    }
  }
  else{
    for(int i = 0; i <= 15; i++){
    topStrip.setPixelColor(0,i*17,0,175);
    topStrip.show();
    delay(100);
    }
  }
}

}
