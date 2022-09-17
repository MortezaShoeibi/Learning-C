#include <stdio.h>
#include <stdlib.h>

/*
    This program calculates the Perimeter and the Area of a circle.
*/

int main() {

    puts("Enter your circles radius:");
    const int pi = 3;
    int r;
    scanf("%d", &r);
    int perimeter = 2 * r * pi;
    int area = r * r * pi;
    printf("Perimeter = %d, Area = %d\n", perimeter, area);

    return 0;
}
