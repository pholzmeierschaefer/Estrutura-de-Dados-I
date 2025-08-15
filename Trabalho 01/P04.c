#include <stdio.h>
int main()
{
    int n1;
    int n2;
    int n3;
    int n4;
    int positivos;
    int negativos;
    positivos = 0;
    negativos = 0;

    printf("N1: ");
    scanf("%d", &n1);
    printf("N2: ");
    scanf("%d", &n2);
    printf("N3: ");
    scanf("%d", &n3);
    printf("N4: ");
    scanf("%d", &n4);

    if (n1 >= 0)
    {
        positivos++;
    }
    else if (n1 < 0)
    {
        negativos++;
    }

    if (n2 > 0)
    {
        positivos++;
    }
    else if (n2 < 0)
    {
        negativos++;
    }

    if (n3 > 0)
    {
        positivos++;
    }
    else if (n3 < 0)
    {
        negativos++;
    }

    if (n4 > 0)
    {
        positivos++;
    }
    else if (n4 < 0)
    {
        negativos++;
    }

    printf("%d (+) e %d (-)\n", positivos, negativos);

    return 0;
}