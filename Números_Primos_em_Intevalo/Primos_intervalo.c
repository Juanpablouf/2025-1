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
    int i;
    printf("Numero para teste se eh primo");
    scanf("%d",&i);
    if (ehPrimo(i)){
        printf("%d eh primo",i);  
    }
    else{
        printf("%d nao eh primo",i);
    }
    return 0;
}
