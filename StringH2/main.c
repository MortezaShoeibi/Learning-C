#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50

int main()
{
    char string1[MAX_STR_LEN];
    char string2[MAX_STR_LEN];
    strcpy(string1, "hello");
    strcpy(string2, "world");

    printf("string1: %s\t string2: %s\n", string1, string2);
    printf("%s, %s!\n", string1, string2);

    puts("------------------------------");

    strcat(string1, string2);
    printf("string1: %s\t string2: %s\n", string1, string2);

    puts("------------------------------");

    /*
    NOTE: you can't compare strings valued variables
        because they are pointers, to compare two strings
        you have to use strcmp(); function.
        if the two variables were equal it'll return 0. 
    */

    if (strcmp(string1, string2) == 0)
    {
        puts("the strings are the same");
    }
    else
    {   
        puts("the strings are not the same");
    }
    

    return 0;
}
