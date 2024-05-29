#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int numbers[50];
  int input;

  printf("Enter up to 50 numbers (Null terminates the input): \n");
  int i = 0;
  for (i = 0; i < 50; i++) {
    if (scanf(" %d", &input) != 1) {
      printf("Invalid Input!\n");
      while (getchar() != '\n');
      i--;
      continue;
    }
    numbers[i] = input;

    if (input == 0) {
      break;
    }
  }

  i = 0;
  printf("The entered numbers are: ");
  while (numbers[i] != 0 && i < 50) {
    printf("%d, ", numbers[i]);
    i++;
  }
  printf("\n");
}