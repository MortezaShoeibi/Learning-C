#include <stdio.h>
#include <stdlib.h>

// this will print 1.000000, but the correct answer is 1.500000:

/*
int main() {

    float result = 3 / 2;
    printf("%f\n", result);

    return 0;
}
*/

// so if you want the correct answer then all you need to do is:

int main() {

    float result = 3 / 2.0; // add a floating point to one of the numbers
    printf("%f\n", result);

    return 0;
}

