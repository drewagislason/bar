/**************************************************************************************************
  bar.h
  Copyright 2024 Drew Gislason
  license: <https://mit-license.org>
**************************************************************************************************/
#ifndef BAR_H
#define BAR_H

// allows source to be compiled with C or C++ compilers
#ifdef __cplusplus
  extern "C" {
#endif

#define SZ_BAR_VER  "1.0"

int bar_multiply(int a, int b);

#ifdef __cplusplus
  }
#endif

#endif // BAR_H
