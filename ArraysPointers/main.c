#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers_list[5] = {1, 2, 3, 4, 5};
    int* numbers = numbers_list; //* an array is a pointer to the first element of itself
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *numbers);
        numbers ++; // numbers will be incremented 4 bytes every time
    }

    puts("\n--------------------\n");
    /*
        declaring arrays with pointers
    */
    // int* list = malloc(5 * 4);  malloc takes bytes, 5 * 4 bytes means an int array with 5 items
    int* list = malloc(5 * sizeof(int));  // sizeof(int) = 4, sizeof(char) = 1 ext...
    list[0] = 6;
    list[1] = 7;
    printf("%d, %d\n", list[0], list[1]);

    return 0;
}
