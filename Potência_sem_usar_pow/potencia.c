#include <stdio.h>

int potencia(int base, int expoente){
    int resultado = 1;
    for (int i = 0; i < expoente; i++){
        resultado *= base; 
    }
    return resultado;
}
int main(){
    int base, expoente;
    printf("Digite a base: \n");
    scanf("%d",&base);
    printf("Digite o expoente: \n");
    scanf("%d",&expoente);

    int resultado = potencia(base,expoente);
    printf("Resultado de %d elevado a %d eh: %d ",base,expoente,resultado);

    return 0;
}
