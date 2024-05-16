#include <stdio.h>
#include <stdlib.h>

double add(double x, double y) { return x + y; }

double subtract(double x, double y) { return x - y; }

double multiply(double x, double y) { return x * y; }

double divide(double x, double y) {
  if (y != 0) {
    return x / y;
  } else {
    printf("Error: Division by zero is not allowed.\n");
    exit(EXIT_FAILURE);
  }
}

int main(void) {
  double x, y, result;
  char operation;

  printf("Input first number: ");
  scanf("%lf", &x);
  printf("Input second number: ");
  scanf("%lf", &y);
  printf("Input operation (+-/*): ");
  scanf(" %c", &operation);

  switch (operation) {
    case '+':
      result = add(x, y);
      printf("x + y = ");
      break;
    case '-':
      result = subtract(x, y);
      printf("x - y = ");
      break;
    case '*':
      result = multiply(x, y);
      printf("x * y = ");
      break;
    case '/':
      result = divide(x, y);
      printf("x / y = ");
      break;

    default:
      printf("Invalid operation given!\n");
      printf("Valid Operations: \n");
      printf("+ ...... Addition\n");
      printf("- ...... Subtraction\n");
      printf("* ...... Multiplication\n");
      printf("/ ...... Division\n");

      exit(EXIT_FAILURE);
  }

  printf("%lf\n", result);

  return EXIT_SUCCESS;
}