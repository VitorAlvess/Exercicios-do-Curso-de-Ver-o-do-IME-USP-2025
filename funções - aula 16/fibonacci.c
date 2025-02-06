#include <stdio.h>

int fibonacci(int numero){
    if (numero > 2){
        return fibonacci(numero -1) + fibonacci(numero - 2);
    } else{
        return 1;
    }
}

int main(){

    int numero, valor;

    scanf("%d", &numero);

    valor = fibonacci(numero);

    printf("%d", valor);

}