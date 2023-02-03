#include <stdio.h>
#include <stdlib.h>

int main()
{
    // declare a pointer to the file
    FILE* file_pointer;
    // open the file in write("w") mode
    file_pointer = fopen("data.txt", "w");
    // write a string in the file
    fprintf(file_pointer, "some text\n");
    // close the file
    fclose(file_pointer);
    return 0;
}
