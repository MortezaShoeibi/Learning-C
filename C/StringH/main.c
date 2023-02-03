#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char username[10];
    strcpy(username, "Morteza"); // this function is from <string.h>
    printf("Hello %s!\n", username);

    puts("-----------");

    char first_name[10] = "Morteza";
    char last_name[10];
    strcpy(last_name, first_name);
    printf("first name: %s, last name: %s\n", first_name, last_name);

    puts("-----------");

    int len = strlen(username); // get the length of a string
    printf("username length: %d\n", len);

    puts("-----------");
    
    return 0;
}
