#include <stdio.h>
#include <stdlib.h>

int recursive_multiply(int a, int b);

int main()
{
    int result = recursive_multiply(3, 4);
    printf("Recursive multiply is: %d\n", result);

    return 0;
}

int recursive_multiply(int a, int b)
{
    if (a > 1)
    {
        return b + recursive_multiply(--a, b);
    }
    else
    {
        return b;
    }
}
