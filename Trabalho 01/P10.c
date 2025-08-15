#include <stdio.h>
int main() {
    int num;
    int fatorial = 1;

    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);

    if (num < 0){
        printf("Fatorial nao definido para negativos\n");
        return 1;
    }

    else {

        while (num > 1) {
            fatorial *= num;
            num--;
        }
    }

    printf("Fatorial: %d\n", fatorial);
    return 0;

}