#include <stdio.h>

// intervalo [0,100]
int main(){
    int valor = -1;

    while(valor > 100 || valor < 0){
        printf("Digite um valor entre 0 e 100: ");
        scanf("%d", &valor);
    }


    
}