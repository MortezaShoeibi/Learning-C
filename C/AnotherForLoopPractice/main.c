#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, number;
    int max;

    printf("Enter the n: ");
    scanf("%d", &n);

    scanf("%d", &number);
    max = number;

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &number);
        if (number > max)
        {
            max = number;
        }
    }

    printf("The max is: %d\n", max);

    return 0;
}
