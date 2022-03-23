#include <stdio.h>
int main(void)
{
  int a = 3; //variável de controle do loop
  int b = 5;
  int c = 7;
  int d = 9;
 	
  printf("A \tA+2 \tA+4 \tA+6\n");
  for(a = 3, b =5, c = 7, d = 9; a <= 15, b <= 17, c <=19, d <= 21; a+=3, b+=3, c+=3, d+=3)
  { 
  
  printf("%d \t%d \t%d \t%d\n", a, b, c, d);
  
  }
  
  
  return(0);
}

