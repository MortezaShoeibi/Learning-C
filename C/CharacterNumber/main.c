#include <stdio.h>
#include <stdlib.h>

/*
    This program gets a character and prints its ascii number.
*/

int main() {

    puts("Enter a character:");
    char value = getchar();
    printf("%i\n", value);

    return 0;
}
