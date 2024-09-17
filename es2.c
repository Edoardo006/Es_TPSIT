#include <stdio.h>
int main(int argc, char *argv[])
{
    int num1,num2,prodotto,somma=0;
    do
    {
        printf("\n inserisci numero1\n");
		scanf("%d", &num1);
		printf("\n inserisci numero2\n");
		scanf("%d", &num2);

		prodotto=num1*num2;
        printf("\n Il prodotto è:%d \n",prodotto);
        somma=somma+prodotto;
    }while(num1!=0 && num2!=0);
    printf("\n la somma dei prodotti è: %f\n", somma);
    return 0;
}