#include <stdio.h>

void f(int *n){
    *n=15;
    printf("%d \n", *n);

}

int main() {
    int x = 10;
    f(&x);
    printf("%d \n",x);
    return 0;
    
}