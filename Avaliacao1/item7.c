#include <stdio.h>
int main(){
    int cpf, digito1, digito2, digito3, digito4, digito5, digito6, digito7, digito8,  digito9, soma, resto, digito10, digito11, resto2;
    while ((cpf < 100000000) || (cpf > 999999999)){
            scanf("%d", &cpf);
    }

    digito1 = cpf / 100000000 % 10;
    digito2 = cpf / 10000000 % 10;
    digito3 = cpf / 1000000 % 10;
    digito4 = cpf / 100000 % 10;
    digito5 = cpf / 10000 % 10;
    digito6 = cpf / 1000 % 10;
    digito7 = cpf / 100 % 10;
    digito8 = cpf / 10 % 10;
    digito9 = cpf % 10;

    soma = digito1 * 10 + digito2 * 9 + digito3 * 8 + digito4 * 7 + digito5 * 6 + digito6 * 5 + digito7 * 4 + digito8 * 3 + digito9 * 2;

    resto = soma % 11;
   
    if (resto < 2){
        digito10 = 0;
    } else{
        digito10 = 11 - resto;
    }

    soma = digito1 * 11 + digito2 * 10 + digito3 * 9 + digito4 * 8 + digito5 * 7 + digito6 * 6 + digito7 * 5 + digito8 * 4 + digito9 * 3 + digito10 * 2;

    resto2 = soma % 11;
    if (resto2 < 2) {
    digito11 = 0;
    } else {
    digito11 = 11 - resto2;
    }


    printf("%d-%d%d", cpf, digito10, digito11);

} 
 
 
 
 