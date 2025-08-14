#include <stdio.h>
int main() {
    float horas, valorHora, salario;
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Valor da hora: ");
    scanf("%f", &valorHora);

    salario = horas * valorHora;

    if (horas > 200){
        salario = salario + (salario * 0.5);
    }
    printf("Salario: %.2f\n", salario);
    return 0;
    }