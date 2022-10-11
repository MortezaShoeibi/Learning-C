#include <stdio.h>
#include <stdlib.h>

/**
    pointer  : get the memory address of the pointed variable.
    *pointer : get the value of the pointed variable.
    &pointer : get the pointer memory address.
**/

int main()
{
    char value = 'm';
    char* pointer_to_value = &value;
    printf("the value of %p is: %c", pointer_to_value, *pointer_to_value);

    puts("\n\n");

    // always make sure to assign a default value to the pointers
    int num = 7;
    int* num_ptr = NULL; // NULL will assign "0" as the default value
    printf("this \"%p\" address is a pointer to this address:\"%p\" with this value: \"0\" || \"NULL\"\n", &num_ptr, num_ptr);
    num_ptr = &num;
    printf("this \"%p\" address is a pointer to this address:\"%p\" with this value: \"%d\"\n", &num_ptr, num_ptr, *num_ptr);

    return 0;
}
