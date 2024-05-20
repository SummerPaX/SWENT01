#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int printResult(double num1, double num2, char operation) {
  double result;

  switch (operation) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '^':
      result = pow(num1, num2);
      break;
    case '/':
      switch (num2 != 0) {
        case 0:
          printf("Divide by 0 Error!!!\n");
          return -1;
      }
      result = num1 / num2;
      break;
    default:
      printf("Invalid Operation\n");
      return -1;
  }
  printf("%.2lf %c %.2lf = %.2lf\n", num1, operation, num2, result);
  return 0;
}

void flushBuffer() { while (getchar() != '\n'); }

int main() {
  double sum = 0;
  double in, put;
  char operation;

  do {
    printf("\nCalculate: ");

    switch (scanf(" %lf %c %lf", &in, &operation, &put)) {
      case 3:
        printResult(in, put, operation);
        break;

      default:
        printf("Invalid Entry!\n");
        flushBuffer();
        operation = 'y';
        continue;
    }

    flushBuffer();
    printf("\nAnother Calculation? (y/n) ");
    scanf(" %c", &operation);
    flushBuffer();
  } while (operation == 'y');

  return 0;
}