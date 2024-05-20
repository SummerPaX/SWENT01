#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int inputGuess(int randInt) {
  int guess;
  printf("Guess: ");
  scanf("%d", &guess);

  if (guess == randInt) {
    return true;
  }

  printf("The sought number is %s!\n", (guess > randInt) ? "smaller" : "greater");

  return false;
}

int main(void) {
  srand(time(NULL));

  int randInt = rand() % 100;
  int count;

  for (count = 1; inputGuess(randInt) == false; count++);

  printf("\nCongratulations, you have found the sought number in %d tries!\n\n", count);

  return 0;
}