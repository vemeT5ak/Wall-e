/* Adapted from -- MultiArrays - see https://github.com/FastLED/FastLED/wiki/Multiple-Controller-Examples 
This code is the inital test for my full size Wall-E. This code is available at https://github.com/vemeT5ak and will be update as the oppertunity arises.

This code is open for anyone to use and tweak for personal use. Please don't make money off my work.

*/



#include "FastLED.h"

#define NUM_LEDS_PER_STRIP 8
CRGB yellowLeds[NUM_LEDS_PER_STRIP];
#define MAX_BRIGHTNESS 120 //This value (0-255) will set the maximum brightness. as Max brightness the 
                          //Neopixels will draw 3.6 amps. Make sure your powersupply can keep up.

#define initalize 13

void setup() {
  
     
    FastLED.show(); // clear everything before we move on
    FastLED.setBrightness(MAX_BRIGHTNESS);

    FastLED.addLeds<NEOPIXEL, 11>(yellowLeds, NUM_LEDS_PER_STRIP); // This group repeats for each row during the startup sequence. the number represents the pin. 
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
  }
  }
    FastLED.addLeds<NEOPIXEL, 12>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
    // Start playing the sound as connected to the FX board via pin13
    pinMode (initalize, OUTPUT);
  digitalWrite(initalize,LOW);
  
    // tell FastLED there are NEOPIXEL leds on pin 2
  FastLED.addLeds<NEOPIXEL, 10>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  FastLED.addLeds<NEOPIXEL, 9>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  FastLED.addLeds<NEOPIXEL, 8>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  FastLED.addLeds<NEOPIXEL, 7>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }  
  FastLED.addLeds<NEOPIXEL, 6>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  FastLED.addLeds<NEOPIXEL, 5>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  FastLED.addLeds<NEOPIXEL, 4>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  FastLED.addLeds<NEOPIXEL, 3>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  FastLED.addLeds<NEOPIXEL, 2>(yellowLeds, NUM_LEDS_PER_STRIP);
  {
  for(int i = 0; i < NUM_LEDS_PER_STRIP; i++) {
    // set our current dot to red, green, and blue
    yellowLeds[i] = CRGB::Yellow;
    FastLED.show();
    delay(70);
  }
  }
  // We're done with the sound board. Time to turn pin13 off
  digitalWrite(initalize,HIGH);
}

void loop(){
}
