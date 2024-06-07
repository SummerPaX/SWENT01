#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sum_sub(int[], int, long int *);

int main() {
  int array[20][5];
  long int sum[20];

  srand(time(NULL));

  for (int i = 0; i < 20; i++) {
    for (int j = 0; j < 5; j++) {
      array[i][j] = rand() % 100;
    }
  }

  for (int i = 0; i < 20; i++) {
    sum_sub(array[i], 5, &sum[i]);
  }

  printf("array_2D[20][5] = \n{\n");
  for (int i = 0; i < 20; i++) {
    printf("  {");
    for (int j = 0; j < 5; j++) {
      printf(" % 3d", array[i][j]);
    }
    printf("  }");
    if (i < 19) {
      printf(",\n");
    }
  }
  printf("\n}\n");

  printf("array_1D[20] = \n{\n");
  for (int i = 0; i < 20; i++) {
    printf(" % 4ld", sum[i]);
    if (i % 5 == 4) {
      printf("\n");
    }
  }
  printf("}\n\n");

  return 0;
}

void sum_sub(int sub_array[], int length, long int *sum_array) {
  for (int i = 0; i < length; i++) *sum_array += sub_array[i];
}