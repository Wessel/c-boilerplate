/* macros.h */
#include <stdio.h>

#ifndef MACROS_H
#define MACROS_H

enum DEBUG_STATE { INACTIVE, ACTIVE };

#ifndef __DEBUG__
  #define __DEBUG__ ACTIVE
#endif

/** @brief Prints to the console only if DEBUG = 1 **/
#define dbg(fmt, ...) do { \
  if (__DEBUG__ == ACTIVE) \
    fprintf(stderr, "%s:%d:%s(): " fmt, __FILE__, __LINE__, __func__, __VA_ARGS__); \
} while (0)

#define dbg_no_info(fmt, ...) do { \
  if (__DEBUG__ == ACTIVE) \
    fprintf(stderr, fmt, __VA_ARGS__); \
} while (0)

#endif
