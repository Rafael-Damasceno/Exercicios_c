#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
	
	int u; // variavel 'u' referente a alternativa escolhida  
	float a =0;
	float b =0;
	float c =0;
	float raiz; // referente a equação do primeiro grau
	float delta;
	float x1;
	float x2;
	
	printf("Escolha a opcao: \n");
	printf("1- Calcula a raiz de uma equacao do primeiro grau do tipo ax + b = 0\n");
	printf("2- Calcula as raizes de uma equacao do segundo grau do tipo ax2+ bx + C = 0\n");
	scanf("%i", &u);
	
	if (u == 1)   //equação do primeiro grau: ax+b=0 ,que se resolve, --> x=-b/a sendo 'a' diferente de zero
	{
		printf(" \n voce escolheu a opcao %i \n", u);
		printf("digite o valor de a: \n");
		scanf("%f", &a);	
		while (a == 0){  // repetição caso o a seja igual a zero
			printf("a nao pode ser zero \n");
			printf("digite o valor de a: \n");
		scanf("%f", &a);
		}
		printf("digite o valor de b: \n");
		scanf("%f", &b);
	raiz = (-b/a);
	   printf("o valor da raiz eh:%0.2f \n", raiz); // o valor será dado com 2 casas decimais 
	}
	
	if (u == 2)  // equação do segundo grau: ax²+ bx + C = 0
	{
		printf("\n voce escolheu a opcao %i \n", u);
		printf("digite o valor de a: \n");
		scanf("%f", &a);
		while (a == 0){      // repetição caso o a seja igual a zero
			printf("a nao pode ser zero \n");
			printf("digite o valor de a: \n");
		scanf("%f", &a);
		}
		printf("digite o valor de b: \n");
		scanf("%f", &b);
		printf("digite o valor de c: \n");
		scanf("%f", &c);
	delta = ((b*b) - 4 *a * c);     //calculando o delta
	x1 = (-b - (sqrt(delta)))/ (2*a);  // primeira raiz 
	x2 = (-b + (sqrt(delta))) / (2*a); // segunda raiz 
	
	
	  if (delta > 0){
	   	 printf("raizes reais e diferentes\nx1 = %.2f e x2 = %.2f", x1, x2);
	  }
	  if (delta == 0){
	  	 printf("raizes reais e iguais a: %f \n", x1);
	  }
	  
	  if (delta < 0){
	  	printf("nao existe raizes no conjunto dos numeros reais \n");
	  }
	}
	
	else                          // repetição caso escolha uma alternativa diferente de 1 e 2.
    	while((u < 1) || (u > 2)){
		  printf("Escolha a opcao: \n");
		  printf("1- Calcula a raiz de uma equacao do primeiro grau do tipo ax + b = 0\n");
		  printf("2- Calcula as raizes de uma equacao do segundo grau do tipo ax2+ bx + C = 0\n");
		  scanf("%i", &u); 
		  
	if (u == 1)   //equação do primeiro grau: ax+b=0 ,que se resolve, --> x=-b/a sendo 'a' diferente de zero
	{
		printf(" \n voce escolheu a opcao %i \n", u);
		printf("digite o valor de a: \n");
		scanf("%f", &a);	
		while (a == 0){  // repetição caso o a seja igual a zero
			printf("a nao pode ser zero \n");
			printf("digite o valor de a: \n");
		scanf("%f", &a);
		}
		printf("digite o valor de b: \n");
		scanf("%f", &b);
	raiz = (-b/a);
	   printf("o valor da raiz eh:%0.2f \n", raiz); // o valor será dado com 2 casas decimais 
	}
	
	if (u == 2)  // equação do segundo grau: ax²+ bx + C = 0
	{
		printf("\n voce escolheu a opcao %i \n", u);
		printf("digite o valor de a: \n");
		scanf("%f", &a);
		while (a == 0){      // repetição caso o a seja igual a zero
			printf("a nao pode ser zero \n");
			printf("digite o valor de a: \n");
		scanf("%f", &a);
		}
		printf("digite o valor de b: \n");
		scanf("%f", &b);
		printf("digite o valor de c: \n");
		scanf("%f", &c);
	delta = ((b*b) - 4 *a * c);     //calculando o delta
	x1 = (-b - (sqrt(delta)))/ (2*a);  // primeira raiz 
	x2 = (-b + (sqrt(delta))) / (2*a); // segunda raiz 
	
	
	  if (delta > 0){
	   	 printf("raizes reais e diferentes\nx1 = %.2f e x2 = %.2f", x1, x2);
	  }
	  if (delta == 0){
	  	 printf("raizes reais e iguais a: %f \n", x1);
	  }
	  
	  if (delta < 0){
	  	printf("nao existe raizes no conjunto dos numeros reais \n");
	  }
	}
	
   }
	
	system("pause");
	return 0;
	}
	
	


	

