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
// #define ANCHOR_ID 0x03
#define ROVER
#define ANCHOR_IDS         \
  {                        \
    0x01, 0x02, 0x03, 0x04 \
  }
#define DEBUG

#include <target.h>
#include <port.h>

#ifdef DEBUG
#include <stdio.h>
#include <ILI9341_Driver.h>
#endif // DEBUG

#if (defined(ANCHOR) && defined(ANCHOR_ID))
#include "./anchor.c"
#endif // ANCHOR && ANCHOR_ID

#if (defined(ROVER) && defined(ANCHOR_IDS))
#include "./rover.c"
#endif // ROVER

void target()
{
#ifdef DEBUG
  init_debug();
  clear();
#endif // DEBUG
  setup_DW1000RSTnIRQ(1);
  dw_main();
}

#ifdef DEBUG

void init_debug(void)
{
  ILI9341_Init();
  ILI9341_Set_Rotation(3);
}
void clear(void)
{
  ILI9341_Fill_Screen(BLACK);
  ILI9341_Draw_String(20, 0, RED, BLUE, "********** Target Logs **********", 2);
}

void logs(char *s, uint16_t x, uint16_t y)
{

  ILI9341_Draw_String(x, y, GREENYELLOW, BLACK, s, 2);
}
#endif // DEBUG