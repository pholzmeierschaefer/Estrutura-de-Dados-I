#include <stdio.h>

int main(){
    // P é um ponteiro, armazena endereços de memória 
    int a, *p;
    a = 10;

    // p = 100; mostra oq tem no endereço 100
    // p = &a; mostra o endereço de a
    p = &a; 

    // %d inteiro / %p endereço
    printf("Valor: %d Endereco: %p\n", a, &a);

    // *p coloca um valor no endereço que p aponta (aparece no 3 printf)
    *p = 12;

    // Não precisa &p pq p já é um ponteiro

    printf("Valor: %d Endereco: %p\n", *p, p);
    printf("Valor: %d Endereco: %p\n", a, &a);
    return 0;

}