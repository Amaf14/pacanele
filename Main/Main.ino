#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_PCD8544.h>

Adafruit_PCD8544 display = Adafruit_PCD8544(4, 5, 6, 7, 8);

int simbol[]={$, 7, K, T, ;
int numar, digit[3];
bool end=false;

void generator() {
   digit[1]=simbol[random(0, 9)];
   digit[2]=simbol[random(0, 9)];
   if(numar==100 && digit[1]==digit[2]) {
      numar=0;
      digit[3]=digit[2];
   }
   else {
      digit[3]=simbol[random(0, 9)];
      numar++;
   }
}



void afisare_digiti(int poz, int valoare) {
   display.setCursor(poz*10+5, 10);
   display.setTextColor(WHITE);
   display.setTextSize(2);
   display.print(valoare);
   display.display();
}




void asfisare_decor() {
   display.fillRect(10, 10, 7, 10, BLACK);
   display.fillRect(10, 20, 7, 10, BLACK);
   display.fillRect(10, 30, 7, 10, BLACK);
   display.setcursor(40, 30);
   display.print( F("Spin it!"));
   display.display();
}

void logo() {
   display.cleardisplay();
   display.setCursor(10, 20);
   display.setTextColor(BLACK);
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
