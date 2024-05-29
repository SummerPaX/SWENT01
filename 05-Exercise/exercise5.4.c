#include <stdio.h>

struct aStruct {
  char character;
  int integer;
  double floating;
};

int main(void) {
  struct aStruct myStruct = {'A', 42, 3.14};

  printf("Address -> myStruct: %p\n", &myStruct);
  printf("Address -> character entry: %p | Value: %c\n", &myStruct.character, myStruct.character);
  printf("Address -> integer entry: %p | Value: %d\n", &myStruct.integer, myStruct.integer);
  printf("Address -> double entry: %p | Value: %lf\n", &myStruct.floating, myStruct.floating);

  struct aStruct* myStructPointer = &myStruct;

  printf("Address -> myStructPointer: %p\n", &myStructPointer);
  printf("Address -> character entry (via pointer): %p | Value: %c\n", &(myStructPointer->character),
         myStructPointer->character);
  printf("Address -> integer entry (via pointer): %p | Value: %d\n", &(myStructPointer->integer),
         myStructPointer->integer);
  printf("Address -> double entry (via pointer): %p | Value: %lf\n", &(myStructPointer->floating),
         myStructPointer->floating);

  return 0;
}
