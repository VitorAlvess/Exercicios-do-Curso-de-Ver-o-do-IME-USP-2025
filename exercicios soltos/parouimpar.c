#include <stdio.h>


int main(){
    int numero = 0;
    printf("Digite o numero");
    scanf("%d", &numero);
    if(numero % 2 == 0){
        printf("O numero e par");
    } 
    else{
        printf("O numero e impar");
    }

}