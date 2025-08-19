#include <stdio.h>
void maior(int a, int b, int *resultado)
{
    if (a > b)
    {
        *resultado = a;
    }
    else
    {
        *resultado = b;
    }
}

int main(){
    int x, y, maior_valor;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    maior(x, y, &maior_valor);
    printf("O maior valor entre %d e %d e: %d\n", x, y, maior_valor);
    return 0;
}