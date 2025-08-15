#include <stdio.h>
int main() {
    float horas, valor_hora, salario;
    printf("Horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Valor da hora: ");
    scanf("%f", &valor_hora);

    salario = horas * valor_hora;

    if (horas > 200){
        salario = salario + (salario * 0.5);
    }
    printf("Salario: %.2f\n", salario);
    return 0;
    }