#include <stdio.h>
#include <stdlib.h>

/*
    storage classes:
        auto: different place in memory each time you call it
        static: same place in memory each time you call it
*/

void auto_counter();
void static_counter();

int main()
{
    auto_counter(); // prints 1
    auto_counter(); // prints 1
    puts("-----------------------------");
    static_counter(); // prints 1
    static_counter(); // prints 2

    return 0;
}

// every time you call this function, you'll get "counter: 1"

void auto_counter()
{
    int counter = 0;
    counter++;
    printf("auto counter: %d\n", counter);
}

// but every time you call this function,
// the i variable will be declared only once
// and the function will just ++ its previous value

void static_counter()
{
    static int counter = 0;
    counter++;
    printf("static counter: %d\n", counter);
}
