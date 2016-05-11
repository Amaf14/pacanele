#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(4, 5, 6, 7, 8);

int simbol[10];
int numar, digit[3];
bool end=false;

void generator() {
digit[1]=simbol[random(0, 9)];
digit[2]=simbol[random(0, 9)];
if(numar==100 && digit[1]==digit[2])
   digit[3]=digit[2];
else
   digit[3]=simbol[random(0, 9)];
}








void asfisare() {
display.setcursor(10, 10);
display.drawRect(10, 10, 7, 10, BLACK);
display.drawRect(20, 10, 7, 10, BLACK);
display.drawRect(30, 10, 7, 10, BLACK);
display.setcursor(40, 30);
display.print( F("Spin it!"));
display.display();
}

void logo() {
display.cleardisplay();
display.setcursor(10, 20);
display.setcolor(BLACK);
display.print(F("Pacanele"));
display.display();
}





void setup() {
display.begin();
display.setcontrast(50);
display.cleardisplay();
}

void loop() {

while(end!=true) {
  i
