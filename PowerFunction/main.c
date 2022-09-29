#include <stdio.h>
#include <stdlib.h>

int power(int base, int pow);

int main()
{
    int base, pow;

    printf("Enter the base number: ");
    scanf("%d", &base);
    printf("Enter the power number: ");
    scanf("%d", &pow);

    printf("\nResult: %d\n", power(base, pow));
    
    return 0;
}

// base ^ power = base * base ^ (power -1)
// base ^ 0 = 1

int power(int base, int pow)
{
    if (pow == 0)
        return 1;
    return base * power(base, pow - 1);
}
