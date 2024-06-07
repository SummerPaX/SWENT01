#include <stdio.h>

#define INPUT_FILE1_PATH "./files/inputFile1.txt"
#define INPUT_FILE2_PATH "./files/inputFile2.txt"
#define OUTPUT_FILE_PATH "./files/outputFile.txt"

int main(void) {
  FILE *inputFile1 = fopen(INPUT_FILE1_PATH, "r");
  FILE *inputFile2 = fopen(INPUT_FILE2_PATH, "r");
  FILE *outputFile = fopen(OUTPUT_FILE_PATH, "w");

  if (inputFile1 == NULL || inputFile2 == NULL || outputFile == NULL) {
    printf("Failed to open files.\n");
    return 1;
  }

  int num1, num2;
  int result1 = fscanf(inputFile1, "%d", &num1);
  int result2 = fscanf(inputFile2, "%d", &num2);

  do {
    if (result1 == 1 && result2 == 1) {
      if (num1 < num2) {
        fprintf(outputFile, "%d\n", num1);
        result1 = fscanf(inputFile1, "%d", &num1);
      } else {
        fprintf(outputFile, "%d\n", num2);
        result2 = fscanf(inputFile2, "%d", &num2);
      }
    } else if (result1 == 1) {
      fprintf(outputFile, "%d\n", num1);
      result1 = fscanf(inputFile1, "%d", &num1);
    } else if (result2 == 1) {
      fprintf(outputFile, "%d\n", num2);
      result2 = fscanf(inputFile2, "%d", &num2);
    } else {
      break;
    }
  } while (result1 != EOF || result2 != EOF);

  fclose(inputFile1);
  fclose(inputFile2);
  fclose(outputFile);

  return 0;
}