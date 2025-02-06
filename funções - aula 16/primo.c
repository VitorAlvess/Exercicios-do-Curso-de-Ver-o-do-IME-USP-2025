#include <stdio.h>

int primo(int numero){
    int i;

    for(i = 2; i < numero; i++){
        if (numero % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int numero, confere;
    scanf("%d", &numero);

    confere = primo(numero);

    printf("%d", confere);
}