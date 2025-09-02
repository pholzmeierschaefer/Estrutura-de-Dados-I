/*
tecnica de programação que a função chama ela mesma

podem causar looping inifinito

ex: fatorial


int fat(int n){
    if(n==0 || n == 1) return 1;
    return n*fat(n-1);
}

*/

#include <stdio.h>

int potencia_r(int b, int e)
{
    if (e == 0)
    {
        return 1;
    }

    if (e == 1)
    {
        return b;
    }
    else
    {
        return b * potencia_r(b, e - 1);
    }
}

int main()
{
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    int resultado = potencia_r(base, expoente);
    printf("O resultado e: %d\n", resultado);

    return 0;
}