#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int i, f;
    printf("Digite o numero onde o intervalo inicia: ");
    scanf("%d", &i);                               
    printf("Digite o numero onde o intervalo finaliza: ");
    scanf("%d", &f);
    return 0;
}
