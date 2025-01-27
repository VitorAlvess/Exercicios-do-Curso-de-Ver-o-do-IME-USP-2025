#include <stdio.h>

int main(){
    float  SalarioHoras, salario;
    int horas;
    
    scanf("%d", &horas);
    scanf("%f", &SalarioHoras);

    if(horas <= 40){
        salario = horas * SalarioHoras;
        printf("%f", salario);
    } else{
        salario = (40 * SalarioHoras) + (horas - 40) * SalarioHoras + ((horas - 40) * SalarioHoras) * 0.5;
        printf("%.2f", salario);

    }


}