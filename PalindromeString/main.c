#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 100

int main()
{
    char entered_string[MAX_STR_LEN];
    printf("Enter any string to be checked: ");
    scanf("%s", entered_string);

    int l = 0;
    int h = strlen(entered_string) - 1;

    while (h > l)
    {
        if (entered_string[l++] != entered_string[h--])
        {
            printf("\"%s\" is not a palindrome\n", entered_string);
            return 0;
        }
    }

    printf("\"%s\" is a palindrome\n", entered_string);

    return 0;
}
