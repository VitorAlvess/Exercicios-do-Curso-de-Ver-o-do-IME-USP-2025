#include <stdio.h>


int somar (int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}
int main(){
    int valor1;
    int valor2;
    printf("Digite 2 numros");
    scanf("%d %d", &valor1, &valor2);
    printf("Soma: %d \n", somar(valor1, valor2));
}

