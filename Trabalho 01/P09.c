#include <stdio.h>
int main() {
    int matricula;
    float nota, soma_notas, media_aluno;
    float soma_medias = 0.0;
    int contador_alunos = 0;

    printf("Matricula (0 para sair): ");
    scanf("%d", &matricula);

    while (matricula != 0){
        soma_notas = 0;

        for (int i = 1; i <= 5; i++){
            printf("Nota %d: ", i);
            scanf("%f", &nota);
            soma_notas += nota;
        }

    media_aluno = soma_notas / 5.0;
    printf("Aluno: %d Media: %.1f\n", matricula, media_aluno);
    soma_medias += media_aluno;
    contador_alunos++;

    printf("Matricula (0 para sair): ");
    scanf("%d", &matricula);
    }

    if (contador_alunos > 0){
        printf("Media geral da turma: %.2f\n", soma_medias / contador_alunos);

    }
    else{
        printf("Nenhum aluno informado\n");
    }

    return 0;
}