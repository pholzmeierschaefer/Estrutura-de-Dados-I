#include <stdio.h>
#include <stdlib.h>

struct ttemp
{
    float temp;
    struct ttemp *next;
};
typedef struct ttemp temperatura;

temperatura *insereTemp(temperatura *f)
{
    temperatura *p;
    p = (temperatura *)malloc(sizeof(temperatura)); // 1° passo alocar
    printf("Digite a temperatura: ");               // 2° passo colocar valores e nullificar ponteiros
    scanf("%f", &p->temp);
    p->next = NULL;

    // encadeamento 3° passo
    if (f == NULL)
    {
        return p;
    }

    temperatura *aux;
    for (aux = f; aux->next != NULL; aux = aux->next)
        ; // procura o ultimo
    aux->next = p;
    return f;
}

temperatura *printTemp(temperatura *f, float t)
{
    temperatura *aux;
    for (aux = f; aux != NULL; aux = aux->next)
    {
        if (aux->temp == t)
        {
            return aux;
        }
    }
    return NULL;
}

void printALL(temperatura *f)
{
    temperatura *aux;
    for (aux = f; aux != NULL; aux = aux->next)
    {
        printf("Temperatura: %.2f\n", aux->temp);
    }
}

void freeAll(temperatura *t)
{
    temperatura *aux1, *aux2;
    aux1 = t;
    while (aux1 != NULL)
    {
        aux2 = aux1;
        aux1 = aux1->next;
        free(aux2);
    }
}

temperatura *delTemp(temperatura *f, float t)
{
    temperatura *aux;
    if (f == NULL)
    {
        printf("Lista vazia\n");
        return f;
    }

    if (f->temp == t)
    { // se for o primeiro
        aux = f;
        f = f->next;
        free(aux);
        return f;
    }

    temperatura *aux2;
    aux = f;
    while (aux != NULL)
    {
        if (aux->temp == t)
            break;

        aux2 = aux;
        aux = aux->next;
    }

    if (aux == NULL)
    {
        printf("Temperatura nao encontrada\n");
        return f;
    }

    if (aux->next == NULL) // se for o ultimo
    {
        aux2->next = NULL;
        free(aux);
        return f;
    }

    aux2->next = aux->next;
    free(aux);

    return f;
}

int main()
{
    temperatura *first = NULL;
    temperatura *aux;
    float t;

    int op = 5;
    while (op != 0)
    {
        printf("1 - inserir\n2 - consultar\n3 - lista\n4 - excluir\n0 - sair\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            first = insereTemp(first);
            break;
        case 2:
        {
            printf("Digite a temperatura a ser consultada: ");
            scanf("%f", &t);
            aux = printTemp(first, t);
            if (aux == NULL)
            {
                printf("Temperatura nao encontrada\n");
            }
            else
            {
                printf("A temperatura esta na lista: %.2f\n", aux->temp);
            }
            break;
        }
        case 3:
            printALL(first);
            break;
        case 4:
        {
            printf("Digite a temperatura a ser excluida: ");
            scanf("%f", &t);
            first = delTemp(first, t);
        }
        }
    }
    freeAll(first);
    return 0;
}
