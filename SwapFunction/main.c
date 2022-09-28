#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y);

int main()
{
    int a = 10;
    int b = 25;
    printf("BEFORE MAIN_FUNC\na: %d, b: %d\n\n", a, b);
    swap(a, b);
    printf("AFTER MAIN_FUNC\na: %d, b: %d\n\n", a, b);
    return 0;
}

void swap(int x, int y)
{
    printf("Before\nx: %d, y: %d\n\n", x, y);
    int tmp = x;
    x = y;
    y = tmp;
    printf("After\nx: %d, y: %d\n\n", x, y);
}
