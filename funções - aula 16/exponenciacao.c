#include <stdio.h>
// duas maneiras de fazer, com for e com a biblioteca math

int exponenciacao(int x, int y){
    int i, total;
    total = 1;
    for( i=1; i <= y; i++){
        total = total * x;
    }

    return total;
}

int main(){
    int x,y,total;
    scanf("%d %d", &x, &y);

    total = exponenciacao(x,y);
    printf("%d", total);

}