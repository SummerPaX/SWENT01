#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned short int uint16;

bool isPrimeNumber(uint16 number) {
  if (number % 2 == 0) {
    return number == 2;
  }

  for (uint16 divisor = 3; divisor <= number / 3; divisor += 2) {
    if (number % divisor == 0) {
      return false;
    }
  }

  return true;
}

int main(void) {
  uint16 counter = 0;

  printf("------------CALCULATING PRIMES------------");

  // 1 is not a Prime Number
  // 2 is the only even Prime Number (we can check it manually)
  if (isPrimeNumber(2)) {
    counter++;
    printf("Number %d is a Prime Number | Count: %d \n", 2, counter);
  }

  // we can do increments of twos, because everything divisible by two (exept 2) is not a Prime
  for (uint16 i = 3; i <= SHRT_MAX; i += 2) {
    printf("checking: %d            \r", i);
    if (isPrimeNumber(i)) {
      counter++;
      printf("Number %d is a Prime Number | Count: %d \n", i, counter);
    }
  }

  // Clear last line
  printf("-------------------DONE-------------------");
}