#include <stdio.h>
#define S 5


int main (){
    int v[S]= {300, 300, 300, 300, 300};
    int menor = (int)1e9;  

    for (int i = 0; i < S; i++){
        if (v[i] < menor) {
            menor = v[i]; 
        }
    }

    printf("%d\n", menor); 
}
