#include <math.h>
#include <stdio.h>

void readPoint(float point[3]) {
  printf("├─ x: ");
  scanf("%f", &point[0]);
  printf("├─ y: ");
  scanf("%f", &point[1]);
  printf("└─ z: ");
  scanf("%f", &point[2]);
  return point;
}

float distanceBetweenPoints(float p1[3], float p2[3]) {
  float distance = 0;
  for (int i = 0; i < 3; i++) {
    distance += pow(p1[i] - p2[i], 2);
  }
  return sqrt(distance);
}

int main() {
  float vertices[3][3];

  for (int i = 0; i < 3; i++) {
    printf("┌ Vertex %d:\n", i + 1);
    readPoint(vertices[i]);
    printf("\n");
  }

  for (int i = 0; i < 3; i++) {
    printf("Vertex %d: { ", i + 1);
    for (int j = 0; j < 3; j++) {
      printf("%.2f ", vertices[i][j]);
    }
    printf("}\n");
  }

  float perimeter = 0;
  for (int i = 0; i < 3; i++) {
    perimeter += distanceBetweenPoints(vertices[i], vertices[(i + 1) % 3]);
  }
  printf("Perimeter: %f\n", perimeter);

  return 0;
}