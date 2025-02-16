#include <stdio.h>

void converte_hora(int total_segundos, int *hora, int *min, int *seg){
    *hora = total_segundos / 3600;
    *min = (total_segundos % 3600) / 60;
    *seg = total_segundos % 60;

}

int main(){
    int total, hora, min, seg;

    scanf("%d", &total);
    

    converte_hora(total, &hora, &min, &seg);

    printf("%02d:%02d:%02d\n", hora, min, seg);
}