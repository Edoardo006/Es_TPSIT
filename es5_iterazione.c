#include <stdio.h>

int main(int argc, char *argv[])
{

	int n1, n2;
	do
	{
		printf("inserisci n1\n");
		scanf("%d", &n1);
		printf("inserisci n2\n");
		scanf("%d", &n2);
		printf("\n");
	} while (n1 < 0 || n2 <= n1);

	while (n1 <= n2)
	{
		printf("%d\n", n1);
		n1++;
	}

	return 0;
}