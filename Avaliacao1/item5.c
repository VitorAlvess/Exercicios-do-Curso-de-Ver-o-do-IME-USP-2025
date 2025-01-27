#include <stdio.h>

int main(){
    int valor;
    int ced1, ced5, ced10, ced50;

    scanf("%d", &valor);

    ced50 = valor / 50;
    ced10 = (valor - 50*ced50) / 10;
    ced5 = (valor - 50*ced50 - 10*ced10) / 5;
    ced1 = (valor - 50*ced50 - 10*ced10 - 5*ced5) / 1;


    printf("%d\n", ced50);
    printf("%d\n", ced10);
    printf("%d\n", ced5);
    printf("%d\n", ced1);
    
    
}