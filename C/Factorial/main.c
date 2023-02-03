#include <stdio.h>
#include <stdlib.h>

// n! = n * (n - 1)!

int factorial(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Result: %d\n", factorial(n));
    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
