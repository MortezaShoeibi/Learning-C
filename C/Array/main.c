#include <stdio.h>
#include <stdlib.h>

int main()
{
    float students_marks[20]; // array of 20 students
    float students_marks_sum = 0;
    float students_marks_avg;

    for (int i = 1; i <= 20; i++)
    {
        printf("Student number #%d's mark: ", i);
        scanf("%f", &students_marks[i]);
    }

    for (int i = 1; i <= 20; i++)
    {
        students_marks_sum += students_marks[i];
    }

    students_marks_avg = students_marks_sum / 20.0;

    for (int i = 1; i <= 20; i++)
    {
        if (students_marks[i] > students_marks_avg)
        {
            printf("Student number #%d has\"%f\"marks\n", i, students_marks[i]);
        }
    }

    return 0;
}
