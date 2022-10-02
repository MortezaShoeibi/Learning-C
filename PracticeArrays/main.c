#include <stdio.h>
#include <stdlib.h>

/* time complexity: o(n^2) */

void print_array(int the_array[], int array_size);
void insertion_sort(int array[], int array_size);

int main()
{
    const int list_size = 20;
    int list[list_size];

    for (int i = 0; i < list_size; i++)
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

    insertion_sort(list, list_size);
    print_array(list, list_size);

    return 0;
}

void insertion_sort(int array[], int array_size)
{
    int selected_item, j;

    for (int i = 0; i < array_size; i++)
    {
        selected_item = array[i];
        j = i - 1;
        while ((j >= 0) && (selected_item < array[j]))
        {
            array[j + 1] = array[j];
            j --;
        }
        array[j + 1] = selected_item;
    }
}

void print_array(int the_array[], int array_size)
{
    puts("\nYour array in order:");
    for (int i = 0; i < array_size; i++)
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
