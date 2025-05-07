#include<stdio.h>
#include <string.h>

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

void buscarContato(Contato contatos[], int total) {
    char nomeBusca[50];
    int encontrado = 0;
    printf("Digite o nome a buscar: ");
    scanf(" %[^\n]", nomeBusca);
    for (int i = 0; i < total; i++) {
        if (strcmp(contatos[i].nome, nomeBusca) == 0) {
            printf("\nContato encontrado:\n");
            printf("Nome: %s\n", contatos[i].nome);
            printf("Telefone: %s\n", contatos[i].telefone);
            printf("Email: %s\n", contatos[i].email);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Contato não encontrado.\n");
    }
}
void exibirContatos(Contato contatos[], int total) {
    if (total == 0) {
        printf("Nenhum contato cadastrado.\n");
        return;
    }
    printf("\nLista de Contatos:\n");
    for (int i = 0; i < total; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", contatos[i].nome);
        printf("Telefone: %s\n", contatos[i].telefone);
        printf("Email: %s\n\n", contatos[i].email);
    }
}

int main(){    
    return 0;
}