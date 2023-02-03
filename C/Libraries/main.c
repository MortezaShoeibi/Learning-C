#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Hi, I do math stuff! check what I can do:\n\n[1]Power a number\n[2]Pythagoras triangles\n[3]Exit\n\nChoose the mode: ");

    int mode;
    scanf("%d", &mode);

    switch (mode)
    {
    case 1:

        puts("You chose option 1");

        int base, power;

        printf("\nEnter the base number: ");
        scanf("%d", &base);

        printf("\nEnter the power number: ");
        scanf("%d", &power);

        int result = pow(base, power);
        printf("\nBase: %d\nPower: %d\nResult: %d\n", base, power, result);

        break;

    case 2:

        puts("You chose option 2");

        int b, c;

        printf("\nEnter the b angel: ");
        scanf("%d", &b);

        printf("\nEnter the c angle: ");
        scanf("%d", &c);

        double res = sqrt(pow(b, 2) + pow(c, 2));
        printf("\nThe third side of the triangle is: %lf\n", res);

        break;

    case 3:

        break;

    default:
        puts("\nSomething went wrong or the entered command is not correct\n");
        break;
    }

    puts("\nThank you for choosing us(I feel like I'm a big well known company by saying this)");

    return 0;
}
