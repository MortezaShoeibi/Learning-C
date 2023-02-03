#include <stdio.h>
#include <stdlib.h>
#define COL_COUNT 3
#define ROW_COUNT 2

/*
    To pass a 2 or more dimensional array to a function,
    we must specify the elements of each dimension of the array
    EX:void print2Darray(int array[][3], int row_count); || void print2Darray(int array[][3][4], int row_count);
*/

void print2Darray(int array[][COL_COUNT], int row_count);

int main()
{
    int numbers[ROW_COUNT][COL_COUNT] = {{1, 2, 3}, {4, 5, 6}};
    print2Darray(numbers, ROW_COUNT);
    return 0;
}

void print2Darray(int array[][3], int row_count)
{
    for (int i = 0; i < row_count; i++)
    {
        puts("Array:");
        for (int j = 0; j < COL_COUNT; j++)
        {
            printf("Element:[ %d ]\n", array[i][j]);
        }
    }
}
