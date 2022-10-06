#include <stdio.h>
#include <stdlib.h>

int main()
{
    char username[10];
    printf("username: ");
    scanf("%s", username); // Do not use "&"
    printf("username: %s\n", username);

    puts("-----");

    char name[10] = {'M', 'o', 'r', 't', 'e', 'z', 'a', '\0'/* 0 */};
    printf("name: %s\n", name);

    puts("-----");

    char word_to_specify_humans[10] = "Morteza"; // works only with ""
    printf("word to specify humans: %s\n", word_to_specify_humans);

    return 0;
}
