#include <stdio.h>

int main() {
    int a = 0;
    int b = 0;
    int c = 0;

    printf("Digite o valor de A: \n");
    scanf("%d", &a);
    printf("Digite o valor de B: \n");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;

    printf("A: %d \n",a);
    printf("B: %d",b);




}