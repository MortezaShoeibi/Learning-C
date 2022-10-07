#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50
#define NAMES_COUNT 5

void print_str_arr(char strings[][MAX_STR_LEN], int strings_count);

int main()
{
    char names[NAMES_COUNT][MAX_STR_LEN] = {
                                                "Morteza",
                                                "Mamad",
                                                "Steve",
                                                "SpongeBob",
                                                "Larry",

                                            };

    print_str_arr(names, NAMES_COUNT);

    // insertion sort
    int j;
    char selected_item[MAX_STR_LEN];
    for (int i = 1; i < NAMES_COUNT; i++)
    {
        strcpy(selected_item, names[i]);
        j = i - 1;
        while ((j >= 0) && (strcmp(selected_item, names[j]) < 0))
        {
            strcpy(names[j + 1], names[j]);
            j --;
        }

        strcpy(names[j + 1], selected_item);
    }

    puts("----------------------------------------------------");

    print_str_arr(names, NAMES_COUNT);

    return 0;
}

void print_str_arr(char strings[][MAX_STR_LEN], int strings_count)
{
    for (int i = 0; i < strings_count; i++)
    {
        printf("-%d: %s\n", i + 1, strings[i]);
    }
}
