#include <stdio.h>

int main() {
    int matriz[4][4];
    {
        for (int i=0; i<4; i++){
            for (int j=0; j<4; j++){
                printf("Insira o elemento: ");
                scanf("%d", &matriz[i][j]);
            }
        }

        printf("Diagonal principal: \n");
        for (int i = 0; i < 4; i++){
            printf("%d\n", matriz[i][i]);
        }
    }
}