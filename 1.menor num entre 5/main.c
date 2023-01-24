#include <stdio.h>
#include <stdlib.h>

/* Crie um software que receba 5 números e exiba o menor numero */

int main(int argc, char *argv[])
{

	int menor, n1, n2, n3, n4, n5 = 0;

	printf("Digite cinco numeros para exibir o menor\n");

	printf("\nDigite aqui o primeiro numero: ");
	scanf("%i", &n1);
	printf("\nDigite aqui o segundo numero: ");
	scanf("%i", &n2);
	printf("\nDigite aqui o terceiro numero: ");
	scanf("%i", &n3);
	printf("\nDigite aqui o quarto numero: ");
	scanf("%i", &n4);
	printf("\nDigite aqui o quinto numero: ");
	scanf("%i", &n5);

	if (n1 < n2 && n1 < n3)
		{
			menor = n1;
		}
	else if (n2 < n3 && n2 < n3)
		{
			menor = n2;
		}
	else if (n3 < n4 && n3 < n5)
		{
			menor = n3;
		}
	else if (n4 < n5)
		{
			menor = n4;
		}
	else
		menor = n5;

	printf("\nO menor numero e: %i", menor);
	
	return 0;
}
