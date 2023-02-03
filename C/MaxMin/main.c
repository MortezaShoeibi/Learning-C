#include <stdio.h>
#include <stdlib.h>

int main()
{
    // define (n)
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);

    // get number:
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // define the max and min values:
    int min, max;
    min = max = number;

    for (int i = 0; i < n - 1; i++)
    {
        // get numbers n times:
        printf("Enter a number: ");
        scanf("%d", &number);

        // check if the latest entered number is the max or min: 
        if (number > max && number > min)
        {
            max = number;
        }
        else if (number < max && number < min)
        {
            min = number;
        }
    }
    // print the results:
    printf("The max is: %d\nAnd the min is: %d\n", max, min);

    return 0;
}
