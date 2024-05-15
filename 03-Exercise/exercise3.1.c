#include <stdio.h>

typedef struct Birthday
{
  int day;
  int month;
  int year;
} Birthday;

int main(void)
{

  Birthday bday;
  printf("Enter the day of birth: ");
  scanf("%d", &bday.day);
  printf("Enter the month of birth: ");
  scanf("%d", &bday.month);
  printf("Enter the year of birth: ");
  scanf("%d", &bday.year);

  printf("Birthday = %d.%d.%d\n", bday.day, bday.month, bday.year);

  int exerciseDay = 4, exerciseMonth = 5, exerciseYear = 2024;

  printf("Exercise day = %d.%d.%d\n", exerciseDay, exerciseMonth, exerciseYear);

  int daysFromBirthToExercise =
      (exerciseYear * 360 + exerciseMonth * 30 + exerciseDay) -
      (bday.year * 360 + bday.month * 30 + bday.day);

  printf("Days from birth to exercise: %d\n", daysFromBirthToExercise);

  return 0;
}