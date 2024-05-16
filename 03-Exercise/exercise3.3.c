#include <stdio.h>
#include <stdlib.h>

// from the internet
void printBinary(unsigned char num) {
  for (int bit = 7; bit >= 0; bit--) {
    printf("%d", (num >> bit) & 1);
  }
  printf("\n");
}

int main(void) {
  unsigned char byte;

  printf("Input a number between 0 - 255: ");
  scanf("%u", (uint*)&byte);

  printf("\nINPUT  ");
  printBinary(byte);
  printf("MASK   00001111\n");
  byte &= 0b00001111;

  printf("MASKED ");
  printBinary(byte);

  printf("SHIFT  << 4bits \n");
  byte = byte << 4;

  printf("OUTPUT ");
  printBinary(byte);
  printf("---------------\n");
  printf("RESULT %u", byte);

  exit(EXIT_SUCCESS);
}