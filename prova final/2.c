#include <stdio.h>

int main(){
    int numero;
    int contador = 0;
    scanf("%d", &numero);
    char c;

    for (int i = 0; i < numero ; i++){
        scanf("%c", &c);
        if(c == '#'){
            contador = contador + 1;
        }
    }
    printf("%d\n", contador);
    // printf("%.2f\n", (numero) / contador);


}