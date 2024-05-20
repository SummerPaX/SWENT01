#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inputGuess(int randInt) {
  int guess;
  printf("Guess: ");
  scanf("%d", &guess);

  if (guess == randInt) {
    return 1;
  }

  printf("The sought number is %s!\n", (guess > randInt) ? "greater" : "smaller");

  return 0;
}

int main(void) {
  srand(time(NULL));

  int randInt = rand() % 100;
  int count;

  for (count = 1; inputGuess(randInt) != 1; count++);

  printf("\nCongratulations, you have found the sought number in %d tries!", count);

  return 0;
}