#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstNumber, secondNumber, gcd;

    printf("Enter two integers: ");
    scanf("%d", &firstNumber);
    scanf("%d", &secondNumber);

    for(int i=1; i <= firstNumber && i <= secondNumber; ++i)
    {
        
        if(firstNumber % i == 0 && secondNumber % i == 0)
        {
            gcd = i;
        }
    }

    printf("G.C.D of %d and %d is: %d", firstNumber, secondNumber, gcd);
    
    return 0;
}
