#include <stdio.h>

int main() {
    int valor = 0; 
    printf("Insira o valor:\n");
    scanf("%d", &valor);
    printf("Antecessor: %d \n", valor - 1);
    printf("Sucessor: %d \n", valor + 1);

    
}