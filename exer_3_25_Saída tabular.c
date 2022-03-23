#include <stdio.h>
#include <conio.h>
int main(void)
{
  int a; //variável de controle do loop
  int b = 10 ;
  int c = 100;
  int d = 1000;
 	
  printf("N \t10*N \t100*N \t1000*N\n");
  for(a = 1, b =10, c = 100, d = 1000; a <= 10, b <= 100, c <=1000, d <= 10000; a++, b+=10, c+=100, d+=1000)
  { 
  
  printf("%d \t%d \t%d \t%d\n", a, b, c, d);
  
  }
  
  getch();
  return(0);
}

