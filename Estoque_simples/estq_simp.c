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
void listarProdutos(Produto produtos[], int total) {
    if (total == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }
    printf("\nLista de Produtos:\n");
    for (int i = 0; i < total; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: %s\n", produtos[i].nome);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Quantidade: %d\n", produtos[i].quantidade);
        printf("Preço: %.2f\n\n", produtos[i].preco);
    }
}
int main(){
    Produto produtos[MAX_PRODUTOS];
    int total = 0;
    int opcao;
    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar produto\n");
        printf("2. Buscar produto por código\n");
        printf("3. Listar produtos\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto(produtos, &total);
                break;
            case 2:
                buscarProduto(produtos, total);
                break;
            case 3:
                listarProdutos(produtos, total);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    } while (opcao != 0);
    return 0;
}