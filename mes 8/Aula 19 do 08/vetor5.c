//Ver o tamanho de um vetor passado como parâmetro

#include <stdio.h>


void teste(int *v, float *f){
    int tamv =sizeof(v) / sizeof(int);
    int tamf = sizeof(f) / sizeof(float);
    printf("Tamanho do vetor de inteiros: %d\n", tamv);
    printf("Tamanho do vetor de floats: %d\n", tamf);
}

int main(){
    int vetor[10];
    float vetor1[5000];
    teste(vetor, vetor1);

    return 0;
}

