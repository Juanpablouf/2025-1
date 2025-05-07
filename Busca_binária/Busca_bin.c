#include <stdio.h>

int buscaBinaria(int vetor[], int tamanho, int valor) {
    int inicio = 0;
    int fim = tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vetor[meio] == valor) {
            return meio; 
        } else if (vetor[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main(){
    int vetor[] = {2, 4, 7, 10, 15, 20, 23, 31, 42, 55};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int valor;
    printf("Digite o valor a ser buscado: ");
    scanf("%d", &valor);

    int posicao = buscaBinaria(vetor, tamanho, valor);
    if (posicao != -1) {
        printf("Valor %d encontrado na posição %d do vetor.\n", valor, posicao);
    } else {
        printf("Valor %d não encontrado no vetor.\n", valor);
    }
    return 0;
}