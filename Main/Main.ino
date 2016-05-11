#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(4, 5, 6, 7, 8);

int simbol[10];


void asfisare() {
display.setcursor(10, 10);
display.drawRect(10, 10, 7, 10, BLACK);
display.drawRect(20, 10, 7, 10, BLACK);
display.drawRect(30, 10, 7, 10, BLACK);
display.setcursor(40, 30);
display.print( F("Spin it!"));
display.display();
}







void setup() {
display.begin();
display.setcontrast(50);
display.cleardisplay();
}

void loop() {
