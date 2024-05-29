#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// Struct for describing a product
struct Product {
  int ID;
  char name[100];
  char description[100];
  double price;
};

int readProducts(struct Product *shoppingCart, int maxProducts) {
  int numProducts = 0;

  while (numProducts < maxProducts) {
    printf("Enter product ID: ");
    scanf("%d", &shoppingCart[numProducts].ID);

    printf("Enter product name: ");
    scanf("%s", shoppingCart[numProducts].name);

    printf("Enter product description: ");
    scanf("%s", shoppingCart[numProducts].description);

    printf("Enter product price: ");
    scanf("%lf", &shoppingCart[numProducts].price);

    numProducts++;

    char choice;
    printf("Do you want to enter another product? (y/n) ");
    scanf(" %c", &choice);
    if (choice != 'y') {
      break;
    }
  }

  return numProducts;
}

void outputProducts(struct Product *shoppingCart, int numProducts) {
  printf("\n┌ Shopping Cart\n");
  printf("├─ ");
  for (int i = 0; i < numProducts; i++) {
    printf("├─ Product %d\n", i + 1);
    printf("│ ID: %d\n", shoppingCart[i].ID);
    printf("│ Name: %s\n", shoppingCart[i].name);
    printf("│ Description: %s\n", shoppingCart[i].description);
    printf("│ Price: %.2lf\n", shoppingCart[i].price);
  }
  printf("└─ ");
}

int main() {
  struct Product shoppingCart[10];

  int numProducts = readProducts(shoppingCart, 10);
  outputProducts(shoppingCart, numProducts);

  return 0;
}
