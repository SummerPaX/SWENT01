#include <stdbool.h>
#include <stdio.h>

int main() {
  double sum = 0;
  double input;

  do {
    printf("Enter a number: ");

    if (scanf(" %lf", &input) != 0) {
      sum += input;
    }

    while (getchar() != '\n');
  } while (input != 0.0);

  printf("Sum: %.2f\n", sum);

  return 0;
}