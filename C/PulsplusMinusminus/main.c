#include <stdio.h>
#include <stdlib.h>

/*
    General NOTE: The ++ and -- are exactly the opposite of each other.
*/

int main() {

    int i = 2;
    int j = i++; // j = i + 1; j == 2, i == 3
    int k = ++i; // k = i + 1; k == 3, i == 3
    printf("%d\n", i);
    printf("%d\n", j);
    printf("%d\n", k);
    // Local NOTE: 'i' is equal to 4 because I used ++ twice
    return 0;
}
