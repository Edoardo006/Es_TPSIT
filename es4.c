#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{

	int num1, num2;
	double divisione,radice;

	do
	{
		printf("inserisci num 1\n");
		scanf("%d", &num1);
		printf("inserisci num2\n");
		scanf("%d", &num2);

		if (num1< num2)
			divisione = (double)num1 / (double)num2;
		else
			divisione = (double)num2 / (double)num1;

		if (divisione > 0)
		{
			radice = sqrt(divisione);
			printf("radice quadrata del rapporto: %f\n", radice);
		}
	} while (divisione > 0);

	printf("non è possibile calcolare la radice di un numero negativo\n\n");

	return 0;
}