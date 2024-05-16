#include <stdio.h>

// Sum function
int sum_op(int first, int second) {
  static int count = 0;
  count++;
  printf("Function called %d times\n", count);
  int sum = first + second;
  return sum;
}

int main(void) {
  int first, second;
  for (int i = 0; i < 10; i++) {
    printf("Enter the first operand for the sum operation\n");
    scanf(" %d", &first);
    printf("Enter the second operand for the sum operation\n");
    scanf(" %d", &second);
    int sum = sum_op(first, second);  // call of the sum function
    printf("The sum of %d and %d is %d\n", first, second, sum);
  }
}