#include <stdio.h> 

int getLength(char *s){

    int t=0, i=0;
    while (s[i] != '\0'){
        t++;
        i++;

    }
    return t;

}

int main(){
    char *t = "Qual e o tamanho?";
    printf("O tamanho e: %d\n", getLength(t)); 
    return 0; 
}