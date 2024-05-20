#include <stdbool.h>
#include <stdio.h>

int main() {
  double sum = 0;
  double input;

  printf("Enter 0 to calculate the resulting Sum of all entered Numbers: \n\n");

  do {
    printf("Enter a number: ");

    if (scanf(" %lf", &input) != 0) {
      sum += input;
    } else {
      printf("Invalid Input!\n");
    }

    while (getchar() != '\n');
  } while (input != 0.0);

  printf("Sum: %.2f\n", sum);

  return 0;
}