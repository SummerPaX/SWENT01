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
  bool finished_sort = false;

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

  printf("Items unsorted: \n");
  print_items(items[0], n_items);

  printf("\nItems sorted: \n");
  print_items(items[1], n_items);

  return 0;
}

int read_in_items(item items[]) {
  for (int i = 0; i < 50; i++) {
    printf("\nItem %d ID:", i + 1);
    scanf(" %d", &items[i].ID);

    printf("\nItem %d name (10 char max.): ", i + 1);
    scanf(" %10s", items[i].name);

    while (getchar() != '\n');

    printf("\nItem %d price:", i + 1);
    scanf(" %f", &items[i].price);

    while (getchar() != '\n');

    printf("\nDo you want to enter another item? (y/n):");

    if (getchar() != 'y') return i + 1;
  }

  return 50;
}

void print_items(item items[], int n_items) {
  for (int i = 0; i < n_items; i++) {
    printf("ID: %d\t\tname: %s\t\tprice: %.2f€\n", items[i].ID, items[i].name, items[i].price);
  }
}