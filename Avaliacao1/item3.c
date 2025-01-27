#include <stdio.h>

int main(){
    char letra;

    scanf("%c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("VOGAL");
    } else{
        printf("CONSOANTE");
    }
}

// Note que uso aspas simples para compararar caracter em C!!!!