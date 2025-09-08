#include <stdio.h>
#include "exercicio.h"

int main(){
    Point p1, p2;
    p1=setPoint(3, 5);
    p2=setPoint(12,10);
    printPoint(p1);
    printPoint(p2);
    printf("%f", medir_dist(p1, p2));
    return 0;
}