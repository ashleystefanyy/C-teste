#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n1, n2 , prod, dif, rest;
    float quo;
    printf( "Digite 2 numeros:");
    printf("\n");
   scanf( "%i", &n1);
   scanf( "%i", &n2);
	printf("\n Leu %i e %i", n1, n2);
   prod =  n1 * n2;
   printf("\n Produto= %i", prod);
	dif = n2 - n1 ;
	printf("\nDiferenca= %i", dif );
	if (n2 != 0){
		quo = (float) n1/ (float) n2 ;
		printf("\nQuociente= %.2f", quo);
		rest = n1 % n2 ;
		printf("\nResto=%i", rest);
	}
	else    { 
	printf ("\nCom denominador zero, nao pode calcular quociente e resto.");
      
	}
     
	return 0;
}
