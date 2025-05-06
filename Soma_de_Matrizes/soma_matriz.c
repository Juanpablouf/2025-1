#include<stdio.h>

int main(){
    int matriz1[3][3] = {
        {2, 2, 2},
        {5, 5, 5},
        {8, 8, 8} };

    int matriz2[3][3] = {
        {7, 7, 7},
        {6, 6, 6},
        {1, 1, 1} };

    int resultado[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("Resultado:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}