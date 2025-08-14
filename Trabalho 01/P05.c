#include <stdio.h>
int main(){
    int n1;
    int n2;
    int resultado = 0;
    int contador;

    printf("Multiplicando: ");
    scanf("%d", &n1);

    printf("Multiplicador: ");
    scanf("%d", &n2);

    contador = n2;

    if (n2 >= 0){

        while (contador > 0)
        {
            resultado += n1;
            contador--;
        }
    }

    else{
        while (contador < 0)
        {
            resultado -= n1;
            contador++;

        }
    }

    printf("%d * %d = %d\n",n1, n2, resultado);
    return 0;
}