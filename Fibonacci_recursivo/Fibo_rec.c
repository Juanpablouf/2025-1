#include<stdio.h>

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Digite um número não negativo.\n");
    } else {
        int resultado = fibonacci(n);
        printf("O %dº número de Fibonacci é: %d\n", n, resultado);
    }
    return 0;
}