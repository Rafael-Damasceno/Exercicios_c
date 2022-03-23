//questão 3

#include<stdio.h>

int main(void)
{
    float nota1 =0;
    float nota2 =0;
    float pesos =0;
    float resultado =0;
    
    printf("digite a primeira nota: \n");
    scanf("%f", &nota1);
    
    printf("digite a segunda nota: \n");
    scanf("%f", &nota2);
    
    pesos = (nota1*4) + (nota2*6);
    resultado = (pesos/10);
    
    if (resultado >= 6) {
    
    printf("voce foi aprovado \n");
    printf("sua nota foi: %0.1f", resultado);
    }
    
    if (resultado < 6) { 
    printf("voce foi reprovado. \n");
    printf("sua nota foi: %0.1f", resultado);  
    }
    
    getchar();
    return 0;
}