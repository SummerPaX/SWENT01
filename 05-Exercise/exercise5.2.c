#include <stdio.h>

#define MAX_LENGTH 100

int main() {
  char word[MAX_LENGTH];
  char replaceChar, newChar;

  printf("Enter a word: ");
  scanf("%s", word);

  printf("Enter a character to replace: ");
  scanf(" %c", &replaceChar);

  printf("Enter a new character: ");
  scanf(" %c", &newChar);

  for (int i = 0; word[i] != '\0'; i++) {
    if (word[i] == replaceChar) {
      word[i] = newChar;
    }
  }

  printf("Resulting word: %s\n", word);

  return 0;
}