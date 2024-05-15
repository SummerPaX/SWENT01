#include <stdio.h>

#define MIN_NUMBERS 5
#define MAX_NUMBERS 20

int main()
{
  int numbers[MAX_NUMBERS];
  int count = 0;
  double mean = 0;
  int input;

  printf("Enter between %d and %d Numbers and calculate mean.\n", MIN_NUMBERS, MAX_NUMBERS);
  printf("Enter -1 to exit the Loop and calculate result.\n\n");

  for (; count < 20; count++)
  {
    printf("Number %d:", count + 1);
    scanf("%d", &input);

    if (input == -1)
    {
      if (count >= MIN_NUMBERS)
      {
        break;
      }

      count--;
      printf("Insufficient number of integers. Please enter at least %d integers.\n", MIN_NUMBERS);
      continue;
    }

    numbers[count] = input;
  }

  for (int i = 0; i < count; i++)
  {
    mean += numbers[i];
  }

  mean = mean / count;

  printf("\nMean: %.2f\n", mean);

  return 0;
}