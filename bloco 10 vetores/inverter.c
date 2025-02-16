#include <stdio.h>


int main(){
    int numeros[30];
    int contador = 0;

    while(1){
        int numero;

        scanf("%d", &numero);

        if(numero == 0){
            break;
        }
        
        if(contador < 30){
            numeros[contador] = numero;
        }

        contador = contador + 1;
    }

    for (int i = contador -1; i >= 0; i--)
    {
        printf("%d\n", numeros[i]);
    }
    
}