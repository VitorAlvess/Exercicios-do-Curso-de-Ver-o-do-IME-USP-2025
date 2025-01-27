#include <stdio.h>

int main(){
    int numero, unidade, dezena, centena;
    scanf("%d", &numero);
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    
    centena = numero / 100;

    printf("%d %d %d", centena, dezena, unidade);
}