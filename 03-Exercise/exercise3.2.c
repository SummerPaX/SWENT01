#include <stdbool.h>
#include <stdio.h>

typedef union WeightOrHeight {
  float weight;
  int height;
} WeightOrHeight;

typedef struct Person {
  char name[20];
  int age;
  char profession[20];
  bool isWeight;
  WeightOrHeight weightOrHeight;
} Person;

Person enterNewPerson() {
  Person person;
  printf("Enter name: ");
  scanf(" %s", person.name);

  printf("Enter age: ");
  scanf(" %d", &person.age);

  printf("Enter profession: ");
  scanf(" %s", person.profession);

  printf("Enter height (0) or weight (1): ");
  scanf(" %d", (int *)&person.isWeight);

  if (person.isWeight) {
    printf("Enter weight: ");
    scanf("%f", &person.weightOrHeight.weight);
  } else {
    printf("Enter height: ");
    scanf("%d", &person.weightOrHeight.height);
  }

  return person;
}

void printPerson(Person *person) {
  printf("**********************\n");
  printf("Name:       %s\n", person->name);
  printf("Age:        %d\n", person->age);
  printf("Profession: %s\n", person->profession);
  if (person->isWeight) {
    printf("Weight:     %.1f\n", person->weightOrHeight.weight);
  } else {
    printf("Height:     %d cm\n", person->weightOrHeight.height);
  }
  printf("**********************\r");
}

int main() {
  Person person[10];
  int count = 0;

  for (count = 0; count < 10; count++) {
    person[count] = enterNewPerson();
    printf("Name:       %s\n", person[count].name);

    printf("Do you want to enter another person? (y/n): ");
    char choice = 'n';
    scanf(" %c", &choice);
    if (choice != 'y') {
      break;
    }
  }

  for (int i = 0; i <= count; i++) {
    printPerson(&person[i]);
  }

  return 0;
}