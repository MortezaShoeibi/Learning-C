#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
    This program lower cases the entered character.
    the reason behind this program is to practice searching in C community.
*/

int main() {

    puts("Enter a character to lowercase:");
    char value = getchar();
    printf("%c\n", tolower(value));
 
    return 0;
}
