#include <stdio.h>
#include <math.h>

int main(void)
{
  long double x, y, z;

  printf("Enter the x coordinate: ");
  scanf("%Lf", &x);

  printf("Enter the y coordinate: ");
  scanf("%Lf", &y);

  printf("Enter the z coordinate: ");
  scanf("%Lf", &z);

  long double radius = sqrt((x * x) + (y * y) + (z * z));

  long double circumference = 2.0 * M_PI * radius;
  long double surfaceArea = 4.0 * M_PI * pow(radius, 2);
  long double volume = (4.0 / 3.0) * M_PI * pow(radius, 3);

  printf("Radius: %Lf\n", radius);

  printf("Circumference: %Lf\n", circumference);
  printf("Surface Area: %Lf\n", surfaceArea);
  printf("Volume: %Lf\n", volume);

  return 0;
}