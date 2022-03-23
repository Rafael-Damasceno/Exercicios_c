#include <stdio.h>
int main(void)
{
	int i;
	int soma = 0;
	
	for(i=2; i<=30; i+=2)
	{
		soma += i;
	}
	 
	 printf("a soma dos numeros pares eh: %d", soma);
}

