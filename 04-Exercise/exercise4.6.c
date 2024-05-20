#include <stdio.h>
#include <stdlib.h>

void printBinary(unsigned char num, char end) {
  for (int bit = 7; bit >= 0; bit--) {
    printf("%d", (num >> bit) & 1);
  }
  printf("%c", end);
}

int main(void) {
  unsigned char byte = 171, sip = 87, xnor;

  printBinary(byte, '\n');
  printBinary(sip, '\n');

  xnor = ~(byte ^ sip);
  printf("\n--XNOR--\n");
  printBinary(xnor, '\n');
  printf("--------\n\n");

  int count = 0;

  for (int i = 0; i < 8; i++) {
    count += (xnor >> i) % 2 != 0;
  }

  printf("%d bits are equal", count);

  exit(EXIT_SUCCESS);
}