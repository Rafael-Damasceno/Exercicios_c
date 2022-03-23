//questão 2 

#include<stdio.h>

int main(void) 
{
    
    int n1 =0; //número 1 
    int n2 =0; //número 2
    
    printf("digite o primeiro numero: ");
    scanf("%d", &n1);
    
    printf("digite o segundo numero: ");
    scanf("%d", &n2); 
    
    if (n1 > n2) {
       printf("%d eh menor que %d\n", n2, n1);
    }
    
    if (n2 > n1) {
       printf("%d eh menor que %d\n", n1, n2);
    }
 } 