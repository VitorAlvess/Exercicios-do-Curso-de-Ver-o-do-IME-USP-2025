#include <stdio.h>
void converte_hora(int *hora){
    int T;

    hora = &T;
    *hora = (T-(T%3600));
    T = (T-(T%3600));

   printf("%d\n", hora);
}

int main (void){
    int h, m, s;
    int t;
    scanf("%d", &t);


    converte_hora(&h);

    printf("%d\n", h);
}