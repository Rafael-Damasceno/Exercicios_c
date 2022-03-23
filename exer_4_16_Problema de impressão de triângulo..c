#include <stdio.h>
 #include <math.h>
 int main( void )
 {
 	int l;
	int c;
	
 	// A
 	
 	printf("\n  letra A\n\n");
 	for (l = 1; l <= 10; l++)
 	{
 		for(c = 1; c<= l; c++)
 		{
 			printf("*");
		}
	printf("\n"); 
		
	}
	 
	// B

	printf("\n  letra B\n\n");
	
	for (l = 1; l <= 10; l++)
 	{
 		for(c = 10; c>= l; c--)
 		{
 			printf("*");
		}
		printf("\n"); 
	}
	
	// C
	
	printf("\n  letra C\n\n");
	
	for (l = 1; l <= 10; l++)
 	{
 		for(c = 2; c<= l; c++)
 		{
 			printf(" ");
		}
    	for (c =10; c >= l; c--)
    	{
    		printf("*");
		}
		printf("\n"); 
	}
	 
	// D
	
	printf("\n  letra D\n\n");
	
	for (l = 1; l <= 10; l++)
	{
		for (c = 9; c >= l; c--)
		{
			printf(" ");
		}
		for (c = 1; c <= l; c++)
		{
			printf("*");
		}
	 printf("\n");
	}
	
return 0;
	 
 }
