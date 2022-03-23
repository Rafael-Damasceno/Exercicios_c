#include <stdio.h>

int main (void)
{
	int n;
	int fatorial = 1;
	
	printf("numero\tfatorial\n");
	
	for(n =1; n<=5; n++)
	{
		fatorial *= n;
		printf("%d\t%d\n", n, fatorial);
	}
}
