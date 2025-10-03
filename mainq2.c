#include <stdio.h>
#include "q2.h"

int main() {
    int a, b, c;
    trngl t;

    printf("Digite os 3 lados do triangulo:\n");
    printf("Lado A: ");
    scanf("%d", &a);
    printf("Lado B: ");
    scanf("%d", &b);
    printf("Lado C: ");
    scanf("%d", &c);

   
    t = setTria(a, b, c);

    
    if (isTriangle(t.a, t.b, t.c)) {
        printf("As medidas %d, %d e %d formam um triangulo.\n", t.a, t.b, t.c);
    } else {
        printf("As medidas %d, %d e %d NAO formam um triangulo.\n", t.a, t.b, t.c);
    }

    return 0;
}
