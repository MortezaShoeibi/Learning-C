#include <stdio.h>
#include <stdlib.h>

/*
    The difference between the While loop anf the Do-While loop is:
    in the Do-While loop the statements will be executed for once even if the condition is false.
*/

int main()
{
    int sum = 0;
    int num;
    do
    {
        puts("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    } while (num != 0);

    printf("The sum is: %d\n", sum);

    return 0;
}
