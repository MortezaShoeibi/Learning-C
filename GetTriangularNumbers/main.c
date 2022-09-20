#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if (a < b + c && b < a + c && c < a + b)
        printf("Triangular");
    else
        printf("None");

    return 0;
}
