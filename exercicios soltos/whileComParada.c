#include <stdio.h>

int main() {
    int inicio;
    int final;
    printf("Digite o valor do Numero Inicial: \n");
    scanf("%d", &inicio);
    printf("Digite o valor do Numero Final: \n");
    scanf("%d", &final);
    while (inicio <= final){
        printf("%d \n", inicio);
        inicio += 1;
    }
}