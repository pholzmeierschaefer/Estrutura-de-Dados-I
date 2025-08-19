#include <stdio.h>

int somaVetor(int vetor[], int tamanho){
    int soma = 0;
    for (int i = 0; i < tamanho; i++){
        soma += vetor[i];
    }
    return soma;
}

int main(){
    int n;

    printf("Escolha o tamanho: ");
    scanf("%d", &n);

    int vetor[n];

    printf("Digite os %d elementos do vetor:\n", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
    
    int resultado = somaVetor(vetor, n);
    printf("A soma dos elementos do vetor = %d\n", resultado);
}