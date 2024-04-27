#include <stdio.h>
#include <stdlib.h>

// to avoid headerconflicts we can use the following preprocessor directive
#ifndef header1_h
#define header1_h
#include "header1.h"
#endif
#include "header2.h"

int main()
{
  printf("1 plus 2 ist %d\n", add(1, 2));
  printf("1 minus 2 ist %d\n", subtract(1, 2));
}