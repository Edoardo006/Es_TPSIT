#include <stdio.h>

int main(int argc, char *argv[])
{

	int n, cont = 1;
	do
	{
		printf("inserisci un numero >0 : \n");
		scanf("%d", &n);
	} while (n <= 0);

	do
	{
		printf("%d\n", cont);
        cont=cont+2;

	} while (cont <= n);

	return 0;
}