#include <stdio.h>

int main(void)
{
  long double width, length, height;

  printf("Enter the width of the cube: ");
  scanf("%Lf", &width);

  printf("Enter the length of the cube: ");
  scanf("%Lf", &length);

  printf("Enter the height of the cube: ");
  scanf("%Lf", &height);

  double area = 2 * (width * length + width * height + length * height);
  double perimeter = 4 * (width + length + height);
  double volume = width * length * height;

  printf("Area: %Lf\n", area);
  printf("Perimeter: %Lf\n", perimeter);
  printf("Volume: %Lf\n", volume);

  return 0;
}