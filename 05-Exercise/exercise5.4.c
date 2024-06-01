#include <stdio.h>

struct aStruct {
  char character;
  int integer;
  double floating;
};

int main(void) {
  struct aStruct myStruct = {'A', 42, 3.14};

  printf("Address -> myStruct: %p\n", &myStruct);

  printf("Address -> character entry: %p", &myStruct.character);
  printf(" | Value: %c\n", myStruct.character);

  printf("Address -> integer entry: %p", &myStruct.integer);
  printf(" | Value: %d\n", myStruct.integer);

  printf("Address -> floating entry: %p", &myStruct.floating);
  printf(" | Value: %lf\n", myStruct.floating);

  struct aStruct* myStructPointer = &myStruct;

  printf("Address -> myStructPointer: %p\n", &*myStructPointer);

  printf("Address -> character entry (via pointer): %p", &(*myStructPointer).character);
  printf(" | Value: %c\n", myStructPointer->character);

  printf("Address -> integer entry (via pointer): %p", &(myStructPointer->integer));
  printf(" | Value: %d\n", myStructPointer->integer);

  printf("Address -> floating entry (via pointer): %p", &(myStructPointer->floating));
  printf(" | Value: %lf\n", myStructPointer->floating);

    return 0;
}
