#include <stdio.h>

int main(){
    int n,x;
    
    scanf("%d", &n);
    scanf("%d", &x);
    int isotopo, energiaconsumida, energialiberada;
    for(int i = 0; i < n; i++){
        scanf("%d", &isotopo);
        energiaconsumida = isotopo * 10;
        energialiberada = energiaconsumida + (energiaconsumida / 2);    

        if(x < energiaconsumida){
            printf("Reacao nao finalizada %d.\n", energiaconsumida - x);
            return 0;
        }
        x = x - energiaconsumida + energialiberada;
    }
    printf("Reacao finalizada %d\n", x);

}