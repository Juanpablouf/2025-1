#include<stdio.h>

#define MAX_CONTATOS 100

typedef struct {
    char nome[50];
    char telefone[20];
    char email[50];
} Contato;

void adicionarContato(Contato contatos[], int *total) {
    if (*total >= MAX_CONTATOS) {
        printf("Limite de contatos atingido.\n");
        return;
    }
    Contato novo;
    printf("Nome: ");
    scanf(" %[^\n]", novo.nome);
    printf("Telefone: ");
    scanf(" %[^\n]", novo.telefone);
    printf("Email: ");
    scanf(" %[^\n]", novo.email);
    contatos[*total] = novo;
    (*total)++;
    printf("Contato adicionado com sucesso!\n");
}

int main(){    
    return 0;
}