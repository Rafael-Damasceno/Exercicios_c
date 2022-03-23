//questão 4 

#include<stdio.h>

int main(void)
{
   float salario =0;
   float aumento =0; //de 15,3%
   float novo_salario =0;
    
    printf("digite o salario: ");
    scanf("%f", &salario);
    
    aumento = (salario*0.153);
    novo_salario = (salario+aumento);
    
  printf("seu novo salario eh de: R$%0.2f", novo_salario);
    
    getchar();
    return 0;
}