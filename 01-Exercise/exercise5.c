#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *line(char border, int length)
{
  char *line = malloc(length);

  for (int i = 0; i < length - 1; i++)
  {
    line[i] = border;
  }
  line[length - 1] = '\n';

  return line;
}

char *textLine(char *text, char border, int length)
{
  char *line = malloc(length);

  // get the length of the text
  int textLength = 0;
  while (text[textLength] != '\0')
  {
    textLength++;
  }

  // create the line
  line[0] = border;
  for (int i = 1; i < length - 2; i++)
  {
    if (i <= ((length - 3) - textLength) / 2 || i > ((length - 3) + textLength) / 2)
    {
      line[i] = ' ';
    }
    else
    {
      line[i] = text[i - ((length - 3) - textLength) / 2 - 1];
    }
  }
  line[length - 2] = border;
  line[length - 1] = '\n';

  return line;
}

void printTextBlock(char *text[], char border, int length)
{

  printf("%s", line(border, length));
  for (int i = 0; text[i] != NULL; i++)
  {
    printf("%s", textLine(text[i], border, length));
  }
  printf("%s", line(border, length));
}

int main(void)
{
  char *text[] = {"SWENT2024 Class 1", "Paulus Summer", "52303789", NULL};
  printTextBlock(text, '*', 30);
  printTextBlock(text, '#', 25);
  printTextBlock(text, '>', 40);

  return EXIT_SUCCESS;
}