#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define D 10

int main()
{
	int i, n, k, vet[D];

	printf("Enter decimal: ");
	scanf("%d", &n);

	k = 0;

	while (n != 0)
	{
		if ((n % 2) == 1)
		{
			vet[k] = 1;
		}
		else
		{
			vet[k] = 0;
		}

		n /= 2;

		k++;
	}

	printf("\nTransformed into binary: ");

	for(i = k - 1; i >= 0; i --)
	{
		printf("%d", vet[i]);
	}

	puts("\n\n");

	return 0;
}
