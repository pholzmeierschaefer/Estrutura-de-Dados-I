
#include <stdio.h>

struct tdata
{
    int dia;
    int mes;
    int ano;
};
typedef struct tdata Data;

int extraiData(Data data)
{
    return data.dia;
}

int comparaDatas(Data data1, Data data2)
{
    if ((data1.ano < data2.ano) || (data1.ano == data2.ano && data1.mes < data2.mes) || (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia < data2.dia))
    {
        return -1;
    }

    else if (data1.ano > data2.ano || (data1.ano == data2.ano && data1.mes > data2.mes) || (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia > data2.dia))
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    Data data1, data2;
    printf("Digite o dia 1: ");
    scanf("%d", &data1.dia);

    printf("Digite o mes 1: ");
    scanf("%d", &data1.mes);

    printf("Digite o ano 1: ");
    scanf("%d", &data1.ano);

    printf("Digite o dia 2: ");
    scanf("%d", &data2.dia);

    printf("Digite o mes 2: ");
    scanf("%d", &data2.mes);

    printf("Digite o ano 2: ");
    scanf("%d", &data2.ano);

    printf("%d", comparaDatas(data1, data2));

    return 0;
}