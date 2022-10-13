#include <stdio.h>
#include <stdlib.h>

// TODO: Do some deeper researches about "stack and heap". 13/10/2022

//* you can do this instead of "void print(int arr[], int n);"
void print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    // this method of declaring an array is declaring the array in the heap
    int* numbers = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &numbers[i]);
    }

    print(numbers, n);

    // so we need to free the heap memory
    free(numbers);
    return 0;
}
