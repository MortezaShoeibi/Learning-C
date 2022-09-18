#include <stdio.h>
#include <stdlib.h>

/*
    Conditions in C:
        The old traditional bar program.
*/

int main() {

    puts("Welcome to my bar\nHow old are you?");
    int user_age;
    int valid_age = 17;
    scanf("%d", &user_age);

    if (user_age<=valid_age) {
        puts("you're too young!");
    }
    else {
        printf("%d years old is enough, get in!", user_age);
    }

    return 0;
}
