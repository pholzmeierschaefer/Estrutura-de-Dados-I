#include <stdio.h>
#include <math.h>
#include "q2.h"


trngl setTria(int a, int b, int c){
    trngl t;
    t.a = a;
    t.b = b;
    t.c = c;
    return t;
}

int isTriangle(int a, int b, int c){
    if (a+b>c && b+c>a && a+c>b){
        return 1;
    }
    else{
        return 0;
    }
}