/*Escreva uma função chamada troca(), que receba dois ponteiros para inteiros e troca os valores entre eles.
Exemplo de chamada: troca(&a, &b)*/

#include <stdio.h>

void troca(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x, y;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y);
    printf("Depois da troca: x = %d, y = %d\n", x, y);
}