#include <stdio.h>

double recalculate(int ingredient, double portions) { return (ingredient / 4.0) * portions; }

int main(void) {
  double portions;

  printf("How many portions do you want: ");
  scanf("%lf", &portions);

  // Marmorgugelhupf for 4 Portions
  int Flour = 250;         // Gramm
  int Sugar = 125;         // Gramm
  int Icing_Sugar = 125;   // Gramm
  int Butter = 250;        // Gramm
  int Eggs = 4;            // Pieces
  int Salt = 3;            // Gramm
  int Baking_powder = 10;  // Gramm
  //...

  printf("Recipe for %.2lf Portions of Marmorgugelhupf: \n", portions);
  printf(" - Flour: %.2lf Gramm\n", recalculate(Flour, portions));
  printf(" - Sugar: %.2lf Gramm\n", recalculate(Sugar, portions));
  printf(" - Icing_Sugar: %.2lf Gramm\n", recalculate(Icing_Sugar, portions));
  printf(" - Butter: %.2lf Gramm\n", recalculate(Butter, portions));
  printf(" - Eggs: %.2lf Pieces\n", recalculate(Eggs, portions));
  printf(" - Salt: %.2lf Gramm\n", recalculate(Salt, portions));
  printf(" - Baking_powder: %.2lf Gramm\n", recalculate(Baking_powder, portions));

  return 0;
}