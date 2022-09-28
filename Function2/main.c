#include <stdio.h>
#include <stdlib.h>

/*
    all of our Functions must be declared before the main function,
    because the compiler will only read the source till the main function.
    so what if we wanted to code a function after the main function?
*/

void kinda_counter(); // tell the compiler that we have a function called "counter".

int main()
{
    kinda_counter(); // cal the counter function.
    return 0;
}

void kinda_counter() // code the counter function.
{
    int i;
    i++;
    printf("counter: %d\n", i);
}
