#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date
{
    int dia;
    int mes;
    int ano;
} Date;

typedef struct employee
{
    int id;
    char name[41];
    double income;
    Date dbirth;
    struct employee *next;
} Employee;

void printEmployee(Employee *e)
{
    printf("ID: %d\n", e->id);
    printf("Nome: %s\n", e->name);
    printf("Renda: %.2lf\n", e->income);
    printf("Nascimento: %02d/%02d/%04d\n", e->dbirth.dia, e->dbirth.mes, e->dbirth.ano);
}

Employee *createEmployee(int id, char name[], double income, Date dbirth)
{
    Employee *newEmp = (Employee *)malloc(sizeof(Employee));
    if (newEmp == NULL)
    {
        printf("Erro ao alocar memória\n");
        exit(1);
    }
    newEmp->id = id;
    strcpy(newEmp->name, name);
    newEmp->income = income;
    newEmp->dbirth = dbirth;
    newEmp->next = NULL;
    return newEmp;
}

Employee *insertEmployee(Employee *head, Employee *newEmp)
{
    newEmp->next = head;
    return newEmp;
}

Employee *freeEmployees(Employee *head)
{
    Employee *atual = head;
    Employee *aux;
    while (atual != NULL)
    {
        aux = atual;
        atual = atual->next;
        free(aux);
    }
    return NULL;
}

void printEmployees(Employee *head)
{
    Employee *atual = head;
    while (atual != NULL)
    {
        printEmployee(atual);
        printf("----------------------\n");
        atual = atual->next;
    }
}

int main()
{
    Employee *list = NULL;
    int id;
    char name[41];
    double income;
    Date dbirth;

    printf("Digite os dados dos funcionários\n(id = 0 encerra a aplicacao):\n");
    while (1)
    {
        printf("ID: ");
        scanf("%d", &id);
        getchar();
        if (id == 0)
        {
            break;
        }

        printf("Nome: ");
        fgets(name, 41, stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("Renda: ");
        scanf("%lf", &income);

        printf("Data de Nascimento (dd mm aaaa): ");
        scanf("%d %d %d", &dbirth.dia, &dbirth.mes, &dbirth.ano);
        getchar();

        Employee *newEmp = createEmployee(id, name, income, dbirth);
        list = insertEmployee(list, newEmp);
    }

    printf("\nLista de cadastrados:\n");
    printEmployees(list);

    list = freeEmployees(list);

    return 0;
}
