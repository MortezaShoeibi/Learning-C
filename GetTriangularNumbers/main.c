#include <stdio.h>
#include <stdlib.h>


// I'm not sure about it because I didn't quite get the question but I'm sending it any way


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
