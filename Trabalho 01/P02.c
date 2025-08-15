#include <stdio.h>
int main()
{
    float preco;
    printf("Preco do produto: ");
    scanf("%f", &preco);
    int forma_pag;
    printf("Forma de pagamento \n1 - A vista \n2 - A prazo\n");
    scanf("%d", &forma_pag);

    if (forma_pag == 1)
    {
        preco = preco - (preco * 0.05);
        printf("Preco a vista: %.2f\n", preco);
    }

    else if (forma_pag == 2)
    {
        preco = preco + (preco * 0.10);
        printf("Preco a prazo: %.2f\n", preco);
    }
    return 0;
}