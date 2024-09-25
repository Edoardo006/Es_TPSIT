#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{

	int a, b, c, differenza,  nulla= 0, pari = 0, dispari = 0;

	do
	{
		printf("\ninserisci a\n");
		scanf("%d", &a);
		printf("inserisci b\n");
		scanf("%d", &b);
		printf("inserisci c\n");
		scanf("%d", &c);
		differenza = a - b;

		if (differenza == 0)
		{
			nulla++;
		}

		if (differenza % 2 == 0)
		{
			pari++;
		}
		else
		{
			dispari++;
		}

	} while (a + b >= c);

	printf("nulla: %d\n", nulla);
	printf("pari: %d\n", pari);
	printf("dispari: %d\n", dispari);


	return 0;
}