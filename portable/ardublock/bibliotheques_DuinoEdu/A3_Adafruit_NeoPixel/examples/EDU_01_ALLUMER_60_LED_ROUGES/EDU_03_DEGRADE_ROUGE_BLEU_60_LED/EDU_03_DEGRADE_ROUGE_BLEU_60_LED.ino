#include <Adafruit_NeoPixel.h>

//libraries at http://duinoedu.com/dl/lib/grove/EDU_Adafruit_NeoPixel_FlexStrip_Grove/ 
Adafruit_NeoPixel monRuban_pin2 = Adafruit_NeoPixel(60,2, NEO_GRB + NEO_KHZ800);

void setup()
{
  monRuban_pin2.brancher();
  monRuban_pin2.afficher();
}

void loop()
{
  monRuban_pin2.preparerPixel(0,1000 ,0 ,0, 60,1,0,0,1000 );
  monRuban_pin2.afficher();
}


