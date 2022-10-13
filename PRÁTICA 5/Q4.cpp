#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale (LC_ALL , "portuguese_brazil");
	
	float peso , altura , imc1 , imc ;
	
	printf ( " Calculadora de IMC " ) ;
	
	printf ( " Digite o seu peso em kg : \n ") ;
	scanf	("%f" , &peso) ;
	
	printf ( " Digite a sua altura em metros : \n " ) ;
	scanf	( "%f" , &altura ) ;
	
	imc = peso/(altura*altura) ;
	
	printf ("Seu IMC é: %.2f" , imc);
	
	
	return 0;
}
