#define DEBUG
#define EX_05B_DEF


#include <target.h>
#include <stdio.h>
#include <stdarg.h>
#include <ILI9341_Driver.h>
#include "port.h"

#ifdef EX_01A_DEF
#include <./ex_01a_simple_tx/ex_01a_main.c>
#endif //EX_01A_DEF

#ifdef EX_02A_DEF 
#include "./ex_02a_simple_rx/ex_02a_main.c"
#endif //EX_02A_DEF

#ifdef EX_02D_DEF 
#include "./ex_02d_rx_sniff/ex_02d_main.c"
#endif //EX_02D_DEF


#ifdef EX_05A_DEF 
#include "./ex_05a_ds_twr_init/ex_05a_main.c"
#endif //EX_05A_DEF

#ifdef EX_05B_DEF 
#include "./ex_05b_ds_twr_resp/ex_05b_main.c"
#endif //EX_05B_DEF 

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