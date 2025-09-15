#include <stdio.h>
#include <stdlib.h>

typedef struct tint
{
    int value;
    struct tint *next;
} INT;

int main()
{

    INT *p, *aux = NULL, *first = NULL;
    int i = 1;

    while (i <= 100)
    {
        p = (INT *)malloc(sizeof(INT));
        p->value = i;
        p->next = NULL;
        if (first == NULL)
        {
            first = p;
            aux = p;
        }
        else
        {
            aux->next = p;
            aux = p;
        }
        i++;
    }

        for (aux = first; aux != NULL; aux = aux->next)
        {
            printf("%d\n", aux->value);
        }
        return 0;
    }
