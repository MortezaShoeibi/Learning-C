#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/*
    global variables:
*/

// functions
void init_variables();
void print();
void input_and_max();


// the global variable
int max1;
int max2;

int main()
{
    init_variables();
    input_and_max();
    print();
    return 0;
}

void init_variables()
{
    max1 = INT_MIN;
    max2 = INT_MIN;
}

void print()
{
    printf("the first max: %d and the second one is: %d\n", max1, max2);
}

void input_and_max()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int num;
        printf("Enter num: ");
        scanf("%d", &num);
        if (num > max2)
        {
            if (num > max1)
            {
                max2 = max1;
                max1 = num;
            }
            else // num <= max1
            {
                max2 = num;
            }
        }
    }
}
