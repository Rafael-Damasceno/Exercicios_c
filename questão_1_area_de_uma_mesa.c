//questão 1 

#include<stdio.h>

int main(void)
{
//adotando uma mesa retangular
    float comprimento =0;
    float largura =0;
    float area =0;

    printf("digite o comprimento da mesa em metros: ");
    scanf("%f", &comprimento);

    printf("digite a largura da mesa em metros: ");
    scanf("%f", &largura);

    area = (largura*comprimento);

    printf("a area da sua mesa em metros eh de: %0.1f", area);

    getchar();
    return 0;
}