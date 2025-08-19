//São ponteiros disfarçados

//Se tentar acessar uma posição que não existe, pode dar erro ou mostrar lixo

#include <stdio.h>

int main(){
    int i, v[5]={2, 4, 6, 8, 10};
    for (i = 0; i < 100; i++) {
        printf("%d ", v[i]);
    }
}