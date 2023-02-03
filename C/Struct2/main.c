#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 100

struct Student
{
    char first_name[MAX_STR_LEN];
    char last_name[MAX_STR_LEN];
    int entrance_year;
    float average;
};

void structs_and_functions(struct Student *s)
{
    s->entrance_year --;
}

int main()
{
    struct Student student1 = {"Morteza", "Shoeibi", 2005, 19.99};
    printf("%s %s %d %f\n", student1.first_name, student1.last_name, student1.entrance_year, student1.average);

    puts("\n--------------------------------\n");

    struct Student* pointer_to_student = &student1;
    // printf("%s/n", *pointer_to_student.first_name);
    // printf("%s/n", (*pointer_to_student).first_name);
    // are as the same as this line:
    printf("%s\n", pointer_to_student->first_name);

    puts("\n--------------------------------\n");

    printf("%d\n", pointer_to_student->entrance_year);
    structs_and_functions(&student1);
    printf("%d\n", pointer_to_student->entrance_year);
    return 0;
}
