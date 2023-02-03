#include <stdio.h>
#include <stdlib.h>

void print_array(int the_array[], int array_size);

int main()
{
    const int list_size = 20;
    int list[list_size];

    for (int i = 1; i <= list_size; i++)
    {
        if (i == 1)
        {
            printf("Enter the #%dst number: ", i);
            scanf("%d", &list[i]);
        }
        else if (i == 2)
        {
            printf("Enter the #%dnd number: ", i);
            scanf("%d", &list[i]);
        }
        else if (i == 3)
        {
            printf("Enter the #%drd number: ", i);
            scanf("%d", &list[i]);
        }
        else
        {
            printf("Enter the #%dth number: ", i);
            scanf("%d", &list[i]);
        }

    }

    print_array(list, list_size);
    return 0;
}

void print_array(int the_array[], int array_size)
{
    puts("\nYour array in order:");
    for (int i = 1; i <= array_size; i++)
    {
        if (i == array_size)
        {
            printf("%d", the_array[i]);
        }
        else
        {
            printf("%d, ", the_array[i]);
        }
    }
    puts("\n");
}
