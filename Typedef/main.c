#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 100
#define STUDENTS_COUNT 10

typedef int Integer;

struct student
{
    char first_name[MAX_STR_LEN];
    char last_name[MAX_STR_LEN];
    Integer entrance_year;
    float average;
};

typedef struct student Student;

typedef struct animal
{
    char kind[MAX_STR_LEN];
    char sound[MAX_STR_LEN];

} Animal;

Integer main()
{
    Integer number = 17;
    printf("%d", number);

    
    puts("\n--------------------------------\n");

    Student student1 = {"Morteza", "Shoeibi", 2005, 19.99}; // struct student student1 = {"Morteza", "Shoeibi", 2005, 19.99};
    Animal animal1 = {"Cat", "Meow"};
    return 0;
}
