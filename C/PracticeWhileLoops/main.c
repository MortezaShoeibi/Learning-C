#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    puts("Enter a number:");
    scanf("%d", &n);
    int counter = 0;
    while (counter < n)
    {
        printf("%d\n", ++counter);
    }

    return 0;
}
