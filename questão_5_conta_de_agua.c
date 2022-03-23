//questão 5 

#include<stdio.h>

int main(void)
{
    float salario =0;
    float cons_agua =0; // consumo de água
    float conta =0;
    float desconto =0; //de 15%
    
    
    printf("digite o salario: \n");
    scanf("%f", &salario);
    
    printf("digite o consumo de agua: \n");
    scanf("%f", &cons_agua);
    
    conta = ((salario*0.02)*(cons_agua/1000));
    
    printf("sua conta de agua eh: R$%0.2f \n", conta);
    
    desconto = (conta - ((conta*15)/100));
     
    printf("a conta de agua com desconto de 15%% ficara de: R$%0.2f", desconto);
    
    getchar();
    return 0;
}