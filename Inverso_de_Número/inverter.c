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
    return 0;
}