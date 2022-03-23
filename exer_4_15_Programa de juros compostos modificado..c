 
 #include <stdio.h>
 #include <math.h>
 int main( void )
 {
 double valor; /* valor em depósito */
 double principal = 1000.0; /* principal inicial */
 double taxa; /* taxa anual de juros */
 int ano; /* contador do ano */

 printf( "Ano \tValor na conta\n");

for (taxa =5; taxa <= 10; taxa++)
{
	printf("\n  taxa a %2.f%%\n", taxa);


 /* calcula valor em depósito para cada um dos dez anos */
 for ( ano = 1; ano <= 10; ano++ ) 
 {

 /* calcula novo valor para o ano especificado */
 valor = principal * pow( 1.0 + (taxa/100), ano );

 /* exibe uma linha da tabela */
 printf("%d \t%.2f\n", ano, valor);
 } /* fim do for */
}
 return 0; /* indica que o programa foi concluído com sucesso */
 } /* fim da função main */ 
