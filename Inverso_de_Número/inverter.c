#include <stdio.h>

int inverter(int numero){
    int invertido = 0;
    while (numero != 0){
    invertido = invertido * 10 + numero % 10;
    numero /= 10;
    }
    return invertido;
}

int main(){
    int numero;
    printf("Digite o numero que deseja inverter: \n");
    scanf("%d",&numero);
    printf("Numero invertido: %d",inverter(numero));
    return 0;
}