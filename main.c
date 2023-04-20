#include <stdio.h>
#include <math.h>
int main() {
	  int cod;

   printf( "\nDigite código entre 1 a 15:");
	scanf( "%i", &cod );

    switch(cod){
    	case 1:
    		printf ("\nNão perecível");
    		//break;
    	case 2 ... 4:
    		printf ("\nPerecivel");
    		//break;
    	case 5:
    	case 6:
    		printf ("\nProduto de higiene");
    		//break;
    	case 7:
    		printf ("\nLimpeza");
    		//break;
    	case 8 ... 15:
    		printf ("\nVestuario");
    		//break;
    	default:
			printf ("\nCodigo invalido"); 
	}
	return 0;
}
