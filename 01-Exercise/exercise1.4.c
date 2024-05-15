#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  /* A line break can be added with \n */
  printf("Zeile 1\nZeile 2");
  /* A line break only is also possible */
  printf("\n");
  /* The following lines of execute the code inside of the {}
  parantheses 5 times and the variable is printed to the output
  */
  for (int i = 0; i < 5; i++)
  {
    /* Change the following line so that every 1= .. is in a
    seperate line */
    printf("i = %d\n", i);
  }
}