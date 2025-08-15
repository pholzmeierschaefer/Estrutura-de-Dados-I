#include <stdio.h>
int main()
{
    float salario;
    float soma_salarios = 0.0;
    int contador_salarios = 0;

    int filhos;
    int soma_filhos = 0;
    int contador_filhos = 0;

    printf("Digite o salario (menor que 0 para terminar): ");
    scanf("%f", &salario);

    while (salario >= 0)
    {

        printf("Digite o numero de filhos: ");
        scanf("%d", &filhos);

        soma_salarios += salario;
        soma_filhos += filhos;
        contador_salarios++;
        contador_filhos++;

        printf("Digite o salario (menor que 0 para terminar): ");
        scanf("%f", &salario);
    }

    // if e else pra tratar caso encerre no começo e assim não tenta dividir por zero

    if (contador_salarios > 0 && contador_filhos > 0)
    {
        printf("Media salarios: %.2f\n", soma_salarios / contador_salarios);
        printf("Media filhos: %.1f\n", (float)soma_filhos / contador_filhos);
    }
    else
    {
        printf("Nenhum dado informado\n");
    }
    return 0;
}
