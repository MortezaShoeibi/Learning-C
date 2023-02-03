#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 100

int main()
{
    char string[MAX_STR_LEN];
    char word[MAX_STR_LEN];
    int found;

    printf("Enter any string: ");
    gets(string);
    fflush(stdin);
    printf("Enter any word to search: ");
    gets(word);

    found = strstr(string, word);
    if (found)
    {
        puts("The word was in the string");
    }
    else
    {
        puts("The word was not in the string");
    }

    return 0;
}
