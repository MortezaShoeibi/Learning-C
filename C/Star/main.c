#include <stdio.h>
#include <conio.h>
int main()
{
    int rows;
    printf("Enter the rows: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++)
    {
        for (int s = rows; s > i; s--)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for (int i = 1; i < rows; i++)
    {
        for (int s = 0; s < i; s++)
        {
            printf(" ");
        }
            
        for (int j = rows; j > i; j--)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
