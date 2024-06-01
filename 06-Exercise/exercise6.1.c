#include <math.h>
#include <stdio.h>

int main(void) {
  float field[5][5];
  printf("First Number: ");
  scanf("%f", &field[0][0]);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (i == 0 && j == 0) {
        continue;
      }
      field[i][j] = pow(field[0][0] + i, j + 1);
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      printf("%f ", field[i][j]);
    }
    printf("\n");
  }

  return 0;
}