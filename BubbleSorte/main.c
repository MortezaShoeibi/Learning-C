#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int array[], int n);

int main()
{
    int array[100], n;

    printf("Enter the number of elements to be sorted: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    bubbleSort(array, n);

    return 0;
}

void bubbleSort(int array[], int n)
{
    int tmp, flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            
            if (array[j] > array[j + 1])
            {
                
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
                
                flag = 1;
            }
        }
        
        if (flag == 0)
        {
            break;
        }
    }


    printf("Sorted Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
}
