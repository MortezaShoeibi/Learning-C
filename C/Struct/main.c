#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 100
#define STUDENTS_COUNT 10

struct student
{
    char first_name[MAX_STR_LEN];
    char last_name[MAX_STR_LEN];
    int entrance_year;
    float average;
};

int main()
{
    struct student students[STUDENTS_COUNT];

    for (int i = 0; i < STUDENTS_COUNT; i++)
    {
        printf("Enter student[%d]'s first name: ", i + 1);
        scanf("%s", students[i].first_name);
        printf("Enter student[%d]'s last name: ", i + 1);
        scanf("%s", students[i].last_name);
        printf("Enter student[%d]'s entrance year: ", i + 1);
        scanf("%d", &students[i].entrance_year);
        printf("Enter student[%d]'s average: ", i + 1);
        scanf("%f", &students[i].average);
    }

    puts("-----------------------------------------------------------");
    puts("id \t first name \t last name \t entrance year \t average");

    for (int i = 0; i < STUDENTS_COUNT; i++)
    {
        printf(
            "%d \t %s \t %s \t %d \t %f\n",
            i + 1, students[i].first_name, students[i].last_name, students[i].entrance_year, students[i].average
            );
    }

    return 0;
}
