#include <stdio.h>
#include <stdlib.h>

/*
    you can only use one of the fields because
    they are using the same place in the memory
*/

union number
{
    int int_value;
    float float_value;
};

typedef union number Number;

int main()
{
    Number first_number;
    first_number.int_value = 17;
    printf("%d || %f\n", first_number.int_value, first_number.float_value);
    first_number.float_value = 3.14;
    printf("%d || %f\n", first_number.int_value, first_number.float_value);
    return 0;
}
