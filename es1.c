#include <stdio.h>
int main(int argc, char *argv[])
{
    int num1,num2;
    float risultato;
    do
    {
        printf("inserisci numero1\n");
		scanf("%d", &num1);
		printf("inserisci numero2\n");
		scanf("%d", &num2);

		if (num1 > num2)
			risultato = (double)num1 / (double)num2;
		else
			risultato = (double)num2 / (double)num1;
		printf("\nIl risultato è: %f\n", risultato);
    }while(num1!=0 && num2!=0);
    return 0;
}