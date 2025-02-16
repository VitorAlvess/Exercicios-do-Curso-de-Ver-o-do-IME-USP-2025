#include <stdio.h>
void converte_hora(int total_segundos, int*hora, int*min, int*seg){

int T, *H, *M, *S;

*H = (T-(T%3600))/3600;
*M = (T%3600-((T%3600)%60))/60;
*S = (T%3600)%60;

return converte_hora(T, H, M, S);
}

int main (void){
int t, *h, *m, *s;

scanf("%d", &t);

converte_hora(t, h, m, s);

printf("%02d:%02d:%02d\n", *h, *m, *s);

return 0;
}