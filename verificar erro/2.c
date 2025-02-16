#include <stdio.h>

void converte_hora(int *hora, int *min, int *seg){
    int T;
        
    { 
    hora = &T;
    *hora = ((T-(T%3600))/3600);
    T = ((T-(T%3600))/3600);
    }
    
    { 
    min = &T;
    *min = ((T%3600-((T%3600)%60))/60);
    T = ((T%3600-((T%3600)%60))/60);
    }

    { 
    seg = &T;
    *seg = ((T%3600)%60);
    T = ((T%3600)%60);
    }
}

int main (void){
int t, h, m, s;

scanf("%d", &t);

converte_hora(&h, &m, &s);

printf("%02d:%02d:%02d\n", h, m, s);
}

