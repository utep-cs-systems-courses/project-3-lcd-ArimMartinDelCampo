/** \file lcddemo.c
 *  \brief A simple demo that draws a string and square
 */

#include <libTimer.h> 
#include "lcdutils.h"
#include "lcddraw.h"

/** Initializes everything, clears the screen, draws "hello" and a square */
int
main()
{
  configureClocks();
  lcd_init();
  u_char width = screenWidth, height = screenHeight;

  clearScreen(COLOR_BLUE);

   drawString5x7(20,20, "Hola", COLOR_GREEN, COLOR_RED);

   fillRectangle(40,40, 80, 80, COLOR_RED);
  //#define centerRow (screenHeight/4)
  // #define centerCol (screenWidth/4)

  //for(int i = 0; i<20; i++){
  //drawPixel(centerCol + i*10, centerRow - (i/4), COLOR_PINK);

  }


