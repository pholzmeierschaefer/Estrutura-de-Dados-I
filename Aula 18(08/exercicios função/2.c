#include <stdio.h>

int maior_ou_menor(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int resultado = maior_ou_menor(a, b);
    printf("O maior numero e: %d\n", resultado);

}