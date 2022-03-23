#include <stdio.h>
int main(void)
{
	int numero;
	int sentinela = 9999;
	int contador;
	int soma = 0;
	double media;
	
	for(contador = 0; numero != sentinela; contador++)
	{
		soma += numero;
		printf("digite um numero: ");
		scanf("%d", &numero);
	}
	media = soma / (contador -1);
	printf("a media eh %f\n", media);
	
	return 0;
}
