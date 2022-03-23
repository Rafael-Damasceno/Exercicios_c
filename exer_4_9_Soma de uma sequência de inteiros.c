#include <stdio.h>
int main(void)
{
	int valores =0;
	int r =0;
	int i;
	int soma =0;
	
	printf("digite o numero de valores: ");
	scanf("%d", &valores);
	
	for (i = 0; i <= valores-1; i++)
	{
		printf("digite um numero inteiro: ");
	    scanf("%d", &r);
		soma += r;		
	}
	
	printf("a soma eh %d\n", soma);
	return 0;
	
}
