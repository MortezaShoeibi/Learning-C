#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *data_txt;
    data_txt = fopen("data.txt", "r");
    if (data_txt == NULL)
    {
        puts("Error: Could not open data.tx file.");
        return 1;
    }
    int a, b;
    fscanf(data_txt, "%d", &a);
    fscanf(data_txt, "%d", &b);
    printf("a: %d, b: %d\n", a, b);

    fclose(data_txt);
    return 0;
}
