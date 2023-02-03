#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 100

void print_longest_str(char strings[][MAX_STR_LEN], int strings_count);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);

    char strings_array[n][MAX_STR_LEN];

    for (int i = 0; i < n; i++)
    {
        printf("Enter string number[%d]: ", i + 1);
        scanf("%s", strings_array[i]);
    }

    print_longest_str(strings_array, n);

    return 0;
}

void print_longest_str(char strings[][MAX_STR_LEN], int strings_count)
{
    int longest = strlen(strings[0]);
    int j = 0;

    for(int i = 1; i < strings_count; i++)
    {
        int len = strlen(strings[i]);
        if(longest < len)
        {
           longest = len;
           j = i;
        }
    }
    puts("\nTHE LONGEST STRING IS:\n");
    printf("\"%s\"\n", strings[j]);
}
