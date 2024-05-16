#include <stdbool.h>
#include <stdio.h>

#define MIN_NUMBERS 5

int main() {
  int count = 0;
  double mean = 0;
  int input;
  char exitChar;

  printf("Enter at least %d Numbers and calculate mean.\n", MIN_NUMBERS);
  printf("Enter q to exit the Loop and calculate result.\n\n");

  while (true) {
    if (exitChar != ',') {
      printf("Number %d: ", count + 1);
    }

    if (scanf(" %d", &input) != 0) {
      mean += input;
      count++;
    }

    do {
      exitChar = getchar();
      if (exitChar == ',') {
        break;
      }
    } while (exitChar != '\n' && exitChar != 'q');

    if (exitChar == 'q') {
      if (count >= MIN_NUMBERS) {
        break;
      }

      printf("Insufficient number of integers. Please enter at least %d integers.\n", MIN_NUMBERS);
      while (getchar() != '\n');
    }
  }

  mean = mean / count;

  printf("\nMean: %.2f\n", mean);

  return 0;
}