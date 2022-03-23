//questão 6

#include<stdio.h>

int main(void)
{
    int A =0;
    int B =0;
    int C =0;
    
    
    printf("digite um valor para A: ");
    scanf("%d", &A);
    
    printf("digite um valor para B: ");
    scanf("%d", &B); 
    
    C = A;
    A = B;
    B = C;
    
    printf("o valor A eh: %d\n", A);
    printf("e o valor B eh: %d", C);
    
    getchar();
    return 0;
}