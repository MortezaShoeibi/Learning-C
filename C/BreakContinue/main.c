#include <stdio.h>
#include <stdlib.h>

/*
    It's the same as the other programming languages.
*/

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
            continue;

        else if (i == 8)
            break;
        
        printf("%d\n", i);
    }

    return 0;
}
