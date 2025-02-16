#include <stdio.h>
int main() {
    int n = 1; //qualquer valor diferente de 0 para entrar no while
    int i = 0;
    int vetor[30];
    
    

    while (n != 0){
        scanf("%d\n", &n);
        vetor[i] = n;
        i++;

    }
            

    for (int contador = i - 1; contador  >= 0 ; contador--){
        printf("%d\n", vetor[contador]);
    }

}