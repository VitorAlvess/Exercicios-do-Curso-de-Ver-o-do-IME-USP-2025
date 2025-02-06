#include <stdio.h>


int main(){
    int numero, soma, maior, verificador;
    maior = 0;
    soma = 0;
    while(numero != 0){
        scanf("%d", &numero);
        if(numero >= maior){
            verificador += 1;
            maior = numero;
        }
        soma += 1;
    }

    if(verificador == soma -1){
        printf("sim %d", soma -1);
    } else{
         printf("nao %d", soma -1);
    }
    
}