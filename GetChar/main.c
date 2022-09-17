#include <stdio.h>
#include <stdlib.h>

/*
    scanf() can get any data type, but getchar() is just for characters
*/

int main() {
    
    puts("Do you want something? y/n");
    char something = getchar();
    printf("You said: %c but I'm not gonna do anything any way;]", something);

    return 0;
}
