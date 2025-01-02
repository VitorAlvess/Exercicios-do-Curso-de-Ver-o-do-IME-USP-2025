#include <stdio.h>

int main() {
    int numero;
    int i = 0;
    printf("Digite o valor do Numero: \n");
    scanf("%d", &numero);
    while (i <= numero){
        printf("%d \n", i);
        i += 1;
    }
}