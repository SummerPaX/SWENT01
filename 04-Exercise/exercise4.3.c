#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long int sum = 0;
  unsigned short int counter;
  for (counter = 0; counter <= SHRT_MAX; counter++) {
    sum += counter;
    printf("counter = %d | Sum = %d            \r", counter, sum);
  }  // Expected sum is 536854528

  printf("\n\nThe sum is %d", sum);
}