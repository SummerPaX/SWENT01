#include <stdio.h>

int main() {
  unsigned char encryptedMessage[] = {125, 143, 146, 156, 74, 145, 159, 158, 75};
  short key = 42;

  printf("Decrypted message: ");
  for (int i = 0; i < 9; i++) {
    unsigned char decryptedChar = encryptedMessage[i] - key;
    printf("%c", decryptedChar);
  }
  printf("\n");
  return 0;
}