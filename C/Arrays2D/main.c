#include <stdio.h>
#include <stdlib.h>

/*
    "list[2][3] = { {5, 3, 4}, {8, 5, 6} }" this code means:
        "[2]" lists with "[3]" elements in side one list.

        NOTE: you can also do this:
            "list[2][3][2] = { { {1}, {2}, }, { {3}, {4} }, { {5}, {6} }, { {7}, {8}, }, { {9}, {10} }, { {11}, {12} } }"
*/

int main()
{
    int list[2][3] = { {5, 3, 4}, {8, 5, 6} };

    for (int i = 0; i < 2; i++)
    {
        puts("\nArray:");

        for (int j = 0; j < 3; j++)
        {
            printf("Element:[ %d ]\n", list[i][j]);
        }
    }
    return 0;
}
