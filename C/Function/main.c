#include <stdio.h>
#include <stdlib.h>

int maxOfThree(int i1, int i2, int i3)
{
    int max;

    if (i1 > i2)
    {
        if (i3 > i1)
        {
            max = i3;
        }
        else
        {
            max = i1;
        }
    }
    else
    {
        if (i3 > i2)
        {
            max = i3;
        }
        else
        {
            max = i2;
        }
    }

    return max;
}

int main()
{
    int w1, w2, w3;
    int h1, h2, h3;

    // message
    puts("\nEnter heights=>\n");

    // h inputs
    printf("Enter the first height: ");
    scanf("%d", &h1);
    printf("Enter the second height: ");
    scanf("%d", &h2);
    printf("Enter the third height: ");
    scanf("%d", &h3);

    // message
    puts("\nEnter weights=>\n");

    // w inputs
    printf("Enter the first weight: ");
    scanf("%d", &w1);
    printf("Enter the second weight: ");
    scanf("%d", &w2);
    printf("Enter the third weight: ");
    scanf("%d", &w3);

    // compare inputs
    printf("The max height: %d\n", maxOfThree(h1, h2, h3));
    printf("The max weight: %d\n", maxOfThree(w1, w2, w3));
    return 0;
}
