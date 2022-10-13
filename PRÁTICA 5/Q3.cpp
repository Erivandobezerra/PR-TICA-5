#include <stdio.h>
#include <locale.h>

int main () {
	
	setlocale ( LC_ALL , "PORTUGUESE_BRAZIL" ) ;
	
	float a , b , c , r1 , r2 , r3 , r4 ; 
	
	printf ( "Cálculos \n" ) ;
	
	printf ( " Digite o primeiro número :" ) ;
	scanf ("%f" , &a ) ;
	
	printf ( " Digite o segundo número :" ) ;
	scanf( "%f" , &b ) ;
	
	printf ( "Digite o Terceiro número :" );
	scanf ( "%f" , &c) ; 
	
	r1 = ( a*a )/c ;
	
	r2 = a*a+b+5*c ;
	
	r3 = a*b*c+b+(c/3)*5-1 ;
	
	r4 = ( (a*a*a) * (b*b*b) * (c*c*c) )/2;
	
	printf (" R1 %2.f \n " , r1);
	printf (" R2 %2.f \n " , r2);
	printf (" R3 %2.f \n " , r3);
	printf (" R3 %2.f \n " , r4);
	
	
	return 0;
	
}
