#include <stdio.h>
#include <time.h>

int main(void) {
  FILE *diaryFile = fopen("./files/diary.txt", "r+");

  if (diaryFile == NULL) {
    printf("Failed to open the diary file.\n");
    return 1;
  }

  char line[100];
  while (fgets(line, 100, diaryFile) != NULL) {
    printf("%s", line);
  }

  char time_buffer[100];
  time_t now = time(0);
  strftime(time_buffer, 100, "%Y-%m-%d %H:%M:%S", localtime(&now));

  printf("Enter new diary entries (press Ctrl+D to finish):\n");
  while (fgets(line, 100, stdin) != NULL) {
    fprintf(diaryFile, "%s: %s", time_buffer, line);
  }

  fclose(diaryFile);

  return 0;
}