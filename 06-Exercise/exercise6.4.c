#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
  int ID;
  char name[10];
  float price;
};

typedef struct item item;

int read_in_items(item[]);
void print_items(item[], int);

int main() {
  item items[2][50];
  int n_items;
  int n_smaller_items = 0;

  n_items = read_in_items(items[0]);

  for (int i = 0; i < n_items; i++) {
    for (int j = 0; j < n_items; j++) {
      if ((i != j) && (items[0][j].ID <= items[0][i].ID)) n_smaller_items++;
    }
    while (items[1][n_smaller_items].ID == items[0][i].ID) n_smaller_items--;

    items[1][n_smaller_items].ID = items[0][i].ID;
    items[1][n_smaller_items].price = items[0][i].price;
    strcpy(items[1][n_smaller_items].name, items[0][i].name);

    n_smaller_items = 0;
  }

  printf("\nPrint items in sorted order? (y/n):");

  if (getchar() == 'y') {
    printf("\nItems sorted: \n");
    print_items(items[1], n_items);
  } else {
    printf("Items unsorted: \n");
    print_items(items[0], n_items);
  }

  return 0;
}

int read_in_items(item items[]) {
  for (int i = 0; i < 50; i++) {
    printf("Item %d ID:", i + 1);
    scanf(" %d", &items[i].ID);

    printf("Item %d name (10 char max.): ", i + 1);
    scanf(" %10s", items[i].name);

    printf("Item %d price:", i + 1);
    scanf(" %f", &items[i].price);

    printf("Do you want to enter another item? (y/n):");

    while (getchar() != '\n');
    if (getchar() != 'y') {
      while (getchar() != '\n');
      return i + 1;
    }
  }

  return 50;
}

void print_items(item items[], int n_items) {
  printf("ID\tName\t\tPrice\n");
  printf("----------------------------------\n");
  for (int i = 0; i < n_items; i++) {
    printf("%d\t%s\t\t%.2f€\n", items[i].ID, items[i].name, items[i].price);
  }
}