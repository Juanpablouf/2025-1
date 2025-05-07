#include<stdio.h>
#include <string.h>

struct Aluno {
    char nome[100];
    int matricula;
    float media;
};

int main(){
    int n;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &n);
    struct Aluno alunos[n];

    for (int i = 0; i < n; i++) {
        printf("\nCadastro do aluno %d\n", i + 1);
        getchar();
        printf("Nome: ");
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;  
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Média: ");
        scanf("%f", &alunos[i].media); 
    }

    printf("\nAlunos Aprovados:\n");
    for (int i = 0; i < n; i++) {
        if (alunos[i].media >= 7.0) {
            printf("Nome: %s, Matrícula: %d, Média: %.2f\n",
                   alunos[i].nome, alunos[i].matricula, alunos[i].media);
        }
    }

    return 0;
  }