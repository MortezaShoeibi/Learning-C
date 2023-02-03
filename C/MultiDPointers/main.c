#include <stdio.h>
#include <stdlib.h>

int main()
{
    int value = 476;
    int* valuePointer = &value;
    int** pointerToValuePointer = &valuePointer;
    **pointerToValuePointer = 963;
    printf("The value of value variable: %d\n", value);
    return 0;
}
