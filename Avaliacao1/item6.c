#include <stdio.h>

int main(){
    int codigo;
    int unidade,dezena,centena;

    scanf("%d", &codigo);

    centena = codigo / 100;
    dezena = (codigo % 100) / 10;
    unidade = (codigo % 100) % 10;

    if (dezena == 0 || dezena == 5){
        printf("%d", centena + unidade);
    }

    if (dezena == 1 || dezena == 6){
        printf("%d", centena - unidade);
    }
    
    if (dezena == 2 || dezena == 7){
        printf("%d", centena * unidade);
    }

    if (dezena == 3 || dezena == 8){
        printf("%d", centena / unidade);
    }

    if (dezena == 4 || dezena == 9){
        printf("%d", centena % unidade);
    }
    
}