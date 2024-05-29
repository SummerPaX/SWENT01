#include <stdio.h>

#define MAX_NUMBERS 10

_Bool allNumbersUnique(double numbers[], int usedFields) {
  for (int i = 0; i < usedFields; i++) {
    for (int j = i + 1; j < usedFields; j++) {
      if (numbers[i] == numbers[j]) {
        return 0;
      }
    }
  }
  return 1;
}

int main(void) {
  double numbers[MAX_NUMBERS];
  int count = 0;

  printf("Enter up to %d numbers (Null terminates the input): \n", MAX_NUMBERS);

  while (count < MAX_NUMBERS) {
    double number;
    printf("Enter number %d: ", count + 1);
    scanf("%lf", &number);

    if (number == 0) {
      break;
    }

    numbers[count] = number;
    count++;
  }

  if (allNumbersUnique(numbers, count)) {
    printf("All numbers are unique.\n");
  } else {
    printf("Duplicate numbers found.\n");
  }

  return 0;
}