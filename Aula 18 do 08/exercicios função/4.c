#include <stdio.h>
float c_para_f(float c) {
    return (9*c/5) + 32;
}


float f_para_c(float f){
    return 5*(f-32)/9;
}

int main(){
    int escolha;
    float temperatura, resultado;

    printf("Escolha a conversao:\n 1 - Celsius para Fahrenheit\n 2 - Farenheit para Celsius\n");
    scanf("%d", &escolha);

    if (escolha == 1){
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &temperatura);

        resultado = c_para_f(temperatura);
        printf("Temperatura em Fahrenheit: %.2f\n", resultado);
    }

    else if (escolha == 2){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &temperatura);

        resultado = f_para_c(temperatura);
        printf("Temperatura em Celsius: %.2f\n", resultado);
    }
    
    else {
        printf("Escolha invalida!\n");
        return 1;
    }
    return 0;
}