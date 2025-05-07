#include<stdio.h>

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

    return 0;
  }