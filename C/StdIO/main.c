#include <stdio.h>
#include <stdlib.h>

/*
    read and write value:
*/

int main() {

    puts("Enter some value to triple:"); // this one is for static string, it doesn't get any arguments like printf().
    int value; // define a variable called value.
    scanf("%d", &value); // ask value form the user and dump it into the variable, use &variableName.
    value *= 3; // value = value * 3
    printf("The result is: %d\n", value);
    puts("Thank you for using this program!");

    return 0;
}
