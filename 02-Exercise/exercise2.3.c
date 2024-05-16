#include <stdio.h>

int main(void) {
  int birthDay, birthMonth, birthYear;
  printf("Enter the day of birth: ");
  scanf("%d", &birthDay);
  printf("Enter the month of birth: ");
  scanf("%d", &birthMonth);
  printf("Enter the year of birth: ");
  scanf("%d", &birthYear);

  printf("Birthday = %d.%d.%d\n", birthDay, birthMonth, birthYear);

  int exerciseDay = 4, exerciseMonth = 5, exerciseYear = 2024;

  printf("Exercise day = %d.%d.%d\n", exerciseDay, exerciseMonth, exerciseYear);

  int daysFromBirthToExercise =
      (exerciseYear * 360 + exerciseMonth * 30 + exerciseDay) - (birthYear * 360 + birthMonth * 30 + birthDay);

  printf("Days from birth to exercise: %d\n", daysFromBirthToExercise);

  return 0;
}