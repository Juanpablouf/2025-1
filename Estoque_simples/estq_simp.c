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
void buscarProduto(Produto produtos[], int total) {
    int codigo;
    printf("Digite o código do produto: ");
    scanf("%d", &codigo);
    for (int i = 0; i < total; i++) {
        if (produtos[i].codigo == codigo) {
            printf("\nProduto encontrado:\n");
            printf("Nome: %s\n", produtos[i].nome);
            printf("Código: %d\n", produtos[i].codigo);
            printf("Quantidade: %d\n", produtos[i].quantidade);
            printf("Preço: %.2f\n", produtos[i].preco);
            return;
        }
    }
    printf("Produto com código %d não encontrado.\n", codigo);
}

int main(){

    return 0;
}