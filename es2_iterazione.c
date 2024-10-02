#include <stdio.h>

int main(int argc, char *argv[])
{

	int n, cont = 0;
	do
	{
		printf("inserisci un numero >0 : \n");
		scanf("%d", &n);
	} while (n <= 0);

	do
	{
		cont++;
		printf("%d\n", cont);

	} while (cont < n);

	return 0;
}