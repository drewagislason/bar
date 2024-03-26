/**************************************************************************************************
  bar.c - A simple math program to demonstrate features of flymake and flydoc
  Copyright 2024 Drew Gislason
  license: <https://mit-license.org>
**************************************************************************************************/
#include "bar.h"

/*!------------------------------------------------------------------------------------------------
  @defgroup bar multiply two numbers (integers)

  Does not detect overflow
*///-----------------------------------------------------------------------------------------------

/*!------------------------------------------------------------------------------------------------
  multiply two numbers

  @param    a   first multiplier
  @param    b   second multiplicand
  @return   product of a * b
*///-----------------------------------------------------------------------------------------------
int bar_multiply(int a, int b)
{
  return a * b;
}
