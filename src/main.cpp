#include <TFT_eSPI.h>
TFT_eSPI tft = TFT_eSPI();

int screenWidth = tft.getViewportHeight();

struct square
{
  int xStart;
  int yStart;
  int height;
  int width;
  int color;
};

square greySquare = 
{
  30,
  20,
  150,
  screenWidth - 30 * 2,
  TFT_SILVER
};

void setup() 
{
  tft.init();
  tft.setRotation(1);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0,0,4);
  tft.setTextColor(TFT_WHITE);
  tft.fillRect(greySquare.xStart, greySquare.yStart, greySquare.width, greySquare.height, greySquare.color);
}

void loop() 
{
  
}