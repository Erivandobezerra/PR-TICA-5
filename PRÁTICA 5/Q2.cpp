#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale ( LC_ALL , "PORTUGUESE_BRAZIL" );
	
	float n1 , n2 , multiplicacao , divisao , soma , subtracao ;
	
	printf ( " calculadora \n" ) ;
	
	printf ( " Digite o primeiro número : \n " ) ;
	scanf ("%f", &n1) ;
	
	printf ( " Digite o segundo número : \n " ) ;
	scanf ("%f" , &n2) ;
	
	multiplicacao = n1 * n2 ;
	divisao = n1 / n2 ;
	soma = n1 + n2 ;
	subtracao = n1 - n2 ;

	printf ( "%.2f \n" , multiplicacao ) ;
	printf ( "%.2f \n" , divisao ) ;
	printf ( "%.2f \n" , soma ) ;
	printf ( "%.2f \n" , subtracao ) ;

	return 0;
		
}
