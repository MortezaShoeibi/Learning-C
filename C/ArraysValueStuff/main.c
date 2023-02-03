#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("first numbers list:\n");
    int numbers_list1[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numbers_list1[i]);
    }

    puts("second numbers list:\n");
    int numbers_list2[10] = {0}; // all 10 indexes will be equal to {0}.
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numbers_list2[i]);
    }

    puts("third numbers list:\n");
    int numbers_list3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; // you can add as many numbers as you like.
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", numbers_list3[i]);
    }

    return 0;
}
