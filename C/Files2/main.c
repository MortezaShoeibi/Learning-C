#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *data_txt;
    data_txt = fopen("data.txt", "a");
    if (data_txt == NULL)
    {
        puts("Error: Could not open data.tx file.");
    }
    else
    {
        char username[50];
        printf("Enter a username: ");
        scanf("%s", username);
        printf("user added successfully.\n");

        fprintf(data_txt, "Dear \"%s\" welcome\n", username);
    }

    fclose(data_txt);
    return 0;
}
