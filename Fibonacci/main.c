#include <stdio.h>
#include <stdlib.h>

int fib(int num);

int main()
{
    int terms_to_print;
    printf("Enter the number of terms you want to print: ");
    scanf("%d", &terms_to_print);

    printf("fibonacci series upto %d is : ", terms_to_print);
    for (int c = 0; c < terms_to_print; c++)
    {
        printf(" %d ", fib(c));
    }
    return 0;
}

int fib(int num)
{
    if (num == 0)
        return 0;

    else if (num == 1)
        return 1;

    else
        return fib(num - 1) + fib(num - 2);
}
