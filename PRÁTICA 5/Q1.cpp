#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale ( LC_ALL , "portuguese_brazil" ) ;
	
	float  minutos, resultado ; 
	
	printf ( "Digite tempo em minutos : \n" ) ;
	scanf  ( "%f" , &minutos ) ;
	
	resultado= minutos*60;
	
	printf ( "%.2f minutos em segundos é igual a : %.2f \n", minutos , resultado ) ;
	
	return 0;
}
