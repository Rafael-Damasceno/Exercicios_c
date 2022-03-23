#include <stdio.h>
int main(void)
{
	int conta =0;
	float saldo =0;
	float encargos =0;
	float creditos =0;
	float limite =0;
	float comparacao= 0;
	
	printf("Informe o numero da conta (-1 para terminar): ");
	scanf("%d", &conta);
	
	if (conta != -1)
	{
	
		printf("Informe o saldo inicial: ");
		scanf("%f", &saldo);
		printf("informe o total de encargos: ");
		scanf("%f", &encargos);
		printf("informe o total de creditos: ");
		scanf("%f", &creditos);
		printf("informe o limite de creditos: ");
		scanf("%f", &limite);
		
   		comparacao = ((saldo + encargos) - creditos);
   	
   		if (comparacao > limite)
   		{
   			printf("conta: %d\n", conta);
   			printf("limite de credito: %.2f\n", limite);
   			printf("saldo: %.2f\n", saldo);
   			printf("limite de credito ultrapassado\n");  			
		}
		while (comparacao < limite)
		{
			printf("\nInforme o numero da conta (-1 para terminar): ");
			scanf("%d", &conta);
			
	
			if (conta != -1)
			{
	
				printf("Informe o saldo inicial: ");
				scanf("%f", &saldo);
				printf("informe o total de encargos: ");
				scanf("%f", &encargos);
				printf("informe o total de creditos: ");
				scanf("%f", &creditos);
				printf("informe o limite de creditos: ");
				scanf("%f", &limite);
		
   				comparacao = ((saldo + encargos)- creditos); 
   	
   				if (comparacao > limite)
   				{
   					printf("conta: %d\n", conta);
   					printf("limite de credito: %f\n", limite);
   					printf("saldo: %f\n", saldo);
   					printf("limite de credito ultrapassado\n");  			
				}
			}
			else
			{
				return 0;
					}		
		}
	}
if (conta == 1)
{
	return 0;
	
}	
}
