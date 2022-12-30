/*
 * @author: Morteza Shoeibi <mortezashoei77@gmail.com>
 * @date: 2022-12-30
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* declare functions */
void help();
int write_in_file(FILE *fptr, int n, char *text);

// int argc = the length of the givin arguments {"the file it self", "first argument", "second argument", ext...}: starts from 1
// char **argv = an 2D array of characters (a list of strings): starts from 0
int main(int argc, char **argv) {
    // printf("%d\n", argc);
    // printf("%s || %s\n---\n", argv[0], argv[1]);

    // check if any argument was givin
    if (argc < 4) {
        printf("Error: no file name given to the main function.\n");
        // show help
        help();
        return 1;
    }

    // open or create the file
    FILE *fptr = fopen(argv[1], "a+");

    // check if file is null
    if (fptr == NULL) {
        printf("Error: Could not open the file %s.\n", argv[1]);
        return 1;
    }

    // int n = argv[2] - '0';
    int n = atoi(argv[2]);
    
    if (write_in_file(fptr, (int)n, argv[3]) != 0) {
        printf("Error: Something went wrong while writing in the file.\n");
    }

    // close the file
    fclose(fptr);
    return 0;
}


/* define functions */

void help() {
    printf("Enter arguments in this order:\n{./creator} {filename.extension} {number_of_repetitions} {text}");
}

// write giving text n times in the file
int write_in_file(FILE *fptr, int n, char *text) {
    /* 
    fptr: file pointer
    n: argv[2]
    text: argv[3]
     */

    for (int i = 0; i < n; i++) {
        fprintf(fptr, "%s\n", text);
    }

    return 0;
}
