#include <stdio.h>

#define MAX_PRODUTOS 100

typedef struct {
    char nome[50];
    int codigo;
    int quantidade;
    float preco;
} Produto;

void cadastrarProduto(Produto produtos[], int *total) {
    if (*total >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido.\n");
        return;
    }
    Produto novo;
    printf("Nome: ");
    scanf(" %[^\n]", novo.nome);
    printf("Código: ");
    scanf("%d", &novo.codigo);
    printf("Quantidade: ");
    scanf("%d", &novo.quantidade);
    printf("Preço: ");
    scanf("%f", &novo.preco);
    produtos[*total] = novo;
    (*total)++;
    printf("Produto cadastrado com sucesso!\n");
}

int main(){

    return 0;
}