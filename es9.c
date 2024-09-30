#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[])
{
	int num1, num2, num3, min = INT_MAX, max = 0;

	do
	{
		printf("\ninserisci num1\n");
		scanf("%d", &num1);
		printf("inserisci num2\n");
		scanf("%d", &num2);
		printf("inserisci num3\n");
		scanf("%d", &num3);

		if (num1 < num2 && num2 < num3)
		{

			if (num1 < min)
				min = num1;
			if (num3 > max)
				max = num3;
		}
		else
		{
			printf("terna non valida\n");
		}

	} while (num1 >= 0 && num2 >= 0 && num3 >= 0);

	printf("\nmax: %d\n", max);
	printf("\nminimo: %d\n\n", min);

	return 0;
}