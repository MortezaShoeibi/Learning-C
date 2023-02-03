#include <stdio.h>
#include <stdlib.h>

void print_numbers(int number);

int main()
{
    print_numbers(0);
    return 0;
}

void print_numbers(int number)
{
    if (number != -1)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
        print_numbers(number);
        printf("%d\n", number);
    }
    else
    {
        return;
    }
}
