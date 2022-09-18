#include <stdio.h>
#include <stdlib.h>

/*
    || == or, && == and, ! == not
*/

int main()
{
    puts("Do you want something? y/n");
    char answer = getchar();

    if (answer == 'y' || answer == 'Y') {
        printf("I wish I could help you but I don't want to;)\n");
    }
    else if (answer == 'n' || answer == 'N') {
        printf("Good! cuz I wouldn't do anything anyway:)\n");
    }
    else {
        puts("what?\n");
    }

    return 0;
}
