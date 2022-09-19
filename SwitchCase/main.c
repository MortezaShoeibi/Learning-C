#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("[1]fish\n[2]pizza\n[3]cookies\n");
    printf("Choose the food you want to eat: ");

    int food;
    scanf("%d", &food);

    switch (food)
    {
    case 1:
        puts("\nYou're gonna have to eat some fish!");
        break;

    case 2:
        puts("\nYou're gonna have to eat some pizza!");
        break;

    case 3:
        puts("\nYou're gonna have to eat some cookies!");
        break;

    default:
        printf("\nWe don't serve this item: %d\n", food);
        break;
    }


    return 0;
}
