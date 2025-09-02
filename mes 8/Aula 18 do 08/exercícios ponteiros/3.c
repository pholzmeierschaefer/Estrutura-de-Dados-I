#include <stdio.h>

void somaImpares(int inicio, int fim, int *resultado) {
    *resultado = 0; 

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 != 0) { 
            *resultado += i;
        }
    }
}

int main() {
    int inicio, fim, soma;

    printf("Digite o inicio: ");
    scanf("%d", &inicio);
    printf("Digite o fim: ");
    scanf("%d", &fim);

    somaImpares(inicio, fim, &soma);

    printf("A soma dos impares de %d a %d e: %d\n", inicio, fim, soma);

    return 0;
}


    
