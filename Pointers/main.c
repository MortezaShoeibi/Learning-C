#include <stdio.h>
#include <stdlib.h>

int main()
{
    char my_variable = 'a';
    char *my_pointer = &my_variable;
    printf("the pointer points to this address: %p\n", my_pointer);
    return 0;
}
