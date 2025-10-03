#include <stdio.h>

int log2_int(int n){

    int contador = 0;
    while (n >= 2){
        n = n/2;
        contador ++;
    }
    return contador;
}

int main(){
    int n;
    printf("log2(n)\ndigite n: ");
    scanf("%d", &n);

    printf("logaritmo de %d eh %d", n, log2_int(n));
    
    return 0;
}