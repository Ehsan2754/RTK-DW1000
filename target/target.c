/*! ----------------------------------------------------------------------------
 * @file    target.c
 * @brief   target generator script for the RTK system
 *
 * @attention
 * All rights reserved.
 * 
 * @author Ehsan Shaghaei
 */

// #define ANCHOR
// #define ANCHOR_ID 0x02
#define ROVER
#define ANCHOR1_ID 0x01
#define ANCHOR2_ID 0x02
#define DEBUG

#include <target.h>
#include <stdio.h>
#include <stdarg.h>
#include <ILI9341_Driver.h>
#include "port.h"

#if (defined (ANCHOR) && defined (ANCHOR_ID))  
#include "./anchor.c"
#endif //ANCHOR && ANCHOR_ID

#if (defined (ROVER) && defined (ANCHOR1_ID) && defined (ANCHOR2_ID))   
#include "./rover.c"
#endif //ROVER



void target()
{


  init_debug();
  clear();
  setup_DW1000RSTnIRQ(1);
  dw_main();
    
}

#ifdef DEBUG
uint16_t debug_x = 20;
uint16_t debug_y = 20;

void init_debug(void)
{
  ILI9341_Init();
  ILI9341_Set_Rotation(3);
}
void clear(void)
{
  debug_x=0;
  debug_y=0;
  ILI9341_Fill_Screen(BLACK);
  ILI9341_Draw_String(20, 0, RED, BLUE, "********** Target Logs **********", 2);
}

void logs(char* s,uint16_t x, uint16_t y)
{
   ILI9341_Draw_String(x, y, GREENYELLOW, BLACK, s, 2);
}
#endif //DEBUG