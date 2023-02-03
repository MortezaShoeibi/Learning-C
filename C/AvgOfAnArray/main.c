#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[100], num, sum = 0, avg;

    printf("Enter the number of the arrays elements: ");
    scanf("%d", &num);

    for (int i = 0; i < num; ++i)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &array[i]);
        sum += array[i];
    }

    avg = sum / num;

    printf("Average: %d\n", avg);
    return 0;
}
