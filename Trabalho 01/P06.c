#include <stdio.h>
int main(){
    int num;
    int contador;
    int soma = 0;
    printf("Digite o numero: ");
    scanf("%d", &num);


    contador = num;
    while (contador > 0)
    {
        soma += contador;
        contador--;
    }
    printf("Resultado: %d\n", soma);
    return 0;


}