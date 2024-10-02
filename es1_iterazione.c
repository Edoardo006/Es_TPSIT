#include <stdio.h>

int main(int argc, char *argv[])
{

	int n;

	do
	{									   
		printf("inserisci un numero >0 : \n"); 
		scanf("%d", &n);				   
	} while (n <= 0);					   

	n = n + 1;
	printf("il successivo vale: %d\n", n); 

	return 0; 
}