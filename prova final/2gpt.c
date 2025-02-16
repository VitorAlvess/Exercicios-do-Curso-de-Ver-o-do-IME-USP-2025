#include <stdio.h>

int main() {
    int N, count = 0;
    char c;
    
    // Lendo o tamanho da lista
    printf("Digite o tamanho da lista: ");
    scanf("%d", &N);
    
    // Consumir quebra de linha após a entrada do número
    getchar();
    
    printf("Digite a sequência de %d caracteres (. ou #): ", N);
    for (int i = 0; N > i; i++) {
        scanf(" %c", &c);
        if (c == '#') {
            count++;
        }
    }
    
    // Calculando a porcentagem
    double percentage = (count * 100.0) / N;
    
    // Exibindo o resultado
    printf("Número de áreas com maior densidade de árvores: %d\n", count);
    printf("Porcentagem de áreas com maior densidade de árvores: %.2f%%\n", percentage);
    
    return 0;
}
