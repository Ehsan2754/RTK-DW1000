/*! ----------------------------------------------------------------------------
 * @file    target.h
 * @brief   target generator interface for the RTK system
 *
 * @attention
 * All rights reserved.
 * 
 * @author Ehsan Shaghaei
 * 12-23-2021
 */
#ifndef __TARGET_H
#define __TARGET_H

#ifdef __cplusplus
extern "C" {
#endif //__cplusplus
#include "stdint.h"

void target(void);

#ifdef DEBUG

#ifdef __GNUC__
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE * f)
#endif //__GNUC__

void init_debug(void);
void clear(void);
void logs(char* s,uint16_t x, uint16_t y);
PUTCHAR_PROTOTYPE;

#endif //DEBUG


#ifdef __cplusplus
}
#endif //__cplusplus

#endif //__TARGET_H 