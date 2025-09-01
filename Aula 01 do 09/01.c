/*
MULTIPLICAÇÃO:
            Recebe 2 numeros inteiros positivos e devolve o resultado
                Não pode usar o * (3*3 = 3+3+3)
                    se for 0 retorna 0
                        se o segundo for 1 retorna o primeiro

POTENCIAS:
            recebe base e o expoente (inteiros positivos)
                2,4 = 2*2*2*2 = 16
                    0 = 1
                        1 = base

RESTO DIVISAO:
            Sem usar %
                11,3 = 11-3 = 8-3 = 5-3 = 2 - 3 = -1
                    2 resultado*/

#include <stdio.h>

int multiplica(int a, int b)
{
    int resultado;
    if (b == 0 || a == 0)
    {
        return 0;
    }

    if (b == 1)
    {
        return a;
    }

    else
    {
        resultado = 0;
        for (int i = 0; i < b; i++)
        {
            resultado += a;
        }
        return resultado;
    }
}

int potencia(int a, int b)
{
    int resultado;
    int soma;

    if (b == 0)
    {
        return 1;
    }

    if (a == 0)
    {
        return 0;
    }

    else
    {
        resultado = 0;
        soma = 0;
        for (int i = 0; i < b; i++)
        {
            resultado = a * a;
            soma += resultado;
        }
        return soma;
    }
}
int resto(int a, int b)
{

    if (b == 0)
    {
        return -1;
    }

    if (b == 0 || a == b || b == 1)
    {
        return 0;
    }

    if (a < b)
    {
        return a;
    }
    else
    {
        while (a >= b)
        {
            a = a - b;
        }
        return a;
    }
}

int main()
{
    int a, b;
    int escolha;

    printf("Escolha a operacao\n 1 - multiplicacao\n 2 - potenciacao\n 3 - resto de divisao\n 0 - para sair\n");
    scanf("%d", &escolha);

    if (escolha == 1)
    {

        printf("Digite o primeiro numero: ");
        scanf("%d", &a);

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        int resultado = multiplica(a, b);
        printf("A multiplicacao dos numeros e: %d\n", resultado);
    }

    if (escolha == 2)
    {
        printf("Digite o primeiro numero: ");
        scanf("%d", &a);

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        int resultado = potencia(a, b);
        printf("A potenciacao dos numeros e: %d\n", resultado);
    }

    if (escolha == 3)
    {
        printf("Digite o primeiro numero: ");
        scanf("%d", &a);

        printf("Digite o segundo numero: ");
        scanf("%d", &b);

        int resultado = resto(a, b);
        printf("O resto dos numeros e: %d\n", resultado);
    }

    if (escolha == 0)
    {
        printf("Saindo\n");
        return 0;
    }
}