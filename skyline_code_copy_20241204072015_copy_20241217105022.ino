#include <FastLED.h>

#define NUM_LEDS 256
#define DATA_PIN 12

CRGB leds[NUM_LEDS];

//array lists for pattern 1
int blueLEDs[] = {61,232,231,233,230,217,229,235,236,237,228,227,226,212,203,187,181,169,167,152,151,136,135,120,119,104,102,90,85,84,75,68,59,108,99,92,83,76,67,60,51,50,98,109,146,157,162,173,178,147,156,163,172,179,188,219,196,124,131,147,177,174,161,158,145,142,129,126,113,110,97,220,189};
int blue2LEDs[] = {61,232,231,233,230,217,229,235,236,237,228,227,226,212,203,187,181,169,167,152,151,136,135,120,119,104,102,90,85,84,75,68,59,108,99,92,83,76,67,60,51,50,98,109,146,157,162,173,178,147,156,163,172,179,188,219,196,124,131,147,177,174,161,158,145,142,129,126,113,110,97,220,168,182,186,243,105,101,91,189};
int yellowLEDs [] = {107,100,243,50,244};
int darkblueLEDs[] = {61,59,68,75,84,91,90,101,102,105,104,119,120,135,136,151,152,167,168,182,186,187,196,203,212,219,220,226,237,243,235,228,229,217,230,233,232,231,189};
int redLEDs[] = {190,192,206,193,194,195,204,205,211,210,209,208,210,211,221,222,82,77,66,64,79,65,78,81,94,79,80,207,51,93};
int red2LEDs [] = {221,223,222,211,210,209,208,204,205,206,207,195,194,193,192,190};
int whiteLEDs [] = {7,6,5,8,9,10,23,22,21,24,25};
int db2LEDs [] = {150,149,148,140,141,130,116,115,114,125};
int greyLEDs [] = {225,238,224,239};
int grey2LEDs [] = {225,238,224};
int white2LEDs [] = {7,6,5,8,9,10,23,22};
int lb2LEDs [] = {150,149,148,140,141,130,116,115,114,125};
int rd3LEDs [] = {244};
int white3LEDs [] = {7,6,5,8,9};
int white4LEDs [] = {7,6};
int white5LEDs [] = {248,249};
int white6LEDs [] = {247,246};
int red4LEDs[] = {189,190,192,206,193,194,195,204,205,211,210,209,208,210,211,221,222,82,77,66,64,79,65,78,81,94,79,80,207,51,62};
void setup() {
  delay(1000);
  FastLED.addLeds<WS2811, DATA_PIN, GRB>(leds, NUM_LEDS);
  FastLED.clear();
  FastLED.setBrightness(10);
  delay(500);
}

void setLEDColors(int* LEDs, int numLEDs, CRGB color) {
  for (int i = 0; i < numLEDs; i++) {
    leds[LEDs[i]] = color;
  }
}

void loop() {
  // Set pattern one
  setLEDColors(redLEDs, sizeof(redLEDs) / sizeof(redLEDs[0]), CRGB(255, 0, 0));
  setLEDColors(blueLEDs, sizeof(blueLEDs) / sizeof(blueLEDs[0]), CRGB(0, 0, 255));
  setLEDColors(yellowLEDs, sizeof(yellowLEDs) / sizeof(yellowLEDs[0]), CRGB(255, 255, 0));
  setLEDColors(darkblueLEDs, sizeof(darkblueLEDs) / sizeof(darkblueLEDs[0]), CRGB(4, 2, 115));
  setLEDColors(whiteLEDs, sizeof(whiteLEDs) / sizeof(whiteLEDs[0]), CRGB(255, 255, 255));
  setLEDColors(db2LEDs, sizeof(db2LEDs) / sizeof(db2LEDs[0]), CRGB(100, 200, 255)); 
  setLEDColors(greyLEDs, sizeof(greyLEDs) / sizeof(greyLEDs[0]), CRGB(128, 128, 128));

  // Wait for 1 second
  FastLED.show();
  delay(1000);

  // Clear all LEDs
  FastLED.clear();

  setLEDColors(blue2LEDs, sizeof(blue2LEDs) / sizeof(blue2LEDs[0]), CRGB(0, 0, 255));
  setLEDColors(redLEDs, sizeof(redLEDs) / sizeof(redLEDs[0]), CRGB(255, 0, 0));
  setLEDColors(red2LEDs, sizeof(red2LEDs) / sizeof(red2LEDs[0]), CRGB(255, 0, 0));
  setLEDColors(grey2LEDs, sizeof(grey2LEDs) / sizeof(grey2LEDs[0]), CRGB(128, 128, 128));
  setLEDColors(white2LEDs, sizeof(white2LEDs) / sizeof(white2LEDs[0]), CRGB(255, 255, 255));
  setLEDColors(db2LEDs, sizeof(db2LEDs) / sizeof(db2LEDs[0]), CRGB(150, 200, 255));
  setLEDColors(rd3LEDs, sizeof(rd3LEDs) / sizeof(rd3LEDs[0]), CRGB(255, 0, 0));
  
    // Wait for 1 second
  FastLED.show();
  delay(800);

  // Clear all LEDs
  FastLED.clear();


 setLEDColors(redLEDs, sizeof(redLEDs) / sizeof(redLEDs[0]), CRGB(255, 0, 0));
  setLEDColors(blueLEDs, sizeof(blueLEDs) / sizeof(blueLEDs[0]), CRGB(0, 0, 255));
  setLEDColors(yellowLEDs, sizeof(yellowLEDs) / sizeof(yellowLEDs[0]), CRGB(255, 255, 0));
  setLEDColors(darkblueLEDs, sizeof(darkblueLEDs) / sizeof(darkblueLEDs[0]), CRGB(4, 2, 115));
  setLEDColors(white3LEDs, sizeof(white3LEDs) / sizeof(white3LEDs[0]), CRGB(255, 255, 255));
  setLEDColors(db2LEDs, sizeof(db2LEDs) / sizeof(db2LEDs[0]), CRGB(100, 200, 255)); 
  setLEDColors(greyLEDs, sizeof(greyLEDs) / sizeof(greyLEDs[0]), CRGB(128, 128, 128));

 // Wait for 1 second
  FastLED.show();
  delay(800);

  // Clear all LEDs
  FastLED.clear();


  setLEDColors(blue2LEDs, sizeof(blue2LEDs) / sizeof(blue2LEDs[0]), CRGB(0, 0, 255));
  setLEDColors(redLEDs, sizeof(redLEDs) / sizeof(redLEDs[0]), CRGB(255, 0, 0));
  setLEDColors(red2LEDs, sizeof(red2LEDs) / sizeof(red2LEDs[0]), CRGB(255, 0, 0));
  setLEDColors(grey2LEDs, sizeof(grey2LEDs) / sizeof(grey2LEDs[0]), CRGB(128, 128, 128));
  setLEDColors(white4LEDs, sizeof(white4LEDs) / sizeof(white4LEDs[0]), CRGB(255, 255, 255));
  setLEDColors(db2LEDs, sizeof(db2LEDs) / sizeof(db2LEDs[0]), CRGB(150, 200, 255));
  setLEDColors(rd3LEDs, sizeof(rd3LEDs) / sizeof(rd3LEDs[0]), CRGB(255, 0, 0));
  
  // Wait for 1 second
  FastLED.show();
  delay(1000);

  // Clear all LEDs
  FastLED.clear();

  // Set pattern one
  setLEDColors(redLEDs, sizeof(redLEDs) / sizeof(redLEDs[0]), CRGB(255, 0, 0));
  setLEDColors(blueLEDs, sizeof(blueLEDs) / sizeof(blueLEDs[0]), CRGB(0, 0, 255));
  setLEDColors(yellowLEDs, sizeof(yellowLEDs) / sizeof(yellowLEDs[0]), CRGB(255, 255, 0));
  setLEDColors(darkblueLEDs, sizeof(darkblueLEDs) / sizeof(darkblueLEDs[0]), CRGB(4, 2, 115));
  setLEDColors(db2LEDs, sizeof(db2LEDs) / sizeof(db2LEDs[0]), CRGB(100, 200, 255)); 
  setLEDColors(greyLEDs, sizeof(greyLEDs) / sizeof(greyLEDs[0]), CRGB(128, 128, 128));

  // Wait for 1 second
  FastLED.show();
  delay(1000);

  // Clear all LEDs
  FastLED.clear();

 setLEDColors(blue2LEDs, sizeof(blue2LEDs) / sizeof(blue2LEDs[0]), CRGB(0, 0, 255));
  setLEDColors(red4LEDs, sizeof(red4LEDs) / sizeof(red4LEDs[0]), CRGB(255, 0, 0));
  setLEDColors(red2LEDs, sizeof(red2LEDs) / sizeof(red2LEDs[0]), CRGB(255, 0, 0));
  setLEDColors(grey2LEDs, sizeof(grey2LEDs) / sizeof(grey2LEDs[0]), CRGB(128, 128, 128));
  setLEDColors(white5LEDs, sizeof(white5LEDs) / sizeof(white5LEDs[0]), CRGB(255, 255, 255));
  setLEDColors(db2LEDs, sizeof(db2LEDs) / sizeof(db2LEDs[0]), CRGB(150, 200, 255));
  setLEDColors(rd3LEDs, sizeof(rd3LEDs) / sizeof(rd3LEDs[0]), CRGB(255, 0, 0));
  
    // Wait for 1 second
  FastLED.show();
  delay(800);

  // Clear all LEDs
  FastLED.clear();

  setLEDColors(blue2LEDs, sizeof(blue2LEDs) / sizeof(blue2LEDs[0]), CRGB(0, 0, 255));
  setLEDColors(redLEDs, sizeof(redLEDs) / sizeof(redLEDs[0]), CRGB(255, 0, 0));
  setLEDColors(red2LEDs, sizeof(red2LEDs) / sizeof(red2LEDs[0]), CRGB(255, 0, 0));
  setLEDColors(grey2LEDs, sizeof(grey2LEDs) / sizeof(grey2LEDs[0]), CRGB(128, 128, 128));
  setLEDColors(white5LEDs, sizeof(white5LEDs) / sizeof(white5LEDs[0]), CRGB(255, 255, 255));
  setLEDColors(white6LEDs, sizeof(white6LEDs) / sizeof(white6LEDs[0]), CRGB(255, 255, 255));
  setLEDColors(db2LEDs, sizeof(db2LEDs) / sizeof(db2LEDs[0]), CRGB(150, 200, 255));
  setLEDColors(rd3LEDs, sizeof(rd3LEDs) / sizeof(rd3LEDs[0]), CRGB(255, 0, 0));
  
    // Wait for 1 second
  FastLED.show();
  delay(800);

  // Clear all LEDs
  FastLED.clear();


}