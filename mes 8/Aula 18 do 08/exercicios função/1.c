#include <stdio.h>

int diferenca(int a, int b){
    if (a >b)
        return a - b;
    else
        return b - a;
}

int main(){
    int a, b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int resultado = diferenca(a,b);
    printf("A diferenca entre os numeros e: %d\n", resultado);

}

