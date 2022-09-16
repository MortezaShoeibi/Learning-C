#include <stdio.h>
#include <stdlib.h>

/*
    Every character has an ascii number, so it seems like if you use %i then pass a character it will print the ascii number.
    And with this logic you can also store a character in an int variable.
*/

int main() {
    
    char my_character = 'r'; // define a character variable
    int character_ascii = my_character; // store the character in an int variable
    printf("The value is %i", my_character); // print an integer value(the ascii number) of the character

    return 0; // NOTE: the program would work without the return 0;
}
