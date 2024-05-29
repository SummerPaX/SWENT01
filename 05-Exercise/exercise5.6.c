#include <stdio.h>

struct elementStruct {
  int ID;
  char name[50];
  struct elementStruct* next_element;
};

int main() {
  struct elementStruct first = {1, "Erstes Element", NULL};
  struct elementStruct second = {2, "Zweites Element", NULL};
  struct elementStruct third = {3, "Drittes Element", NULL};
  struct elementStruct fourth = {4, "Viertes Element", NULL};

  first.next_element = &second;
  second.next_element = &third;
  third.next_element = &fourth;
  fourth.next_element = &first;

  struct elementStruct* current_element = &first;
  while (current_element != NULL) {
    printf("Id: %d, Name: %s\n", current_element->ID, current_element->name);
    current_element = current_element->next_element;

    if (current_element == &first) {
      break;
    }
  }

  return 0;
}