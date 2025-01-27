#include <stdio.h>

int main ()
{
    int numero, centena, dezena, unidade;
    scanf("%d", &numero);
    
    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;
    
    printf("%d %d %d", centena, dezena, unidade);
    
    return 0;
}