#include <stdio.h>
int main()
{
    int respondem = 0;
    int total = 0;
    int numero;

    printf("Digite um numero (menor ou igual 0 termina a sequencia): ");
    scanf("%d", &numero);

    while (numero > 0)
    {
        total++;

        if (numero >= 10 && numero <= 20)
        {
            respondem++;
        }
        printf("Digite um numero (menor ou igual 0 termina a sequencia): ");
        scanf("%d", &numero);
    }

    if (total > 0)
    {
        float percentual = (respondem * 100.0) / total;
        printf("Percentual de numeros entre 10 e 20: %.2f%%\n", percentual);
    }
    else
    {
        printf("Nenhum numero informado\n");
    }
    return 0;
}
