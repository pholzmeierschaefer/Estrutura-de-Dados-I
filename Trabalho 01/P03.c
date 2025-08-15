#include <stdio.h>
int main()
{
    int inicio, fim;
    printf("Digite o horario de inicio: ");
    scanf("%d", &inicio);
    printf("Digite o horario de fim: ");
    scanf("%d", &fim);
    int duracao;

    if (inicio < fim)
    {
        duracao = fim - inicio;
        printf("Duracao: %d horas\n", duracao);
    }
    else if (inicio > fim)
    {
        duracao = (24 - inicio) + fim;
        printf("Duracao: %d horas\n", duracao);
    }

    else
    {
        duracao = 24;
        printf("Duracao: %d horas\n", duracao);
    }
    return 0;
}