#include <stdio.h>

int main(){
    int numero[10], freq[10];
    int i, j, cont;

    printf("Digite 10 numeros: \n");
    for (i = 0; i < 10; i++){
        scanf("%d",&numero[i]);
        freq[i] = -1;
    }
    
    for (i = 0; i < 10; i++) {
        cont = 1;
        if (freq[i] != 0) { 
            for (j = i + 1; j < 10; j++) {
                if (numero[i] == numero[j]) {
                    cont++;
                    freq[j] = 0; 
                }
            }
            freq[i] = cont; 
        }
    }
    
    return 0;
}