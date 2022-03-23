#include <stdio.h>
#include <conio.h>
int main(void)
{
	int contador=0;
	int numero=0;
	int menor=0;
	int i=0;
	int valores;
	int r;
	
	
printf("digite o numero de valores: ");
	scanf("%d", &valores);
	
	for (i = 0; i <= valores; i++)
	{
		printf("digite um numero inteiro: ");
	    scanf("%d", &r);
			
	if (i==0)
 	{
 		menor = r;
 		i++;
 	}
 	else if (r == -1)
 	{
   		break;
 	}
 	else if (r < menor)
 	{
 		menor = r;
 	}
 }
 
 printf("\nmenor numero da sequencia eh: %i", menor);
 
}

