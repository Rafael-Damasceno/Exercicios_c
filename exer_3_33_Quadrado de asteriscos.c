#include <stdio.h>

int main()
{
	int lado;

	printf("coloque os lados do quadrado\n");
	printf("o lado deve ser entre 1 e 20: ");
	scanf("%d", &lado);
	if (lado <= 20 && lado >=1)
	{
		int l;
		int c; 
	
		for(l = 1; l <= lado; l++)
		{
			for(c =1; c <= lado; c++)
		{
			printf("*");
		}
		printf("\n");
		}
	}
	else
	{
		while (lado > 20 || lado < 1)
		{
			printf("coloque os lados do quadrado\n");
			printf("o lado deve ser entre 1 e 20: ");
			scanf("%d", &lado);
			
		if (lado <= 20)
		{
			int l;
			int c; 
	
			for(l = 1; l <= lado; l++)
		{
			for(c =1; c <= lado; c++)
			{
				printf("*");
			}
		printf("\n");
		}
		}
			
			
		}
		
	}
return 0;
	
}
