#include <Adafruit_GFX.h> // graphics library
#include <Adafruit_ST7789.h> // library for this display
#include <SPI.h>
#define TFT_CS 10 // if your display has CS pin
#define TFT_RST 8 // reset pin
#define TFT_DC 9 // data pin

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  tft.init(240, 240, SPI_MODE2); 
  tft.setRotation(2); // rotates the screen
  tft.fillScreen(ST77XX_BLACK); // fills the screen with black colour
  tft.setCursor(10, 10); // starts to write text at y10 x10
  tft.setTextColor(ST77XX_WHITE); // text colour to white you can use hex codes like 0xDAB420 too
  tft.setTextSize(3); // sets font size
  tft.setTextWrap(true);
  tft.print("HELLO WORLD!");
}
void loop() {
  
}