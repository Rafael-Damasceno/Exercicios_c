#include <stdio.h>
int main(void)
{
	int contador=0;
	int numero=0;
	int maior=0;
	int i=0;
 while(contador<=9) 
 {
 	contador++;
 	printf("digite um numero: ");
 	scanf("%d", &numero);
 	
 	if (i==0)
 	{
 		maior = numero;
 		i++;
 	}
 	else if (numero == -1)
 	{
   		break;
 	}
 	else if (numero > maior)
 	{
 		maior = numero;
 	}
 }
 
 printf("\nmaior numero da sequencia eh: %i", maior);
 
 
}


