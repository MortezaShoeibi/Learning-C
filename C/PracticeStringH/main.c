#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR_LEN 50

int main()
{
    char prompt[MAX_STR_LEN];
    char username[] = "user1";
    char password[] = "password123";

    int loggedin_successfully = 0;

    printf("Welcome to the program, Enter your user credentials to login!\n");
    do
    {
        loggedin_successfully = 1;

        printf("%s", "username: ");
        scanf("%s", prompt);
        if (strcmp(prompt, username) != 0) // prompt != username
            loggedin_successfully = 0;

        printf("%s", "password: ");
        scanf("%s", prompt);
        if (strcmp(prompt, password) != 0) // prompt != password
            loggedin_successfully = 0;

    } while (loggedin_successfully == 0);

    puts("-----------------------\nYou loggedin successfully.");

    return 0;
}
