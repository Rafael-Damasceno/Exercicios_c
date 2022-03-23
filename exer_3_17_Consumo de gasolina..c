#include <stdio.h>
int main(void)
{
	float litros =0;
	float km =0;
	float consumo_atual =0;
	float total =0;
	int contador =0;
	float consumo_geral = 0;
	
	printf("Informe quantos litros abasteceu (-1 para terminar): ");
	scanf("%f", &litros);
	
	if (litros != -1)
	{
	
		printf("Informe quantos km dirigiu: ");
		scanf("%f", &km);
		consumo_atual = (km / litros);

   		printf("O consumo atual eh de: %2.f km/l \n\n", consumo_atual);
   	
   		total = (total + consumo_atual);
		contador = (contador + 1);
	
		while (litros != -1 )
		{
		
			printf("Informe quantos litros abasteceu (-1 para terminar): ");
	   		scanf("%f", &litros);
	   		if (litros != -1)
	   		{ 
			printf("Informe quantos km dirigiu: ");
			scanf("%f", &km);
	
   			consumo_atual = (km / litros);
	
   			printf("O consumo atual eh de: %2.f km/l \n\n", consumo_atual);
		   
			total = (total + consumo_atual);
			contador = (contador + 1);
			}
   		}
    }
   	if (litros == -1)
	{
		if (contador != 0)
   		{
   			consumo_geral = (total / contador);
		}
		printf("o consumo geral foi de: %2.f km/l\n", consumo_geral);
    }

	
}
