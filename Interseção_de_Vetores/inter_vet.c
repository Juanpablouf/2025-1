#include <stdio.h>

int main(){
    int v1[] = {1, 2, 3, 4, 5};
    int v2[] = {4, 5, 6, 7, 8};

    int tamanho1 = sizeof(v1) / sizeof(v1[0]);
    int tamanho2 = sizeof(v2) / sizeof(v2[0]);
    for (int i = 0; i < tamanho1; i++) {
        for (int j = 0; j < tamanho2; j++) {
            if (v1[i] == v2[j]) {
                printf("%d ", v1[i]);
                break;
            }
        }
    }
    return 0;
}